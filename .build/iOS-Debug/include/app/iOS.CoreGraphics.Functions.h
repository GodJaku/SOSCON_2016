// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/functions/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_I_O_S_CORE_GRAPHICS_FUNCTIONS_H__
#define __APP_I_O_S_CORE_GRAPHICS_FUNCTIONS_H__

#include <Uno.h>
namespace app { namespace iOS { namespace CoreGraphics { struct CGAffineTransform; } } }
namespace app { namespace iOS { namespace CoreGraphics { struct CGPoint; } } }
namespace app { namespace iOS { namespace CoreGraphics { struct CGRect; } } }
namespace app { namespace iOS { namespace CoreGraphics { struct CGSize; } } }

namespace app {
namespace iOS {
namespace CoreGraphics {

struct Functions__uType : ::uClassType
{
};

Functions__uType* Functions__typeof();

::app::iOS::CoreGraphics::CGAffineTransform Functions__CGAffineTransformMakeScale(::uStatic* __this, double sx, double sy);
app::CGContextRef* Functions__CGBitmapContextCreate(::uStatic* __this, void* data, ::uULong width, ::uULong height, ::uULong bitsPerComponent, ::uULong bytesPerRow, app::CGColorSpaceRef* space, ::uUInt bitmapInfo);
app::CGColorSpaceRef* Functions__CGColorSpaceCreateDeviceRGB(::uStatic* __this);
void Functions__CGContextClearRect(::uStatic* __this, app::CGContextRef* c, ::app::iOS::CoreGraphics::CGRect rect);
void Functions__CGContextRelease(::uStatic* __this, app::CGContextRef* c);
void Functions__CGDataProviderRelease(::uStatic* __this, app::CGDataProviderRef* provider);
app::CFStringRef* Functions__CGFontCopyPostScriptName(::uStatic* __this, app::CGFontRef* font);
app::CGFontRef* Functions__CGFontCreateWithDataProvider(::uStatic* __this, app::CGDataProviderRef* provider);
void Functions__CGFontRelease(::uStatic* __this, app::CGFontRef* font);
::app::iOS::CoreGraphics::CGPoint Functions__CGPointMake(::uStatic* __this, double x, double y);
::app::iOS::CoreGraphics::CGRect Functions__CGRectMake(::uStatic* __this, double x, double y, double width, double height);
::app::iOS::CoreGraphics::CGSize Functions__CGSizeApplyAffineTransform(::uStatic* __this, ::app::iOS::CoreGraphics::CGSize size, ::app::iOS::CoreGraphics::CGAffineTransform t);
::app::iOS::CoreGraphics::CGSize Functions__CGSizeMake(::uStatic* __this, double width, double height);

}}}


#endif
