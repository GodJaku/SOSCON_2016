// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/struct/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_I_O_S_CORE_GRAPHICS_C_G_POINT_H__
#define __APP_I_O_S_CORE_GRAPHICS_C_G_POINT_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace iOS {
namespace CoreGraphics {

struct CGPoint;

struct CGPoint__uType : ::uStructType
{
};

CGPoint__uType* CGPoint__typeof();

void CGPoint___ObjInit(CGPoint* __this, double X, double Y);
CGPoint CGPoint__New_1(::uStatic* __this, double X, double Y);

struct CGPoint
{
    double X;
    double Y;

    void _ObjInit(double X, double Y) { CGPoint___ObjInit(this, X, Y); }
};

}}}


#endif
