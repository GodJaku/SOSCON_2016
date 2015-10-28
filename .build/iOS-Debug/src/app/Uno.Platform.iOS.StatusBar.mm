// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.13.2/Source/Uno/Platform/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Action.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Delegate.h>
#include <app/Uno.Int.h>
#include <app/Uno.Platform.iOS.StatusBar.h>
#include <app/Uno.Platform.iOS.StatusBarAnimation.h>
#include <app/Uno.Platform.iOS.StatusBarStyle.h>
#include <Uno-iOS/AppDelegate.h>
namespace {

    static uAppDelegate *_getAppDelegate()
    {
        return (uAppDelegate *) [UIApplication sharedApplication].delegate;
    }

} // <anonymous> namespace

namespace app {
namespace Uno {
namespace Platform {
namespace iOS {

::uStaticStrong< ::uDelegate*> StatusBar__SettingsChanged;

StatusBar__uType* StatusBar__typeof()
{
    static ::uStaticStrong<StatusBar__uType*> type;
    if (type != NULL) return type;

    type = (StatusBar__uType*)::uAllocClassType(sizeof(StatusBar__uType), "Uno.Platform.iOS.StatusBar");

    return type;
}

int StatusBar__get_Animation(::uStatic* __this)
{
    return StatusBar__GetAnimation(NULL);
}

bool StatusBar__get_IsVisible(::uStatic* __this)
{
    return StatusBar__GetIsVisible(NULL);
}

int StatusBar__get_Style(::uStatic* __this)
{
    return StatusBar__GetStyle(NULL);
}

int StatusBar__GetAnimation(::uStatic* __this)
{
    switch (_getAppDelegate().uStatusBarAnimation)
    {
        default:
        case UIStatusBarAnimationNone:
            return 0;
        case UIStatusBarAnimationFade:
            return 1;
        case UIStatusBarAnimationSlide:
            return 2;
    }
}

bool StatusBar__GetIsVisible(::uStatic* __this)
{
    return _getAppDelegate().uStatusBarVisible;
}

int StatusBar__GetStyle(::uStatic* __this)
{
    switch (_getAppDelegate().uStatusBarStyle)
    {
        case UIStatusBarStyleDefault:
            return 0;
    
        default:
        case UIStatusBarStyleLightContent:
            return 1;
    }
}

void StatusBar__OnSettingsChanged(::uStatic* __this)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)StatusBar__SettingsChanged, NULL))
    {
        ::uPtr< ::uDelegate*>(StatusBar__SettingsChanged)->InvokeVoid();
    }
}

void StatusBar__set_Animation(::uStatic* __this, int value)
{
    if (value != StatusBar__get_Animation(NULL))
    {
        StatusBar__SetAnimation(NULL, value);
        StatusBar__OnSettingsChanged(NULL);
    }
}

void StatusBar__set_IsVisible(::uStatic* __this, bool value)
{
    if (value != StatusBar__get_IsVisible(NULL))
    {
        StatusBar__SetIsVisible(NULL, value);
        StatusBar__OnSettingsChanged(NULL);
    }
}

void StatusBar__set_Style(::uStatic* __this, int value)
{
    if (value != StatusBar__get_Style(NULL))
    {
        StatusBar__SetStyle(NULL, value);
        StatusBar__OnSettingsChanged(NULL);
    }
}

void StatusBar__SetAnimation(::uStatic* __this, int animation_)
{
    UIStatusBarAnimation animation;
    
    switch (animation_)
    {
        case 0:
            animation = UIStatusBarAnimationNone;
            break;
        case 1:
            animation = UIStatusBarAnimationFade;
            break;
        case 2:
            animation = UIStatusBarAnimationSlide;
            break;
    }
    
    _getAppDelegate().uStatusBarAnimation = animation;
}

void StatusBar__SetIsVisible(::uStatic* __this, bool isVisible_)
{
    _getAppDelegate().uStatusBarVisible = isVisible_;
}

void StatusBar__SetStyle(::uStatic* __this, int style_)
{
    _getAppDelegate().uStatusBarStyle
        = 0 == style_
            ? UIStatusBarStyleDefault
            : UIStatusBarStyleLightContent;
}

}}}}
