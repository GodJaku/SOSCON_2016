// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/functions/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_I_O_S_U_I_KIT_FUNCTIONS_H__
#define __APP_I_O_S_U_I_KIT_FUNCTIONS_H__

#include <Uno.h>
namespace app { namespace iOS { namespace CoreGraphics { struct CGSize; } } }
namespace app { namespace iOS { namespace UIKit { struct UIImage; } } }

namespace app {
namespace iOS {
namespace UIKit {

struct Functions__uType : ::uClassType
{
};

Functions__uType* Functions__typeof();

void Functions__UIGraphicsBeginImageContextWithOptions(::uStatic* __this, ::app::iOS::CoreGraphics::CGSize size, bool opaque, double scale);
void Functions__UIGraphicsEndImageContext(::uStatic* __this);
::app::iOS::UIKit::UIImage* Functions__UIGraphicsGetImageFromCurrentImageContext(::uStatic* __this);
void Functions__UIGraphicsPopContext(::uStatic* __this);
void Functions__UIGraphicsPushContext(::uStatic* __this, app::CGContextRef* context);

}}}


#endif
