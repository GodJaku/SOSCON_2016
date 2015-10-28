// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/interface/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_I_O_S_U_I_KIT_I_U_I_SCROLL_VIEW_DELEGATE_H__
#define __APP_I_O_S_U_I_KIT_I_U_I_SCROLL_VIEW_DELEGATE_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace iOS { namespace UIKit { struct UIScrollView; } } }
namespace app { namespace iOS { namespace UIKit { struct UIView; } } }

namespace app {
namespace iOS {
namespace UIKit {

::uInterfaceType* IUIScrollViewDelegate__typeof();

struct IUIScrollViewDelegate
{
    void(*__fp_scrollViewDidEndDecelerating)(void*, ::app::iOS::UIKit::UIScrollView*);
    void(*__fp_scrollViewDidEndDraggingWillDecelerate)(void*, ::app::iOS::UIKit::UIScrollView*, bool);
    void(*__fp_scrollViewDidEndScrollingAnimation)(void*, ::app::iOS::UIKit::UIScrollView*);
    void(*__fp_scrollViewDidEndZoomingWithViewAtScale)(void*, ::app::iOS::UIKit::UIScrollView*, ::app::iOS::UIKit::UIView*, double);
    void(*__fp_scrollViewDidScroll)(void*, ::app::iOS::UIKit::UIScrollView*);
    void(*__fp_scrollViewDidScrollToTop)(void*, ::app::iOS::UIKit::UIScrollView*);
    void(*__fp_scrollViewDidZoom)(void*, ::app::iOS::UIKit::UIScrollView*);
    bool(*__fp_scrollViewShouldScrollToTop)(void*, ::app::iOS::UIKit::UIScrollView*);
    void(*__fp_scrollViewWillBeginDecelerating)(void*, ::app::iOS::UIKit::UIScrollView*);
    void(*__fp_scrollViewWillBeginDragging)(void*, ::app::iOS::UIKit::UIScrollView*);
    void(*__fp_scrollViewWillBeginZoomingWithView)(void*, ::app::iOS::UIKit::UIScrollView*, ::app::iOS::UIKit::UIView*);
    ::app::iOS::UIKit::UIView*(*__fp_viewForZoomingInScrollView)(void*, ::app::iOS::UIKit::UIScrollView*);

    static void scrollViewDidEndDecelerating(::uObject* __this, ::app::iOS::UIKit::UIScrollView* scrollView) { ((IUIScrollViewDelegate*)uGetInterfacePtr(__this, IUIScrollViewDelegate__typeof()))->__fp_scrollViewDidEndDecelerating((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), scrollView); }
    static void scrollViewDidEndDraggingWillDecelerate(::uObject* __this, ::app::iOS::UIKit::UIScrollView* scrollView, bool decelerate) { ((IUIScrollViewDelegate*)uGetInterfacePtr(__this, IUIScrollViewDelegate__typeof()))->__fp_scrollViewDidEndDraggingWillDecelerate((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), scrollView, decelerate); }
    static void scrollViewDidEndScrollingAnimation(::uObject* __this, ::app::iOS::UIKit::UIScrollView* scrollView) { ((IUIScrollViewDelegate*)uGetInterfacePtr(__this, IUIScrollViewDelegate__typeof()))->__fp_scrollViewDidEndScrollingAnimation((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), scrollView); }
    static void scrollViewDidEndZoomingWithViewAtScale(::uObject* __this, ::app::iOS::UIKit::UIScrollView* scrollView, ::app::iOS::UIKit::UIView* view, double scale) { ((IUIScrollViewDelegate*)uGetInterfacePtr(__this, IUIScrollViewDelegate__typeof()))->__fp_scrollViewDidEndZoomingWithViewAtScale((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), scrollView, view, scale); }
    static void scrollViewDidScroll(::uObject* __this, ::app::iOS::UIKit::UIScrollView* scrollView) { ((IUIScrollViewDelegate*)uGetInterfacePtr(__this, IUIScrollViewDelegate__typeof()))->__fp_scrollViewDidScroll((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), scrollView); }
    static void scrollViewDidScrollToTop(::uObject* __this, ::app::iOS::UIKit::UIScrollView* scrollView) { ((IUIScrollViewDelegate*)uGetInterfacePtr(__this, IUIScrollViewDelegate__typeof()))->__fp_scrollViewDidScrollToTop((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), scrollView); }
    static void scrollViewDidZoom(::uObject* __this, ::app::iOS::UIKit::UIScrollView* scrollView) { ((IUIScrollViewDelegate*)uGetInterfacePtr(__this, IUIScrollViewDelegate__typeof()))->__fp_scrollViewDidZoom((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), scrollView); }
    static bool scrollViewShouldScrollToTop(::uObject* __this, ::app::iOS::UIKit::UIScrollView* scrollView) { return ((IUIScrollViewDelegate*)uGetInterfacePtr(__this, IUIScrollViewDelegate__typeof()))->__fp_scrollViewShouldScrollToTop((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), scrollView); }
    static void scrollViewWillBeginDecelerating(::uObject* __this, ::app::iOS::UIKit::UIScrollView* scrollView) { ((IUIScrollViewDelegate*)uGetInterfacePtr(__this, IUIScrollViewDelegate__typeof()))->__fp_scrollViewWillBeginDecelerating((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), scrollView); }
    static void scrollViewWillBeginDragging(::uObject* __this, ::app::iOS::UIKit::UIScrollView* scrollView) { ((IUIScrollViewDelegate*)uGetInterfacePtr(__this, IUIScrollViewDelegate__typeof()))->__fp_scrollViewWillBeginDragging((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), scrollView); }
    static void scrollViewWillBeginZoomingWithView(::uObject* __this, ::app::iOS::UIKit::UIScrollView* scrollView, ::app::iOS::UIKit::UIView* view) { ((IUIScrollViewDelegate*)uGetInterfacePtr(__this, IUIScrollViewDelegate__typeof()))->__fp_scrollViewWillBeginZoomingWithView((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), scrollView, view); }
    static ::app::iOS::UIKit::UIView* viewForZoomingInScrollView(::uObject* __this, ::app::iOS::UIKit::UIScrollView* scrollView) { return ((IUIScrollViewDelegate*)uGetInterfacePtr(__this, IUIScrollViewDelegate__typeof()))->__fp_viewForZoomingInScrollView((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), scrollView); }
};

}}}


#endif
