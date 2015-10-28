// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_I_O_S_QUARTZ_CORE_C_A_LAYER_H__
#define __APP_I_O_S_QUARTZ_CORE_C_A_LAYER_H__

#include <app/iOS.Foundation.NSObject.h>
#include <Uno.h>
namespace app { namespace iOS { namespace CoreGraphics { struct CGPoint; } } }
namespace app { namespace iOS { namespace CoreGraphics { struct CGRect; } } }
namespace app { namespace iOS { namespace QuartzCore { struct CATransform3D; } } }

namespace app {
namespace iOS {
namespace QuartzCore {

struct CALayer;

struct CALayer__uType : ::app::iOS::Foundation::NSObject__uType
{
};

CALayer__uType* CALayer__typeof();

void CALayer___ObjInit_5(CALayer* __this);
void CALayer__addSublayer(CALayer* __this, CALayer* layer_);
::app::iOS::CoreGraphics::CGPoint CALayer__anchorPoint(CALayer* __this);
::app::iOS::CoreGraphics::CGRect CALayer__bounds(CALayer* __this);
::app::iOS::CoreGraphics::CGPoint CALayer__get_AnchorPoint(CALayer* __this);
::app::iOS::CoreGraphics::CGRect CALayer__get_Bounds(CALayer* __this);
::app::iOS::CoreGraphics::CGPoint CALayer__get_Position(CALayer* __this);
::app::iOS::QuartzCore::CATransform3D CALayer__get_Transform(CALayer* __this);
void CALayer__init(CALayer* __this);
::app::iOS::CoreGraphics::CGPoint CALayer__position(CALayer* __this);
void CALayer__removeFromSuperlayer(CALayer* __this);
void CALayer__set_AnchorPoint(CALayer* __this, ::app::iOS::CoreGraphics::CGPoint value);
void CALayer__set_Bounds(CALayer* __this, ::app::iOS::CoreGraphics::CGRect value);
void CALayer__set_Position(CALayer* __this, ::app::iOS::CoreGraphics::CGPoint value);
void CALayer__set_Transform(CALayer* __this, ::app::iOS::QuartzCore::CATransform3D value);
void CALayer__setAnchorPoint(CALayer* __this, ::app::iOS::CoreGraphics::CGPoint anchorPoint_);
void CALayer__setBounds(CALayer* __this, ::app::iOS::CoreGraphics::CGRect bounds_);
void CALayer__setPosition(CALayer* __this, ::app::iOS::CoreGraphics::CGPoint position_);
void CALayer__setTransform(CALayer* __this, ::app::iOS::QuartzCore::CATransform3D transform_);
::app::iOS::QuartzCore::CATransform3D CALayer__transform(CALayer* __this);

struct CALayer : ::app::iOS::Foundation::NSObject
{
    void _ObjInit_5() { CALayer___ObjInit_5(this); }
    void addSublayer(CALayer* layer_) { CALayer__addSublayer(this, layer_); }
    ::app::iOS::CoreGraphics::CGPoint anchorPoint();
    ::app::iOS::CoreGraphics::CGRect bounds();
    ::app::iOS::CoreGraphics::CGPoint AnchorPoint();
    ::app::iOS::CoreGraphics::CGRect Bounds();
    ::app::iOS::CoreGraphics::CGPoint Position();
    ::app::iOS::QuartzCore::CATransform3D Transform();
    ::app::iOS::CoreGraphics::CGPoint position();
    void removeFromSuperlayer() { CALayer__removeFromSuperlayer(this); }
    void AnchorPoint(::app::iOS::CoreGraphics::CGPoint value);
    void Bounds(::app::iOS::CoreGraphics::CGRect value);
    void Position(::app::iOS::CoreGraphics::CGPoint value);
    void Transform(::app::iOS::QuartzCore::CATransform3D value);
    void setAnchorPoint(::app::iOS::CoreGraphics::CGPoint anchorPoint_);
    void setBounds(::app::iOS::CoreGraphics::CGRect bounds_);
    void setPosition(::app::iOS::CoreGraphics::CGPoint position_);
    void setTransform(::app::iOS::QuartzCore::CATransform3D transform_);
    ::app::iOS::QuartzCore::CATransform3D transform();
};

}}}

#include <app/iOS.CoreGraphics.CGPoint.h>
#include <app/iOS.CoreGraphics.CGRect.h>
#include <app/iOS.QuartzCore.CATransform3D.h>

namespace app {
namespace iOS {
namespace QuartzCore {

inline ::app::iOS::CoreGraphics::CGPoint CALayer::anchorPoint() { return CALayer__anchorPoint(this); }
inline ::app::iOS::CoreGraphics::CGRect CALayer::bounds() { return CALayer__bounds(this); }
inline ::app::iOS::CoreGraphics::CGPoint CALayer::AnchorPoint() { return CALayer__get_AnchorPoint(this); }
inline ::app::iOS::CoreGraphics::CGRect CALayer::Bounds() { return CALayer__get_Bounds(this); }
inline ::app::iOS::CoreGraphics::CGPoint CALayer::Position() { return CALayer__get_Position(this); }
inline ::app::iOS::QuartzCore::CATransform3D CALayer::Transform() { return CALayer__get_Transform(this); }
inline ::app::iOS::CoreGraphics::CGPoint CALayer::position() { return CALayer__position(this); }
inline void CALayer::AnchorPoint(::app::iOS::CoreGraphics::CGPoint value) { CALayer__set_AnchorPoint(this, value); }
inline void CALayer::Bounds(::app::iOS::CoreGraphics::CGRect value) { CALayer__set_Bounds(this, value); }
inline void CALayer::Position(::app::iOS::CoreGraphics::CGPoint value) { CALayer__set_Position(this, value); }
inline void CALayer::Transform(::app::iOS::QuartzCore::CATransform3D value) { CALayer__set_Transform(this, value); }
inline void CALayer::setAnchorPoint(::app::iOS::CoreGraphics::CGPoint anchorPoint_) { CALayer__setAnchorPoint(this, anchorPoint_); }
inline void CALayer::setBounds(::app::iOS::CoreGraphics::CGRect bounds_) { CALayer__setBounds(this, bounds_); }
inline void CALayer::setPosition(::app::iOS::CoreGraphics::CGPoint position_) { CALayer__setPosition(this, position_); }
inline void CALayer::setTransform(::app::iOS::QuartzCore::CATransform3D transform_) { CALayer__setTransform(this, transform_); }
inline ::app::iOS::QuartzCore::CATransform3D CALayer::transform() { return CALayer__transform(this); }

}}}


#endif
