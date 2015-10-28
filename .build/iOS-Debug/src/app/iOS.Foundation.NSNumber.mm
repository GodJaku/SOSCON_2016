// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE NSNumber
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::app::iOS::Foundation::NSNumber*
#define uObjC_UNO_TYPE_OBJECT ::app::iOS::Foundation::NSNumber__typeof()

#include <Foundation/Foundation.h>
#include <uObjC.Wrapper.h>
#include <app/iOS.Foundation.NSNumber.h>
#include <app/ObjC.ID.h>
#include <app/Uno.Int.h>

namespace app {
namespace iOS {
namespace Foundation {

NSNumber__uType* NSNumber__typeof()
{
    static ::uStaticStrong<NSNumber__uType*> type;
    if (type != NULL) return type;

    type = (NSNumber__uType*)::uAllocClassType(sizeof(NSNumber__uType), "iOS.Foundation.NSNumber", false, 1, 0, 0);

    type->SetBaseType(::app::iOS::Foundation::NSValue__typeof());

    type->SetInterfaces(
        ::app::iOS::Foundation::INSCopying__typeof(), offsetof(NSNumber__uType, __interface_0));

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}

void NSNumber___ObjInit_6(NSNumber* __this, ::id __id)
{
    ::app::iOS::Foundation::NSValue___ObjInit_5(__this, __id);
}

int NSNumber__get_IntValue(NSNumber* __this)
{
    return __this->intValue();
}

int NSNumber__intValue(NSNumber* __this)
{
    int __return = uObjC_SEND_MESSAGE_TO_INSTANCE(int, @selector(intValue));
    return __return;
}

NSNumber* NSNumber__New_8(::uStatic* __this, ::id __id)
{
    NSNumber* inst = (NSNumber*)::uAllocObject(sizeof(NSNumber), NSNumber__typeof());
    inst->_ObjInit_6(__id);
    return inst;
}

}}}
