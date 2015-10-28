// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_I_O_S_INPUT_DISPATCH_H__
#define __APP_FUSE_I_O_S_INPUT_DISPATCH_H__

#include <Uno.h>
namespace app { namespace Fuse { namespace Input { struct PointerEventData; } } }
namespace app { namespace Fuse { namespace iOS { namespace NativeViews { struct NativeView; } } } }
namespace app { namespace Fuse { namespace iOS { struct InputDispatch_TouchEvents; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace iOS { namespace UIKit { struct UITouch; } } }
namespace app { namespace iOS { namespace UIKit { struct UIView; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__iOS_UIKit_UIControl__Fuse_Node; } } }

namespace app {
namespace Fuse {
namespace iOS {

extern ::uStaticStrong< ::app::Uno::Collections::Dictionary__iOS_UIKit_UIControl__Fuse_Node*> InputDispatch___listeners;
extern ::uStaticStrong< ::app::Fuse::iOS::InputDispatch_TouchEvents*> InputDispatch___touchEvents;

struct InputDispatch__uType : ::uClassType
{
};

InputDispatch__uType* InputDispatch__typeof();

void InputDispatch___TypeInit(::uStatic* __this);
void InputDispatch__AddListener(::uStatic* __this, ::app::Fuse::iOS::NativeViews::NativeView* nativeView);
::app::Fuse::Node* InputDispatch__FindRoot(::uStatic* __this, ::app::Fuse::Node* n);
::app::Fuse::Input::PointerEventData* InputDispatch__MakePointerEventData(::uStatic* __this, ::app::iOS::UIKit::UITouch* touch, ::app::iOS::UIKit::UIView* rootView, int pointIndex);
void InputDispatch__RemoveListener(::uStatic* __this, ::app::Fuse::iOS::NativeViews::NativeView* nativeView);

}}}


#endif
