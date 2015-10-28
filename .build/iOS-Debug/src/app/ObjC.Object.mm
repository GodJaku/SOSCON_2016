// This file was generated based on '/usr/local/share/uno/Packages/ObjC/0.13.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/ObjC.ID.h>
#include <app/ObjC.Object.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Int.h>
#include <app/Uno.String.h>
#include <uObjC.Lifetime.h>

namespace app {
namespace ObjC {

Object__uType* Object__typeof()
{
    static ::uStaticStrong<Object__uType*> type;
    if (type != NULL) return type;

    type = (Object__uType*)::uAllocClassType(sizeof(Object__uType), "ObjC.Object", false, 0, 0, 0);

    type->__fp_Finalize = (void(*)(::uObject*))Object__Finalize;
    type->__fp_Equals = (bool(*)(::uObject*, ::uObject*))Object__Equals;
    type->__fp_GetHashCode = (int(*)(::uObject*))Object__GetHashCode;
    type->__fp_ToString = (::uString*(*)(::uObject*))Object__ToString;

    {
        type->ObjCDefaultObjectSize = sizeof(*(::app::ObjC::Object*)0);
        type->ObjCNativeClass = (::id) @protocol(NSObject);
    }

    return type;
}

void Object__Finalize(Object* __this)
{
    __this->__clearHandle();
}

void Object____clearHandle(Object* __this)
{
    uObjC::Lifetime::Detach(__this);
}

void Object____initHandle(Object* __this, ::id handle_)
{
    uObjC::Lifetime::Attach(__this, handle_);
}

void Object___ObjInit(Object* __this)
{
}

void Object___ObjInit_1(Object* __this, ::id handle)
{
    __this->__initHandle(handle);
}

bool Object__Equals(Object* __this, ::uObject* obj)
{
    Object* objCObject = ::uAs< Object*>(obj, Object__typeof());

    if (objCObject == NULL)
    {
        return false;
    }

    return __this->isEqual(objCObject);
}

::id Object__get_Handle(Object* __this)
{
    return __this->__handle;
}

int Object__GetHashCode(Object* __this)
{
    return (int) [__this->__handle hash];
}

bool Object__isEqual(Object* __this, Object* obj_)
{
    return (bool) [__this->__handle isEqual: obj_->__handle];
}

::id Object__op_Implicit(::uStatic* __this, Object* obj)
{
    if (obj == NULL)
    {
        return NULL;
    }

    return ::uPtr< Object*>(obj)->Handle();
}

::uString* Object__ToString(Object* __this)
{
    return uObjC::UnoString([__this->__handle description]);
}

}}
