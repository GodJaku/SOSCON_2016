// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE UIScrollView
#define uObjC_UNO_TYPE_IS_SEALED 0
#define uObjC_UNO_TYPE ::app::iOS::UIKit::UIScrollView*
#define uObjC_UNO_TYPE_OBJECT ::app::iOS::UIKit::UIScrollView__typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <app/iOS.UIKit.IUIScrollViewDelegate.h>
#include <app/iOS.UIKit.UIScrollView.h>

namespace app {
namespace iOS {
namespace UIKit {

UIScrollView__uType* UIScrollView__typeof()
{
    static ::uStaticStrong<UIScrollView__uType*> type;
    if (type != NULL) return type;

    type = (UIScrollView__uType*)::uAllocClassType(sizeof(UIScrollView__uType), "iOS.UIKit.UIScrollView", false, 0, 0, 0);

    type->SetBaseType(::app::iOS::UIKit::UIView__typeof());

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}

void UIScrollView___ObjInit_8(UIScrollView* __this)
{
    ::app::iOS::UIKit::UIView___ObjInit_7(__this);
}

::app::iOS::CoreGraphics::CGPoint UIScrollView__contentOffset(UIScrollView* __this)
{
    ::CGPoint __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::CGPoint, @selector(contentOffset));
    return uObjC::Struct::ToUno_CGPoint(__return, ::app::iOS::CoreGraphics::CGPoint());
}

::app::iOS::CoreGraphics::CGSize UIScrollView__contentSize(UIScrollView* __this)
{
    ::CGSize __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::CGSize, @selector(contentSize));
    return uObjC::Struct::ToUno_CGSize(__return, ::app::iOS::CoreGraphics::CGSize());
}

::uObject* UIScrollView__delegate_(UIScrollView* __this)
{
    id<UIScrollViewDelegate> __return = uObjC_SEND_MESSAGE_TO_INSTANCE(id<UIScrollViewDelegate>, @selector(delegate));
    return uObjC::Lifetime::GetUnoObject(__return, ::app::iOS::UIKit::Interop::IUIScrollViewDelegate__typeof());
}

::app::iOS::CoreGraphics::CGPoint UIScrollView__get_ContentOffset(UIScrollView* __this)
{
    return __this->contentOffset();
}

::app::iOS::CoreGraphics::CGSize UIScrollView__get_ContentSize(UIScrollView* __this)
{
    return __this->contentSize();
}

::uObject* UIScrollView__get_Delegate(UIScrollView* __this)
{
    return __this->delegate_();
}

UIScrollView* UIScrollView__New_9(::uStatic* __this)
{
    UIScrollView* inst = (UIScrollView*)::uAllocObject(sizeof(UIScrollView), UIScrollView__typeof());
    inst->_ObjInit_8();
    return inst;
}

void UIScrollView__set_ContentOffset(UIScrollView* __this, ::app::iOS::CoreGraphics::CGPoint value)
{
    __this->setContentOffset(value);
}

void UIScrollView__set_ContentSize(UIScrollView* __this, ::app::iOS::CoreGraphics::CGSize value)
{
    __this->setContentSize(value);
}

void UIScrollView__set_Delegate(UIScrollView* __this, ::uObject* value)
{
    __this->setDelegate(value);
}

void UIScrollView__setContentOffset(UIScrollView* __this, ::app::iOS::CoreGraphics::CGPoint contentOffset_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setContentOffset:),
        uObjC::Struct::FromUno_CGPoint(contentOffset_, ::CGPoint()));
}

void UIScrollView__setContentSize(UIScrollView* __this, ::app::iOS::CoreGraphics::CGSize contentSize_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setContentSize:),
        uObjC::Struct::FromUno_CGSize(contentSize_, ::CGSize()));
}

void UIScrollView__setDelegate(UIScrollView* __this, ::uObject* delegate__)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setDelegate:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)delegate__, ::app::iOS::UIKit::IUIScrollViewDelegate__typeof()));
}

}}}
