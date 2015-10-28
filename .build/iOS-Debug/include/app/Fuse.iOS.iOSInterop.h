// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_I_O_S_I_O_S_INTEROP_H__
#define __APP_FUSE_I_O_S_I_O_S_INTEROP_H__

#include <Uno.h>
namespace app { namespace iOS { namespace CoreGraphics { struct CGSize; } } }
namespace app { namespace iOS { namespace UIKit { struct UIView; } } }
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {
namespace iOS {

struct iOSInterop__uType : ::uClassType
{
};

iOSInterop__uType* iOSInterop__typeof();

::app::Uno::Float2 iOSInterop__GetContentSize(::uStatic* __this, ::app::iOS::UIKit::UIView* view, ::app::Uno::Float2 fillSize, int fillSet, float scale);
::app::iOS::CoreGraphics::CGSize iOSInterop__ToCGSize(::uStatic* __this, ::app::Uno::Float2 unoSize, float scale);
::app::Uno::Float2 iOSInterop__ToFloat2(::uStatic* __this, ::app::iOS::CoreGraphics::CGSize size, float scale);

}}}


#endif
