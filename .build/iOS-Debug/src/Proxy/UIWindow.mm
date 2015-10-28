#define uObjC_NATIVE_TYPE UIWindow
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::app::iOS::UIKit::UIWindow*
#define uObjC_UNO_TYPE_OBJECT ::app::iOS::UIKit::UIWindow__typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <uObjC.Proxy.h>

#if !uObjC_UNO_TYPE_IS_SEALED
@implementation uObjC_PROXY

























































































































- (UIViewController *) rootViewController
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::UIKit::UIViewController* __return = __this->rootViewController();
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}



- (void) setRootViewController:(UIViewController *)rootViewController
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setRootViewController((::app::iOS::UIKit::UIViewController*)uObjC::Lifetime::GetUnoObject(rootViewController, ::app::iOS::UIKit::UIViewController__typeof()));
}


@end
#endif // !uObjC_UNO_TYPE_IS_SEALED
