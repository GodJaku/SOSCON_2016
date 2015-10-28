// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_I_O_S_U_I_KIT_U_I_COLOR_H__
#define __APP_I_O_S_U_I_KIT_U_I_COLOR_H__

#include <app/iOS.Foundation.INSCopying.h>
#include <app/iOS.Foundation.NSObject.h>
#include <Uno.h>

namespace app {
namespace iOS {
namespace UIKit {

struct UIColor;

struct UIColor__uType : ::app::iOS::Foundation::NSObject__uType
{
    ::app::iOS::Foundation::INSCopying __interface_0;
};

UIColor__uType* UIColor__typeof();

UIColor* UIColor___colorWithRedGreenBlueAlpha(::uStatic* __this, double red_, double green_, double blue_, double alpha_);
void UIColor___ObjInit_5(UIColor* __this);
app::CGColorRef* UIColor__cgColor(UIColor* __this);
app::CGColorRef* UIColor__get_CGColor(UIColor* __this);
void UIColor__initWithRedGreenBlueAlpha(UIColor* __this, double red_, double green_, double blue_, double alpha_);
UIColor* UIColor__New_5(::uStatic* __this);

struct UIColor : ::app::iOS::Foundation::NSObject
{
    void _ObjInit_5() { UIColor___ObjInit_5(this); }
    app::CGColorRef* cgColor() { return UIColor__cgColor(this); }
    app::CGColorRef* CGColor() { return UIColor__get_CGColor(this); }
    void initWithRedGreenBlueAlpha(double red_, double green_, double blue_, double alpha_) { UIColor__initWithRedGreenBlueAlpha(this, red_, green_, blue_, alpha_); }
};

}}}


#endif
