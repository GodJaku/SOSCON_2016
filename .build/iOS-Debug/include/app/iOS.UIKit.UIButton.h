// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_I_O_S_U_I_KIT_U_I_BUTTON_H__
#define __APP_I_O_S_U_I_KIT_U_I_BUTTON_H__

#include <app/iOS.UIKit.UIControl.h>
#include <Uno.h>
#include <uObjC.h>
namespace app { namespace iOS { namespace UIKit { struct UIColor; } } }

namespace app {
namespace iOS {
namespace UIKit {

struct UIButton;

struct UIButton__uType : ::app::iOS::UIKit::UIControl__uType
{
};

UIButton__uType* UIButton__typeof();

::id UIButton___buttonWithType(::uStatic* __this, int buttonType_);
void UIButton___ObjInit_10(UIButton* __this, ::id __id);
UIButton* UIButton__New_12(::uStatic* __this, ::id __id);
void UIButton__setTintColor(UIButton* __this, ::app::iOS::UIKit::UIColor* tintColor_);
void UIButton__setTitleColorForState(UIButton* __this, ::app::iOS::UIKit::UIColor* color_, ::uUInt state_);
void UIButton__setTitleForState(UIButton* __this, ::uString* title_, ::uUInt state_);
::app::iOS::UIKit::UIColor* UIButton__tintColor(UIButton* __this);

struct UIButton : ::app::iOS::UIKit::UIControl
{
    void _ObjInit_10(::id __id) { UIButton___ObjInit_10(this, __id); }
    void setTitleColorForState(::app::iOS::UIKit::UIColor* color_, ::uUInt state_) { UIButton__setTitleColorForState(this, color_, state_); }
    void setTitleForState(::uString* title_, ::uUInt state_) { UIButton__setTitleForState(this, title_, state_); }
};

}}}


#endif
