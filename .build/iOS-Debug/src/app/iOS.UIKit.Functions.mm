// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/functions/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/iOS.CoreGraphics.CGContextRef.h>
#include <app/iOS.CoreGraphics.CGSize.h>
#include <app/iOS.UIKit.Functions.h>
#include <app/iOS.UIKit.UIImage.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Double.h>
#include <UIKit/UIKit.h>

namespace app {
namespace iOS {
namespace UIKit {

Functions__uType* Functions__typeof()
{
    static ::uStaticStrong<Functions__uType*> type;
    if (type != NULL) return type;

    type = (Functions__uType*)::uAllocClassType(sizeof(Functions__uType), "iOS.UIKit.Functions");

    return type;
}

void Functions__UIGraphicsBeginImageContextWithOptions(::uStatic* __this, ::app::iOS::CoreGraphics::CGSize size, bool opaque, double scale)
{
    UIGraphicsBeginImageContextWithOptions(uObjC::Struct::FromUno_CGSize(size, ::CGSize()), (BOOL)opaque, (CGFloat)scale);
}

void Functions__UIGraphicsEndImageContext(::uStatic* __this)
{
    UIGraphicsEndImageContext();
}

::app::iOS::UIKit::UIImage* Functions__UIGraphicsGetImageFromCurrentImageContext(::uStatic* __this)
{
    ::app::iOS::UIKit::UIImage* __return = (::app::iOS::UIKit::UIImage*)uObjC::Lifetime::GetUnoObject(UIGraphicsGetImageFromCurrentImageContext(), ::app::iOS::UIKit::UIImage__typeof());
    return __return;
}

void Functions__UIGraphicsPopContext(::uStatic* __this)
{
    UIGraphicsPopContext();
}

void Functions__UIGraphicsPushContext(::uStatic* __this, app::CGContextRef* context)
{
    UIGraphicsPushContext((::CGContextRef)(size_t) context);
}

}}}
