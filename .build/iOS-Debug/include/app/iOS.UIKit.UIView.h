// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_I_O_S_U_I_KIT_U_I_VIEW_H__
#define __APP_I_O_S_U_I_KIT_U_I_VIEW_H__

#include <app/iOS.UIKit.UIResponder.h>
#include <Uno.h>
#include <uObjC.h>
namespace app { namespace iOS { namespace CoreGraphics { struct CGRect; } } }
namespace app { namespace iOS { namespace CoreGraphics { struct CGSize; } } }
namespace app { namespace iOS { namespace QuartzCore { struct CALayer; } } }
namespace app { namespace iOS { namespace UIKit { struct UIColor; } } }

namespace app {
namespace iOS {
namespace UIKit {

struct UIView;

struct UIView__uType : ::app::iOS::UIKit::UIResponder__uType
{
    bool(*__fp_isUserInteractionEnabled)(UIView*);
    void(*__fp_setFrame)(UIView*, ::app::iOS::CoreGraphics::CGRect);
    void(*__fp_setTintColor)(UIView*, ::app::iOS::UIKit::UIColor*);
    void(*__fp_setUserInteractionEnabled)(UIView*, bool);
    ::app::iOS::UIKit::UIColor*(*__fp_tintColor)(UIView*);
};

UIView__uType* UIView__typeof();

void UIView___ObjInit_6(UIView* __this, ::id __id);
void UIView___ObjInit_7(UIView* __this);
void UIView__addSubview(UIView* __this, UIView* view_);
double UIView__alpha(UIView* __this);
bool UIView__autoresizesSubviews(UIView* __this);
::app::iOS::UIKit::UIColor* UIView__backgroundColor(UIView* __this);
void UIView__bringSubviewToFront(UIView* __this, UIView* view_);
bool UIView__clipsToBounds(UIView* __this);
::app::iOS::CoreGraphics::CGRect UIView__frame(UIView* __this);
double UIView__get_Alpha(UIView* __this);
bool UIView__get_AutoresizesSubviews(UIView* __this);
::app::iOS::UIKit::UIColor* UIView__get_BackgroundColor(UIView* __this);
bool UIView__get_ClipsToBounds(UIView* __this);
bool UIView__get_ExclusiveTouch(UIView* __this);
::app::iOS::CoreGraphics::CGRect UIView__get_Frame(UIView* __this);
::app::iOS::QuartzCore::CALayer* UIView__get_Layer(UIView* __this);
bool UIView__get_MultipleTouchEnabled(UIView* __this);
bool UIView__get_Opaque(UIView* __this);
::app::iOS::UIKit::UIColor* UIView__get_TintColor(UIView* __this);
bool UIView__get_UserInteractionEnabled(UIView* __this);
bool UIView__isExclusiveTouch(UIView* __this);
bool UIView__isMultipleTouchEnabled(UIView* __this);
bool UIView__isOpaque(UIView* __this);
bool UIView__isUserInteractionEnabled(UIView* __this);
::app::iOS::QuartzCore::CALayer* UIView__layer(UIView* __this);
UIView* UIView__New_7(::uStatic* __this);
void UIView__removeFromSuperview(UIView* __this);
void UIView__set_Alpha(UIView* __this, double value);
void UIView__set_AutoresizesSubviews(UIView* __this, bool value);
void UIView__set_BackgroundColor(UIView* __this, ::app::iOS::UIKit::UIColor* value);
void UIView__set_ClipsToBounds(UIView* __this, bool value);
void UIView__set_ExclusiveTouch(UIView* __this, bool value);
void UIView__set_Frame(UIView* __this, ::app::iOS::CoreGraphics::CGRect value);
void UIView__set_MultipleTouchEnabled(UIView* __this, bool value);
void UIView__set_Opaque(UIView* __this, bool value);
void UIView__set_TintColor(UIView* __this, ::app::iOS::UIKit::UIColor* value);
void UIView__set_UserInteractionEnabled(UIView* __this, bool value);
void UIView__setAlpha(UIView* __this, double alpha_);
void UIView__setAutoresizesSubviews(UIView* __this, bool autoresizesSubviews_);
void UIView__setBackgroundColor(UIView* __this, ::app::iOS::UIKit::UIColor* backgroundColor_);
void UIView__setClipsToBounds(UIView* __this, bool clipsToBounds_);
void UIView__setExclusiveTouch(UIView* __this, bool exclusiveTouch_);
void UIView__setFrame(UIView* __this, ::app::iOS::CoreGraphics::CGRect frame_);
void UIView__setMultipleTouchEnabled(UIView* __this, bool multipleTouchEnabled_);
void UIView__setNeedsDisplay(UIView* __this);
void UIView__setOpaque(UIView* __this, bool opaque_);
void UIView__setTintColor(UIView* __this, ::app::iOS::UIKit::UIColor* tintColor_);
void UIView__setTranslatesAutoresizingMaskIntoConstraints(UIView* __this, bool flag_);
void UIView__setUserInteractionEnabled(UIView* __this, bool userInteractionEnabled_);
::app::iOS::CoreGraphics::CGSize UIView__sizeThatFits(UIView* __this, ::app::iOS::CoreGraphics::CGSize size_);
void UIView__sizeToFit(UIView* __this);
::app::iOS::UIKit::UIColor* UIView__tintColor(UIView* __this);

struct UIView : ::app::iOS::UIKit::UIResponder
{
    void _ObjInit_6(::id __id) { UIView___ObjInit_6(this, __id); }
    void _ObjInit_7() { UIView___ObjInit_7(this); }
    void addSubview(UIView* view_) { UIView__addSubview(this, view_); }
    double alpha() { return UIView__alpha(this); }
    bool autoresizesSubviews() { return UIView__autoresizesSubviews(this); }
    ::app::iOS::UIKit::UIColor* backgroundColor() { return UIView__backgroundColor(this); }
    void bringSubviewToFront(UIView* view_) { UIView__bringSubviewToFront(this, view_); }
    bool clipsToBounds() { return UIView__clipsToBounds(this); }
    ::app::iOS::CoreGraphics::CGRect frame();
    double Alpha() { return UIView__get_Alpha(this); }
    bool AutoresizesSubviews() { return UIView__get_AutoresizesSubviews(this); }
    ::app::iOS::UIKit::UIColor* BackgroundColor() { return UIView__get_BackgroundColor(this); }
    bool ClipsToBounds() { return UIView__get_ClipsToBounds(this); }
    bool ExclusiveTouch() { return UIView__get_ExclusiveTouch(this); }
    ::app::iOS::CoreGraphics::CGRect Frame();
    ::app::iOS::QuartzCore::CALayer* Layer() { return UIView__get_Layer(this); }
    bool MultipleTouchEnabled() { return UIView__get_MultipleTouchEnabled(this); }
    bool Opaque() { return UIView__get_Opaque(this); }
    ::app::iOS::UIKit::UIColor* TintColor() { return UIView__get_TintColor(this); }
    bool UserInteractionEnabled() { return UIView__get_UserInteractionEnabled(this); }
    bool isExclusiveTouch() { return UIView__isExclusiveTouch(this); }
    bool isMultipleTouchEnabled() { return UIView__isMultipleTouchEnabled(this); }
    bool isOpaque() { return UIView__isOpaque(this); }
    bool isUserInteractionEnabled() { return (((UIView__uType*)this->__obj_type)->__fp_isUserInteractionEnabled)(this); }
    ::app::iOS::QuartzCore::CALayer* layer() { return UIView__layer(this); }
    void removeFromSuperview() { UIView__removeFromSuperview(this); }
    void Alpha(double value) { UIView__set_Alpha(this, value); }
    void AutoresizesSubviews(bool value) { UIView__set_AutoresizesSubviews(this, value); }
    void BackgroundColor(::app::iOS::UIKit::UIColor* value) { UIView__set_BackgroundColor(this, value); }
    void ClipsToBounds(bool value) { UIView__set_ClipsToBounds(this, value); }
    void ExclusiveTouch(bool value) { UIView__set_ExclusiveTouch(this, value); }
    void Frame(::app::iOS::CoreGraphics::CGRect value);
    void MultipleTouchEnabled(bool value) { UIView__set_MultipleTouchEnabled(this, value); }
    void Opaque(bool value) { UIView__set_Opaque(this, value); }
    void TintColor(::app::iOS::UIKit::UIColor* value) { UIView__set_TintColor(this, value); }
    void UserInteractionEnabled(bool value) { UIView__set_UserInteractionEnabled(this, value); }
    void setAlpha(double alpha_) { UIView__setAlpha(this, alpha_); }
    void setAutoresizesSubviews(bool autoresizesSubviews_) { UIView__setAutoresizesSubviews(this, autoresizesSubviews_); }
    void setBackgroundColor(::app::iOS::UIKit::UIColor* backgroundColor_) { UIView__setBackgroundColor(this, backgroundColor_); }
    void setClipsToBounds(bool clipsToBounds_) { UIView__setClipsToBounds(this, clipsToBounds_); }
    void setExclusiveTouch(bool exclusiveTouch_) { UIView__setExclusiveTouch(this, exclusiveTouch_); }
    void setFrame(::app::iOS::CoreGraphics::CGRect frame_);
    void setMultipleTouchEnabled(bool multipleTouchEnabled_) { UIView__setMultipleTouchEnabled(this, multipleTouchEnabled_); }
    void setNeedsDisplay() { UIView__setNeedsDisplay(this); }
    void setOpaque(bool opaque_) { UIView__setOpaque(this, opaque_); }
    void setTintColor(::app::iOS::UIKit::UIColor* tintColor_) { (((UIView__uType*)this->__obj_type)->__fp_setTintColor)(this, tintColor_); }
    void setTranslatesAutoresizingMaskIntoConstraints(bool flag_) { UIView__setTranslatesAutoresizingMaskIntoConstraints(this, flag_); }
    void setUserInteractionEnabled(bool userInteractionEnabled_) { (((UIView__uType*)this->__obj_type)->__fp_setUserInteractionEnabled)(this, userInteractionEnabled_); }
    ::app::iOS::CoreGraphics::CGSize sizeThatFits(::app::iOS::CoreGraphics::CGSize size_);
    void sizeToFit() { UIView__sizeToFit(this); }
    ::app::iOS::UIKit::UIColor* tintColor() { return (((UIView__uType*)this->__obj_type)->__fp_tintColor)(this); }
};

}}}

#include <app/iOS.CoreGraphics.CGRect.h>
#include <app/iOS.CoreGraphics.CGSize.h>

namespace app {
namespace iOS {
namespace UIKit {

inline ::app::iOS::CoreGraphics::CGRect UIView::frame() { return UIView__frame(this); }
inline ::app::iOS::CoreGraphics::CGRect UIView::Frame() { return UIView__get_Frame(this); }
inline void UIView::Frame(::app::iOS::CoreGraphics::CGRect value) { UIView__set_Frame(this, value); }
inline void UIView::setFrame(::app::iOS::CoreGraphics::CGRect frame_) { (((UIView__uType*)this->__obj_type)->__fp_setFrame)(this, frame_); }
inline ::app::iOS::CoreGraphics::CGSize UIView::sizeThatFits(::app::iOS::CoreGraphics::CGSize size_) { return UIView__sizeThatFits(this, size_); }

}}}


#endif
