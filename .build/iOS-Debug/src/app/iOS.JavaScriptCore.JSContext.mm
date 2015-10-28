// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE JSContext
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::app::iOS::JavaScriptCore::JSContext*
#define uObjC_UNO_TYPE_OBJECT ::app::iOS::JavaScriptCore::JSContext__typeof()

#include <JavaScriptCore/JavaScriptCore.h>
#include <uObjC.Wrapper.h>
#include <app/iOS.Foundation.NSURL.h>
#include <app/iOS.JavaScriptCore.JSContext.h>
#include <app/iOS.JavaScriptCore.JSValue.h>
#include <app/Uno.String.h>

namespace app {
namespace iOS {
namespace JavaScriptCore {

JSContext__uType* JSContext__typeof()
{
    static ::uStaticStrong<JSContext__uType*> type;
    if (type != NULL) return type;

    type = (JSContext__uType*)::uAllocClassType(sizeof(JSContext__uType), "iOS.JavaScriptCore.JSContext", false, 0, 0, 0);

    type->SetBaseType(::app::iOS::Foundation::NSObject__typeof());
    type->__fp_init = (void(*)(::app::iOS::Foundation::NSObject*))JSContext__init;

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}

void JSContext___ObjInit_4(JSContext* __this)
{
    ::app::iOS::Foundation::NSObject___ObjInit_2(__this);
}

::app::iOS::JavaScriptCore::JSValue* JSContext__evaluateScript(JSContext* __this, ::uString* script_)
{
    ::JSValue* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::JSValue*, @selector(evaluateScript:),
        uObjC::NativeString(script_));
    return (::app::iOS::JavaScriptCore::JSValue*)uObjC::Lifetime::GetUnoObject(__return, ::app::iOS::JavaScriptCore::JSValue__typeof());
}

::app::iOS::JavaScriptCore::JSValue* JSContext__evaluateScriptWithSourceURL(JSContext* __this, ::uString* script_, ::app::iOS::Foundation::NSURL* sourceURL_)
{
    ::JSValue* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::JSValue*, @selector(evaluateScript:withSourceURL:),
        uObjC::NativeString(script_),
        uObjC::Lifetime::GetNativeHandle((::uObject *)sourceURL_));
    return (::app::iOS::JavaScriptCore::JSValue*)uObjC::Lifetime::GetUnoObject(__return, ::app::iOS::JavaScriptCore::JSValue__typeof());
}

::app::iOS::JavaScriptCore::JSValue* JSContext__exception(JSContext* __this)
{
    ::JSValue* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::JSValue*, @selector(exception));
    return (::app::iOS::JavaScriptCore::JSValue*)uObjC::Lifetime::GetUnoObject(__return, ::app::iOS::JavaScriptCore::JSValue__typeof());
}

::app::iOS::JavaScriptCore::JSValue* JSContext__get_Exception(JSContext* __this)
{
    return __this->exception();
}

::app::iOS::JavaScriptCore::JSValue* JSContext__globalObject(JSContext* __this)
{
    ::JSValue* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::JSValue*, @selector(globalObject));
    return (::app::iOS::JavaScriptCore::JSValue*)uObjC::Lifetime::GetUnoObject(__return, ::app::iOS::JavaScriptCore::JSValue__typeof());
}

void JSContext__init(JSContext* __this)
{
    uObjC_DO_INIT(@selector(init));
}

JSContext* JSContext__New_5(::uStatic* __this)
{
    JSContext* inst = (JSContext*)::uAllocObject(sizeof(JSContext), JSContext__typeof());
    inst->_ObjInit_4();
    return inst;
}

void JSContext__set_Exception(JSContext* __this, ::app::iOS::JavaScriptCore::JSValue* value)
{
    __this->setException(value);
}

void JSContext__setException(JSContext* __this, ::app::iOS::JavaScriptCore::JSValue* exception_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setException:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)exception_));
}

}}}
