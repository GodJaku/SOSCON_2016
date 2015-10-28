// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_I_O_S_INPUT_DISPATCH_TOUCH_EVENTS_H__
#define __APP_FUSE_I_O_S_INPUT_DISPATCH_TOUCH_EVENTS_H__

#include <app/Fuse.iOS.UIControlCallback.h>
#include <Uno.h>
namespace app { namespace iOS { namespace Foundation { struct NSObject; } } }
namespace app { namespace iOS { namespace UIKit { struct UIEvent; } } }
namespace app { namespace Uno { namespace Collections { struct List__object; } } }

namespace app {
namespace Fuse {
namespace iOS {

struct InputDispatch_TouchEvents;

struct InputDispatch_TouchEvents__uType : ::app::Fuse::iOS::UIControlCallback__uType
{
};

InputDispatch_TouchEvents__uType* InputDispatch_TouchEvents__typeof();

void InputDispatch_TouchEvents___ObjInit_6(InputDispatch_TouchEvents* __this);
void InputDispatch_TouchEvents__callback(InputDispatch_TouchEvents* __this, ::app::iOS::Foundation::NSObject* sender, ::app::iOS::UIKit::UIEvent* uiEvent);
void InputDispatch_TouchEvents__LostCallback(InputDispatch_TouchEvents* __this);
InputDispatch_TouchEvents* InputDispatch_TouchEvents__New_7(::uStatic* __this);

struct InputDispatch_TouchEvents : ::app::Fuse::iOS::UIControlCallback
{
    ::uStrong< ::app::Uno::Collections::List__object*> _activeTouches;

    void _ObjInit_6() { InputDispatch_TouchEvents___ObjInit_6(this); }
    void LostCallback() { InputDispatch_TouchEvents__LostCallback(this); }
};

}}}


#endif
