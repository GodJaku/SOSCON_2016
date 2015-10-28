// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE NSObject
#define uObjC_UNO_TYPE_IS_SEALED 0
#define uObjC_UNO_TYPE ::app::iOS::Foundation::NSObject*
#define uObjC_UNO_TYPE_OBJECT ::app::iOS::Foundation::NSObject__typeof()

#include <Foundation/Foundation.h>
#include <uObjC.Wrapper.h>
#include <app/iOS.Foundation.NSObject.h>
#include <app/ObjC.ID.h>

namespace app {
namespace iOS {
namespace Foundation {

NSObject__uType* NSObject__typeof()
{
    static ::uStaticStrong<NSObject__uType*> type;
    if (type != NULL) return type;

    type = (NSObject__uType*)::uAllocClassType(sizeof(NSObject__uType), "iOS.Foundation.NSObject", false, 0, 0, 0);

    type->SetBaseType(::app::ObjC::Object__typeof());
    type->__fp_init = NSObject__init;

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}

void NSObject___ObjInit_2(NSObject* __this)
{
    ::app::ObjC::Object___ObjInit(__this);
}

void NSObject___ObjInit_3(NSObject* __this, ::id __id)
{
    ::app::ObjC::Object___ObjInit_1(__this, __id);
}

void NSObject__init(NSObject* __this)
{
    uObjC_DO_INIT(@selector(init));
}

::id NSObject__mutableCopy(NSObject* __this)
{
    ::id __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::id, @selector(mutableCopy));
    return (::id)__return;
}

}}}
