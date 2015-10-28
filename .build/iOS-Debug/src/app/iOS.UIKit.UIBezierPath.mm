// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE UIBezierPath
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::app::iOS::UIKit::UIBezierPath*
#define uObjC_UNO_TYPE_OBJECT ::app::iOS::UIKit::UIBezierPath__typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <app/iOS.CoreGraphics.CGPathRef.h>
#include <app/iOS.UIKit.UIBezierPath.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Double.h>

namespace app {
namespace iOS {
namespace UIKit {

UIBezierPath__uType* UIBezierPath__typeof()
{
    static ::uStaticStrong<UIBezierPath__uType*> type;
    if (type != NULL) return type;

    type = (UIBezierPath__uType*)::uAllocClassType(sizeof(UIBezierPath__uType), "iOS.UIKit.UIBezierPath", false, 1, 0, 0);

    type->SetBaseType(::app::iOS::Foundation::NSObject__typeof());

    type->SetInterfaces(
        ::app::iOS::Foundation::INSCopying__typeof(), offsetof(UIBezierPath__uType, __interface_0));

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}

void UIBezierPath___ObjInit_5(UIBezierPath* __this)
{
    ::app::iOS::Foundation::NSObject___ObjInit_2(__this);
}

void UIBezierPath__addArcWithCenterRadiusStartAngleEndAngleClockwise(UIBezierPath* __this, ::app::iOS::CoreGraphics::CGPoint center_, double radius_, double startAngle_, double endAngle_, bool clockwise_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(addArcWithCenter:radius:startAngle:endAngle:clockwise:),
        uObjC::Struct::FromUno_CGPoint(center_, ::CGPoint()),
        (CGFloat)radius_,
        (CGFloat)startAngle_,
        (CGFloat)endAngle_,
        (BOOL)clockwise_);
}

void UIBezierPath__addLineToPoint(UIBezierPath* __this, ::app::iOS::CoreGraphics::CGPoint point_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(addLineToPoint:),
        uObjC::Struct::FromUno_CGPoint(point_, ::CGPoint()));
}

app::CGPathRef* UIBezierPath__cgPath(UIBezierPath* __this)
{
    ::CGPathRef __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::CGPathRef, @selector(CGPath));
    return (app::CGPathRef*)(size_t) __return;
}

void UIBezierPath__closePath(UIBezierPath* __this)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(closePath));
}

app::CGPathRef* UIBezierPath__get_CGPath(UIBezierPath* __this)
{
    return __this->cgPath();
}

void UIBezierPath__moveToPoint(UIBezierPath* __this, ::app::iOS::CoreGraphics::CGPoint point_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(moveToPoint:),
        uObjC::Struct::FromUno_CGPoint(point_, ::CGPoint()));
}

UIBezierPath* UIBezierPath__New_5(::uStatic* __this)
{
    UIBezierPath* inst = (UIBezierPath*)::uAllocObject(sizeof(UIBezierPath), UIBezierPath__typeof());
    inst->_ObjInit_5();
    return inst;
}

void UIBezierPath__set_CGPath(UIBezierPath* __this, app::CGPathRef* value)
{
    __this->setCGPath(value);
}

void UIBezierPath__setCGPath(UIBezierPath* __this, app::CGPathRef* CGPath_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setCGPath:),
        (::CGPathRef)(size_t) CGPath_);
}

}}}
