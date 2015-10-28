// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_I_O_S_U_I_KIT_U_I_APPLICATION_H__
#define __APP_I_O_S_U_I_KIT_U_I_APPLICATION_H__

#include <app/iOS.UIKit.UIResponder.h>
#include <Uno.h>
namespace app { namespace iOS { namespace Foundation { struct NSURL; } } }
namespace app { namespace iOS { namespace UIKit { struct UIWindow; } } }

namespace app {
namespace iOS {
namespace UIKit {

struct UIApplication;

struct UIApplication__uType : ::app::iOS::UIKit::UIResponder__uType
{
};

UIApplication__uType* UIApplication__typeof();

UIApplication* UIApplication___sharedApplication(::uStatic* __this);
::app::iOS::UIKit::UIWindow* UIApplication__get_KeyWindow(UIApplication* __this);
int UIApplication__get_StatusBarOrientation(UIApplication* __this);
::app::iOS::UIKit::UIWindow* UIApplication__keyWindow(UIApplication* __this);
bool UIApplication__openURL(UIApplication* __this, ::app::iOS::Foundation::NSURL* url_);
void UIApplication__set_StatusBarOrientation(UIApplication* __this, int value);
void UIApplication__setStatusBarOrientation(UIApplication* __this, int statusBarOrientation_);
int UIApplication__statusBarOrientation(UIApplication* __this);

struct UIApplication : ::app::iOS::UIKit::UIResponder
{
    ::app::iOS::UIKit::UIWindow* KeyWindow() { return UIApplication__get_KeyWindow(this); }
    int StatusBarOrientation() { return UIApplication__get_StatusBarOrientation(this); }
    ::app::iOS::UIKit::UIWindow* keyWindow() { return UIApplication__keyWindow(this); }
    bool openURL(::app::iOS::Foundation::NSURL* url_) { return UIApplication__openURL(this, url_); }
    void StatusBarOrientation(int value) { UIApplication__set_StatusBarOrientation(this, value); }
    void setStatusBarOrientation(int statusBarOrientation_) { UIApplication__setStatusBarOrientation(this, statusBarOrientation_); }
    int statusBarOrientation() { return UIApplication__statusBarOrientation(this); }
};

}}}


#endif
