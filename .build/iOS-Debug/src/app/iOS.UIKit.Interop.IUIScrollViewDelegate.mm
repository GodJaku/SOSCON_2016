// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/interface/wrapper/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE_IS_INTERFACE 1
#define uObjC_NATIVE_TYPE UIScrollViewDelegate
#define uObjC_UNO_TYPE ::uObject*
#define uObjC_UNO_TYPE_OBJECT ::app::iOS::UIKit::IUIScrollViewDelegate__typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <app/iOS.UIKit.Interop.IUIScrollViewDelegate.h>
#include <app/iOS.UIKit.UIScrollView.h>
#include <app/iOS.UIKit.UIView.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Double.h>

namespace app {
namespace iOS {
namespace UIKit {
namespace Interop {

IUIScrollViewDelegate__uType* IUIScrollViewDelegate__typeof()
{
    static ::uStaticStrong<IUIScrollViewDelegate__uType*> type;
    if (type != NULL) return type;

    type = (IUIScrollViewDelegate__uType*)::uAllocClassType(sizeof(IUIScrollViewDelegate__uType), "iOS.UIKit.Interop.IUIScrollViewDelegate", false, 1, 0, 0);

    type->SetBaseType(::app::ObjC::Object__typeof());
    type->__interface_0.__fp_scrollViewDidScroll = (void(*)(void*, ::app::iOS::UIKit::UIScrollView*))IUIScrollViewDelegate__scrollViewDidScroll;
    type->__interface_0.__fp_scrollViewDidZoom = (void(*)(void*, ::app::iOS::UIKit::UIScrollView*))IUIScrollViewDelegate__scrollViewDidZoom;
    type->__interface_0.__fp_scrollViewWillBeginDragging = (void(*)(void*, ::app::iOS::UIKit::UIScrollView*))IUIScrollViewDelegate__scrollViewWillBeginDragging;
    type->__interface_0.__fp_scrollViewDidEndDraggingWillDecelerate = (void(*)(void*, ::app::iOS::UIKit::UIScrollView*, bool))IUIScrollViewDelegate__scrollViewDidEndDraggingWillDecelerate;
    type->__interface_0.__fp_scrollViewWillBeginDecelerating = (void(*)(void*, ::app::iOS::UIKit::UIScrollView*))IUIScrollViewDelegate__scrollViewWillBeginDecelerating;
    type->__interface_0.__fp_scrollViewDidEndDecelerating = (void(*)(void*, ::app::iOS::UIKit::UIScrollView*))IUIScrollViewDelegate__scrollViewDidEndDecelerating;
    type->__interface_0.__fp_scrollViewDidEndScrollingAnimation = (void(*)(void*, ::app::iOS::UIKit::UIScrollView*))IUIScrollViewDelegate__scrollViewDidEndScrollingAnimation;
    type->__interface_0.__fp_viewForZoomingInScrollView = (::app::iOS::UIKit::UIView*(*)(void*, ::app::iOS::UIKit::UIScrollView*))IUIScrollViewDelegate__viewForZoomingInScrollView;
    type->__interface_0.__fp_scrollViewWillBeginZoomingWithView = (void(*)(void*, ::app::iOS::UIKit::UIScrollView*, ::app::iOS::UIKit::UIView*))IUIScrollViewDelegate__scrollViewWillBeginZoomingWithView;
    type->__interface_0.__fp_scrollViewDidEndZoomingWithViewAtScale = (void(*)(void*, ::app::iOS::UIKit::UIScrollView*, ::app::iOS::UIKit::UIView*, double))IUIScrollViewDelegate__scrollViewDidEndZoomingWithViewAtScale;
    type->__interface_0.__fp_scrollViewShouldScrollToTop = (bool(*)(void*, ::app::iOS::UIKit::UIScrollView*))IUIScrollViewDelegate__scrollViewShouldScrollToTop;
    type->__interface_0.__fp_scrollViewDidScrollToTop = (void(*)(void*, ::app::iOS::UIKit::UIScrollView*))IUIScrollViewDelegate__scrollViewDidScrollToTop;

    type->SetInterfaces(
        ::app::iOS::UIKit::IUIScrollViewDelegate__typeof(), offsetof(IUIScrollViewDelegate__uType, __interface_0));

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}

void IUIScrollViewDelegate__scrollViewDidEndDecelerating(IUIScrollViewDelegate* __this, ::app::iOS::UIKit::UIScrollView* scrollView_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(scrollViewDidEndDecelerating:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)scrollView_));
}

void IUIScrollViewDelegate__scrollViewDidEndDraggingWillDecelerate(IUIScrollViewDelegate* __this, ::app::iOS::UIKit::UIScrollView* scrollView_, bool decelerate_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(scrollViewDidEndDragging:willDecelerate:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)scrollView_),
        (BOOL)decelerate_);
}

void IUIScrollViewDelegate__scrollViewDidEndScrollingAnimation(IUIScrollViewDelegate* __this, ::app::iOS::UIKit::UIScrollView* scrollView_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(scrollViewDidEndScrollingAnimation:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)scrollView_));
}

void IUIScrollViewDelegate__scrollViewDidEndZoomingWithViewAtScale(IUIScrollViewDelegate* __this, ::app::iOS::UIKit::UIScrollView* scrollView_, ::app::iOS::UIKit::UIView* view_, double scale_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(scrollViewDidEndZooming:withView:atScale:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)scrollView_),
        uObjC::Lifetime::GetNativeHandle((::uObject *)view_),
        (CGFloat)scale_);
}

void IUIScrollViewDelegate__scrollViewDidScroll(IUIScrollViewDelegate* __this, ::app::iOS::UIKit::UIScrollView* scrollView_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(scrollViewDidScroll:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)scrollView_));
}

void IUIScrollViewDelegate__scrollViewDidScrollToTop(IUIScrollViewDelegate* __this, ::app::iOS::UIKit::UIScrollView* scrollView_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(scrollViewDidScrollToTop:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)scrollView_));
}

void IUIScrollViewDelegate__scrollViewDidZoom(IUIScrollViewDelegate* __this, ::app::iOS::UIKit::UIScrollView* scrollView_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(scrollViewDidZoom:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)scrollView_));
}

bool IUIScrollViewDelegate__scrollViewShouldScrollToTop(IUIScrollViewDelegate* __this, ::app::iOS::UIKit::UIScrollView* scrollView_)
{
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(BOOL, @selector(scrollViewShouldScrollToTop:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)scrollView_));
    return (bool)__return;
}

void IUIScrollViewDelegate__scrollViewWillBeginDecelerating(IUIScrollViewDelegate* __this, ::app::iOS::UIKit::UIScrollView* scrollView_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(scrollViewWillBeginDecelerating:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)scrollView_));
}

void IUIScrollViewDelegate__scrollViewWillBeginDragging(IUIScrollViewDelegate* __this, ::app::iOS::UIKit::UIScrollView* scrollView_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(scrollViewWillBeginDragging:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)scrollView_));
}

void IUIScrollViewDelegate__scrollViewWillBeginZoomingWithView(IUIScrollViewDelegate* __this, ::app::iOS::UIKit::UIScrollView* scrollView_, ::app::iOS::UIKit::UIView* view_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(scrollViewWillBeginZooming:withView:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)scrollView_),
        uObjC::Lifetime::GetNativeHandle((::uObject *)view_));
}

::app::iOS::UIKit::UIView* IUIScrollViewDelegate__viewForZoomingInScrollView(IUIScrollViewDelegate* __this, ::app::iOS::UIKit::UIScrollView* scrollView_)
{
    ::UIView* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::UIView*, @selector(viewForZoomingInScrollView:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)scrollView_));
    return (::app::iOS::UIKit::UIView*)uObjC::Lifetime::GetUnoObject(__return, ::app::iOS::UIKit::UIView__typeof());
}

}}}}
