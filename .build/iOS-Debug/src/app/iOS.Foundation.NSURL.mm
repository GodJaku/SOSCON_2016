// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE NSURL
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::app::iOS::Foundation::NSURL*
#define uObjC_UNO_TYPE_OBJECT ::app::iOS::Foundation::NSURL__typeof()

#include <Foundation/Foundation.h>
#include <uObjC.Wrapper.h>
#include <app/iOS.Foundation.NSURL.h>
#include <app/ObjC.ID.h>
#include <app/Uno.String.h>

namespace app {
namespace iOS {
namespace Foundation {

NSURL__uType* NSURL__typeof()
{
    static ::uStaticStrong<NSURL__uType*> type;
    if (type != NULL) return type;

    type = (NSURL__uType*)::uAllocClassType(sizeof(NSURL__uType), "iOS.Foundation.NSURL", false, 1, 0, 0);

    type->SetBaseType(::app::iOS::Foundation::NSObject__typeof());

    type->SetInterfaces(
        ::app::iOS::Foundation::INSCopying__typeof(), offsetof(NSURL__uType, __interface_0));

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}

void NSURL___ObjInit_4(NSURL* __this)
{
    ::app::iOS::Foundation::NSObject___ObjInit_2(__this);
}

void NSURL___ObjInit_5(NSURL* __this, ::id __id)
{
    ::app::iOS::Foundation::NSObject___ObjInit_3(__this, __id);
}

::id NSURL___urlWithString(::uStatic* __this, ::uString* URLString_)
{
    ::id __return = uObjC_SEND_MESSAGE_TO_CLASS(::id, @selector(URLWithString:),
        uObjC::NativeString(URLString_));
    return (::id)__return;
}

::uString* NSURL__absoluteString(NSURL* __this)
{
    ::NSString * __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::NSString *, @selector(absoluteString));
    return uObjC::UnoString(__return);
}

::uString* NSURL__get_AbsoluteString(NSURL* __this)
{
    return __this->absoluteString();
}

void NSURL__initFileURLWithPath(NSURL* __this, ::uString* path_)
{
    uObjC_DO_INIT(@selector(initFileURLWithPath:),
        uObjC::NativeString(path_));
}

void NSURL__initWithString(NSURL* __this, ::uString* URLString_)
{
    uObjC_DO_INIT(@selector(initWithString:),
        uObjC::NativeString(URLString_));
}

NSURL* NSURL__New_5(::uStatic* __this)
{
    NSURL* inst = (NSURL*)::uAllocObject(sizeof(NSURL), NSURL__typeof());
    inst->_ObjInit_4();
    return inst;
}

NSURL* NSURL__New_6(::uStatic* __this, ::id __id)
{
    NSURL* inst = (NSURL*)::uAllocObject(sizeof(NSURL), NSURL__typeof());
    inst->_ObjInit_5(__id);
    return inst;
}

}}}
