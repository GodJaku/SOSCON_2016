#define uObjC_NATIVE_TYPE UIEvent
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::app::iOS::UIKit::UIEvent*
#define uObjC_UNO_TYPE_OBJECT ::app::iOS::UIKit::UIEvent__typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <uObjC.Proxy.h>

#if !uObjC_UNO_TYPE_IS_SEALED
@implementation uObjC_PROXY




















- (NSSet *) touchesForView:(UIView *)view
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::Foundation::NSSet* __return = __this->touchesForView((::app::iOS::UIKit::UIView*)uObjC::Lifetime::GetUnoObject(view, ::app::iOS::UIKit::UIView__typeof()));
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}






































@end
#endif // !uObjC_UNO_TYPE_IS_SEALED
