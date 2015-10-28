// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_I_O_S_U_I_KIT_U_I_RESPONDER_H__
#define __APP_I_O_S_U_I_KIT_U_I_RESPONDER_H__

#include <app/iOS.Foundation.NSObject.h>
#include <Uno.h>
#include <uObjC.h>

namespace app {
namespace iOS {
namespace UIKit {

struct UIResponder;

struct UIResponder__uType : ::app::iOS::Foundation::NSObject__uType
{
};

UIResponder__uType* UIResponder__typeof();

void UIResponder___ObjInit_4(UIResponder* __this, ::id __id);
void UIResponder___ObjInit_5(UIResponder* __this);
bool UIResponder__becomeFirstResponder(UIResponder* __this);
bool UIResponder__isFirstResponder(UIResponder* __this);
bool UIResponder__resignFirstResponder(UIResponder* __this);

struct UIResponder : ::app::iOS::Foundation::NSObject
{
    void _ObjInit_4(::id __id) { UIResponder___ObjInit_4(this, __id); }
    void _ObjInit_5() { UIResponder___ObjInit_5(this); }
    bool becomeFirstResponder() { return UIResponder__becomeFirstResponder(this); }
    bool isFirstResponder() { return UIResponder__isFirstResponder(this); }
    bool resignFirstResponder() { return UIResponder__resignFirstResponder(this); }
};

}}}


#endif
