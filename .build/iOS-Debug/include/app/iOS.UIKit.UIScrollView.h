// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_I_O_S_U_I_KIT_U_I_SCROLL_VIEW_H__
#define __APP_I_O_S_U_I_KIT_U_I_SCROLL_VIEW_H__

#include <app/iOS.UIKit.UIView.h>
#include <Uno.h>
namespace app { namespace iOS { namespace CoreGraphics { struct CGPoint; } } }
namespace app { namespace iOS { namespace CoreGraphics { struct CGSize; } } }

namespace app {
namespace iOS {
namespace UIKit {

struct UIScrollView;

struct UIScrollView__uType : ::app::iOS::UIKit::UIView__uType
{
};

UIScrollView__uType* UIScrollView__typeof();

void UIScrollView___ObjInit_8(UIScrollView* __this);
::app::iOS::CoreGraphics::CGPoint UIScrollView__contentOffset(UIScrollView* __this);
::app::iOS::CoreGraphics::CGSize UIScrollView__contentSize(UIScrollView* __this);
::uObject* UIScrollView__delegate_(UIScrollView* __this);
::app::iOS::CoreGraphics::CGPoint UIScrollView__get_ContentOffset(UIScrollView* __this);
::app::iOS::CoreGraphics::CGSize UIScrollView__get_ContentSize(UIScrollView* __this);
::uObject* UIScrollView__get_Delegate(UIScrollView* __this);
UIScrollView* UIScrollView__New_9(::uStatic* __this);
void UIScrollView__set_ContentOffset(UIScrollView* __this, ::app::iOS::CoreGraphics::CGPoint value);
void UIScrollView__set_ContentSize(UIScrollView* __this, ::app::iOS::CoreGraphics::CGSize value);
void UIScrollView__set_Delegate(UIScrollView* __this, ::uObject* value);
void UIScrollView__setContentOffset(UIScrollView* __this, ::app::iOS::CoreGraphics::CGPoint contentOffset_);
void UIScrollView__setContentSize(UIScrollView* __this, ::app::iOS::CoreGraphics::CGSize contentSize_);
void UIScrollView__setDelegate(UIScrollView* __this, ::uObject* delegate__);

struct UIScrollView : ::app::iOS::UIKit::UIView
{
    void _ObjInit_8() { UIScrollView___ObjInit_8(this); }
    ::app::iOS::CoreGraphics::CGPoint contentOffset();
    ::app::iOS::CoreGraphics::CGSize contentSize();
    ::uObject* delegate_() { return UIScrollView__delegate_(this); }
    ::app::iOS::CoreGraphics::CGPoint ContentOffset();
    ::app::iOS::CoreGraphics::CGSize ContentSize();
    ::uObject* Delegate() { return UIScrollView__get_Delegate(this); }
    void ContentOffset(::app::iOS::CoreGraphics::CGPoint value);
    void ContentSize(::app::iOS::CoreGraphics::CGSize value);
    void Delegate(::uObject* value) { UIScrollView__set_Delegate(this, value); }
    void setContentOffset(::app::iOS::CoreGraphics::CGPoint contentOffset_);
    void setContentSize(::app::iOS::CoreGraphics::CGSize contentSize_);
    void setDelegate(::uObject* delegate__) { UIScrollView__setDelegate(this, delegate__); }
};

}}}

#include <app/iOS.CoreGraphics.CGPoint.h>
#include <app/iOS.CoreGraphics.CGSize.h>

namespace app {
namespace iOS {
namespace UIKit {

inline ::app::iOS::CoreGraphics::CGPoint UIScrollView::contentOffset() { return UIScrollView__contentOffset(this); }
inline ::app::iOS::CoreGraphics::CGSize UIScrollView::contentSize() { return UIScrollView__contentSize(this); }
inline ::app::iOS::CoreGraphics::CGPoint UIScrollView::ContentOffset() { return UIScrollView__get_ContentOffset(this); }
inline ::app::iOS::CoreGraphics::CGSize UIScrollView::ContentSize() { return UIScrollView__get_ContentSize(this); }
inline void UIScrollView::ContentOffset(::app::iOS::CoreGraphics::CGPoint value) { UIScrollView__set_ContentOffset(this, value); }
inline void UIScrollView::ContentSize(::app::iOS::CoreGraphics::CGSize value) { UIScrollView__set_ContentSize(this, value); }
inline void UIScrollView::setContentOffset(::app::iOS::CoreGraphics::CGPoint contentOffset_) { UIScrollView__setContentOffset(this, contentOffset_); }
inline void UIScrollView::setContentSize(::app::iOS::CoreGraphics::CGSize contentSize_) { UIScrollView__setContentSize(this, contentSize_); }

}}}


#endif
