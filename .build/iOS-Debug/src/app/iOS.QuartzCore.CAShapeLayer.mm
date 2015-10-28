// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE CAShapeLayer
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::app::iOS::QuartzCore::CAShapeLayer*
#define uObjC_UNO_TYPE_OBJECT ::app::iOS::QuartzCore::CAShapeLayer__typeof()

#include <QuartzCore/QuartzCore.h>
#include <uObjC.Wrapper.h>
#include <app/iOS.CoreGraphics.CGColorRef.h>
#include <app/iOS.CoreGraphics.CGPathRef.h>
#include <app/iOS.QuartzCore.CAShapeLayer.h>
#include <app/Uno.Double.h>

namespace app {
namespace iOS {
namespace QuartzCore {

CAShapeLayer__uType* CAShapeLayer__typeof()
{
    static ::uStaticStrong<CAShapeLayer__uType*> type;
    if (type != NULL) return type;

    type = (CAShapeLayer__uType*)::uAllocClassType(sizeof(CAShapeLayer__uType), "iOS.QuartzCore.CAShapeLayer", false, 0, 0, 0);

    type->SetBaseType(::app::iOS::QuartzCore::CALayer__typeof());

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}

void CAShapeLayer___ObjInit_7(CAShapeLayer* __this)
{
    ::app::iOS::QuartzCore::CALayer___ObjInit_5(__this);
}

CAShapeLayer* CAShapeLayer__New_7(::uStatic* __this)
{
    CAShapeLayer* inst = (CAShapeLayer*)::uAllocObject(sizeof(CAShapeLayer), CAShapeLayer__typeof());
    inst->_ObjInit_7();
    return inst;
}

void CAShapeLayer__setFillColor(CAShapeLayer* __this, app::CGColorRef* fillColor_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setFillColor:),
        (::CGColorRef)(size_t) fillColor_);
}

void CAShapeLayer__setLineWidth(CAShapeLayer* __this, double lineWidth_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setLineWidth:),
        (CGFloat)lineWidth_);
}

void CAShapeLayer__setPath(CAShapeLayer* __this, app::CGPathRef* path_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setPath:),
        (::CGPathRef)(size_t) path_);
}

void CAShapeLayer__setStrokeColor(CAShapeLayer* __this, app::CGColorRef* strokeColor_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setStrokeColor:),
        (::CGColorRef)(size_t) strokeColor_);
}

}}}
