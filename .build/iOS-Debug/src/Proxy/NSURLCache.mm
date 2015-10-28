#define uObjC_NATIVE_TYPE NSURLCache
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::app::iOS::Foundation::NSURLCache*
#define uObjC_UNO_TYPE_OBJECT ::app::iOS::Foundation::NSURLCache__typeof()

#include <Foundation/Foundation.h>
#include <uObjC.Wrapper.h>
#include <uObjC.Proxy.h>

#if !uObjC_UNO_TYPE_IS_SEALED
@implementation uObjC_PROXY


+ (NSURLCache *) sharedURLCache
{
    ::app::iOS::Foundation::NSURLCache* __return = ::app::iOS::Foundation::NSURLCache___sharedURLCache(NULL);
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}












































- (void) removeAllCachedResponses
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->removeAllCachedResponses();
}














































































@end
#endif // !uObjC_UNO_TYPE_IS_SEALED
