#include <uObjC.Lifetime.h>
#include <uObjC.Reference.h>

#include <objc/message.h>
#include <objc/runtime.h>

#include <cassert>


namespace {

    bool isTaggedPointer(const void *ptr)
    {
#if TARGET_OS_IPHONE
        return (intptr_t)ptr < 0;
#elif TARGET_OS_MAC
        return (uintptr_t)ptr & 1;
#endif
    }

    /// Associate arbitrary data with native objects.
    template <class T>
    struct AssociationKey
    {
        const void *key() const { return this; }

        void associateValue(id nativeObject, T value) const
        {
            if (NSFoundationVersionNumber <= NSFoundationVersionNumber_iOS_7_1
                    && isTaggedPointer(nativeObject))
                // Can't associate to Tagged Pointers on iOS 7
                return;

            objc_setAssociatedObject(
                nativeObject, key(), value, OBJC_ASSOCIATION_RETAIN);
        }

        T getValue(id nativeObject)
        {
            if (NSFoundationVersionNumber <= NSFoundationVersionNumber_iOS_7_1
                    && isTaggedPointer(nativeObject))
                // Can't associate to Tagged Pointers on iOS 7
                return T();

            return (T) objc_getAssociatedObject(nativeObject, key());
        }
    };

    /// Associates weak references to Uno objects with a native object.
    static AssociationKey<id<Uno_Reference> > UnoReference;

    static void makeWeakFromStrong(id *nativeObject)
    {
        // Don't assume an Objective C @autoreleasepool, use Uno's.
        uObject *object = uAllocObject(
            sizeof(*(uObjC_OBJECT_TYPE)0), uObjC_OBJECT_TYPE_OBJECT);

        uObjC_OBJECT_TYPE transient = uObjC_AS_OBJECT(object);
        uObjC_OBJECT_HANDLE(transient) = *nativeObject;

        *nativeObject = nil;
        objc_storeWeak(nativeObject, uObjC_OBJECT_HANDLE(transient));
    }

    static void makeStrongFromWeak(id *nativeObject)
    {
        // objc_loadWeak auto-releases the strong reference.
        NSAutoreleasePool *pool = [[NSAutoreleasePool alloc] init];

        id strongRef = objc_loadWeak(nativeObject);
        objc_storeWeak(nativeObject, nil);
        *nativeObject = [strongRef retain];

        [pool drain];
    }

    /// Manages Zombie's lifetime.
    static bool zombieStateIntercept(
        uWeakStateIntercept::Event event, uObject *object)
    {
        uObjC_OBJECT_TYPE objcObject = uObjC_AS_OBJECT(object);

        switch (event)
        {
            case uWeakStateIntercept::OnRelease:
                makeWeakFromStrong(&uObjC_OBJECT_HANDLE(objcObject));

                // There are, currently, no references on Uno's side. Return
                // false to make object a Zombie.
                //
                // It may be revived through weak references in the case
                // statement below. Otherwise, object deletion will be
                // triggered through nativeObject.
                return false;

            case uWeakStateIntercept::OnLoad:
                makeStrongFromWeak(&uObjC_OBJECT_HANDLE(objcObject));
                return (bool) uObjC_OBJECT_HANDLE(objcObject);
        }

        uFatalError(XLI_FUNCTION);
    }

    static bool conformsToClassOrProtocol(
        id object, Class class_)
    {
        if ([object isKindOfClass: class_] ||
            [[object class] conformsToProtocol: (Protocol*) class_])
            return true;

        // Slow path: Just check if the object has the required methods
        if (object_isClass(class_))
        {
            unsigned int numMethods = 0;
            Method* methods = class_copyMethodList(class_, &numMethods);
            for (int i = 0; i < numMethods; ++i)
            {
                if (![object respondsToSelector:method_getName(methods[i])])
                    return false;
            }
            free(methods);
            Class sup = [class_ superclass];
            if (sup == nil)
            {
                return true;
            }
            else
            {
                return conformsToClassOrProtocol(object, sup);
            }
        }
        else
        {
            unsigned int numMethods = 0;
            struct objc_method_description* methods =
                protocol_copyMethodDescriptionList(
                    class_, YES, YES, &numMethods);
            for (int i = 0; i < numMethods; ++i)
            {
                if (![object respondsToSelector:methods[i].name])
                    return false;
            }
            free(methods);
            return true;
        }
    }

    static uObject *_GetAttachedObjectOrAllocate(
        id nativeObject, uType *desiredType)
    {
        // FIXME: How does this work in a multithreaded environment? What
        // guarantees do we get? What guarantees can we offer?
        uObject *object = NULL;

        id<Uno_Reference> unoReference = UnoReference.getValue(nativeObject);
        if (unoReference
                && (object = [unoReference unoObject])) {
            uObjC_OBJECT_TYPE objcObject = uObjC_AS_OBJECT(object);
            if (uObjC_OBJECT_HANDLE(objcObject) == nativeObject)
                return uCast<uObject *>(object, desiredType);
        }

        // Create new Uno wrapper


        assert(desiredType);
        assert(desiredType->TypeType == ::uTypeTypeClass);
        assert(desiredType->ObjCDefaultObjectSize);

        Class nativeClass = (Class) desiredType->ObjCNativeClass;
        (void) nativeClass; // Unused outside asserts

        assert(nativeClass);
        assert(conformsToClassOrProtocol(nativeObject, nativeClass));

        // TODO: Check if actual class is a known class, more derived than uType
        // requests.

        size_t objectSize = desiredType->ObjCDefaultObjectSize;
        object = ::uAllocObject(objectSize, desiredType);

        uObjC_OBJECT_TYPE objcObject = uObjC_AS_OBJECT(object);
        uObjC_OBJECT_HANDLE(objcObject) = [nativeObject retain];

        if (unoReference)
            [unoReference setUnoObject:object];
        else {
            unoReference = [[Uno_WeakReference alloc] initWithUnoObject:object];
            UnoReference.associateValue(nativeObject, unoReference);
            [unoReference release];
        }

        return object;
    }

    static void _SetAttachedObject(uObject *object, id nativeObject)
    {
        id<Uno_Reference> unoReference = object
            ? [[Uno_WeakReference alloc] initWithUnoObject:object]
            : nil;

        UnoReference.associateValue(nativeObject, unoReference);
        [unoReference release];
    }

} // anonymous namespace


// Inject helper methods into NSObject and NSProxy root Objective C classes.


@interface NSObject (uObjC_Lifetime) <uObjC_AssociatedUnoObjectWithSetter> @end
@implementation NSObject (uObjC_Lifetime)

- (void)uObjC_setObject:(uObject *)object
{
    _SetAttachedObject(object, self);
}

- (uObject *)uObjC_objectForType:(uType *)type
{
    return _GetAttachedObjectOrAllocate(self, type);
}
@end


@interface NSProxy (uObjC_Lifetime) <uObjC_AssociatedUnoObjectWithSetter> @end
@implementation NSProxy (uObjC_Lifetime)

- (void)uObjC_setObject:(uObject *)object
{
    _SetAttachedObject(object, self);
}

- (uObject *)uObjC_objectForType:(uType *)type
{
    return _GetAttachedObjectOrAllocate(self, type);
}
@end


namespace uObjC { namespace Lifetime {

    void RegisterType(
        uType *type, size_t objectSize, Class nativeClass, Class proxyClass)
    {
        type->ObjCDefaultObjectSize = objectSize;
        type->ObjCNativeClass = nativeClass;
        type->ObjCProxyClass = proxyClass;
    }

    void StoreHybridReference(HybridHandle **handle, uObject *object)
    {
        assert(handle);

        uObject *current = *(uObject **)handle;
        uWeakObject *weakObject = current ? current->__obj_weak : NULL;

        uStoreWeakObject(&weakObject, object);

        if (object)
            uWeakStateIntercept::SetCallback(weakObject, &zombieStateIntercept);

        if (current) {
            assert(current->__obj_weak);

            uRetainObject(current);
            uReleaseObject(current);
        }

        *handle = (HybridHandle *)object;
    }

    uObject *LoadHybridReference(HybridHandle *handle, uType *type)
    {
        assert(handle);

        uObject *object = (uObject *) handle;
        uWeakObject *weakObject = object->__obj_weak;

        // Enables zombie transitions. Ignoring (auto-released) result and using
        // original handle to allow native callbacks in destructor / finalizers.
        uLoadWeakObject(weakObject);

        return uCast<uObject *>(object, type);
    }

    void AllocateNativeAndAttach(uObject *object)
    {
        assert(object);

        uObjC_OBJECT_TYPE objcObject = uObjC_AS_OBJECT(object);
        assert(!uObjC_OBJECT_HANDLE(objcObject));

        uType *type = object->__obj_type;
        Class<uObjC_AssociatedUnoObjectWithSetter> cls
            = (Class<uObjC_AssociatedUnoObjectWithSetter>)
                type->ObjCNativeClass;

        if (!cls) {
            while ((type = type->BaseType) && !type->ObjCProxyClass)
                ;

            assert(type);
            assert(type->ObjCProxyClass);

            cls = (Class<uObjC_ClassProxy>) type->ObjCProxyClass;
        }

        id<uObjC_AssociatedUnoObjectWithSetter> nativeObject = [cls alloc];
        assert(nativeObject);

        uObjC_OBJECT_HANDLE(objcObject) = nativeObject;
        [nativeObject uObjC_setObject:object];
    }

    void ReattachAfterInit(uObject *object, id nativeObject)
    {
        assert(object);
        assert(nativeObject);

        uObjC_OBJECT_TYPE objcObject = uObjC_AS_OBJECT(object);
        uObjC_OBJECT_HANDLE(objcObject) = nativeObject;

        id<uObjC_AssociatedUnoObjectWithSetter> lifetimeObject
            = (id<uObjC_AssociatedUnoObjectWithSetter>) nativeObject;
        [lifetimeObject uObjC_setObject:object];
    }

    void Attach(uObject *object, id nativeObject)
    {
        assert(object);
        uObjC_OBJECT_TYPE objcObject = uObjC_AS_OBJECT(object);

        [nativeObject retain];
        [uObjC_OBJECT_HANDLE(objcObject) release];

        uObjC_OBJECT_HANDLE(objcObject) = nativeObject;

        id<uObjC_AssociatedUnoObjectWithSetter> lifetimeObject
            = (id<uObjC_AssociatedUnoObjectWithSetter>) nativeObject;
        [lifetimeObject uObjC_setObject:object];
    }

    void Detach(uObject *object)
    {
        assert(object);
        uObjC_OBJECT_TYPE objcObject = uObjC_AS_OBJECT(object);

        [uObjC_OBJECT_HANDLE(objcObject) release];
        uObjC_OBJECT_HANDLE(objcObject) = nil;
    }

    uObject *GetUnoObject(id nativeObject, uType *desiredType)
    {
        id<uObjC_AssociatedUnoObject> lifetimeObject
            = (id<uObjC_AssociatedUnoObject>) nativeObject;
        return [lifetimeObject uObjC_objectForType:desiredType];
    }

    Class GetNativeClass(uObject *object)
    {
        assert(object);

        if (!object->__obj_type->ObjCNativeClass)
            return GetNativeClass(object->__obj_type);

        // Native objects aren't always what they appear to be.
        uObjC_OBJECT_TYPE objcObject = uObjC_AS_OBJECT(object);
        return [uObjC_OBJECT_HANDLE(objcObject) class];
    }

    Class GetNativeClass(uType *type)
    {
        do {
            if (type->ObjCNativeClass)
                return (Class) type->ObjCNativeClass;
        } while ((type = type->BaseType));

        return Nil;
    }

    id GetNativeHandle(uObject *object, uInterfaceType *interface)
    {
        if (!object)
            return nil;

        if (interface) {

            // Find interface implementation or wrapped native type -- whichever
            // comes first. If the implementation isn't found first, the
            // interface is assumed to be implemented natively.

            uType *type = object->__obj_type;
            do {
                if (type->ObjCNativeClass)
                    break;

                bool found = false;
                for (int i = 0; i < type->InterfaceCount; i++) {
                    if (type->InterfaceTypes[i] == interface) {
                        found = true;
                        break;
                    }
                }

                if (found)
                    break;

            } while ((type = type->BaseType));
            assert(type);

            if (!type->ObjCNativeClass) {
                assert(interface->ObjCProxyClass);

                // Interface has Uno implementation, create proxy object

                Class<uObjC_InterfaceProxy> proxyClass
                    = (Class<uObjC_InterfaceProxy>) interface->ObjCProxyClass;

                return [[proxyClass alloc] uObjC_initWithObject:object];
            }
        }

        // Class proxy, class wrapper or interface wrapper.
        uObjC_OBJECT_TYPE objcObject = uObjC_AS_OBJECT(object);
        return uObjC_OBJECT_HANDLE(objcObject);
    }

}} // namespace uObjC::Lifetime
