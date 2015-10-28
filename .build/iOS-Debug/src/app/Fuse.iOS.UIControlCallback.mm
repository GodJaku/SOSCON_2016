// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.11.3/UIControlEvents/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE UIControlCallback
#define uObjC_UNO_TYPE_IS_SEALED 0
#define uObjC_UNO_TYPE ::app::Fuse::iOS::UIControlCallback*
#define uObjC_UNO_TYPE_OBJECT ::app::Fuse::iOS::UIControlCallback__typeof()

#include "Implementation/UIControlCallback.h"
#include <uObjC.Wrapper.h>
#include <app/Fuse.iOS.UIControlCallback.h>
#include <app/iOS.UIKit.UIEvent.h>
#include <app/ObjC.Selector.h>

namespace app {
namespace Fuse {
namespace iOS {

UIControlCallback__uType* UIControlCallback__typeof()
{
    static ::uStaticStrong<UIControlCallback__uType*> type;
    if (type != NULL) return type;

    type = (UIControlCallback__uType*)::uAllocClassType(sizeof(UIControlCallback__uType), "Fuse.iOS.UIControlCallback", false, 0, 0, 0);

    type->SetBaseType(::app::iOS::Foundation::NSObject__typeof());
    type->__fp_callback = UIControlCallback__callback;

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}

void UIControlCallback___ObjInit_4(UIControlCallback* __this)
{
    ::app::iOS::Foundation::NSObject___ObjInit_2(__this);
}

void UIControlCallback__callback(UIControlCallback* __this, ::app::iOS::Foundation::NSObject* sender_, ::app::iOS::UIKit::UIEvent* uiEvent_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(callback::),
        uObjC::Lifetime::GetNativeHandle((::uObject *)sender_),
        uObjC::Lifetime::GetNativeHandle((::uObject *)uiEvent_));
}

uObjC::Selector UIControlCallback__callbackSelector(UIControlCallback* __this)
{
    uObjC::Selector __return = uObjC_SEND_MESSAGE_TO_INSTANCE(uObjC::Selector, @selector(callbackSelector));
    return (uObjC::Selector)__return;
}

uObjC::Selector UIControlCallback__get_CallbackSelector(UIControlCallback* __this)
{
    return __this->callbackSelector();
}

}}}
