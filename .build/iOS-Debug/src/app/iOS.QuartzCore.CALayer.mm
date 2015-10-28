// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE CALayer
#define uObjC_UNO_TYPE_IS_SEALED 0
#define uObjC_UNO_TYPE ::app::iOS::QuartzCore::CALayer*
#define uObjC_UNO_TYPE_OBJECT ::app::iOS::QuartzCore::CALayer__typeof()

#include <QuartzCore/QuartzCore.h>
#include <uObjC.Wrapper.h>
#include <app/iOS.QuartzCore.CALayer.h>

namespace app {
namespace iOS {
namespace QuartzCore {

CALayer__uType* CALayer__typeof()
{
    static ::uStaticStrong<CALayer__uType*> type;
    if (type != NULL) return type;

    type = (CALayer__uType*)::uAllocClassType(sizeof(CALayer__uType), "iOS.QuartzCore.CALayer", false, 0, 0, 0);

    type->SetBaseType(::app::iOS::Foundation::NSObject__typeof());
    type->__fp_init = (void(*)(::app::iOS::Foundation::NSObject*))CALayer__init;

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}

void CALayer___ObjInit_5(CALayer* __this)
{
    ::app::iOS::Foundation::NSObject___ObjInit_2(__this);
}

void CALayer__addSublayer(CALayer* __this, CALayer* layer_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(addSublayer:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)layer_));
}

::app::iOS::CoreGraphics::CGPoint CALayer__anchorPoint(CALayer* __this)
{
    ::CGPoint __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::CGPoint, @selector(anchorPoint));
    return uObjC::Struct::ToUno_CGPoint(__return, ::app::iOS::CoreGraphics::CGPoint());
}

::app::iOS::CoreGraphics::CGRect CALayer__bounds(CALayer* __this)
{
    ::CGRect __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::CGRect, @selector(bounds));
    return uObjC::Struct::ToUno_CGRect(__return, ::app::iOS::CoreGraphics::CGRect());
}

::app::iOS::CoreGraphics::CGPoint CALayer__get_AnchorPoint(CALayer* __this)
{
    return __this->anchorPoint();
}

::app::iOS::CoreGraphics::CGRect CALayer__get_Bounds(CALayer* __this)
{
    return __this->bounds();
}

::app::iOS::CoreGraphics::CGPoint CALayer__get_Position(CALayer* __this)
{
    return __this->position();
}

::app::iOS::QuartzCore::CATransform3D CALayer__get_Transform(CALayer* __this)
{
    return __this->transform();
}

void CALayer__init(CALayer* __this)
{
    uObjC_DO_INIT(@selector(init));
}

::app::iOS::CoreGraphics::CGPoint CALayer__position(CALayer* __this)
{
    ::CGPoint __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::CGPoint, @selector(position));
    return uObjC::Struct::ToUno_CGPoint(__return, ::app::iOS::CoreGraphics::CGPoint());
}

void CALayer__removeFromSuperlayer(CALayer* __this)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(removeFromSuperlayer));
}

void CALayer__set_AnchorPoint(CALayer* __this, ::app::iOS::CoreGraphics::CGPoint value)
{
    __this->setAnchorPoint(value);
}

void CALayer__set_Bounds(CALayer* __this, ::app::iOS::CoreGraphics::CGRect value)
{
    __this->setBounds(value);
}

void CALayer__set_Position(CALayer* __this, ::app::iOS::CoreGraphics::CGPoint value)
{
    __this->setPosition(value);
}

void CALayer__set_Transform(CALayer* __this, ::app::iOS::QuartzCore::CATransform3D value)
{
    __this->setTransform(value);
}

void CALayer__setAnchorPoint(CALayer* __this, ::app::iOS::CoreGraphics::CGPoint anchorPoint_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setAnchorPoint:),
        uObjC::Struct::FromUno_CGPoint(anchorPoint_, ::CGPoint()));
}

void CALayer__setBounds(CALayer* __this, ::app::iOS::CoreGraphics::CGRect bounds_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setBounds:),
        uObjC::Struct::FromUno_CGRect(bounds_, ::CGRect()));
}

void CALayer__setPosition(CALayer* __this, ::app::iOS::CoreGraphics::CGPoint position_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setPosition:),
        uObjC::Struct::FromUno_CGPoint(position_, ::CGPoint()));
}

void CALayer__setTransform(CALayer* __this, ::app::iOS::QuartzCore::CATransform3D transform_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setTransform:),
        uObjC::Struct::FromUno_CATransform3D(transform_, ::CATransform3D()));
}

::app::iOS::QuartzCore::CATransform3D CALayer__transform(CALayer* __this)
{
    ::CATransform3D __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::CATransform3D, @selector(transform));
    return uObjC::Struct::ToUno_CATransform3D(__return, ::app::iOS::QuartzCore::CATransform3D());
}

}}}
