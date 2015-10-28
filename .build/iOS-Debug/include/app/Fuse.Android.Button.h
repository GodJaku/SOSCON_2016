// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Android.Views/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANDROID_BUTTON_H__
#define __APP_FUSE_ANDROID_BUTTON_H__

#include <app/Fuse.Android.View.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <Uno.h>
namespace app { namespace Fuse { struct StyleProperty__Fuse_Android_Button__float4; } }

namespace app {
namespace Fuse {
namespace Android {

struct Button;

extern ::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Android_Button__float4*> Button__TextColorProperty;

struct Button__uType : ::app::Fuse::Android::View__uType
{
};

Button__uType* Button__typeof();

void Button___TypeInit_1(::uStatic* __this);
void Button__OnButtonPropertyChanged(::uStatic* __this, Button* t);

struct Button : ::app::Fuse::Android::View
{
};

}}}


#endif
