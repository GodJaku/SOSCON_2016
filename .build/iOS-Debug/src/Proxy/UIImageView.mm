#define uObjC_NATIVE_TYPE UIImageView
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::app::iOS::UIKit::UIImageView*
#define uObjC_UNO_TYPE_OBJECT ::app::iOS::UIKit::UIImageView__typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <uObjC.Proxy.h>

#if !uObjC_UNO_TYPE_IS_SEALED
@implementation uObjC_PROXY













































- (UIImage *) image
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::UIKit::UIImage* __return = __this->image();
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}



- (void) setImage:(UIImage *)image
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setImage((::app::iOS::UIKit::UIImage*)uObjC::Lifetime::GetUnoObject(image, ::app::iOS::UIKit::UIImage__typeof()));
}




















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
