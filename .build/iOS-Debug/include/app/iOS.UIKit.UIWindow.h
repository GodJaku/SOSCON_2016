// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_I_O_S_U_I_KIT_U_I_WINDOW_H__
#define __APP_I_O_S_U_I_KIT_U_I_WINDOW_H__

#include <app/iOS.UIKit.UIView.h>
#include <Uno.h>
namespace app { namespace iOS { namespace UIKit { struct UIViewController; } } }

namespace app {
namespace iOS {
namespace UIKit {

struct UIWindow;

struct UIWindow__uType : ::app::iOS::UIKit::UIView__uType
{
};

UIWindow__uType* UIWindow__typeof();

::app::iOS::UIKit::UIViewController* UIWindow__get_RootViewController(UIWindow* __this);
::app::iOS::UIKit::UIViewController* UIWindow__rootViewController(UIWindow* __this);
void UIWindow__set_RootViewController(UIWindow* __this, ::app::iOS::UIKit::UIViewController* value);
void UIWindow__setRootViewController(UIWindow* __this, ::app::iOS::UIKit::UIViewController* rootViewController_);

struct UIWindow : ::app::iOS::UIKit::UIView
{
    ::app::iOS::UIKit::UIViewController* RootViewController() { return UIWindow__get_RootViewController(this); }
    ::app::iOS::UIKit::UIViewController* rootViewController() { return UIWindow__rootViewController(this); }
    void RootViewController(::app::iOS::UIKit::UIViewController* value) { UIWindow__set_RootViewController(this, value); }
    void setRootViewController(::app::iOS::UIKit::UIViewController* rootViewController_) { UIWindow__setRootViewController(this, rootViewController_); }
};

}}}


#endif
