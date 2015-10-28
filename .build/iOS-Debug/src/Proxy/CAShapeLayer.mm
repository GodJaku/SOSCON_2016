#define uObjC_NATIVE_TYPE CAShapeLayer
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::app::iOS::QuartzCore::CAShapeLayer*
#define uObjC_UNO_TYPE_OBJECT ::app::iOS::QuartzCore::CAShapeLayer__typeof()

#include <QuartzCore/QuartzCore.h>
#include <uObjC.Wrapper.h>
#include <uObjC.Proxy.h>

#if !uObjC_UNO_TYPE_IS_SEALED
@implementation uObjC_PROXY











- (void) setPath:(CGPathRef)path
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setPath((app::CGPathRef*)(size_t) path);
}












- (void) setFillColor:(CGColorRef)fillColor
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setFillColor((app::CGColorRef*)(size_t) fillColor);
}





























- (void) setStrokeColor:(CGColorRef)strokeColor
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setStrokeColor((app::CGColorRef*)(size_t) strokeColor);
}














































- (void) setLineWidth:(CGFloat)lineWidth
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setLineWidth((double)lineWidth);
}























































































@end
#endif // !uObjC_UNO_TYPE_IS_SEALED
