#define uObjC_NATIVE_TYPE UIBezierPath
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::app::iOS::UIKit::UIBezierPath*
#define uObjC_UNO_TYPE_OBJECT ::app::iOS::UIKit::UIBezierPath__typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <uObjC.Proxy.h>

#if !uObjC_UNO_TYPE_IS_SEALED
@implementation uObjC_PROXY


























































- (CGPathRef) CGPath
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    app::CGPathRef* __return = __this->cgPath();
    return (::CGPathRef)(size_t) __return;
}



- (void) moveToPoint:(CGPoint)point
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->moveToPoint(uObjC::Struct::ToUno_CGPoint(point, ::app::iOS::CoreGraphics::CGPoint()));
}



- (void) addLineToPoint:(CGPoint)point
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->addLineToPoint(uObjC::Struct::ToUno_CGPoint(point, ::app::iOS::CoreGraphics::CGPoint()));
}



















- (void) addArcWithCenter:(CGPoint)center radius:(CGFloat)radius startAngle:(CGFloat)startAngle endAngle:(CGFloat)endAngle clockwise:(BOOL)clockwise
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->addArcWithCenterRadiusStartAngleEndAngleClockwise(uObjC::Struct::ToUno_CGPoint(center, ::app::iOS::CoreGraphics::CGPoint()), (double)radius, (double)startAngle, (double)endAngle, (bool)clockwise);
}



- (void) closePath
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->closePath();
}





















































































- (void) setCGPath:(CGPathRef)CGPath
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setCGPath((app::CGPathRef*)(size_t) CGPath);
}




















































































































































@end
#endif // !uObjC_UNO_TYPE_IS_SEALED
