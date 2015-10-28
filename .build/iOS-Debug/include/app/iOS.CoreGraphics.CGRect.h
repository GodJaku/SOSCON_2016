// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/struct/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_I_O_S_CORE_GRAPHICS_C_G_RECT_H__
#define __APP_I_O_S_CORE_GRAPHICS_C_G_RECT_H__

#include <app/iOS.CoreGraphics.CGPoint.h>
#include <app/iOS.CoreGraphics.CGSize.h>
#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace iOS {
namespace CoreGraphics {

struct CGRect;

struct CGRect__uType : ::uStructType
{
};

CGRect__uType* CGRect__typeof();

void CGRect___ObjInit(CGRect* __this, ::app::iOS::CoreGraphics::CGPoint Origin, ::app::iOS::CoreGraphics::CGSize Size);
CGRect CGRect__New_1(::uStatic* __this, ::app::iOS::CoreGraphics::CGPoint Origin, ::app::iOS::CoreGraphics::CGSize Size);

struct CGRect
{
    ::app::iOS::CoreGraphics::CGPoint Origin;
    ::app::iOS::CoreGraphics::CGSize Size;

    void _ObjInit(::app::iOS::CoreGraphics::CGPoint Origin, ::app::iOS::CoreGraphics::CGSize Size) { CGRect___ObjInit(this, Origin, Size); }
};

}}}


#endif
