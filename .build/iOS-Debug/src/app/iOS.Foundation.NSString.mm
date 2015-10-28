// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE NSString
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::app::iOS::Foundation::NSString*
#define uObjC_UNO_TYPE_OBJECT ::app::iOS::Foundation::NSString__typeof()

#include <Foundation/Foundation.h>
#include <uObjC.Wrapper.h>
#include <app/iOS.Foundation.NSString.h>
#include <app/ObjC.ID.h>
#include <app/Uno.String.h>

namespace app {
namespace iOS {
namespace Foundation {

NSString__uType* NSString__typeof()
{
    static ::uStaticStrong<NSString__uType*> type;
    if (type != NULL) return type;

    type = (NSString__uType*)::uAllocClassType(sizeof(NSString__uType), "iOS.Foundation.NSString", false, 1, 0, 0);

    type->SetBaseType(::app::iOS::Foundation::NSObject__typeof());
    type->__fp_init = (void(*)(::app::iOS::Foundation::NSObject*))NSString__init;

    type->SetInterfaces(
        ::app::iOS::Foundation::INSCopying__typeof(), offsetof(NSString__uType, __interface_0));

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}

void NSString___ObjInit_4(NSString* __this, ::id __id)
{
    ::app::iOS::Foundation::NSObject___ObjInit_3(__this, __id);
}

void NSString___ObjInit_5(NSString* __this)
{
    ::app::iOS::Foundation::NSObject___ObjInit_2(__this);
}

void NSString__init(NSString* __this)
{
    uObjC_DO_INIT(@selector(init));
}

void NSString__initWithString(NSString* __this, ::uString* aString_)
{
    uObjC_DO_INIT(@selector(initWithString:),
        uObjC::NativeString(aString_));
}

NSString* NSString__New_5(::uStatic* __this)
{
    NSString* inst = (NSString*)::uAllocObject(sizeof(NSString), NSString__typeof());
    inst->_ObjInit_5();
    return inst;
}

NSString* NSString__New_6(::uStatic* __this, ::id __id)
{
    NSString* inst = (NSString*)::uAllocObject(sizeof(NSString), NSString__typeof());
    inst->_ObjInit_4(__id);
    return inst;
}

::uString* NSString__stringByAppendingString(NSString* __this, ::uString* aString_)
{
    ::NSString * __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::NSString *, @selector(stringByAppendingString:),
        uObjC::NativeString(aString_));
    return uObjC::UnoString(__return);
}

}}}
