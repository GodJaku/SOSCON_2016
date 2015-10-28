// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_I_O_S_JAVA_SCRIPT_CORE_J_S_CONTEXT_H__
#define __APP_I_O_S_JAVA_SCRIPT_CORE_J_S_CONTEXT_H__

#include <app/iOS.Foundation.NSObject.h>
#include <Uno.h>
namespace app { namespace iOS { namespace Foundation { struct NSURL; } } }
namespace app { namespace iOS { namespace JavaScriptCore { struct JSValue; } } }

namespace app {
namespace iOS {
namespace JavaScriptCore {

struct JSContext;

struct JSContext__uType : ::app::iOS::Foundation::NSObject__uType
{
};

JSContext__uType* JSContext__typeof();

void JSContext___ObjInit_4(JSContext* __this);
::app::iOS::JavaScriptCore::JSValue* JSContext__evaluateScript(JSContext* __this, ::uString* script_);
::app::iOS::JavaScriptCore::JSValue* JSContext__evaluateScriptWithSourceURL(JSContext* __this, ::uString* script_, ::app::iOS::Foundation::NSURL* sourceURL_);
::app::iOS::JavaScriptCore::JSValue* JSContext__exception(JSContext* __this);
::app::iOS::JavaScriptCore::JSValue* JSContext__get_Exception(JSContext* __this);
::app::iOS::JavaScriptCore::JSValue* JSContext__globalObject(JSContext* __this);
void JSContext__init(JSContext* __this);
JSContext* JSContext__New_5(::uStatic* __this);
void JSContext__set_Exception(JSContext* __this, ::app::iOS::JavaScriptCore::JSValue* value);
void JSContext__setException(JSContext* __this, ::app::iOS::JavaScriptCore::JSValue* exception_);

struct JSContext : ::app::iOS::Foundation::NSObject
{
    void _ObjInit_4() { JSContext___ObjInit_4(this); }
    ::app::iOS::JavaScriptCore::JSValue* evaluateScript(::uString* script_) { return JSContext__evaluateScript(this, script_); }
    ::app::iOS::JavaScriptCore::JSValue* evaluateScriptWithSourceURL(::uString* script_, ::app::iOS::Foundation::NSURL* sourceURL_) { return JSContext__evaluateScriptWithSourceURL(this, script_, sourceURL_); }
    ::app::iOS::JavaScriptCore::JSValue* exception() { return JSContext__exception(this); }
    ::app::iOS::JavaScriptCore::JSValue* Exception() { return JSContext__get_Exception(this); }
    ::app::iOS::JavaScriptCore::JSValue* globalObject() { return JSContext__globalObject(this); }
    void Exception(::app::iOS::JavaScriptCore::JSValue* value) { JSContext__set_Exception(this, value); }
    void setException(::app::iOS::JavaScriptCore::JSValue* exception_) { JSContext__setException(this, exception_); }
};

}}}


#endif
