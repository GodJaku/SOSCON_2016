#define uObjC_NATIVE_TYPE JSValue
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::app::iOS::JavaScriptCore::JSValue*
#define uObjC_UNO_TYPE_OBJECT ::app::iOS::JavaScriptCore::JSValue__typeof()

#include <JavaScriptCore/JavaScriptCore.h>
#include <uObjC.Wrapper.h>
#include <uObjC.Proxy.h>

#if !uObjC_UNO_TYPE_IS_SEALED
@implementation uObjC_PROXY


+ (JSValue *) valueWithObject:(id)value inContext:(JSContext *)context
{
    ::app::iOS::JavaScriptCore::JSValue* __return = ::app::iOS::JavaScriptCore::JSValue___valueWithObjectInContext(NULL, (::id)value, (::app::iOS::JavaScriptCore::JSContext*)uObjC::Lifetime::GetUnoObject(context, ::app::iOS::JavaScriptCore::JSContext__typeof()));
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}



+ (JSValue *) valueWithBool:(BOOL)value inContext:(JSContext *)context
{
    ::app::iOS::JavaScriptCore::JSValue* __return = ::app::iOS::JavaScriptCore::JSValue___valueWithBoolInContext(NULL, (bool)value, (::app::iOS::JavaScriptCore::JSContext*)uObjC::Lifetime::GetUnoObject(context, ::app::iOS::JavaScriptCore::JSContext__typeof()));
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}



+ (JSValue *) valueWithDouble:(double)value inContext:(JSContext *)context
{
    ::app::iOS::JavaScriptCore::JSValue* __return = ::app::iOS::JavaScriptCore::JSValue___valueWithDoubleInContext(NULL, value, (::app::iOS::JavaScriptCore::JSContext*)uObjC::Lifetime::GetUnoObject(context, ::app::iOS::JavaScriptCore::JSContext__typeof()));
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}



+ (JSValue *) valueWithInt32:(int32_t)value inContext:(JSContext *)context
{
    ::app::iOS::JavaScriptCore::JSValue* __return = ::app::iOS::JavaScriptCore::JSValue___valueWithInt32InContext(NULL, value, (::app::iOS::JavaScriptCore::JSContext*)uObjC::Lifetime::GetUnoObject(context, ::app::iOS::JavaScriptCore::JSContext__typeof()));
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}



































+ (JSValue *) valueWithNewErrorFromMessage:(NSString *)message inContext:(JSContext *)context
{
    ::app::iOS::JavaScriptCore::JSValue* __return = ::app::iOS::JavaScriptCore::JSValue___valueWithNewErrorFromMessageInContext(NULL, uObjC::UnoString(message), (::app::iOS::JavaScriptCore::JSContext*)uObjC::Lifetime::GetUnoObject(context, ::app::iOS::JavaScriptCore::JSContext__typeof()));
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}



+ (JSValue *) valueWithNullInContext:(JSContext *)context
{
    ::app::iOS::JavaScriptCore::JSValue* __return = ::app::iOS::JavaScriptCore::JSValue___valueWithNullInContext(NULL, (::app::iOS::JavaScriptCore::JSContext*)uObjC::Lifetime::GetUnoObject(context, ::app::iOS::JavaScriptCore::JSContext__typeof()));
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}





























- (BOOL) toBool
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    bool __return = __this->toBool();
    return (BOOL)__return;
}



- (double) toDouble
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    double __return = __this->toDouble();
    return __return;
}






























- (NSString *) toString
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::uString* __return = __this->toString();
    return uObjC::NativeString(__return);
}












- (NSArray *) toArray
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::Foundation::NSArray* __return = __this->toArray();
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}



- (NSDictionary *) toDictionary
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::Foundation::NSDictionary* __return = __this->toDictionary();
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}



- (JSValue *) valueForProperty:(NSString *)property
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::JavaScriptCore::JSValue* __return = __this->valueForProperty(uObjC::UnoString(property));
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}



- (void) setValue:(id)value forProperty:(NSString *)property
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setValueForProperty((::id)value, uObjC::UnoString(property));
}





























- (JSValue *) valueAtIndex:(NSUInteger)index
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::JavaScriptCore::JSValue* __return = __this->valueAtIndex((::uULong)index);
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}



- (void) setValue:(id)value atIndex:(NSUInteger)index
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setValueAtIndex((::id)value, (::uULong)index);
}



- (BOOL) isUndefined
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    bool __return = __this->isUndefined();
    return (BOOL)__return;
}



- (BOOL) isNull
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    bool __return = __this->isNull();
    return (BOOL)__return;
}



- (BOOL) isBoolean
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    bool __return = __this->isBoolean();
    return (BOOL)__return;
}



- (BOOL) isNumber
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    bool __return = __this->isNumber();
    return (BOOL)__return;
}



- (BOOL) isString
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    bool __return = __this->isString();
    return (BOOL)__return;
}



- (BOOL) isObject
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    bool __return = __this->isObject();
    return (BOOL)__return;
}





















- (BOOL) isInstanceOf:(id)value
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    bool __return = __this->isInstanceOf((::id)value);
    return (BOOL)__return;
}



- (JSValue *) callWithArguments:(NSArray *)arguments
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::JavaScriptCore::JSValue* __return = __this->callWithArguments((::app::iOS::Foundation::NSArray*)uObjC::Lifetime::GetUnoObject(arguments, ::app::iOS::Foundation::NSArray__typeof()));
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}



- (JSValue *) constructWithArguments:(NSArray *)arguments
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::JavaScriptCore::JSValue* __return = __this->constructWithArguments((::app::iOS::Foundation::NSArray*)uObjC::Lifetime::GetUnoObject(arguments, ::app::iOS::Foundation::NSArray__typeof()));
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}



- (JSValue *) invokeMethod:(NSString *)method withArguments:(NSArray *)arguments
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::JavaScriptCore::JSValue* __return = __this->invokeMethodWithArguments(uObjC::UnoString(method), (::app::iOS::Foundation::NSArray*)uObjC::Lifetime::GetUnoObject(arguments, ::app::iOS::Foundation::NSArray__typeof()));
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}


























































































































@end
#endif // !uObjC_UNO_TYPE_IS_SEALED
