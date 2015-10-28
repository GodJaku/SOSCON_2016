// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_I_O_S_U_I_KIT_U_I_CONTROL_H__
#define __APP_I_O_S_U_I_KIT_U_I_CONTROL_H__

#include <app/iOS.UIKit.UIView.h>
#include <Uno.h>
#include <uObjC.h>

namespace app {
namespace iOS {
namespace UIKit {

struct UIControl;

struct UIControl__uType : ::app::iOS::UIKit::UIView__uType
{
};

UIControl__uType* UIControl__typeof();

void UIControl___ObjInit_8(UIControl* __this, ::id __id);
void UIControl___ObjInit_9(UIControl* __this);
void UIControl__addTargetActionForControlEvents(UIControl* __this, ::id target_, uObjC::Selector action_, ::uUInt controlEvents_);
UIControl* UIControl__New_9(::uStatic* __this);
void UIControl__removeTargetActionForControlEvents(UIControl* __this, ::id target_, uObjC::Selector action_, ::uUInt controlEvents_);

struct UIControl : ::app::iOS::UIKit::UIView
{
    void _ObjInit_8(::id __id) { UIControl___ObjInit_8(this, __id); }
    void _ObjInit_9() { UIControl___ObjInit_9(this); }
    void addTargetActionForControlEvents(::id target_, uObjC::Selector action_, ::uUInt controlEvents_) { UIControl__addTargetActionForControlEvents(this, target_, action_, controlEvents_); }
    void removeTargetActionForControlEvents(::id target_, uObjC::Selector action_, ::uUInt controlEvents_) { UIControl__removeTargetActionForControlEvents(this, target_, action_, controlEvents_); }
};

}}}


#endif
