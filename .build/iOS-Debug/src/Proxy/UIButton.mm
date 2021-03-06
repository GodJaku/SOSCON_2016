#define uObjC_NATIVE_TYPE UIButton
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::app::iOS::UIKit::UIButton*
#define uObjC_UNO_TYPE_OBJECT ::app::iOS::UIKit::UIButton__typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <uObjC.Proxy.h>

#if !uObjC_UNO_TYPE_IS_SEALED
@implementation uObjC_PROXY


+ (id) buttonWithType:(UIButtonType)buttonType
{
    ::id __return = ::app::iOS::UIKit::UIButton___buttonWithType(NULL, int(buttonType));
    return (::id)__return;
}



- (void) setTitle:(NSString *)title forState:(UIControlState)state
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setTitleForState(uObjC::UnoString(title), ::uUInt(state));
}



- (void) setTitleColor:(UIColor *)color forState:(UIControlState)state
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setTitleColorForState((::app::iOS::UIKit::UIColor*)uObjC::Lifetime::GetUnoObject(color, ::app::iOS::UIKit::UIColor__typeof()), ::uUInt(state));
}




















































































































































































































































- (UIColor *) tintColor
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::UIKit::UIColor* __return = __this->tintColor();
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}



- (void) setTintColor:(UIColor *)tintColor
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setTintColor((::app::iOS::UIKit::UIColor*)uObjC::Lifetime::GetUnoObject(tintColor, ::app::iOS::UIKit::UIColor__typeof()));
}






































































































































@end
#endif // !uObjC_UNO_TYPE_IS_SEALED
