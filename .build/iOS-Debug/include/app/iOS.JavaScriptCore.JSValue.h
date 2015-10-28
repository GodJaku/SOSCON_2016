// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_I_O_S_JAVA_SCRIPT_CORE_J_S_VALUE_H__
#define __APP_I_O_S_JAVA_SCRIPT_CORE_J_S_VALUE_H__

#include <app/iOS.Foundation.NSObject.h>
#include <Uno.h>
#include <uObjC.h>
namespace app { namespace iOS { namespace Foundation { struct NSArray; } } }
namespace app { namespace iOS { namespace Foundation { struct NSDictionary; } } }
namespace app { namespace iOS { namespace JavaScriptCore { struct JSContext; } } }

namespace app {
namespace iOS {
namespace JavaScriptCore {

struct JSValue;

struct JSValue__uType : ::app::iOS::Foundation::NSObject__uType
{
};

JSValue__uType* JSValue__typeof();

JSValue* JSValue___valueWithBoolInContext(::uStatic* __this, bool value_, ::app::iOS::JavaScriptCore::JSContext* context_);
JSValue* JSValue___valueWithDoubleInContext(::uStatic* __this, double value_, ::app::iOS::JavaScriptCore::JSContext* context_);
JSValue* JSValue___valueWithInt32InContext(::uStatic* __this, int value_, ::app::iOS::JavaScriptCore::JSContext* context_);
JSValue* JSValue___valueWithNewErrorFromMessageInContext(::uStatic* __this, ::uString* message_, ::app::iOS::JavaScriptCore::JSContext* context_);
JSValue* JSValue___valueWithNullInContext(::uStatic* __this, ::app::iOS::JavaScriptCore::JSContext* context_);
JSValue* JSValue___valueWithObjectInContext(::uStatic* __this, ::id value_, ::app::iOS::JavaScriptCore::JSContext* context_);
JSValue* JSValue__callWithArguments(JSValue* __this, ::app::iOS::Foundation::NSArray* arguments_);
JSValue* JSValue__constructWithArguments(JSValue* __this, ::app::iOS::Foundation::NSArray* arguments_);
JSValue* JSValue__invokeMethodWithArguments(JSValue* __this, ::uString* method_, ::app::iOS::Foundation::NSArray* arguments_);
bool JSValue__isBoolean(JSValue* __this);
bool JSValue__isInstanceOf(JSValue* __this, ::id value_);
bool JSValue__isNull(JSValue* __this);
bool JSValue__isNumber(JSValue* __this);
bool JSValue__isObject(JSValue* __this);
bool JSValue__isString(JSValue* __this);
bool JSValue__isUndefined(JSValue* __this);
void JSValue__setValueAtIndex(JSValue* __this, ::id value_, ::uULong index_);
void JSValue__setValueForProperty(JSValue* __this, ::id value_, ::uString* property_);
::app::iOS::Foundation::NSArray* JSValue__toArray(JSValue* __this);
bool JSValue__toBool(JSValue* __this);
::app::iOS::Foundation::NSDictionary* JSValue__toDictionary(JSValue* __this);
double JSValue__toDouble(JSValue* __this);
::uString* JSValue__toString(JSValue* __this);
JSValue* JSValue__valueAtIndex(JSValue* __this, ::uULong index_);
JSValue* JSValue__valueForProperty(JSValue* __this, ::uString* property_);

struct JSValue : ::app::iOS::Foundation::NSObject
{
    JSValue* callWithArguments(::app::iOS::Foundation::NSArray* arguments_) { return JSValue__callWithArguments(this, arguments_); }
    JSValue* constructWithArguments(::app::iOS::Foundation::NSArray* arguments_) { return JSValue__constructWithArguments(this, arguments_); }
    JSValue* invokeMethodWithArguments(::uString* method_, ::app::iOS::Foundation::NSArray* arguments_) { return JSValue__invokeMethodWithArguments(this, method_, arguments_); }
    bool isBoolean() { return JSValue__isBoolean(this); }
    bool isInstanceOf(::id value_) { return JSValue__isInstanceOf(this, value_); }
    bool isNull() { return JSValue__isNull(this); }
    bool isNumber() { return JSValue__isNumber(this); }
    bool isObject() { return JSValue__isObject(this); }
    bool isString() { return JSValue__isString(this); }
    bool isUndefined() { return JSValue__isUndefined(this); }
    void setValueAtIndex(::id value_, ::uULong index_) { JSValue__setValueAtIndex(this, value_, index_); }
    void setValueForProperty(::id value_, ::uString* property_) { JSValue__setValueForProperty(this, value_, property_); }
    ::app::iOS::Foundation::NSArray* toArray() { return JSValue__toArray(this); }
    bool toBool() { return JSValue__toBool(this); }
    ::app::iOS::Foundation::NSDictionary* toDictionary() { return JSValue__toDictionary(this); }
    double toDouble() { return JSValue__toDouble(this); }
    ::uString* toString() { return JSValue__toString(this); }
    JSValue* valueAtIndex(::uULong index_) { return JSValue__valueAtIndex(this, index_); }
    JSValue* valueForProperty(::uString* property_) { return JSValue__valueForProperty(this, property_); }
};

}}}


#endif
