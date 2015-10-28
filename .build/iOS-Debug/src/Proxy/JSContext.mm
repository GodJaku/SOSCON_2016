#define uObjC_NATIVE_TYPE JSContext
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::app::iOS::JavaScriptCore::JSContext*
#define uObjC_UNO_TYPE_OBJECT ::app::iOS::JavaScriptCore::JSContext__typeof()

#include <JavaScriptCore/JavaScriptCore.h>
#include <uObjC.Wrapper.h>
#include <uObjC.Proxy.h>

#if !uObjC_UNO_TYPE_IS_SEALED
@implementation uObjC_PROXY


- (instancetype) init
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->init();
    return uObjC_OBJECT_HANDLE(__this);
}












- (JSValue *) evaluateScript:(NSString *)script
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::JavaScriptCore::JSValue* __return = __this->evaluateScript(uObjC::UnoString(script));
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}



- (JSValue *) evaluateScript:(NSString *)script withSourceURL:(NSURL *)sourceURL
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::JavaScriptCore::JSValue* __return = __this->evaluateScriptWithSourceURL(uObjC::UnoString(script), (::app::iOS::Foundation::NSURL*)uObjC::Lifetime::GetUnoObject(sourceURL, ::app::iOS::Foundation::NSURL__typeof()));
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}



































- (JSValue *) globalObject
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::JavaScriptCore::JSValue* __return = __this->globalObject();
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}



- (JSValue *) exception
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::JavaScriptCore::JSValue* __return = __this->exception();
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}



- (void) setException:(JSValue *)exception
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setException((::app::iOS::JavaScriptCore::JSValue*)uObjC::Lifetime::GetUnoObject(exception, ::app::iOS::JavaScriptCore::JSValue__typeof()));
}






















































@end
#endif // !uObjC_UNO_TYPE_IS_SEALED
