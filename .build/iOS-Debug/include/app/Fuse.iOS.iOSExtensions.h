// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_I_O_S_I_O_S_EXTENSIONS_H__
#define __APP_FUSE_I_O_S_I_O_S_EXTENSIONS_H__

#include <Uno.h>
namespace app { namespace iOS { namespace CoreGraphics { struct CGPoint; } } }
namespace app { namespace iOS { namespace CoreGraphics { struct CGSize; } } }
namespace app { namespace iOS { namespace UIKit { struct UIColor; } } }
namespace app { namespace Uno { struct Float2; } }
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Fuse {
namespace iOS {

struct iOSExtensions__uType : ::uClassType
{
};

iOSExtensions__uType* iOSExtensions__typeof();

::app::iOS::CoreGraphics::CGPoint iOSExtensions__ToCGPoint(::uStatic* __this, ::app::Uno::Float2 f);
::app::iOS::CoreGraphics::CGSize iOSExtensions__ToCGSize(::uStatic* __this, ::app::Uno::Float2 f);
::app::Uno::Float2 iOSExtensions__ToFloat2_1(::uStatic* __this, ::app::iOS::CoreGraphics::CGPoint point);
::app::iOS::UIKit::UIColor* iOSExtensions__ToUIColor(::uStatic* __this, ::app::Uno::Float4 color);

}}}


#endif
