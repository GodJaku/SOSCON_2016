// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE UIImageView
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::app::iOS::UIKit::UIImageView*
#define uObjC_UNO_TYPE_OBJECT ::app::iOS::UIKit::UIImageView__typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <app/iOS.UIKit.UIColor.h>
#include <app/iOS.UIKit.UIImage.h>
#include <app/iOS.UIKit.UIImageView.h>
#include <app/Uno.Bool.h>

namespace app {
namespace iOS {
namespace UIKit {

UIImageView__uType* UIImageView__typeof()
{
    static ::uStaticStrong<UIImageView__uType*> type;
    if (type != NULL) return type;

    type = (UIImageView__uType*)::uAllocClassType(sizeof(UIImageView__uType), "iOS.UIKit.UIImageView", false, 0, 0, 0);

    type->SetBaseType(::app::iOS::UIKit::UIView__typeof());
    type->__fp_isUserInteractionEnabled = (bool(*)(::app::iOS::UIKit::UIView*))UIImageView__isUserInteractionEnabled;
    type->__fp_setTintColor = (void(*)(::app::iOS::UIKit::UIView*, ::app::iOS::UIKit::UIColor*))UIImageView__setTintColor;
    type->__fp_setUserInteractionEnabled = (void(*)(::app::iOS::UIKit::UIView*, bool))UIImageView__setUserInteractionEnabled;
    type->__fp_tintColor = (::app::iOS::UIKit::UIColor*(*)(::app::iOS::UIKit::UIView*))UIImageView__tintColor;

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}

void UIImageView___ObjInit_9(UIImageView* __this)
{
    ::app::iOS::UIKit::UIView___ObjInit_7(__this);
}

::app::iOS::UIKit::UIImage* UIImageView__get_Image(UIImageView* __this)
{
    return __this->image();
}

::app::iOS::UIKit::UIImage* UIImageView__image(UIImageView* __this)
{
    ::UIImage* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::UIImage*, @selector(image));
    return (::app::iOS::UIKit::UIImage*)uObjC::Lifetime::GetUnoObject(__return, ::app::iOS::UIKit::UIImage__typeof());
}

bool UIImageView__isUserInteractionEnabled(UIImageView* __this)
{
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(BOOL, @selector(isUserInteractionEnabled));
    return (bool)__return;
}

UIImageView* UIImageView__New_9(::uStatic* __this)
{
    UIImageView* inst = (UIImageView*)::uAllocObject(sizeof(UIImageView), UIImageView__typeof());
    inst->_ObjInit_9();
    return inst;
}

void UIImageView__set_Image(UIImageView* __this, ::app::iOS::UIKit::UIImage* value)
{
    __this->setImage(value);
}

void UIImageView__setImage(UIImageView* __this, ::app::iOS::UIKit::UIImage* image_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setImage:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)image_));
}

void UIImageView__setTintColor(UIImageView* __this, ::app::iOS::UIKit::UIColor* tintColor_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setTintColor:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)tintColor_));
}

void UIImageView__setUserInteractionEnabled(UIImageView* __this, bool userInteractionEnabled_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setUserInteractionEnabled:),
        (BOOL)userInteractionEnabled_);
}

::app::iOS::UIKit::UIColor* UIImageView__tintColor(UIImageView* __this)
{
    ::UIColor* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::UIColor*, @selector(tintColor));
    return (::app::iOS::UIKit::UIColor*)uObjC::Lifetime::GetUnoObject(__return, ::app::iOS::UIKit::UIColor__typeof());
}

}}}
