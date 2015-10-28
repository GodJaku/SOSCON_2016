// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_I_O_S_QUARTZ_CORE_C_A_SHAPE_LAYER_H__
#define __APP_I_O_S_QUARTZ_CORE_C_A_SHAPE_LAYER_H__

#include <app/iOS.QuartzCore.CALayer.h>
#include <Uno.h>

namespace app {
namespace iOS {
namespace QuartzCore {

struct CAShapeLayer;

struct CAShapeLayer__uType : ::app::iOS::QuartzCore::CALayer__uType
{
};

CAShapeLayer__uType* CAShapeLayer__typeof();

void CAShapeLayer___ObjInit_7(CAShapeLayer* __this);
CAShapeLayer* CAShapeLayer__New_7(::uStatic* __this);
void CAShapeLayer__setFillColor(CAShapeLayer* __this, app::CGColorRef* fillColor_);
void CAShapeLayer__setLineWidth(CAShapeLayer* __this, double lineWidth_);
void CAShapeLayer__setPath(CAShapeLayer* __this, app::CGPathRef* path_);
void CAShapeLayer__setStrokeColor(CAShapeLayer* __this, app::CGColorRef* strokeColor_);

struct CAShapeLayer : ::app::iOS::QuartzCore::CALayer
{
    void _ObjInit_7() { CAShapeLayer___ObjInit_7(this); }
    void setFillColor(app::CGColorRef* fillColor_) { CAShapeLayer__setFillColor(this, fillColor_); }
    void setLineWidth(double lineWidth_) { CAShapeLayer__setLineWidth(this, lineWidth_); }
    void setPath(app::CGPathRef* path_) { CAShapeLayer__setPath(this, path_); }
    void setStrokeColor(app::CGColorRef* strokeColor_) { CAShapeLayer__setStrokeColor(this, strokeColor_); }
};

}}}


#endif
