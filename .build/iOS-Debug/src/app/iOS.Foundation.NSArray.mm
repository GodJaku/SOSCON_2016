// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE NSArray
#define uObjC_UNO_TYPE_IS_SEALED 0
#define uObjC_UNO_TYPE ::app::iOS::Foundation::NSArray*
#define uObjC_UNO_TYPE_OBJECT ::app::iOS::Foundation::NSArray__typeof()

#include <Foundation/Foundation.h>
#include <uObjC.Wrapper.h>
#include <app/iOS.Foundation.NSArray.h>
#include <app/ObjC.ID.h>
#include <app/Uno.ULong.h>

namespace app {
namespace iOS {
namespace Foundation {

NSArray__uType* NSArray__typeof()
{
    static ::uStaticStrong<NSArray__uType*> type;
    if (type != NULL) return type;

    type = (NSArray__uType*)::uAllocClassType(sizeof(NSArray__uType), "iOS.Foundation.NSArray", false, 1, 0, 0);

    type->SetBaseType(::app::iOS::Foundation::NSObject__typeof());
    type->__fp_init = (void(*)(::app::iOS::Foundation::NSObject*))NSArray__init;

    type->SetInterfaces(
        ::app::iOS::Foundation::INSCopying__typeof(), offsetof(NSArray__uType, __interface_0));

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}

void NSArray___ObjInit_4(NSArray* __this)
{
    ::app::iOS::Foundation::NSObject___ObjInit_2(__this);
}

::uULong NSArray__count(NSArray* __this)
{
    unsigned long __return = uObjC_SEND_MESSAGE_TO_INSTANCE(unsigned long, @selector(count));
    return (::uULong)__return;
}

::uULong NSArray__get_Count(NSArray* __this)
{
    return __this->count();
}

void NSArray__init(NSArray* __this)
{
    uObjC_DO_INIT(@selector(init));
}

::id NSArray__objectAtIndex(NSArray* __this, ::uULong index_)
{
    ::id __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::id, @selector(objectAtIndex:),
        (unsigned long)index_);
    return (::id)__return;
}

}}}
