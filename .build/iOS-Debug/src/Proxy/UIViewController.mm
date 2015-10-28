#define uObjC_NATIVE_TYPE UIViewController
#define uObjC_UNO_TYPE_IS_SEALED 0
#define uObjC_UNO_TYPE ::app::iOS::UIKit::UIViewController*
#define uObjC_UNO_TYPE_OBJECT ::app::iOS::UIKit::UIViewController__typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <uObjC.Proxy.h>

#if !uObjC_UNO_TYPE_IS_SEALED
@implementation uObjC_PROXY




































































































































































































- (void) presentModalViewController:(UIViewController *)modalViewController animated:(BOOL)animated
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->presentModalViewControllerAnimated((::app::iOS::UIKit::UIViewController*)uObjC::Lifetime::GetUnoObject(modalViewController, ::app::iOS::UIKit::UIViewController__typeof()), (bool)animated);
}



- (void) dismissModalViewControllerAnimated:(BOOL)animated
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->dismissModalViewControllerAnimated((bool)animated);
}































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































@end
#endif // !uObjC_UNO_TYPE_IS_SEALED
