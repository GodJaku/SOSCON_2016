#define uObjC_NATIVE_TYPE UISlider
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::app::iOS::UIKit::UISlider*
#define uObjC_UNO_TYPE_OBJECT ::app::iOS::UIKit::UISlider__typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <uObjC.Proxy.h>

#if !uObjC_UNO_TYPE_IS_SEALED
@implementation uObjC_PROXY

































































































- (float) value
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    float __return = __this->value();
    return __return;
}



- (void) setValue:(float)value
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setValue(value);
}



- (float) minimumValue
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    float __return = __this->minimumValue();
    return __return;
}



- (void) setMinimumValue:(float)minimumValue
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setMinimumValue(minimumValue);
}



- (float) maximumValue
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    float __return = __this->maximumValue();
    return __return;
}



- (void) setMaximumValue:(float)maximumValue
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setMaximumValue(maximumValue);
}





































- (BOOL) isContinuous
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    bool __return = __this->isContinuous();
    return (BOOL)__return;
}



- (void) setContinuous:(BOOL)continuous
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setContinuous((bool)continuous);
}
















































































@end
#endif // !uObjC_UNO_TYPE_IS_SEALED
