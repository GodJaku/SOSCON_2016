#pragma once

#include <uObjC.h>

#ifdef __OBJC__
@protocol uObjC_AssociatedUnoObject <NSObject>
- (uObject *)uObjC_objectForType:(uType *)type;
@end

@protocol uObjC_AssociatedUnoObjectWithSetter <uObjC_AssociatedUnoObject>
+ (instancetype) alloc;
- (void)uObjC_setObject:(uObject *)object;
@end

@protocol uObjC_AssociatedUnoObjectWithInit <uObjC_AssociatedUnoObject>
+ (instancetype) alloc;
- (id)uObjC_initWithObject:(uObject *)object;
@end

@protocol uObjC_ClassProxy <uObjC_AssociatedUnoObjectWithSetter>
@end

@protocol uObjC_InterfaceProxy <uObjC_AssociatedUnoObjectWithInit>
@end
#endif

namespace uObjC { namespace Lifetime {

    using ::Class;
    using ::id;

    using ::uObject;
    using ::uType;
    using ::uInterfaceType;

    void RegisterType(
        uType *type, size_t objectSize, Class nativeClass, Class proxyClass);

    struct HybridHandle;

    void StoreHybridReference(HybridHandle **, uObject *);
    uObject *LoadHybridReference(HybridHandle *, uType *);

    void AllocateNativeAndAttach(uObject *);
    void ReattachAfterInit(uObject *, id);

    void Attach(uObject *, id);
    void Detach(uObject *);

    /// Returns Uno object.
    uObject *GetUnoObject(id nativeObject, uType *desiredType = NULL);

    Class GetNativeClass(uObject *);
    Class GetNativeClass(uType *);

    /// Returns native object.
    id GetNativeHandle(uObject *, uInterfaceType *interface = NULL);

}} // namespace uObjC::Lifetime
