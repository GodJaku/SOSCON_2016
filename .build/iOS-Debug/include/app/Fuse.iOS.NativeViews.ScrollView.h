// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.11.3/NativeViews/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_I_O_S_NATIVE_VIEWS_SCROLL_VIEW_H__
#define __APP_FUSE_I_O_S_NATIVE_VIEWS_SCROLL_VIEW_H__

#include <app/Fuse.iOS.NativeViews.ParentNativeView__Fuse_Controls_ScrollView.h>
#include <app/iOS.UIKit.IUIScrollViewDelegate.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { struct ScrollPropertyChangedArgs; } } }
namespace app { namespace Fuse { namespace iOS { namespace NativeViews { struct NativeView; } } } }
namespace app { namespace iOS { namespace UIKit { struct UIScrollView; } } }
namespace app { namespace iOS { namespace UIKit { struct UIView; } } }
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {
namespace iOS {
namespace NativeViews {

struct ScrollView;

struct ScrollView__uType : ::app::Fuse::iOS::NativeViews::ParentNativeView__Fuse_Controls_ScrollView__uType
{
    ::app::iOS::UIKit::IUIScrollViewDelegate __interface_0;
};

ScrollView__uType* ScrollView__typeof();

void ScrollView___ObjInit_3(ScrollView* __this);
void ScrollView__Attach(ScrollView* __this);
::app::iOS::UIKit::UIView* ScrollView__Create(ScrollView* __this);
void ScrollView__Detach(ScrollView* __this);
void ScrollView__iOS_UIKit_IUIScrollViewDelegate_scrollViewDidEndDecelerating(ScrollView* __this, ::app::iOS::UIKit::UIScrollView* scrollView);
void ScrollView__iOS_UIKit_IUIScrollViewDelegate_scrollViewDidEndDraggingWillDecelerate(ScrollView* __this, ::app::iOS::UIKit::UIScrollView* scrollView, bool decelerate);
void ScrollView__iOS_UIKit_IUIScrollViewDelegate_scrollViewDidEndScrollingAnimation(ScrollView* __this, ::app::iOS::UIKit::UIScrollView* scrollView);
void ScrollView__iOS_UIKit_IUIScrollViewDelegate_scrollViewDidEndZoomingWithViewAtScale(ScrollView* __this, ::app::iOS::UIKit::UIScrollView* scrollView, ::app::iOS::UIKit::UIView* view, double scale);
void ScrollView__iOS_UIKit_IUIScrollViewDelegate_scrollViewDidScroll(ScrollView* __this, ::app::iOS::UIKit::UIScrollView* scrollView);
void ScrollView__iOS_UIKit_IUIScrollViewDelegate_scrollViewDidScrollToTop(ScrollView* __this, ::app::iOS::UIKit::UIScrollView* scrollView);
void ScrollView__iOS_UIKit_IUIScrollViewDelegate_scrollViewDidZoom(ScrollView* __this, ::app::iOS::UIKit::UIScrollView* scrollView);
bool ScrollView__iOS_UIKit_IUIScrollViewDelegate_scrollViewShouldScrollToTop(ScrollView* __this, ::app::iOS::UIKit::UIScrollView* scrollView);
void ScrollView__iOS_UIKit_IUIScrollViewDelegate_scrollViewWillBeginDecelerating(ScrollView* __this, ::app::iOS::UIKit::UIScrollView* scrollView);
void ScrollView__iOS_UIKit_IUIScrollViewDelegate_scrollViewWillBeginDragging(ScrollView* __this, ::app::iOS::UIKit::UIScrollView* scrollView);
void ScrollView__iOS_UIKit_IUIScrollViewDelegate_scrollViewWillBeginZoomingWithView(ScrollView* __this, ::app::iOS::UIKit::UIScrollView* scrollView, ::app::iOS::UIKit::UIView* view);
::app::iOS::UIKit::UIView* ScrollView__iOS_UIKit_IUIScrollViewDelegate_viewForZoomingInScrollView(ScrollView* __this, ::app::iOS::UIKit::UIScrollView* scrollView);
ScrollView* ScrollView__New_1(::uStatic* __this);
void ScrollView__NotifyNewSize(ScrollView* __this, ::app::Fuse::iOS::NativeViews::NativeView* child);
void ScrollView__OnScrollPropertyChanged(ScrollView* __this, ::uObject* sender, ::app::Fuse::Controls::ScrollPropertyChangedArgs* args);
void ScrollView__OnScrollPropertyChanged_1(ScrollView* __this);
void ScrollView__UpdateContentSize(ScrollView* __this, ::app::Uno::Float2 newContentSize);

struct ScrollView : ::app::Fuse::iOS::NativeViews::ParentNativeView__Fuse_Controls_ScrollView
{
    ::uStrong< ::app::iOS::UIKit::UIScrollView*> _scrollView;

    void _ObjInit_3() { ScrollView___ObjInit_3(this); }
    void OnScrollPropertyChanged(::uObject* sender, ::app::Fuse::Controls::ScrollPropertyChangedArgs* args) { ScrollView__OnScrollPropertyChanged(this, sender, args); }
    void OnScrollPropertyChanged_1() { ScrollView__OnScrollPropertyChanged_1(this); }
    void UpdateContentSize(::app::Uno::Float2 newContentSize);
};

}}}}

#include <app/Uno.Float2.h>

namespace app {
namespace Fuse {
namespace iOS {
namespace NativeViews {

inline void ScrollView::UpdateContentSize(::app::Uno::Float2 newContentSize) { ScrollView__UpdateContentSize(this, newContentSize); }

}}}}


#endif
