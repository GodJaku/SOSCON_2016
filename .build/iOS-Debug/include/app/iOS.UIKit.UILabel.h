// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_I_O_S_U_I_KIT_U_I_LABEL_H__
#define __APP_I_O_S_U_I_KIT_U_I_LABEL_H__

#include <app/iOS.UIKit.UIView.h>
#include <Uno.h>
namespace app { namespace iOS { namespace UIKit { struct UIColor; } } }
namespace app { namespace iOS { namespace UIKit { struct UIFont; } } }

namespace app {
namespace iOS {
namespace UIKit {

struct UILabel;

struct UILabel__uType : ::app::iOS::UIKit::UIView__uType
{
};

UILabel__uType* UILabel__typeof();

void UILabel___ObjInit_9(UILabel* __this);
::app::iOS::UIKit::UIFont* UILabel__font(UILabel* __this);
::app::iOS::UIKit::UIFont* UILabel__get_Font(UILabel* __this);
int UILabel__get_LineBreakMode(UILabel* __this);
int UILabel__get_NumberOfLines(UILabel* __this);
::uString* UILabel__get_Text(UILabel* __this);
int UILabel__get_TextAlignment(UILabel* __this);
::app::iOS::UIKit::UIColor* UILabel__get_TextColor(UILabel* __this);
bool UILabel__isUserInteractionEnabled(UILabel* __this);
int UILabel__lineBreakMode(UILabel* __this);
UILabel* UILabel__New_9(::uStatic* __this);
int UILabel__numberOfLines(UILabel* __this);
void UILabel__set_Font(UILabel* __this, ::app::iOS::UIKit::UIFont* value);
void UILabel__set_LineBreakMode(UILabel* __this, int value);
void UILabel__set_NumberOfLines(UILabel* __this, int value);
void UILabel__set_Text(UILabel* __this, ::uString* value);
void UILabel__set_TextAlignment(UILabel* __this, int value);
void UILabel__set_TextColor(UILabel* __this, ::app::iOS::UIKit::UIColor* value);
void UILabel__setFont(UILabel* __this, ::app::iOS::UIKit::UIFont* font_);
void UILabel__setLineBreakMode(UILabel* __this, int lineBreakMode_);
void UILabel__setNumberOfLines(UILabel* __this, int numberOfLines_);
void UILabel__setText(UILabel* __this, ::uString* text_);
void UILabel__setTextAlignment(UILabel* __this, int textAlignment_);
void UILabel__setTextColor(UILabel* __this, ::app::iOS::UIKit::UIColor* textColor_);
void UILabel__setUserInteractionEnabled(UILabel* __this, bool userInteractionEnabled_);
::uString* UILabel__text(UILabel* __this);
int UILabel__textAlignment(UILabel* __this);
::app::iOS::UIKit::UIColor* UILabel__textColor(UILabel* __this);

struct UILabel : ::app::iOS::UIKit::UIView
{
    void _ObjInit_9() { UILabel___ObjInit_9(this); }
    ::app::iOS::UIKit::UIFont* font() { return UILabel__font(this); }
    ::app::iOS::UIKit::UIFont* Font() { return UILabel__get_Font(this); }
    int LineBreakMode() { return UILabel__get_LineBreakMode(this); }
    int NumberOfLines() { return UILabel__get_NumberOfLines(this); }
    ::uString* Text() { return UILabel__get_Text(this); }
    int TextAlignment() { return UILabel__get_TextAlignment(this); }
    ::app::iOS::UIKit::UIColor* TextColor() { return UILabel__get_TextColor(this); }
    int lineBreakMode() { return UILabel__lineBreakMode(this); }
    int numberOfLines() { return UILabel__numberOfLines(this); }
    void Font(::app::iOS::UIKit::UIFont* value) { UILabel__set_Font(this, value); }
    void LineBreakMode(int value) { UILabel__set_LineBreakMode(this, value); }
    void NumberOfLines(int value) { UILabel__set_NumberOfLines(this, value); }
    void Text(::uString* value) { UILabel__set_Text(this, value); }
    void TextAlignment(int value) { UILabel__set_TextAlignment(this, value); }
    void TextColor(::app::iOS::UIKit::UIColor* value) { UILabel__set_TextColor(this, value); }
    void setFont(::app::iOS::UIKit::UIFont* font_) { UILabel__setFont(this, font_); }
    void setLineBreakMode(int lineBreakMode_) { UILabel__setLineBreakMode(this, lineBreakMode_); }
    void setNumberOfLines(int numberOfLines_) { UILabel__setNumberOfLines(this, numberOfLines_); }
    void setText(::uString* text_) { UILabel__setText(this, text_); }
    void setTextAlignment(int textAlignment_) { UILabel__setTextAlignment(this, textAlignment_); }
    void setTextColor(::app::iOS::UIKit::UIColor* textColor_) { UILabel__setTextColor(this, textColor_); }
    ::uString* text() { return UILabel__text(this); }
    int textAlignment() { return UILabel__textAlignment(this); }
    ::app::iOS::UIKit::UIColor* textColor() { return UILabel__textColor(this); }
};

}}}


#endif
