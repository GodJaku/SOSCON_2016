// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/struct/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_I_O_S_CORE_GRAPHICS_C_G_SIZE_H__
#define __APP_I_O_S_CORE_GRAPHICS_C_G_SIZE_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace iOS {
namespace CoreGraphics {

struct CGSize;

struct CGSize__uType : ::uStructType
{
};

CGSize__uType* CGSize__typeof();

void CGSize___ObjInit(CGSize* __this, double Width, double Height);
CGSize CGSize__New_1(::uStatic* __this, double Width, double Height);

struct CGSize
{
    double Width;
    double Height;

    void _ObjInit(double Width, double Height) { CGSize___ObjInit(this, Width, Height); }
};

}}}


#endif
