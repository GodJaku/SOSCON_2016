#include <app/iOS.CoreGraphics.CGAffineTransform.h>
#include <app/iOS.CoreGraphics.CGBitmapInfo.h>
#include <app/iOS.CoreGraphics.CGColorRef.h>
#include <app/iOS.CoreGraphics.CGColorSpaceRef.h>
#include <app/iOS.CoreGraphics.CGContextRef.h>
#include <app/iOS.CoreGraphics.CGDataProviderRef.h>
#include <app/iOS.CoreGraphics.CGFontRef.h>
#include <app/iOS.CoreGraphics.CGPathRef.h>
#include <app/iOS.CoreGraphics.CGPoint.h>
#include <app/iOS.CoreGraphics.CGRect.h>
#include <app/iOS.CoreGraphics.CGSize.h>
#include <app/Uno.Double.h>

namespace app {
namespace iOS {
namespace CoreGraphics {

// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/struct/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

CGAffineTransform__uType* CGAffineTransform__typeof()
{
    static ::uStaticStrong<CGAffineTransform__uType*> type;
    if (type != NULL) return type;

    type = (CGAffineTransform__uType*)::uAllocStructType(sizeof(CGAffineTransform__uType), "iOS.CoreGraphics.CGAffineTransform", sizeof(CGAffineTransform), 0, 0, 0);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/enum/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* CGBitmapInfo__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("iOS.CoreGraphics.CGBitmapInfo", ::app::Uno::UInt__typeof(), 8);

    type->SetLiterals(
        "kCGBitmapAlphaInfoMask", 31LL,
        "kCGBitmapFloatComponents", 256LL,
        "kCGBitmapByteOrderMask", 28672LL,
        "kCGBitmapByteOrderDefault", 0LL,
        "kCGBitmapByteOrder16Little", 4096LL,
        "kCGBitmapByteOrder32Little", 8192LL,
        "kCGBitmapByteOrder16Big", 12288LL,
        "kCGBitmapByteOrder32Big", 16384LL);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/opaque/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

CGColorRef__uType* CGColorRef__typeof()
{
    static ::uStaticStrong<CGColorRef__uType*> type;
    if (type != NULL) return type;

    type = (CGColorRef__uType*)::uAllocStructType(sizeof(CGColorRef__uType), "iOS.CoreGraphics.CGColorRef", sizeof(app::CGColorRef*), 0, 0, 0);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/opaque/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

CGColorSpaceRef__uType* CGColorSpaceRef__typeof()
{
    static ::uStaticStrong<CGColorSpaceRef__uType*> type;
    if (type != NULL) return type;

    type = (CGColorSpaceRef__uType*)::uAllocStructType(sizeof(CGColorSpaceRef__uType), "iOS.CoreGraphics.CGColorSpaceRef", sizeof(app::CGColorSpaceRef*), 0, 0, 0);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/opaque/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

CGContextRef__uType* CGContextRef__typeof()
{
    static ::uStaticStrong<CGContextRef__uType*> type;
    if (type != NULL) return type;

    type = (CGContextRef__uType*)::uAllocStructType(sizeof(CGContextRef__uType), "iOS.CoreGraphics.CGContextRef", sizeof(app::CGContextRef*), 0, 0, 0);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/opaque/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

CGDataProviderRef__uType* CGDataProviderRef__typeof()
{
    static ::uStaticStrong<CGDataProviderRef__uType*> type;
    if (type != NULL) return type;

    type = (CGDataProviderRef__uType*)::uAllocStructType(sizeof(CGDataProviderRef__uType), "iOS.CoreGraphics.CGDataProviderRef", sizeof(app::CGDataProviderRef*), 0, 0, 0);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/opaque/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

CGFontRef__uType* CGFontRef__typeof()
{
    static ::uStaticStrong<CGFontRef__uType*> type;
    if (type != NULL) return type;

    type = (CGFontRef__uType*)::uAllocStructType(sizeof(CGFontRef__uType), "iOS.CoreGraphics.CGFontRef", sizeof(app::CGFontRef*), 0, 0, 0);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/opaque/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

CGPathRef__uType* CGPathRef__typeof()
{
    static ::uStaticStrong<CGPathRef__uType*> type;
    if (type != NULL) return type;

    type = (CGPathRef__uType*)::uAllocStructType(sizeof(CGPathRef__uType), "iOS.CoreGraphics.CGPathRef", sizeof(app::CGPathRef*), 0, 0, 0);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/struct/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

CGPoint__uType* CGPoint__typeof()
{
    static ::uStaticStrong<CGPoint__uType*> type;
    if (type != NULL) return type;

    type = (CGPoint__uType*)::uAllocStructType(sizeof(CGPoint__uType), "iOS.CoreGraphics.CGPoint", sizeof(CGPoint), 0, 0, 0);

    return type;
}

void CGPoint___ObjInit(CGPoint* __this, double X, double Y)
{
    __this->X = X;
    __this->Y = Y;
}

CGPoint CGPoint__New_1(::uStatic* __this, double X, double Y)
{
    CGPoint inst = ::uDefault< CGPoint>();
    inst._ObjInit(X, Y);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/struct/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

CGRect__uType* CGRect__typeof()
{
    static ::uStaticStrong<CGRect__uType*> type;
    if (type != NULL) return type;

    type = (CGRect__uType*)::uAllocStructType(sizeof(CGRect__uType), "iOS.CoreGraphics.CGRect", sizeof(CGRect), 0, 0, 0);

    return type;
}

void CGRect___ObjInit(CGRect* __this, ::app::iOS::CoreGraphics::CGPoint Origin, ::app::iOS::CoreGraphics::CGSize Size)
{
    __this->Origin = Origin;
    __this->Size = Size;
}

CGRect CGRect__New_1(::uStatic* __this, ::app::iOS::CoreGraphics::CGPoint Origin, ::app::iOS::CoreGraphics::CGSize Size)
{
    CGRect inst = ::uDefault< CGRect>();
    inst._ObjInit(Origin, Size);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/struct/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

CGSize__uType* CGSize__typeof()
{
    static ::uStaticStrong<CGSize__uType*> type;
    if (type != NULL) return type;

    type = (CGSize__uType*)::uAllocStructType(sizeof(CGSize__uType), "iOS.CoreGraphics.CGSize", sizeof(CGSize), 0, 0, 0);

    return type;
}

void CGSize___ObjInit(CGSize* __this, double Width, double Height)
{
    __this->Width = Width;
    __this->Height = Height;
}

CGSize CGSize__New_1(::uStatic* __this, double Width, double Height)
{
    CGSize inst = ::uDefault< CGSize>();
    inst._ObjInit(Width, Height);
    return inst;
}

}}}
