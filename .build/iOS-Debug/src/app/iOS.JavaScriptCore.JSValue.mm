// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE JSValue
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::app::iOS::JavaScriptCore::JSValue*
#define uObjC_UNO_TYPE_OBJECT ::app::iOS::JavaScriptCore::JSValue__typeof()

#include <JavaScriptCore/JavaScriptCore.h>
#include <uObjC.Wrapper.h>
#include <app/iOS.Foundation.NSArray.h>
#include <app/iOS.Foundation.NSDictionary.h>
#include <app/iOS.JavaScriptCore.JSContext.h>
#include <app/iOS.JavaScriptCore.JSValue.h>
#include <app/ObjC.ID.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Double.h>
#include <app/Uno.Int.h>
#include <app/Uno.String.h>
#include <app/Uno.ULong.h>

namespace app {
namespace iOS {
namespace JavaScriptCore {

JSValue__uType* JSValue__typeof()
{
    static ::uStaticStrong<JSValue__uType*> type;
    if (type != NULL) return type;

    type = (JSValue__uType*)::uAllocClassType(sizeof(JSValue__uType), "iOS.JavaScriptCore.JSValue", false, 0, 0, 0);

    type->SetBaseType(::app::iOS::Foundation::NSObject__typeof());

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}

JSValue* JSValue___valueWithBoolInContext(::uStatic* __this, bool value_, ::app::iOS::JavaScriptCore::JSContext* context_)
{
    ::JSValue* __return = uObjC_SEND_MESSAGE_TO_CLASS(::JSValue*, @selector(valueWithBool:inContext:),
        (BOOL)value_,
        uObjC::Lifetime::GetNativeHandle((::uObject *)context_));
    return (JSValue*)uObjC::Lifetime::GetUnoObject(__return, ::app::iOS::JavaScriptCore::JSValue__typeof());
}

JSValue* JSValue___valueWithDoubleInContext(::uStatic* __this, double value_, ::app::iOS::JavaScriptCore::JSContext* context_)
{
    ::JSValue* __return = uObjC_SEND_MESSAGE_TO_CLASS(::JSValue*, @selector(valueWithDouble:inContext:),
        value_,
        uObjC::Lifetime::GetNativeHandle((::uObject *)context_));
    return (JSValue*)uObjC::Lifetime::GetUnoObject(__return, ::app::iOS::JavaScriptCore::JSValue__typeof());
}

JSValue* JSValue___valueWithInt32InContext(::uStatic* __this, int value_, ::app::iOS::JavaScriptCore::JSContext* context_)
{
    ::JSValue* __return = uObjC_SEND_MESSAGE_TO_CLASS(::JSValue*, @selector(valueWithInt32:inContext:),
        value_,
        uObjC::Lifetime::GetNativeHandle((::uObject *)context_));
    return (JSValue*)uObjC::Lifetime::GetUnoObject(__return, ::app::iOS::JavaScriptCore::JSValue__typeof());
}

JSValue* JSValue___valueWithNewErrorFromMessageInContext(::uStatic* __this, ::uString* message_, ::app::iOS::JavaScriptCore::JSContext* context_)
{
    ::JSValue* __return = uObjC_SEND_MESSAGE_TO_CLASS(::JSValue*, @selector(valueWithNewErrorFromMessage:inContext:),
        uObjC::NativeString(message_),
        uObjC::Lifetime::GetNativeHandle((::uObject *)context_));
    return (JSValue*)uObjC::Lifetime::GetUnoObject(__return, ::app::iOS::JavaScriptCore::JSValue__typeof());
}

JSValue* JSValue___valueWithNullInContext(::uStatic* __this, ::app::iOS::JavaScriptCore::JSContext* context_)
{
    ::JSValue* __return = uObjC_SEND_MESSAGE_TO_CLASS(::JSValue*, @selector(valueWithNullInContext:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)context_));
    return (JSValue*)uObjC::Lifetime::GetUnoObject(__return, ::app::iOS::JavaScriptCore::JSValue__typeof());
}

JSValue* JSValue___valueWithObjectInContext(::uStatic* __this, ::id value_, ::app::iOS::JavaScriptCore::JSContext* context_)
{
    ::JSValue* __return = uObjC_SEND_MESSAGE_TO_CLASS(::JSValue*, @selector(valueWithObject:inContext:),
        (::id)value_,
        uObjC::Lifetime::GetNativeHandle((::uObject *)context_));
    return (JSValue*)uObjC::Lifetime::GetUnoObject(__return, ::app::iOS::JavaScriptCore::JSValue__typeof());
}

JSValue* JSValue__callWithArguments(JSValue* __this, ::app::iOS::Foundation::NSArray* arguments_)
{
    ::JSValue* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::JSValue*, @selector(callWithArguments:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)arguments_));
    return (JSValue*)uObjC::Lifetime::GetUnoObject(__return, ::app::iOS::JavaScriptCore::JSValue__typeof());
}

JSValue* JSValue__constructWithArguments(JSValue* __this, ::app::iOS::Foundation::NSArray* arguments_)
{
    ::JSValue* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::JSValue*, @selector(constructWithArguments:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)arguments_));
    return (JSValue*)uObjC::Lifetime::GetUnoObject(__return, ::app::iOS::JavaScriptCore::JSValue__typeof());
}

JSValue* JSValue__invokeMethodWithArguments(JSValue* __this, ::uString* method_, ::app::iOS::Foundation::NSArray* arguments_)
{
    ::JSValue* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::JSValue*, @selector(invokeMethod:withArguments:),
        uObjC::NativeString(method_),
        uObjC::Lifetime::GetNativeHandle((::uObject *)arguments_));
    return (JSValue*)uObjC::Lifetime::GetUnoObject(__return, ::app::iOS::JavaScriptCore::JSValue__typeof());
}

bool JSValue__isBoolean(JSValue* __this)
{
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(BOOL, @selector(isBoolean));
    return (bool)__return;
}

bool JSValue__isInstanceOf(JSValue* __this, ::id value_)
{
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(BOOL, @selector(isInstanceOf:),
        (::id)value_);
    return (bool)__return;
}

bool JSValue__isNull(JSValue* __this)
{
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(BOOL, @selector(isNull));
    return (bool)__return;
}

bool JSValue__isNumber(JSValue* __this)
{
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(BOOL, @selector(isNumber));
    return (bool)__return;
}

bool JSValue__isObject(JSValue* __this)
{
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(BOOL, @selector(isObject));
    return (bool)__return;
}

bool JSValue__isString(JSValue* __this)
{
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(BOOL, @selector(isString));
    return (bool)__return;
}

bool JSValue__isUndefined(JSValue* __this)
{
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(BOOL, @selector(isUndefined));
    return (bool)__return;
}

void JSValue__setValueAtIndex(JSValue* __this, ::id value_, ::uULong index_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setValue:atIndex:),
        (::id)value_,
        (unsigned long)index_);
}

void JSValue__setValueForProperty(JSValue* __this, ::id value_, ::uString* property_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setValue:forProperty:),
        (::id)value_,
        uObjC::NativeString(property_));
}

::app::iOS::Foundation::NSArray* JSValue__toArray(JSValue* __this)
{
    ::NSArray* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::NSArray*, @selector(toArray));
    return (::app::iOS::Foundation::NSArray*)uObjC::Lifetime::GetUnoObject(__return, ::app::iOS::Foundation::NSArray__typeof());
}

bool JSValue__toBool(JSValue* __this)
{
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(BOOL, @selector(toBool));
    return (bool)__return;
}

::app::iOS::Foundation::NSDictionary* JSValue__toDictionary(JSValue* __this)
{
    ::NSDictionary* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::NSDictionary*, @selector(toDictionary));
    return (::app::iOS::Foundation::NSDictionary*)uObjC::Lifetime::GetUnoObject(__return, ::app::iOS::Foundation::NSDictionary__typeof());
}

double JSValue__toDouble(JSValue* __this)
{
    double __return = uObjC_SEND_MESSAGE_TO_INSTANCE(double, @selector(toDouble));
    return __return;
}

::uString* JSValue__toString(JSValue* __this)
{
    ::NSString * __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::NSString *, @selector(toString));
    return uObjC::UnoString(__return);
}

JSValue* JSValue__valueAtIndex(JSValue* __this, ::uULong index_)
{
    ::JSValue* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::JSValue*, @selector(valueAtIndex:),
        (unsigned long)index_);
    return (JSValue*)uObjC::Lifetime::GetUnoObject(__return, ::app::iOS::JavaScriptCore::JSValue__typeof());
}

JSValue* JSValue__valueForProperty(JSValue* __this, ::uString* property_)
{
    ::JSValue* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::JSValue*, @selector(valueForProperty:),
        uObjC::NativeString(property_));
    return (JSValue*)uObjC::Lifetime::GetUnoObject(__return, ::app::iOS::JavaScriptCore::JSValue__typeof());
}

}}}
