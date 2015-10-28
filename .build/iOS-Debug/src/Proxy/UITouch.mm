#define uObjC_NATIVE_TYPE UITouch
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::app::iOS::UIKit::UITouch*
#define uObjC_UNO_TYPE_OBJECT ::app::iOS::UIKit::UITouch__typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <uObjC.Proxy.h>

#if !uObjC_UNO_TYPE_IS_SEALED
@implementation uObjC_PROXY


- (CGPoint) locationInView:(UIView *)view
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::CoreGraphics::CGPoint __return = __this->locationInView((::app::iOS::UIKit::UIView*)uObjC::Lifetime::GetUnoObject(view, ::app::iOS::UIKit::UIView__typeof()));
    return uObjC::Struct::FromUno_CGPoint(__return, ::CGPoint());
}












- (NSTimeInterval) timestamp
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    double __return = __this->timestamp();
    return __return;
}



- (UITouchPhase) phase
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    int __return = __this->phase();
    return ::UITouchPhase(__return);
}
























































@end
#endif // !uObjC_UNO_TYPE_IS_SEALED
