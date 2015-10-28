// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/interface/wrapper/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_I_O_S_U_I_KIT_INTEROP_I_U_I_SCROLL_VIEW_DELEGATE_H__
#define __APP_I_O_S_U_I_KIT_INTEROP_I_U_I_SCROLL_VIEW_DELEGATE_H__

#include <app/iOS.UIKit.IUIScrollViewDelegate.h>
#include <app/ObjC.Object.h>
#include <Uno.h>
namespace app { namespace iOS { namespace UIKit { struct UIScrollView; } } }
namespace app { namespace iOS { namespace UIKit { struct UIView; } } }

namespace app {
namespace iOS {
namespace UIKit {
namespace Interop {

struct IUIScrollViewDelegate;

struct IUIScrollViewDelegate__uType : ::app::ObjC::Object__uType
{
    ::app::iOS::UIKit::IUIScrollViewDelegate __interface_0;
};

IUIScrollViewDelegate__uType* IUIScrollViewDelegate__typeof();

void IUIScrollViewDelegate__scrollViewDidEndDecelerating(IUIScrollViewDelegate* __this, ::app::iOS::UIKit::UIScrollView* scrollView_);
void IUIScrollViewDelegate__scrollViewDidEndDraggingWillDecelerate(IUIScrollViewDelegate* __this, ::app::iOS::UIKit::UIScrollView* scrollView_, bool decelerate_);
void IUIScrollViewDelegate__scrollViewDidEndScrollingAnimation(IUIScrollViewDelegate* __this, ::app::iOS::UIKit::UIScrollView* scrollView_);
void IUIScrollViewDelegate__scrollViewDidEndZoomingWithViewAtScale(IUIScrollViewDelegate* __this, ::app::iOS::UIKit::UIScrollView* scrollView_, ::app::iOS::UIKit::UIView* view_, double scale_);
void IUIScrollViewDelegate__scrollViewDidScroll(IUIScrollViewDelegate* __this, ::app::iOS::UIKit::UIScrollView* scrollView_);
void IUIScrollViewDelegate__scrollViewDidScrollToTop(IUIScrollViewDelegate* __this, ::app::iOS::UIKit::UIScrollView* scrollView_);
void IUIScrollViewDelegate__scrollViewDidZoom(IUIScrollViewDelegate* __this, ::app::iOS::UIKit::UIScrollView* scrollView_);
bool IUIScrollViewDelegate__scrollViewShouldScrollToTop(IUIScrollViewDelegate* __this, ::app::iOS::UIKit::UIScrollView* scrollView_);
void IUIScrollViewDelegate__scrollViewWillBeginDecelerating(IUIScrollViewDelegate* __this, ::app::iOS::UIKit::UIScrollView* scrollView_);
void IUIScrollViewDelegate__scrollViewWillBeginDragging(IUIScrollViewDelegate* __this, ::app::iOS::UIKit::UIScrollView* scrollView_);
void IUIScrollViewDelegate__scrollViewWillBeginZoomingWithView(IUIScrollViewDelegate* __this, ::app::iOS::UIKit::UIScrollView* scrollView_, ::app::iOS::UIKit::UIView* view_);
::app::iOS::UIKit::UIView* IUIScrollViewDelegate__viewForZoomingInScrollView(IUIScrollViewDelegate* __this, ::app::iOS::UIKit::UIScrollView* scrollView_);

struct IUIScrollViewDelegate : ::app::ObjC::Object
{
    void scrollViewDidEndDecelerating(::app::iOS::UIKit::UIScrollView* scrollView_) { IUIScrollViewDelegate__scrollViewDidEndDecelerating(this, scrollView_); }
    void scrollViewDidEndDraggingWillDecelerate(::app::iOS::UIKit::UIScrollView* scrollView_, bool decelerate_) { IUIScrollViewDelegate__scrollViewDidEndDraggingWillDecelerate(this, scrollView_, decelerate_); }
    void scrollViewDidEndScrollingAnimation(::app::iOS::UIKit::UIScrollView* scrollView_) { IUIScrollViewDelegate__scrollViewDidEndScrollingAnimation(this, scrollView_); }
    void scrollViewDidEndZoomingWithViewAtScale(::app::iOS::UIKit::UIScrollView* scrollView_, ::app::iOS::UIKit::UIView* view_, double scale_) { IUIScrollViewDelegate__scrollViewDidEndZoomingWithViewAtScale(this, scrollView_, view_, scale_); }
    void scrollViewDidScroll(::app::iOS::UIKit::UIScrollView* scrollView_) { IUIScrollViewDelegate__scrollViewDidScroll(this, scrollView_); }
    void scrollViewDidScrollToTop(::app::iOS::UIKit::UIScrollView* scrollView_) { IUIScrollViewDelegate__scrollViewDidScrollToTop(this, scrollView_); }
    void scrollViewDidZoom(::app::iOS::UIKit::UIScrollView* scrollView_) { IUIScrollViewDelegate__scrollViewDidZoom(this, scrollView_); }
    bool scrollViewShouldScrollToTop(::app::iOS::UIKit::UIScrollView* scrollView_) { return IUIScrollViewDelegate__scrollViewShouldScrollToTop(this, scrollView_); }
    void scrollViewWillBeginDecelerating(::app::iOS::UIKit::UIScrollView* scrollView_) { IUIScrollViewDelegate__scrollViewWillBeginDecelerating(this, scrollView_); }
    void scrollViewWillBeginDragging(::app::iOS::UIKit::UIScrollView* scrollView_) { IUIScrollViewDelegate__scrollViewWillBeginDragging(this, scrollView_); }
    void scrollViewWillBeginZoomingWithView(::app::iOS::UIKit::UIScrollView* scrollView_, ::app::iOS::UIKit::UIView* view_) { IUIScrollViewDelegate__scrollViewWillBeginZoomingWithView(this, scrollView_, view_); }
    ::app::iOS::UIKit::UIView* viewForZoomingInScrollView(::app::iOS::UIKit::UIScrollView* scrollView_) { return IUIScrollViewDelegate__viewForZoomingInScrollView(this, scrollView_); }
};

}}}}


#endif
