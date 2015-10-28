// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.11.3/UIControlEvents/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_I_O_S_CONTROL_EVENT_H__
#define __APP_FUSE_I_O_S_CONTROL_EVENT_H__

#include <app/Fuse.iOS.UIControlCallback.h>
#include <app/Uno.IDisposable.h>
#include <Uno.h>
namespace app { namespace iOS { namespace Foundation { struct NSObject; } } }
namespace app { namespace iOS { namespace UIKit { struct UIControl; } } }
namespace app { namespace iOS { namespace UIKit { struct UIEvent; } } }

namespace app {
namespace Fuse {
namespace iOS {

struct ControlEvent;

struct ControlEvent__uType : ::app::Fuse::iOS::UIControlCallback__uType
{
    ::app::Uno::IDisposable __interface_0;
};

ControlEvent__uType* ControlEvent__typeof();

void ControlEvent___ObjInit_6(ControlEvent* __this, ::app::iOS::UIKit::UIControl* control, ::uDelegate* handler, ::uUInt events);
ControlEvent* ControlEvent__AddHandler(::uStatic* __this, ::app::iOS::UIKit::UIControl* control, ::uDelegate* handler, ::uUInt events);
void ControlEvent__callback(ControlEvent* __this, ::app::iOS::Foundation::NSObject* sender, ::app::iOS::UIKit::UIEvent* uiEvent);
void ControlEvent__Dispose(ControlEvent* __this);
ControlEvent* ControlEvent__New_7(::uStatic* __this, ::app::iOS::UIKit::UIControl* control, ::uDelegate* handler, ::uUInt events);

struct ControlEvent : ::app::Fuse::iOS::UIControlCallback
{
    ::uStrong< ::app::iOS::UIKit::UIControl*> _control;
    ::uStrong< ::uDelegate*> _handler;
    ::uUInt _events;
    bool _isDisposed;

    void _ObjInit_6(::app::iOS::UIKit::UIControl* control, ::uDelegate* handler, ::uUInt events) { ControlEvent___ObjInit_6(this, control, handler, events); }
    void Dispose() { ControlEvent__Dispose(this); }
};

}}}


#endif
