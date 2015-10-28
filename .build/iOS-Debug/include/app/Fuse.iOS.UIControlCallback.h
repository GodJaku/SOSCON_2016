// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.11.3/UIControlEvents/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_I_O_S_U_I_CONTROL_CALLBACK_H__
#define __APP_FUSE_I_O_S_U_I_CONTROL_CALLBACK_H__

#include <app/iOS.Foundation.NSObject.h>
#include <Uno.h>
#include <uObjC.h>
namespace app { namespace iOS { namespace UIKit { struct UIEvent; } } }

namespace app {
namespace Fuse {
namespace iOS {

struct UIControlCallback;

struct UIControlCallback__uType : ::app::iOS::Foundation::NSObject__uType
{
    void(*__fp_callback)(UIControlCallback*, ::app::iOS::Foundation::NSObject*, ::app::iOS::UIKit::UIEvent*);
};

UIControlCallback__uType* UIControlCallback__typeof();

void UIControlCallback___ObjInit_4(UIControlCallback* __this);
void UIControlCallback__callback(UIControlCallback* __this, ::app::iOS::Foundation::NSObject* sender_, ::app::iOS::UIKit::UIEvent* uiEvent_);
uObjC::Selector UIControlCallback__callbackSelector(UIControlCallback* __this);
uObjC::Selector UIControlCallback__get_CallbackSelector(UIControlCallback* __this);

struct UIControlCallback : ::app::iOS::Foundation::NSObject
{
    void _ObjInit_4() { UIControlCallback___ObjInit_4(this); }
    void callback(::app::iOS::Foundation::NSObject* sender_, ::app::iOS::UIKit::UIEvent* uiEvent_) { (((UIControlCallback__uType*)this->__obj_type)->__fp_callback)(this, sender_, uiEvent_); }
    uObjC::Selector callbackSelector() { return UIControlCallback__callbackSelector(this); }
    uObjC::Selector CallbackSelector() { return UIControlCallback__get_CallbackSelector(this); }
};

}}}


#endif
