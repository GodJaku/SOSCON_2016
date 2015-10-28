// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_I_O_S_U_I_KIT_U_I_IMAGE_VIEW_H__
#define __APP_I_O_S_U_I_KIT_U_I_IMAGE_VIEW_H__

#include <app/iOS.UIKit.UIView.h>
#include <Uno.h>
namespace app { namespace iOS { namespace UIKit { struct UIColor; } } }
namespace app { namespace iOS { namespace UIKit { struct UIImage; } } }

namespace app {
namespace iOS {
namespace UIKit {

struct UIImageView;

struct UIImageView__uType : ::app::iOS::UIKit::UIView__uType
{
};

UIImageView__uType* UIImageView__typeof();

void UIImageView___ObjInit_9(UIImageView* __this);
::app::iOS::UIKit::UIImage* UIImageView__get_Image(UIImageView* __this);
::app::iOS::UIKit::UIImage* UIImageView__image(UIImageView* __this);
bool UIImageView__isUserInteractionEnabled(UIImageView* __this);
UIImageView* UIImageView__New_9(::uStatic* __this);
void UIImageView__set_Image(UIImageView* __this, ::app::iOS::UIKit::UIImage* value);
void UIImageView__setImage(UIImageView* __this, ::app::iOS::UIKit::UIImage* image_);
void UIImageView__setTintColor(UIImageView* __this, ::app::iOS::UIKit::UIColor* tintColor_);
void UIImageView__setUserInteractionEnabled(UIImageView* __this, bool userInteractionEnabled_);
::app::iOS::UIKit::UIColor* UIImageView__tintColor(UIImageView* __this);

struct UIImageView : ::app::iOS::UIKit::UIView
{
    void _ObjInit_9() { UIImageView___ObjInit_9(this); }
    ::app::iOS::UIKit::UIImage* Image() { return UIImageView__get_Image(this); }
    ::app::iOS::UIKit::UIImage* image() { return UIImageView__image(this); }
    void Image(::app::iOS::UIKit::UIImage* value) { UIImageView__set_Image(this, value); }
    void setImage(::app::iOS::UIKit::UIImage* image_) { UIImageView__setImage(this, image_); }
};

}}}


#endif
