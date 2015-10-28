// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_I_O_S_U_I_KIT_U_I_BEZIER_PATH_H__
#define __APP_I_O_S_U_I_KIT_U_I_BEZIER_PATH_H__

#include <app/iOS.Foundation.INSCopying.h>
#include <app/iOS.Foundation.NSObject.h>
#include <Uno.h>
namespace app { namespace iOS { namespace CoreGraphics { struct CGPoint; } } }

namespace app {
namespace iOS {
namespace UIKit {

struct UIBezierPath;

struct UIBezierPath__uType : ::app::iOS::Foundation::NSObject__uType
{
    ::app::iOS::Foundation::INSCopying __interface_0;
};

UIBezierPath__uType* UIBezierPath__typeof();

void UIBezierPath___ObjInit_5(UIBezierPath* __this);
void UIBezierPath__addArcWithCenterRadiusStartAngleEndAngleClockwise(UIBezierPath* __this, ::app::iOS::CoreGraphics::CGPoint center_, double radius_, double startAngle_, double endAngle_, bool clockwise_);
void UIBezierPath__addLineToPoint(UIBezierPath* __this, ::app::iOS::CoreGraphics::CGPoint point_);
app::CGPathRef* UIBezierPath__cgPath(UIBezierPath* __this);
void UIBezierPath__closePath(UIBezierPath* __this);
app::CGPathRef* UIBezierPath__get_CGPath(UIBezierPath* __this);
void UIBezierPath__moveToPoint(UIBezierPath* __this, ::app::iOS::CoreGraphics::CGPoint point_);
UIBezierPath* UIBezierPath__New_5(::uStatic* __this);
void UIBezierPath__set_CGPath(UIBezierPath* __this, app::CGPathRef* value);
void UIBezierPath__setCGPath(UIBezierPath* __this, app::CGPathRef* CGPath_);

struct UIBezierPath : ::app::iOS::Foundation::NSObject
{
    void _ObjInit_5() { UIBezierPath___ObjInit_5(this); }
    void addArcWithCenterRadiusStartAngleEndAngleClockwise(::app::iOS::CoreGraphics::CGPoint center_, double radius_, double startAngle_, double endAngle_, bool clockwise_);
    void addLineToPoint(::app::iOS::CoreGraphics::CGPoint point_);
    app::CGPathRef* cgPath() { return UIBezierPath__cgPath(this); }
    void closePath() { UIBezierPath__closePath(this); }
    app::CGPathRef* CGPath() { return UIBezierPath__get_CGPath(this); }
    void moveToPoint(::app::iOS::CoreGraphics::CGPoint point_);
    void CGPath(app::CGPathRef* value) { UIBezierPath__set_CGPath(this, value); }
    void setCGPath(app::CGPathRef* CGPath_) { UIBezierPath__setCGPath(this, CGPath_); }
};

}}}

#include <app/iOS.CoreGraphics.CGPoint.h>

namespace app {
namespace iOS {
namespace UIKit {

inline void UIBezierPath::addArcWithCenterRadiusStartAngleEndAngleClockwise(::app::iOS::CoreGraphics::CGPoint center_, double radius_, double startAngle_, double endAngle_, bool clockwise_) { UIBezierPath__addArcWithCenterRadiusStartAngleEndAngleClockwise(this, center_, radius_, startAngle_, endAngle_, clockwise_); }
inline void UIBezierPath::addLineToPoint(::app::iOS::CoreGraphics::CGPoint point_) { UIBezierPath__addLineToPoint(this, point_); }
inline void UIBezierPath::moveToPoint(::app::iOS::CoreGraphics::CGPoint point_) { UIBezierPath__moveToPoint(this, point_); }

}}}


#endif
