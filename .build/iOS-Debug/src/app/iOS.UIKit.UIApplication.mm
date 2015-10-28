// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE UIApplication
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::app::iOS::UIKit::UIApplication*
#define uObjC_UNO_TYPE_OBJECT ::app::iOS::UIKit::UIApplication__typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <app/iOS.Foundation.NSURL.h>
#include <app/iOS.UIKit.UIApplication.h>
#include <app/iOS.UIKit.UIInterfaceOrientation.h>
#include <app/iOS.UIKit.UIWindow.h>
#include <app/Uno.Bool.h>

namespace app {
namespace iOS {
namespace UIKit {

UIApplication__uType* UIApplication__typeof()
{
    static ::uStaticStrong<UIApplication__uType*> type;
    if (type != NULL) return type;

    type = (UIApplication__uType*)::uAllocClassType(sizeof(UIApplication__uType), "iOS.UIKit.UIApplication", false, 0, 0, 0);

    type->SetBaseType(::app::iOS::UIKit::UIResponder__typeof());

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}

UIApplication* UIApplication___sharedApplication(::uStatic* __this)
{
    ::UIApplication* __return = uObjC_SEND_MESSAGE_TO_CLASS(::UIApplication*, @selector(sharedApplication));
    return (UIApplication*)uObjC::Lifetime::GetUnoObject(__return, ::app::iOS::UIKit::UIApplication__typeof());
}

::app::iOS::UIKit::UIWindow* UIApplication__get_KeyWindow(UIApplication* __this)
{
    return __this->keyWindow();
}

int UIApplication__get_StatusBarOrientation(UIApplication* __this)
{
    return __this->statusBarOrientation();
}

::app::iOS::UIKit::UIWindow* UIApplication__keyWindow(UIApplication* __this)
{
    ::UIWindow* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::UIWindow*, @selector(keyWindow));
    return (::app::iOS::UIKit::UIWindow*)uObjC::Lifetime::GetUnoObject(__return, ::app::iOS::UIKit::UIWindow__typeof());
}

bool UIApplication__openURL(UIApplication* __this, ::app::iOS::Foundation::NSURL* url_)
{
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(BOOL, @selector(openURL:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)url_));
    return (bool)__return;
}

void UIApplication__set_StatusBarOrientation(UIApplication* __this, int value)
{
    __this->setStatusBarOrientation(value);
}

void UIApplication__setStatusBarOrientation(UIApplication* __this, int statusBarOrientation_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setStatusBarOrientation:),
        ::UIInterfaceOrientation(statusBarOrientation_));
}

int UIApplication__statusBarOrientation(UIApplication* __this)
{
    ::UIInterfaceOrientation __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::UIInterfaceOrientation, @selector(statusBarOrientation));
    return int(__return);
}

}}}
