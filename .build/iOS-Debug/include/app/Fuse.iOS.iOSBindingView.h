// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_I_O_S_I_O_S_BINDING_VIEW_H__
#define __APP_FUSE_I_O_S_I_O_S_BINDING_VIEW_H__

#include <Uno.h>
#include <Uno/Platform2.h>
namespace app { namespace iOS { namespace UIKit { struct UIView; } } }
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {
namespace iOS {

struct iOSBindingView__uType : ::uClassType
{
};

iOSBindingView__uType* iOSBindingView__typeof();

::app::Uno::Float2 iOSBindingView__GetContentSize(::uStatic* __this, ::app::iOS::UIKit::UIView* view, ::app::Uno::Float2 fillSize, int fillSet);
uPlatform2::ViewNativeHandle iOSBindingView__GetNativeViewHandle(::uStatic* __this, ::app::iOS::UIKit::UIView* view);

}}}


#endif
