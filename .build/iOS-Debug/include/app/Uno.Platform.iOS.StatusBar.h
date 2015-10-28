// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.13.2/Source/Uno/Platform/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_PLATFORM_I_O_S_STATUS_BAR_H__
#define __APP_UNO_PLATFORM_I_O_S_STATUS_BAR_H__

#include <Uno.h>

namespace app {
namespace Uno {
namespace Platform {
namespace iOS {

extern ::uStaticStrong< ::uDelegate*> StatusBar__SettingsChanged;

struct StatusBar__uType : ::uClassType
{
};

StatusBar__uType* StatusBar__typeof();

int StatusBar__get_Animation(::uStatic* __this);
bool StatusBar__get_IsVisible(::uStatic* __this);
int StatusBar__get_Style(::uStatic* __this);
int StatusBar__GetAnimation(::uStatic* __this);
bool StatusBar__GetIsVisible(::uStatic* __this);
int StatusBar__GetStyle(::uStatic* __this);
void StatusBar__OnSettingsChanged(::uStatic* __this);
void StatusBar__set_Animation(::uStatic* __this, int value);
void StatusBar__set_IsVisible(::uStatic* __this, bool value);
void StatusBar__set_Style(::uStatic* __this, int value);
void StatusBar__SetAnimation(::uStatic* __this, int animation_);
void StatusBar__SetIsVisible(::uStatic* __this, bool isVisible_);
void StatusBar__SetStyle(::uStatic* __this, int style_);

}}}}


#endif
