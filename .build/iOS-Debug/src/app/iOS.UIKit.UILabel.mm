// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE UILabel
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::app::iOS::UIKit::UILabel*
#define uObjC_UNO_TYPE_OBJECT ::app::iOS::UIKit::UILabel__typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <app/iOS.UIKit.NSLineBreakMode.h>
#include <app/iOS.UIKit.NSTextAlignment.h>
#include <app/iOS.UIKit.UIColor.h>
#include <app/iOS.UIKit.UIFont.h>
#include <app/iOS.UIKit.UILabel.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Int.h>
#include <app/Uno.String.h>

namespace app {
namespace iOS {
namespace UIKit {

UILabel__uType* UILabel__typeof()
{
    static ::uStaticStrong<UILabel__uType*> type;
    if (type != NULL) return type;

    type = (UILabel__uType*)::uAllocClassType(sizeof(UILabel__uType), "iOS.UIKit.UILabel", false, 0, 0, 0);

    type->SetBaseType(::app::iOS::UIKit::UIView__typeof());
    type->__fp_isUserInteractionEnabled = (bool(*)(::app::iOS::UIKit::UIView*))UILabel__isUserInteractionEnabled;
    type->__fp_setUserInteractionEnabled = (void(*)(::app::iOS::UIKit::UIView*, bool))UILabel__setUserInteractionEnabled;

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}

void UILabel___ObjInit_9(UILabel* __this)
{
    ::app::iOS::UIKit::UIView___ObjInit_7(__this);
}

::app::iOS::UIKit::UIFont* UILabel__font(UILabel* __this)
{
    ::UIFont* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::UIFont*, @selector(font));
    return (::app::iOS::UIKit::UIFont*)uObjC::Lifetime::GetUnoObject(__return, ::app::iOS::UIKit::UIFont__typeof());
}

::app::iOS::UIKit::UIFont* UILabel__get_Font(UILabel* __this)
{
    return __this->font();
}

int UILabel__get_LineBreakMode(UILabel* __this)
{
    return __this->lineBreakMode();
}

int UILabel__get_NumberOfLines(UILabel* __this)
{
    return __this->numberOfLines();
}

::uString* UILabel__get_Text(UILabel* __this)
{
    return __this->text();
}

int UILabel__get_TextAlignment(UILabel* __this)
{
    return __this->textAlignment();
}

::app::iOS::UIKit::UIColor* UILabel__get_TextColor(UILabel* __this)
{
    return __this->textColor();
}

bool UILabel__isUserInteractionEnabled(UILabel* __this)
{
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(BOOL, @selector(isUserInteractionEnabled));
    return (bool)__return;
}

int UILabel__lineBreakMode(UILabel* __this)
{
    ::NSLineBreakMode __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::NSLineBreakMode, @selector(lineBreakMode));
    return int(__return);
}

UILabel* UILabel__New_9(::uStatic* __this)
{
    UILabel* inst = (UILabel*)::uAllocObject(sizeof(UILabel), UILabel__typeof());
    inst->_ObjInit_9();
    return inst;
}

int UILabel__numberOfLines(UILabel* __this)
{
    long __return = uObjC_SEND_MESSAGE_TO_INSTANCE(long, @selector(numberOfLines));
    return (int)__return;
}

void UILabel__set_Font(UILabel* __this, ::app::iOS::UIKit::UIFont* value)
{
    __this->setFont(value);
}

void UILabel__set_LineBreakMode(UILabel* __this, int value)
{
    __this->setLineBreakMode(value);
}

void UILabel__set_NumberOfLines(UILabel* __this, int value)
{
    __this->setNumberOfLines(value);
}

void UILabel__set_Text(UILabel* __this, ::uString* value)
{
    __this->setText(value);
}

void UILabel__set_TextAlignment(UILabel* __this, int value)
{
    __this->setTextAlignment(value);
}

void UILabel__set_TextColor(UILabel* __this, ::app::iOS::UIKit::UIColor* value)
{
    __this->setTextColor(value);
}

void UILabel__setFont(UILabel* __this, ::app::iOS::UIKit::UIFont* font_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setFont:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)font_));
}

void UILabel__setLineBreakMode(UILabel* __this, int lineBreakMode_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setLineBreakMode:),
        ::NSLineBreakMode(lineBreakMode_));
}

void UILabel__setNumberOfLines(UILabel* __this, int numberOfLines_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setNumberOfLines:),
        (long)numberOfLines_);
}

void UILabel__setText(UILabel* __this, ::uString* text_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setText:),
        uObjC::NativeString(text_));
}

void UILabel__setTextAlignment(UILabel* __this, int textAlignment_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setTextAlignment:),
        ::NSTextAlignment(textAlignment_));
}

void UILabel__setTextColor(UILabel* __this, ::app::iOS::UIKit::UIColor* textColor_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setTextColor:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)textColor_));
}

void UILabel__setUserInteractionEnabled(UILabel* __this, bool userInteractionEnabled_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setUserInteractionEnabled:),
        (BOOL)userInteractionEnabled_);
}

::uString* UILabel__text(UILabel* __this)
{
    ::NSString * __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::NSString *, @selector(text));
    return uObjC::UnoString(__return);
}

int UILabel__textAlignment(UILabel* __this)
{
    ::NSTextAlignment __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::NSTextAlignment, @selector(textAlignment));
    return int(__return);
}

::app::iOS::UIKit::UIColor* UILabel__textColor(UILabel* __this)
{
    ::UIColor* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::UIColor*, @selector(textColor));
    return (::app::iOS::UIKit::UIColor*)uObjC::Lifetime::GetUnoObject(__return, ::app::iOS::UIKit::UIColor__typeof());
}

}}}
