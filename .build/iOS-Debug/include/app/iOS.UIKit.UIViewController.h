// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_I_O_S_U_I_KIT_U_I_VIEW_CONTROLLER_H__
#define __APP_I_O_S_U_I_KIT_U_I_VIEW_CONTROLLER_H__

#include <app/iOS.UIKit.UIResponder.h>
#include <Uno.h>

namespace app {
namespace iOS {
namespace UIKit {

struct UIViewController;

struct UIViewController__uType : ::app::iOS::UIKit::UIResponder__uType
{
};

UIViewController__uType* UIViewController__typeof();

void UIViewController___ObjInit_7(UIViewController* __this);
void UIViewController__dismissModalViewControllerAnimated(UIViewController* __this, bool animated_);
void UIViewController__presentModalViewControllerAnimated(UIViewController* __this, UIViewController* modalViewController_, bool animated_);

struct UIViewController : ::app::iOS::UIKit::UIResponder
{
    void _ObjInit_7() { UIViewController___ObjInit_7(this); }
    void dismissModalViewControllerAnimated(bool animated_) { UIViewController__dismissModalViewControllerAnimated(this, animated_); }
    void presentModalViewControllerAnimated(UIViewController* modalViewController_, bool animated_) { UIViewController__presentModalViewControllerAnimated(this, modalViewController_, animated_); }
};

}}}


#endif
