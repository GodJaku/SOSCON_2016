// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.11.3/Controls/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_I_O_S_CONTROLS_SWITCH_H__
#define __APP_FUSE_I_O_S_CONTROLS_SWITCH_H__

#include <app/Fuse.iOS.Controls.Control__Fuse_Controls_Switch.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace iOS { struct ControlEvent; } } }
namespace app { namespace iOS { namespace Foundation { struct NSObject; } } }
namespace app { namespace iOS { namespace UIKit { struct UIEvent; } } }
namespace app { namespace iOS { namespace UIKit { struct UISwitch; } } }
namespace app { namespace iOS { namespace UIKit { struct UIView; } } }
namespace app { namespace Uno { namespace UX { struct ValueChangedArgs__bool; } } }

namespace app {
namespace Fuse {
namespace iOS {
namespace Controls {

struct Switch;

struct Switch__uType : ::app::Fuse::iOS::Controls::Control__Fuse_Controls_Switch__uType
{
};

Switch__uType* Switch__typeof();

void Switch__Finalize(Switch* __this);
void Switch___ObjInit_3(Switch* __this);
void Switch__Attach(Switch* __this);
::app::iOS::UIKit::UIView* Switch__CreateInternal(Switch* __this);
void Switch__Detach(Switch* __this);
Switch* Switch__New_1(::uStatic* __this);
void Switch__OnToggled(Switch* __this, ::app::iOS::Foundation::NSObject* sender, ::app::iOS::UIKit::UIEvent* uiEvent);
void Switch__OnValueChanged(Switch* __this, ::uObject* sender, ::app::Uno::UX::ValueChangedArgs__bool* args);

struct Switch : ::app::Fuse::iOS::Controls::Control__Fuse_Controls_Switch
{
    ::uStrong< ::app::iOS::UIKit::UISwitch*> _switch;
    ::uStrong< ::app::Fuse::iOS::ControlEvent*> _toggled;

    void _ObjInit_3() { Switch___ObjInit_3(this); }
    void OnToggled(::app::iOS::Foundation::NSObject* sender, ::app::iOS::UIKit::UIEvent* uiEvent) { Switch__OnToggled(this, sender, uiEvent); }
    void OnValueChanged(::uObject* sender, ::app::Uno::UX::ValueChangedArgs__bool* args) { Switch__OnValueChanged(this, sender, args); }
};

}}}}


#endif
