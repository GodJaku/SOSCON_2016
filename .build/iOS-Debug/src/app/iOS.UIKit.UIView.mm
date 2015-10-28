// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE UIView
#define uObjC_UNO_TYPE_IS_SEALED 0
#define uObjC_UNO_TYPE ::app::iOS::UIKit::UIView*
#define uObjC_UNO_TYPE_OBJECT ::app::iOS::UIKit::UIView__typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <app/iOS.QuartzCore.CALayer.h>
#include <app/iOS.UIKit.UIColor.h>
#include <app/iOS.UIKit.UIView.h>
#include <app/ObjC.ID.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Double.h>

namespace app {
namespace iOS {
namespace UIKit {

UIView__uType* UIView__typeof()
{
    static ::uStaticStrong<UIView__uType*> type;
    if (type != NULL) return type;

    type = (UIView__uType*)::uAllocClassType(sizeof(UIView__uType), "iOS.UIKit.UIView", false, 0, 0, 0);

    type->SetBaseType(::app::iOS::UIKit::UIResponder__typeof());
    type->__fp_isUserInteractionEnabled = UIView__isUserInteractionEnabled;
    type->__fp_setFrame = UIView__setFrame;
    type->__fp_setTintColor = UIView__setTintColor;
    type->__fp_setUserInteractionEnabled = UIView__setUserInteractionEnabled;
    type->__fp_tintColor = UIView__tintColor;

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}

void UIView___ObjInit_6(UIView* __this, ::id __id)
{
    ::app::iOS::UIKit::UIResponder___ObjInit_4(__this, __id);
}

void UIView___ObjInit_7(UIView* __this)
{
    ::app::iOS::UIKit::UIResponder___ObjInit_5(__this);
}

void UIView__addSubview(UIView* __this, UIView* view_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(addSubview:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)view_));
}

double UIView__alpha(UIView* __this)
{
    CGFloat __return = uObjC_SEND_MESSAGE_TO_INSTANCE(CGFloat, @selector(alpha));
    return (double)__return;
}

bool UIView__autoresizesSubviews(UIView* __this)
{
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(BOOL, @selector(autoresizesSubviews));
    return (bool)__return;
}

::app::iOS::UIKit::UIColor* UIView__backgroundColor(UIView* __this)
{
    ::UIColor* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::UIColor*, @selector(backgroundColor));
    return (::app::iOS::UIKit::UIColor*)uObjC::Lifetime::GetUnoObject(__return, ::app::iOS::UIKit::UIColor__typeof());
}

void UIView__bringSubviewToFront(UIView* __this, UIView* view_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(bringSubviewToFront:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)view_));
}

bool UIView__clipsToBounds(UIView* __this)
{
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(BOOL, @selector(clipsToBounds));
    return (bool)__return;
}

::app::iOS::CoreGraphics::CGRect UIView__frame(UIView* __this)
{
    ::CGRect __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::CGRect, @selector(frame));
    return uObjC::Struct::ToUno_CGRect(__return, ::app::iOS::CoreGraphics::CGRect());
}

double UIView__get_Alpha(UIView* __this)
{
    return __this->alpha();
}

bool UIView__get_AutoresizesSubviews(UIView* __this)
{
    return __this->autoresizesSubviews();
}

::app::iOS::UIKit::UIColor* UIView__get_BackgroundColor(UIView* __this)
{
    return __this->backgroundColor();
}

bool UIView__get_ClipsToBounds(UIView* __this)
{
    return __this->clipsToBounds();
}

bool UIView__get_ExclusiveTouch(UIView* __this)
{
    return __this->isExclusiveTouch();
}

::app::iOS::CoreGraphics::CGRect UIView__get_Frame(UIView* __this)
{
    return __this->frame();
}

::app::iOS::QuartzCore::CALayer* UIView__get_Layer(UIView* __this)
{
    return __this->layer();
}

bool UIView__get_MultipleTouchEnabled(UIView* __this)
{
    return __this->isMultipleTouchEnabled();
}

bool UIView__get_Opaque(UIView* __this)
{
    return __this->isOpaque();
}

::app::iOS::UIKit::UIColor* UIView__get_TintColor(UIView* __this)
{
    return __this->tintColor();
}

bool UIView__get_UserInteractionEnabled(UIView* __this)
{
    return __this->isUserInteractionEnabled();
}

bool UIView__isExclusiveTouch(UIView* __this)
{
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(BOOL, @selector(isExclusiveTouch));
    return (bool)__return;
}

bool UIView__isMultipleTouchEnabled(UIView* __this)
{
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(BOOL, @selector(isMultipleTouchEnabled));
    return (bool)__return;
}

bool UIView__isOpaque(UIView* __this)
{
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(BOOL, @selector(isOpaque));
    return (bool)__return;
}

bool UIView__isUserInteractionEnabled(UIView* __this)
{
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(BOOL, @selector(isUserInteractionEnabled));
    return (bool)__return;
}

::app::iOS::QuartzCore::CALayer* UIView__layer(UIView* __this)
{
    ::CALayer* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::CALayer*, @selector(layer));
    return (::app::iOS::QuartzCore::CALayer*)uObjC::Lifetime::GetUnoObject(__return, ::app::iOS::QuartzCore::CALayer__typeof());
}

UIView* UIView__New_7(::uStatic* __this)
{
    UIView* inst = (UIView*)::uAllocObject(sizeof(UIView), UIView__typeof());
    inst->_ObjInit_7();
    return inst;
}

void UIView__removeFromSuperview(UIView* __this)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(removeFromSuperview));
}

void UIView__set_Alpha(UIView* __this, double value)
{
    __this->setAlpha(value);
}

void UIView__set_AutoresizesSubviews(UIView* __this, bool value)
{
    __this->setAutoresizesSubviews(value);
}

void UIView__set_BackgroundColor(UIView* __this, ::app::iOS::UIKit::UIColor* value)
{
    __this->setBackgroundColor(value);
}

void UIView__set_ClipsToBounds(UIView* __this, bool value)
{
    __this->setClipsToBounds(value);
}

void UIView__set_ExclusiveTouch(UIView* __this, bool value)
{
    __this->setExclusiveTouch(value);
}

void UIView__set_Frame(UIView* __this, ::app::iOS::CoreGraphics::CGRect value)
{
    __this->setFrame(value);
}

void UIView__set_MultipleTouchEnabled(UIView* __this, bool value)
{
    __this->setMultipleTouchEnabled(value);
}

void UIView__set_Opaque(UIView* __this, bool value)
{
    __this->setOpaque(value);
}

void UIView__set_TintColor(UIView* __this, ::app::iOS::UIKit::UIColor* value)
{
    __this->setTintColor(value);
}

void UIView__set_UserInteractionEnabled(UIView* __this, bool value)
{
    __this->setUserInteractionEnabled(value);
}

void UIView__setAlpha(UIView* __this, double alpha_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setAlpha:),
        (CGFloat)alpha_);
}

void UIView__setAutoresizesSubviews(UIView* __this, bool autoresizesSubviews_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setAutoresizesSubviews:),
        (BOOL)autoresizesSubviews_);
}

void UIView__setBackgroundColor(UIView* __this, ::app::iOS::UIKit::UIColor* backgroundColor_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setBackgroundColor:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)backgroundColor_));
}

void UIView__setClipsToBounds(UIView* __this, bool clipsToBounds_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setClipsToBounds:),
        (BOOL)clipsToBounds_);
}

void UIView__setExclusiveTouch(UIView* __this, bool exclusiveTouch_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setExclusiveTouch:),
        (BOOL)exclusiveTouch_);
}

void UIView__setFrame(UIView* __this, ::app::iOS::CoreGraphics::CGRect frame_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setFrame:),
        uObjC::Struct::FromUno_CGRect(frame_, ::CGRect()));
}

void UIView__setMultipleTouchEnabled(UIView* __this, bool multipleTouchEnabled_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setMultipleTouchEnabled:),
        (BOOL)multipleTouchEnabled_);
}

void UIView__setNeedsDisplay(UIView* __this)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setNeedsDisplay));
}

void UIView__setOpaque(UIView* __this, bool opaque_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setOpaque:),
        (BOOL)opaque_);
}

void UIView__setTintColor(UIView* __this, ::app::iOS::UIKit::UIColor* tintColor_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setTintColor:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)tintColor_));
}

void UIView__setTranslatesAutoresizingMaskIntoConstraints(UIView* __this, bool flag_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setTranslatesAutoresizingMaskIntoConstraints:),
        (BOOL)flag_);
}

void UIView__setUserInteractionEnabled(UIView* __this, bool userInteractionEnabled_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setUserInteractionEnabled:),
        (BOOL)userInteractionEnabled_);
}

::app::iOS::CoreGraphics::CGSize UIView__sizeThatFits(UIView* __this, ::app::iOS::CoreGraphics::CGSize size_)
{
    ::CGSize __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::CGSize, @selector(sizeThatFits:),
        uObjC::Struct::FromUno_CGSize(size_, ::CGSize()));
    return uObjC::Struct::ToUno_CGSize(__return, ::app::iOS::CoreGraphics::CGSize());
}

void UIView__sizeToFit(UIView* __this)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(sizeToFit));
}

::app::iOS::UIKit::UIColor* UIView__tintColor(UIView* __this)
{
    ::UIColor* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::UIColor*, @selector(tintColor));
    return (::app::iOS::UIKit::UIColor*)uObjC::Lifetime::GetUnoObject(__return, ::app::iOS::UIKit::UIColor__typeof());
}

}}}
