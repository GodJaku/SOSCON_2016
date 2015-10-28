// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/struct/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_I_O_S_U_I_KIT_U_I_EDGE_INSETS_H__
#define __APP_I_O_S_U_I_KIT_U_I_EDGE_INSETS_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace iOS {
namespace UIKit {

struct UIEdgeInsets;

struct UIEdgeInsets__uType : ::uStructType
{
};

UIEdgeInsets__uType* UIEdgeInsets__typeof();

void UIEdgeInsets___ObjInit(UIEdgeInsets* __this, double Top, double Left, double Bottom, double Right);
UIEdgeInsets UIEdgeInsets__New_1(::uStatic* __this, double Top, double Left, double Bottom, double Right);

struct UIEdgeInsets
{
    double Top;
    double Left;
    double Bottom;
    double Right;

    void _ObjInit(double Top, double Left, double Bottom, double Right) { UIEdgeInsets___ObjInit(this, Top, Left, Bottom, Right); }
};

}}}


#endif
