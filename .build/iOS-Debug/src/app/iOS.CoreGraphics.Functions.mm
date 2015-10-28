// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/functions/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/iOS.CoreFoundation.CFStringRef.h>
#include <app/iOS.CoreGraphics.CGAffineTransform.h>
#include <app/iOS.CoreGraphics.CGBitmapInfo.h>
#include <app/iOS.CoreGraphics.CGColorSpaceRef.h>
#include <app/iOS.CoreGraphics.CGContextRef.h>
#include <app/iOS.CoreGraphics.CGDataProviderRef.h>
#include <app/iOS.CoreGraphics.CGFontRef.h>
#include <app/iOS.CoreGraphics.CGPoint.h>
#include <app/iOS.CoreGraphics.CGRect.h>
#include <app/iOS.CoreGraphics.CGSize.h>
#include <app/iOS.CoreGraphics.Functions.h>
#include <app/Uno.Double.h>
#include <app/Uno.IntPtr.h>
#include <app/Uno.ULong.h>
#include <CoreGraphics/CoreGraphics.h>

namespace app {
namespace iOS {
namespace CoreGraphics {

Functions__uType* Functions__typeof()
{
    static ::uStaticStrong<Functions__uType*> type;
    if (type != NULL) return type;

    type = (Functions__uType*)::uAllocClassType(sizeof(Functions__uType), "iOS.CoreGraphics.Functions");

    return type;
}

::app::iOS::CoreGraphics::CGAffineTransform Functions__CGAffineTransformMakeScale(::uStatic* __this, double sx, double sy)
{
    ::app::iOS::CoreGraphics::CGAffineTransform __return = uObjC::Struct::ToUno_CGAffineTransform(CGAffineTransformMakeScale((CGFloat)sx, (CGFloat)sy), ::app::iOS::CoreGraphics::CGAffineTransform());
    return __return;
}

app::CGContextRef* Functions__CGBitmapContextCreate(::uStatic* __this, void* data, ::uULong width, ::uULong height, ::uULong bitsPerComponent, ::uULong bytesPerRow, app::CGColorSpaceRef* space, ::uUInt bitmapInfo)
{
    app::CGContextRef* __return = (app::CGContextRef*)(size_t) CGBitmapContextCreate((void*)data, (unsigned long)width, (unsigned long)height, (unsigned long)bitsPerComponent, (unsigned long)bytesPerRow, (::CGColorSpaceRef)(size_t) space, ::CGBitmapInfo(bitmapInfo));
    return __return;
}

app::CGColorSpaceRef* Functions__CGColorSpaceCreateDeviceRGB(::uStatic* __this)
{
    app::CGColorSpaceRef* __return = (app::CGColorSpaceRef*)(size_t) CGColorSpaceCreateDeviceRGB();
    return __return;
}

void Functions__CGContextClearRect(::uStatic* __this, app::CGContextRef* c, ::app::iOS::CoreGraphics::CGRect rect)
{
    CGContextClearRect((::CGContextRef)(size_t) c, uObjC::Struct::FromUno_CGRect(rect, ::CGRect()));
}

void Functions__CGContextRelease(::uStatic* __this, app::CGContextRef* c)
{
    CGContextRelease((::CGContextRef)(size_t) c);
}

void Functions__CGDataProviderRelease(::uStatic* __this, app::CGDataProviderRef* provider)
{
    CGDataProviderRelease((::CGDataProviderRef)(size_t) provider);
}

app::CFStringRef* Functions__CGFontCopyPostScriptName(::uStatic* __this, app::CGFontRef* font)
{
    app::CFStringRef* __return = (app::CFStringRef*)(size_t) CGFontCopyPostScriptName((::CGFontRef)(size_t) font);
    return __return;
}

app::CGFontRef* Functions__CGFontCreateWithDataProvider(::uStatic* __this, app::CGDataProviderRef* provider)
{
    app::CGFontRef* __return = (app::CGFontRef*)(size_t) CGFontCreateWithDataProvider((::CGDataProviderRef)(size_t) provider);
    return __return;
}

void Functions__CGFontRelease(::uStatic* __this, app::CGFontRef* font)
{
    CGFontRelease((::CGFontRef)(size_t) font);
}

::app::iOS::CoreGraphics::CGPoint Functions__CGPointMake(::uStatic* __this, double x, double y)
{
    ::app::iOS::CoreGraphics::CGPoint __return = uObjC::Struct::ToUno_CGPoint(CGPointMake((CGFloat)x, (CGFloat)y), ::app::iOS::CoreGraphics::CGPoint());
    return __return;
}

::app::iOS::CoreGraphics::CGRect Functions__CGRectMake(::uStatic* __this, double x, double y, double width, double height)
{
    ::app::iOS::CoreGraphics::CGRect __return = uObjC::Struct::ToUno_CGRect(CGRectMake((CGFloat)x, (CGFloat)y, (CGFloat)width, (CGFloat)height), ::app::iOS::CoreGraphics::CGRect());
    return __return;
}

::app::iOS::CoreGraphics::CGSize Functions__CGSizeApplyAffineTransform(::uStatic* __this, ::app::iOS::CoreGraphics::CGSize size, ::app::iOS::CoreGraphics::CGAffineTransform t)
{
    ::app::iOS::CoreGraphics::CGSize __return = uObjC::Struct::ToUno_CGSize(CGSizeApplyAffineTransform(uObjC::Struct::FromUno_CGSize(size, ::CGSize()), uObjC::Struct::FromUno_CGAffineTransform(t, ::CGAffineTransform())), ::app::iOS::CoreGraphics::CGSize());
    return __return;
}

::app::iOS::CoreGraphics::CGSize Functions__CGSizeMake(::uStatic* __this, double width, double height)
{
    ::app::iOS::CoreGraphics::CGSize __return = uObjC::Struct::ToUno_CGSize(CGSizeMake((CGFloat)width, (CGFloat)height), ::app::iOS::CoreGraphics::CGSize());
    return __return;
}

}}}
