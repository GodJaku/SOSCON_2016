#define uObjC_NATIVE_TYPE UIView
#define uObjC_UNO_TYPE_IS_SEALED 0
#define uObjC_UNO_TYPE ::app::iOS::UIKit::UIView*
#define uObjC_UNO_TYPE_OBJECT ::app::iOS::UIKit::UIView__typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <uObjC.Proxy.h>

#if !uObjC_UNO_TYPE_IS_SEALED
@implementation uObjC_PROXY



















- (BOOL) isUserInteractionEnabled
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    bool __return = __this->isUserInteractionEnabled();
    return (BOOL)__return;
}



- (void) setUserInteractionEnabled:(BOOL)userInteractionEnabled
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setUserInteractionEnabled((bool)userInteractionEnabled);
}




















- (CALayer *) layer
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::QuartzCore::CALayer* __return = __this->layer();
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}





































































































































































































































- (void) setTranslatesAutoresizingMaskIntoConstraints:(BOOL)flag
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setTranslatesAutoresizingMaskIntoConstraints((bool)flag);
}


















































































































































































































































































- (void) setNeedsDisplay
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setNeedsDisplay();
}



















- (BOOL) clipsToBounds
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    bool __return = __this->clipsToBounds();
    return (BOOL)__return;
}



- (void) setClipsToBounds:(BOOL)clipsToBounds
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setClipsToBounds((bool)clipsToBounds);
}



- (UIColor *) backgroundColor
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::UIKit::UIColor* __return = __this->backgroundColor();
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}



- (void) setBackgroundColor:(UIColor *)backgroundColor
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setBackgroundColor((::app::iOS::UIKit::UIColor*)uObjC::Lifetime::GetUnoObject(backgroundColor, ::app::iOS::UIKit::UIColor__typeof()));
}



- (CGFloat) alpha
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    double __return = __this->alpha();
    return (CGFloat)__return;
}



- (void) setAlpha:(CGFloat)alpha
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setAlpha((double)alpha);
}



- (BOOL) isOpaque
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    bool __return = __this->isOpaque();
    return (BOOL)__return;
}



- (void) setOpaque:(BOOL)opaque
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setOpaque((bool)opaque);
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




















- (void) removeFromSuperview
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->removeFromSuperview();
}



















- (void) addSubview:(UIView *)view
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->addSubview((::app::iOS::UIKit::UIView*)uObjC::Lifetime::GetUnoObject(view, ::app::iOS::UIKit::UIView__typeof()));
}



















- (void) bringSubviewToFront:(UIView *)view
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->bringSubviewToFront((::app::iOS::UIKit::UIView*)uObjC::Lifetime::GetUnoObject(view, ::app::iOS::UIKit::UIView__typeof()));
}
































































































































































































































- (CGSize) sizeThatFits:(CGSize)size
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::CoreGraphics::CGSize __return = __this->sizeThatFits(uObjC::Struct::ToUno_CGSize(size, ::app::iOS::CoreGraphics::CGSize()));
    return uObjC::Struct::FromUno_CGSize(__return, ::CGSize());
}



- (void) sizeToFit
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->sizeToFit();
}



- (CGRect) frame
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::CoreGraphics::CGRect __return = __this->frame();
    return uObjC::Struct::FromUno_CGRect(__return, ::CGRect());
}



- (void) setFrame:(CGRect)frame
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setFrame(uObjC::Struct::ToUno_CGRect(frame, ::app::iOS::CoreGraphics::CGRect()));
}







































































- (BOOL) isMultipleTouchEnabled
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    bool __return = __this->isMultipleTouchEnabled();
    return (BOOL)__return;
}



- (void) setMultipleTouchEnabled:(BOOL)multipleTouchEnabled
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setMultipleTouchEnabled((bool)multipleTouchEnabled);
}



- (BOOL) isExclusiveTouch
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    bool __return = __this->isExclusiveTouch();
    return (BOOL)__return;
}



- (void) setExclusiveTouch:(BOOL)exclusiveTouch
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setExclusiveTouch((bool)exclusiveTouch);
}



- (BOOL) autoresizesSubviews
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    bool __return = __this->autoresizesSubviews();
    return (BOOL)__return;
}



- (void) setAutoresizesSubviews:(BOOL)autoresizesSubviews
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setAutoresizesSubviews((bool)autoresizesSubviews);
}









































































































@end
#endif // !uObjC_UNO_TYPE_IS_SEALED
