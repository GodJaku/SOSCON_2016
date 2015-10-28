#define uObjC_NATIVE_TYPE UISwitch
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::app::iOS::UIKit::UISwitch*
#define uObjC_UNO_TYPE_OBJECT ::app::iOS::UIKit::UISwitch__typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <uObjC.Proxy.h>

#if !uObjC_UNO_TYPE_IS_SEALED
@implementation uObjC_PROXY




































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






















































- (BOOL) isOn
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    bool __return = __this->isOn();
    return (BOOL)__return;
}



- (void) setOn:(BOOL)on
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setOn((bool)on);
}


@end
#endif // !uObjC_UNO_TYPE_IS_SEALED
