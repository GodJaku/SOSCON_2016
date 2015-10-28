#include <app/Fuse.Behavior.h>
#include <app/Fuse.Controls.Button.h>
#include <app/Fuse.Controls.Circle.h>
#include <app/Fuse.Controls.Control.h>
#include <app/Fuse.Controls.Image.h>
#include <app/Fuse.Controls.RangeControl.h>
#include <app/Fuse.Controls.Rectangle.h>
#include <app/Fuse.Controls.Slider.h>
#include <app/Fuse.Controls.Switch.h>
#include <app/Fuse.Controls.TextBlock.h>
#include <app/Fuse.Controls.TextControl.h>
#include <app/Fuse.Controls.TextInput.h>
#include <app/Fuse.Controls.ToggleControl.h>
#include <app/Fuse.Controls.WebView.h>
#include <app/Fuse.Elements.Alignment.h>
#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.Elements.StretchDirection.h>
#include <app/Fuse.Elements.StretchMode.h>
#include <app/Fuse.Elements.StretchSizing.h>
#include <app/Fuse.Elements.TextAlignment.h>
#include <app/Fuse.Elements.TextWrapping.h>
#include <app/Fuse.FastMatrix.h>
#include <app/Fuse.Font.h>
#include <app/Fuse.HitTestContext.h>
#include <app/Fuse.Input.Focus.h>
#include <app/Fuse.Internal.SizingContainer.h>
#include <app/Fuse.InvalidateLayoutReason.h>
#include <app/Fuse.iOS.ControlEvent.h>
#include <app/Fuse.iOS.Controls.Button.h>
#include <app/Fuse.iOS.Controls.Circle.h>
#include <app/Fuse.iOS.Controls.Control__Fuse_Controls_Circle.h>
#include <app/Fuse.iOS.Controls.Control__Fuse_Controls_Rectangle.h>
#include <app/Fuse.iOS.Controls.ControlProperties.h>
#include <app/Fuse.iOS.Controls.Element.h>
#include <app/Fuse.iOS.Controls.Image.h>
#include <app/Fuse.iOS.Controls.ImageCache.h>
#include <app/Fuse.iOS.Controls.ITextInputImpl.h>
#include <app/Fuse.iOS.Controls.MapView.h>
#include <app/Fuse.iOS.Controls.MultilineTextInput.h>
#include <app/Fuse.iOS.Controls.Rectangle.h>
#include <app/Fuse.iOS.Controls.SingleLineTextInput.h>
#include <app/Fuse.iOS.Controls.Slider.h>
#include <app/Fuse.iOS.Controls.Switch.h>
#include <app/Fuse.iOS.Controls.TextBlock.h>
#include <app/Fuse.iOS.Controls.TextInput.h>
#include <app/Fuse.iOS.Controls.ViewContainer.h>
#include <app/Fuse.iOS.Controls.WebView.h>
#include <app/Fuse.iOS.FontCache.h>
#include <app/Fuse.iOS.iOSBindingView.h>
#include <app/Fuse.iOS.iOSExtensions.h>
#include <app/Fuse.iOS.NativeViews.LeafNativeView.h>
#include <app/Fuse.iOS.NativeViews.NativeView.h>
#include <app/Fuse.iOS.Transform.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.NodeBounds.h>
#include <app/Fuse.Resources.FileImageSource.h>
#include <app/Fuse.Resources.HttpImageSource.h>
#include <app/Fuse.Resources.ImageSource.h>
#include <app/Fuse.SizeFlags.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_Control__float4.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_TextControl__Fuse_Font.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_TextInput__float4.h>
#include <app/Fuse.StyleProperty__Fuse_iOS_Controls_Button__float4.h>
#include <app/Fuse.UpdateManager.h>
#include <app/Fuse.UpdateStage.h>
#include <app/iOS.CoreGraphics.CGPoint.h>
#include <app/iOS.CoreGraphics.CGRect.h>
#include <app/iOS.CoreGraphics.CGSize.h>
#include <app/iOS.CoreImage.CIImage.h>
#include <app/iOS.Foundation._NSRange.h>
#include <app/iOS.Foundation.NSObject.h>
#include <app/iOS.Foundation.NSURL.h>
#include <app/iOS.Foundation.NSURLCache.h>
#include <app/iOS.Foundation.NSURLRequest.h>
#include <app/iOS.MapKit.MKMapView.h>
#include <app/iOS.QuartzCore.CALayer.h>
#include <app/iOS.UIKit.IUITextInput.h>
#include <app/iOS.UIKit.NSLineBreakMode.h>
#include <app/iOS.UIKit.NSTextAlignment.h>
#include <app/iOS.UIKit.NSTextAttachment.h>
#include <app/iOS.UIKit.UIBezierPath.h>
#include <app/iOS.UIKit.UIButton.h>
#include <app/iOS.UIKit.UIButtonType.h>
#include <app/iOS.UIKit.UIColor.h>
#include <app/iOS.UIKit.UIControl.h>
#include <app/iOS.UIKit.UIControlEvents.h>
#include <app/iOS.UIKit.UIControlState.h>
#include <app/iOS.UIKit.UIEdgeInsets.h>
#include <app/iOS.UIKit.UIEvent.h>
#include <app/iOS.UIKit.UIFont.h>
#include <app/iOS.UIKit.UIImage.h>
#include <app/iOS.UIKit.UIImageView.h>
#include <app/iOS.UIKit.UIKeyboardType.h>
#include <app/iOS.UIKit.UILabel.h>
#include <app/iOS.UIKit.UIResponder.h>
#include <app/iOS.UIKit.UIScrollView.h>
#include <app/iOS.UIKit.UISlider.h>
#include <app/iOS.UIKit.UISwitch.h>
#include <app/iOS.UIKit.UITextBorderStyle.h>
#include <app/iOS.UIKit.UITextField.h>
#include <app/iOS.UIKit.UITextView.h>
#include <app/iOS.UIKit.UIView.h>
#include <app/iOS.WebKit.WKNavigation.h>
#include <app/iOS.WebKit.WKWebView.h>
#include <app/ObjC.ID.h>
#include <app/Uno.Action.h>
#include <app/Uno.Action__Fuse_Controls_Control.h>
#include <app/Uno.Action__Fuse_iOS_Controls_Button.h>
#include <app/Uno.Action__iOS_Foundation_NSObject__iOS_UIKit_UIEvent.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Byte.h>
#include <app/Uno.Collections.Dictionary__Uno_UX_FileSource__iOS_UIKit_UIImage.h>
#include <app/Uno.Collections.ICollection__Fuse_Behavior.h>
#include <app/Uno.Collections.IList__Fuse_Behavior.h>
#include <app/Uno.Delegate.h>
#include <app/Uno.Diagnostics.Debug.h>
#include <app/Uno.Diagnostics.DebugMessageType.h>
#include <app/Uno.Double.h>
#include <app/Uno.EventArgs.h>
#include <app/Uno.EventHandler.h>
#include <app/Uno.EventHandler__iOS_CoreGraphics_CGRect.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Float3.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Float4x4.h>
#include <app/Uno.Int.h>
#include <app/Uno.IO.Directory.h>
#include <app/Uno.IO.File.h>
#include <app/Uno.IO.UserDirectory.h>
#include <app/Uno.Math.h>
#include <app/Uno.Matrix.h>
#include <app/Uno.Object.h>
#include <app/Uno.Platform.TextInputHint.h>
#include <app/Uno.Platform2.Application.h>
#include <app/Uno.String.h>
#include <app/Uno.UX.FileSource.h>
#include <app/Uno.UX.ValueChangedArgs__bool.h>
#include <app/Uno.UX.ValueChangedArgs__string.h>
#include <app/Uno.UX.ValueChangedHandler__bool.h>
#include <app/Uno.UX.ValueChangedHandler__string.h>

namespace app {
namespace Fuse {
namespace iOS {
namespace Controls {

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.11.3/Controls/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_iOS_Controls_Button__float4*> Button__DisabledColorProperty;
::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_iOS_Controls_Button__float4*> Button__HighlightedColorProperty;
::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_iOS_Controls_Button__float4*> Button__NormalColorProperty;
::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_iOS_Controls_Button__float4*> Button__SelectedColorProperty;

Button__uType* Button__typeof()
{
    static ::uStaticStrong<Button__uType*> type;
    if (type != NULL) return type;

    type = (Button__uType*)::uAllocClassType(sizeof(Button__uType), "Fuse.iOS.Controls.Button", false, 1, 2, 0);

    type->SetBaseType(::app::Fuse::iOS::Controls::Control__Fuse_Controls_Button__typeof());
    type->__fp_Finalize = (void(*)(::uObject*))Button__Finalize;
    type->__fp_Attach = (void(*)(::app::Fuse::iOS::Controls::Control__Fuse_Controls_Button*))Button__Attach;
    type->__fp_CreateInternal = (::app::iOS::UIKit::UIView*(*)(::app::Fuse::iOS::Controls::Element*))Button__CreateInternal;
    type->__fp_Detach = (void(*)(::app::Fuse::iOS::Controls::Control__Fuse_Controls_Button*))Button__Detach;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(Button__uType, __interface_0));

    type->SetStrongRefs(
        "_button", offsetof(Button, _button),
        "_clickedEvent", offsetof(Button, _clickedEvent));

    return type;
}

void Button__Finalize(Button* __this)
{
    if (__this->_clickedEvent != NULL)
    {
        ::uPtr< ::app::Fuse::iOS::ControlEvent*>(__this->_clickedEvent)->Dispose();
    }
}

void Button___ObjInit_3(Button* __this)
{
    ::app::Fuse::iOS::Controls::Control__Fuse_Controls_Button___ObjInit_2(__this);
}

void Button___TypeInit_1(::uStatic* __this)
{
    Button__NormalColorProperty = ::app::Fuse::StyleProperty__Fuse_iOS_Controls_Button__float4__New_1(NULL, ::app::Uno::Float4__New_2(NULL, 1.0f, 1.0f, 1.0f, 1.0f), ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_iOS_Controls_Button__typeof(), (const void*)Button__OnButtonPropertyChanged));
    Button__HighlightedColorProperty = ::app::Fuse::StyleProperty__Fuse_iOS_Controls_Button__float4__New_1(NULL, ::app::Uno::Float4__New_2(NULL, 1.0f, 1.0f, 1.0f, 1.0f), ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_iOS_Controls_Button__typeof(), (const void*)Button__OnButtonPropertyChanged));
    Button__DisabledColorProperty = ::app::Fuse::StyleProperty__Fuse_iOS_Controls_Button__float4__New_1(NULL, ::app::Uno::Float4__New_2(NULL, 1.0f, 1.0f, 1.0f, 1.0f), ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_iOS_Controls_Button__typeof(), (const void*)Button__OnButtonPropertyChanged));
    Button__SelectedColorProperty = ::app::Fuse::StyleProperty__Fuse_iOS_Controls_Button__float4__New_1(NULL, ::app::Uno::Float4__New_2(NULL, 1.0f, 1.0f, 1.0f, 1.0f), ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_iOS_Controls_Button__typeof(), (const void*)Button__OnButtonPropertyChanged));
}

void Button__Attach(Button* __this)
{
    __this->Create();
    ::uPtr< ::app::Fuse::Controls::Button*>(__this->SemanticControl())->add_TextChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__string__typeof(), (const void*)Button__OnTextChanged, __this));
    __this->NormalText(::uPtr< ::app::Fuse::Controls::Button*>(__this->SemanticControl())->Text());
}

::app::iOS::UIKit::UIView* Button__CreateInternal(Button* __this)
{
    if (__this->_button == NULL)
    {
        __this->_button = ::app::iOS::UIKit::UIButton__New_12(NULL, ::app::iOS::UIKit::UIButton___buttonWithType(NULL, 1));
        __this->_clickedEvent = ::app::Fuse::iOS::ControlEvent__AddHandler(NULL, (::app::iOS::UIKit::UIControl*)__this->_button, ::uNewDelegateNonVirt(::app::Uno::Action__iOS_Foundation_NSObject__iOS_UIKit_UIEvent__typeof(), (const void*)Button__OnClicked, __this), 64);
    }

    return (::app::iOS::UIKit::UIView*)__this->_button;
}

void Button__Detach(Button* __this)
{
    ::uPtr< ::app::Fuse::Controls::Button*>(__this->SemanticControl())->remove_TextChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__string__typeof(), (const void*)Button__OnTextChanged, __this));
}

::app::Uno::Float4 Button__get_DisabledColor(Button* __this)
{
    return ::uPtr< ::app::Fuse::StyleProperty__Fuse_iOS_Controls_Button__float4*>(Button__DisabledColorProperty)->Get(__this);
}

::app::Uno::Float4 Button__get_HighlightedColor(Button* __this)
{
    return ::uPtr< ::app::Fuse::StyleProperty__Fuse_iOS_Controls_Button__float4*>(Button__HighlightedColorProperty)->Get(__this);
}

::app::Uno::Float4 Button__get_NormalColor(Button* __this)
{
    return ::uPtr< ::app::Fuse::StyleProperty__Fuse_iOS_Controls_Button__float4*>(Button__NormalColorProperty)->Get(__this);
}

::app::Uno::Float4 Button__get_SelectedColor(Button* __this)
{
    return ::uPtr< ::app::Fuse::StyleProperty__Fuse_iOS_Controls_Button__float4*>(Button__SelectedColorProperty)->Get(__this);
}

Button* Button__New_1(::uStatic* __this)
{
    Button* inst = (Button*)::uAllocObject(sizeof(Button), Button__typeof());
    inst->_ObjInit_3();
    return inst;
}

void Button__OnButtonPropertyChanged(::uStatic* __this, Button* t)
{
    ::uPtr< Button*>(t)->Create();

    if (::uPtr< ::app::Fuse::StyleProperty__Fuse_iOS_Controls_Button__float4*>(Button__NormalColorProperty)->HasValue(t))
    {
        ::uPtr< ::app::iOS::UIKit::UIButton*>(t->_button)->setTitleColorForState(::app::Fuse::iOS::iOSExtensions__ToUIColor(NULL, t->NormalColor()), 0);
    }

    if (::uPtr< ::app::Fuse::StyleProperty__Fuse_iOS_Controls_Button__float4*>(Button__HighlightedColorProperty)->HasValue(t))
    {
        ::uPtr< ::app::iOS::UIKit::UIButton*>(t->_button)->setTitleColorForState(::app::Fuse::iOS::iOSExtensions__ToUIColor(NULL, t->HighlightedColor()), 1);
    }

    if (::uPtr< ::app::Fuse::StyleProperty__Fuse_iOS_Controls_Button__float4*>(Button__DisabledColorProperty)->HasValue(t))
    {
        ::uPtr< ::app::iOS::UIKit::UIButton*>(t->_button)->setTitleColorForState(::app::Fuse::iOS::iOSExtensions__ToUIColor(NULL, t->DisabledColor()), 2);
    }

    if (::uPtr< ::app::Fuse::StyleProperty__Fuse_iOS_Controls_Button__float4*>(Button__SelectedColorProperty)->HasValue(t))
    {
        ::uPtr< ::app::iOS::UIKit::UIButton*>(t->_button)->setTitleColorForState(::app::Fuse::iOS::iOSExtensions__ToUIColor(NULL, t->SelectedColor()), 4);
    }
}

void Button__OnClicked(Button* __this, ::app::iOS::Foundation::NSObject* sender, ::app::iOS::UIKit::UIEvent* uiEvent)
{
}

void Button__OnTextChanged(Button* __this, ::uObject* sender, ::app::Uno::UX::ValueChangedArgs__string* args)
{
    ::uString* ind_123;

    if ((args != NULL) && (::uPtr< ::app::Uno::UX::ValueChangedArgs__string*>(args)->Origin() == __this))
    {
        return;
    }

    __this->NormalText((ind_123 = ::uPtr< ::app::Uno::UX::ValueChangedArgs__string*>(args)->Value(), (ind_123 != NULL) ? ind_123 : ::uGetConstString("")));
}

void Button__set_DisabledColor(Button* __this, ::app::Uno::Float4 value)
{
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_iOS_Controls_Button__float4*>(Button__DisabledColorProperty)->Set(__this, value);
}

void Button__set_HighlightedColor(Button* __this, ::app::Uno::Float4 value)
{
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_iOS_Controls_Button__float4*>(Button__HighlightedColorProperty)->Set(__this, value);
}

void Button__set_NormalColor(Button* __this, ::app::Uno::Float4 value)
{
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_iOS_Controls_Button__float4*>(Button__NormalColorProperty)->Set(__this, value);
}

void Button__set_NormalText(Button* __this, ::uString* value)
{
    ::uPtr< ::app::iOS::UIKit::UIButton*>(__this->_button)->setTitleForState(value, 0);
}

void Button__set_SelectedColor(Button* __this, ::app::Uno::Float4 value)
{
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_iOS_Controls_Button__float4*>(Button__SelectedColorProperty)->Set(__this, value);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.11.3/Controls/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Circle__uType* Circle__typeof()
{
    static ::uStaticStrong<Circle__uType*> type;
    if (type != NULL) return type;

    type = (Circle__uType*)::uAllocClassType(sizeof(Circle__uType), "Fuse.iOS.Controls.Circle", false, 1, 0, 0);

    type->SetBaseType(::app::Fuse::iOS::Controls::Shape__Fuse_Controls_Circle__typeof());
    type->__fp_CreatePath = (::app::iOS::UIKit::UIBezierPath*(*)(::app::Fuse::iOS::Controls::Shape__Fuse_Controls_Circle*))Circle__CreatePath;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(Circle__uType, __interface_0));

    return type;
}

void Circle___ObjInit_4(Circle* __this)
{
    ::app::Fuse::iOS::Controls::Shape__Fuse_Controls_Circle___ObjInit_3(__this);
}

::app::iOS::UIKit::UIBezierPath* Circle__CreatePath(Circle* __this)
{
    float mn = ::app::Uno::Math__Min_11(NULL, __this->ActualSize().X, __this->ActualSize().Y) / 2.0f;
    bool angle = ::uPtr< ::app::Fuse::Controls::Circle*>(__this->SemanticControl())->UseAngle();
    float start = angle ? ::uPtr< ::app::Fuse::Controls::Circle*>(__this->SemanticControl())->StartAngle() : 0.0f;
    float end = angle ? ::uPtr< ::app::Fuse::Controls::Circle*>(__this->SemanticControl())->EffectiveEndAngle() : 6.28318548f;
    ::app::iOS::UIKit::UIBezierPath* path = ::app::iOS::UIKit::UIBezierPath__New_5(NULL);
    ::uPtr< ::app::iOS::UIKit::UIBezierPath*>(path)->init();
    float sx = ::app::Uno::Math__Cos_1(NULL, start) * mn;
    float sy = ::app::Uno::Math__Sin_1(NULL, start) * mn;

    if (angle)
    {
        ::uPtr< ::app::iOS::UIKit::UIBezierPath*>(path)->moveToPoint(::app::Fuse::iOS::iOSExtensions__ToCGPoint(NULL, ::app::Uno::Float2__op_Addition_2(NULL, __this->Position(), ::app::Uno::Float2__op_Division_1(NULL, __this->ActualSize(), 2.0f))));
        path->addLineToPoint(::app::Fuse::iOS::iOSExtensions__ToCGPoint(NULL, ::app::Uno::Float2__op_Addition_2(NULL, ::app::Uno::Float2__op_Addition_2(NULL, __this->Position(), ::app::Uno::Float2__op_Division_1(NULL, __this->ActualSize(), 2.0f)), ::app::Uno::Float2__New_2(NULL, sx, sy))));
        path->addArcWithCenterRadiusStartAngleEndAngleClockwise(::app::Fuse::iOS::iOSExtensions__ToCGPoint(NULL, ::app::Uno::Float2__op_Division_1(NULL, __this->ActualSize(), 2.0f)), (double)mn, (double)start, (double)end, true);
        path->addLineToPoint(::app::Fuse::iOS::iOSExtensions__ToCGPoint(NULL, ::app::Uno::Float2__op_Addition_2(NULL, __this->Position(), ::app::Uno::Float2__op_Division_1(NULL, __this->ActualSize(), 2.0f))));
    }
    else
    {
        ::uPtr< ::app::iOS::UIKit::UIBezierPath*>(path)->moveToPoint(::app::Fuse::iOS::iOSExtensions__ToCGPoint(NULL, ::app::Uno::Float2__op_Addition_2(NULL, ::app::Uno::Float2__op_Addition_2(NULL, __this->Position(), ::app::Uno::Float2__op_Division_1(NULL, __this->ActualSize(), 2.0f)), ::app::Uno::Float2__New_2(NULL, sx, sy))));
        path->addArcWithCenterRadiusStartAngleEndAngleClockwise(::app::Fuse::iOS::iOSExtensions__ToCGPoint(NULL, ::app::Uno::Float2__op_Division_1(NULL, __this->ActualSize(), 2.0f)), (double)mn, (double)start, (double)end, true);
    }

    path->closePath();
    return path;
}

Circle* Circle__New_1(::uStatic* __this)
{
    Circle* inst = (Circle*)::uAllocObject(sizeof(Circle), Circle__typeof());
    inst->_ObjInit_4();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.11.3/Controls/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_Control__float4*> ControlProperties__TintColorProperty;

ControlProperties__uType* ControlProperties__typeof()
{
    static ::uStaticStrong<ControlProperties__uType*> type;
    if (type != NULL) return type;

    type = (ControlProperties__uType*)::uAllocClassType(sizeof(ControlProperties__uType), "Fuse.iOS.Controls.ControlProperties");

    return type;
}

void ControlProperties___TypeInit(::uStatic* __this)
{
    ControlProperties__TintColorProperty = ::app::Fuse::StyleProperty__Fuse_Controls_Control__float4__New_1(NULL, ::app::Uno::Float4__New_2(NULL, 0.0f, 0.0f, 0.0f, 1.0f), ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Controls_Control__typeof(), (const void*)ControlProperties__OnTintColorChanged));
}

void ControlProperties__OnTintColorChanged(::uStatic* __this, ::app::Fuse::Controls::Control* panel)
{
    ::app::Fuse::iOS::NativeViews::NativeView* nv = ::app::Fuse::iOS::NativeViews::NativeView__GetFrom(NULL, (::app::Fuse::Node*)panel);

    if (nv != NULL)
    {
        ::uPtr< ::app::Fuse::iOS::NativeViews::NativeView*>(nv)->OnTintColorChanged();
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.11.3/Controls/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Element__uType* Element__typeof()
{
    static ::uStaticStrong<Element__uType*> type;
    if (type != NULL) return type;

    type = (Element__uType*)::uAllocClassType(sizeof(Element__uType), "Fuse.iOS.Controls.Element", false, 1, 0, 0);

    type->SetBaseType(::app::Fuse::Node__typeof());
    type->__fp_Create = Element__Create;
    type->__fp_get_HitTestLocalBounds = (::app::Fuse::NodeBounds*(*)(::app::Fuse::Node*))Element__get_HitTestLocalBounds;
    type->__fp_get_LocalRenderBounds = (::app::Uno::Rect(*)(::app::Fuse::Node*))Element__get_LocalRenderBounds;
    type->__fp_GetMarginSize = (::app::Uno::Float2(*)(::app::Fuse::Node*, ::app::Uno::Float2, int))Element__GetMarginSize;
    type->__fp_OnArrangeMarginBox = (::app::Uno::Float2(*)(::app::Fuse::Node*, ::app::Uno::Float2, ::app::Uno::Float2, int))Element__OnArrangeMarginBox;
    type->__fp_OnHitTest = (void(*)(::app::Fuse::Node*, ::app::Fuse::HitTestContext*))Element__OnHitTest;
    type->__fp_PrependImplicitTransform = (void(*)(::app::Fuse::Node*, ::app::Fuse::FastMatrix*))Element__PrependImplicitTransform;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(Element__uType, __interface_0));

    return type;
}

void Element___ObjInit_1(Element* __this)
{
    ::app::Fuse::Node___ObjInit(__this);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(__this->Behaviors()), (::app::Fuse::Behavior*)::app::Fuse::iOS::NativeViews::LeafNativeView__New_1(NULL));
}

::app::iOS::UIKit::UIView* Element__Create(Element* __this)
{
    return __this->CreateInternal();
}

::app::Uno::Float2 Element__get_ActualSize(Element* __this)
{
    return __this->_ActualSize;
}

::app::Fuse::NodeBounds* Element__get_HitTestLocalBounds(Element* __this)
{
    return ::app::Fuse::NodeBounds__Rect_1(NULL, ::app::Uno::Float2__New_1(NULL, 0.0f), __this->ActualSize());
}

::app::Uno::Rect Element__get_LocalRenderBounds(Element* __this)
{
    return ::app::Uno::Rect__New_2(NULL, ::app::Uno::Float2__New_1(NULL, 0.0f), __this->ActualSize());
}

::app::Fuse::iOS::NativeViews::NativeView* Element__get_NativeView(Element* __this)
{
    return ::app::Fuse::iOS::NativeViews::NativeView__GetFrom(NULL, (::app::Fuse::Node*)__this);
}

::app::Uno::Float2 Element__get_Position(Element* __this)
{
    return __this->_Position;
}

::app::Uno::Float2 Element__GetMarginSize(Element* __this, ::app::Uno::Float2 fillSize, int fillSet)
{
    return ::app::Fuse::iOS::iOSBindingView__GetContentSize(NULL, ::uPtr< ::app::Fuse::iOS::NativeViews::NativeView*>(__this->NativeView())->Handle(), fillSize, fillSet);
}

bool Element__IsPointInside(Element* __this, ::app::Uno::Float2 localPoint)
{
    return !((((localPoint.X < 0.0f) || (localPoint.Y < 0.0f)) || (localPoint.X > __this->ActualSize().X)) || (localPoint.Y > __this->ActualSize().Y));
}

::app::Uno::Float2 Element__OnArrangeMarginBox(Element* __this, ::app::Uno::Float2 position, ::app::Uno::Float2 availableSize, int availSet)
{
    ::app::Uno::Float2 sz = availableSize;

    if (!((availSet & 3) == 3))
    {
        ::app::Uno::Float2 rsz = __this->GetMarginSize(availableSize, availSet);

        if (!((availSet & 1) == 1))
        {
            sz.X = rsz.X;
        }

        if (!((availSet & 2) == 2))
        {
            sz.Y = rsz.Y;
        }
    }

    __this->ActualSize(sz);
    __this->Position(position);
    ::app::Fuse::UpdateManager__AddDeferredAction(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)::app::Fuse::iOS::NativeViews::NativeView__NotifyNewTransform, __this->NativeView()));
    return __this->ActualSize();
}

void Element__OnHitTest(Element* __this, ::app::Fuse::HitTestContext* htc)
{
    if (__this->IsPointInside(::uPtr< ::app::Fuse::HitTestContext*>(htc)->LocalPoint()))
    {
        ::uPtr< ::app::Fuse::HitTestContext*>(htc)->Hit_1((::app::Fuse::Node*)__this);
    }
}

void Element__PrependImplicitTransform(Element* __this, ::app::Fuse::FastMatrix* m)
{
    ::uPtr< ::app::Fuse::FastMatrix*>(m)->PrependTranslation(::app::Uno::Float3__New_4(NULL, __this->Position(), 0.0f));
}

void Element__set_ActualSize(Element* __this, ::app::Uno::Float2 value)
{
    __this->_ActualSize = value;
}

void Element__set_Position(Element* __this, ::app::Uno::Float2 value)
{
    __this->_Position = value;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.11.3/Controls/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Image__uType* Image__typeof()
{
    static ::uStaticStrong<Image__uType*> type;
    if (type != NULL) return type;

    type = (Image__uType*)::uAllocClassType(sizeof(Image__uType), "Fuse.iOS.Controls.Image", false, 1, 3, 0);

    type->SetBaseType(::app::Fuse::iOS::Controls::Control__Fuse_Controls_Image__typeof());
    type->__fp_Attach = (void(*)(::app::Fuse::iOS::Controls::Control__Fuse_Controls_Image*))Image__Attach;
    type->__fp_CreateInternal = (::app::iOS::UIKit::UIView*(*)(::app::Fuse::iOS::Controls::Element*))Image__CreateInternal;
    type->__fp_Detach = (void(*)(::app::Fuse::iOS::Controls::Control__Fuse_Controls_Image*))Image__Detach;
    type->__fp_GetMarginSize = (::app::Uno::Float2(*)(::app::Fuse::Node*, ::app::Uno::Float2, int))Image__GetMarginSize;
    type->__fp_OnArrangeMarginBox = (::app::Uno::Float2(*)(::app::Fuse::Node*, ::app::Uno::Float2, ::app::Uno::Float2, int))Image__OnArrangeMarginBox;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(Image__uType, __interface_0));

    type->SetStrongRefs(
        "_imageContainer", offsetof(Image, _imageContainer),
        "_imageView", offsetof(Image, _imageView),
        "_sizing", offsetof(Image, _sizing));

    return type;
}

void Image___ObjInit_3(Image* __this)
{
    __this->_sizing = ::app::Fuse::Internal::SizingContainer__New_1(NULL);
    ::app::Fuse::iOS::Controls::Control__Fuse_Controls_Image___ObjInit_2(__this);
}

void Image__Attach(Image* __this)
{
    __this->Create();
    ::uPtr< ::app::Fuse::Controls::Image*>(__this->SemanticControl())->add_ParamChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)Image__OnParamChanged, __this));
    ::uPtr< ::app::Fuse::Controls::Image*>(__this->SemanticControl())->add_SourceChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)Image__OnSourceChanged, __this));
    __this->OnParamChanged(NULL, NULL);
    __this->OnSourceChanged(NULL, NULL);
}

::app::iOS::UIKit::UIView* Image__CreateInternal(Image* __this)
{
    if (__this->_imageView == NULL)
    {
        __this->_imageView = ::app::iOS::UIKit::UIImageView__New_9(NULL);
        ::uPtr< ::app::iOS::UIKit::UIImageView*>(__this->_imageView)->init();
        __this->_imageContainer = ::app::iOS::UIKit::UIControl__New_9(NULL);
        ::uPtr< ::app::iOS::UIKit::UIControl*>(__this->_imageContainer)->init();
        ::uPtr< ::app::iOS::UIKit::UIControl*>(__this->_imageContainer)->AutoresizesSubviews(false);
        ::uPtr< ::app::iOS::UIKit::UIControl*>(__this->_imageContainer)->setTranslatesAutoresizingMaskIntoConstraints(false);
        ::uPtr< ::app::iOS::UIKit::UIControl*>(__this->_imageContainer)->addSubview((::app::iOS::UIKit::UIView*)__this->_imageView);
        ::uPtr< ::app::iOS::UIKit::UIControl*>(__this->_imageContainer)->ClipsToBounds(true);
    }

    return (::app::iOS::UIKit::UIView*)__this->_imageContainer;
}

void Image__Detach(Image* __this)
{
    ::uPtr< ::app::Fuse::Controls::Image*>(__this->SemanticControl())->remove_ParamChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)Image__OnParamChanged, __this));
    ::uPtr< ::app::Fuse::Controls::Image*>(__this->SemanticControl())->remove_SourceChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)Image__OnSourceChanged, __this));
}

::app::Uno::Float2 Image__GetMarginSize(Image* __this, ::app::Uno::Float2 fillSize, int fillSet)
{
    ::uPtr< ::app::Fuse::Internal::SizingContainer*>(__this->_sizing)->padding = ::uPtr< ::app::Fuse::Controls::Image*>(__this->SemanticControl())->Padding();
    ::uPtr< ::app::Fuse::Internal::SizingContainer*>(__this->_sizing)->snapToPixels = ::uPtr< ::app::Fuse::Controls::Image*>(__this->SemanticControl())->SnapToPixels();
    ::uPtr< ::app::Fuse::Internal::SizingContainer*>(__this->_sizing)->absoluteZoom = ::uPtr< ::app::Fuse::Controls::Image*>(__this->SemanticControl())->AbsoluteZoom();
    ::app::Uno::Float2 measuredSize = __this->GetSize();
    ::app::Uno::Float2 marginSize = ::uPtr< ::app::Fuse::Internal::SizingContainer*>(__this->_sizing)->ExpandFillSize(measuredSize, fillSize, fillSet);
    return marginSize;
}

::app::Uno::Float2 Image__GetSize(Image* __this)
{
    if ((__this->_imageView != NULL) && (::uPtr< ::app::iOS::UIKit::UIImageView*>(__this->_imageView)->Image() != NULL))
    {
        ::app::iOS::CoreGraphics::CGSize size = ::uPtr< ::app::iOS::UIKit::UIImage*>(::uPtr< ::app::iOS::UIKit::UIImageView*>(__this->_imageView)->Image())->Size();
        return ::app::Uno::Float2__New_2(NULL, (float)size.Width, (float)size.Height);
    }

    return ::app::Uno::Float2__New_1(NULL, 0.0f);
}

void Image__Invalidate(Image* __this)
{
    ::uPtr< ::app::Fuse::Controls::Image*>(__this->SemanticControl())->InvalidateLayout(2);
}

Image* Image__New_1(::uStatic* __this)
{
    Image* inst = (Image*)::uAllocObject(sizeof(Image), Image__typeof());
    inst->_ObjInit_3();
    return inst;
}

::app::Uno::Float2 Image__OnArrangeMarginBox(Image* __this, ::app::Uno::Float2 position, ::app::Uno::Float2 availableSize, int availSet)
{
    ::uPtr< ::app::Fuse::Internal::SizingContainer*>(__this->_sizing)->padding = ::uPtr< ::app::Fuse::Controls::Image*>(__this->SemanticControl())->Padding();
    ::uPtr< ::app::Fuse::Internal::SizingContainer*>(__this->_sizing)->snapToPixels = ::uPtr< ::app::Fuse::Controls::Image*>(__this->SemanticControl())->SnapToPixels();
    ::uPtr< ::app::Fuse::Internal::SizingContainer*>(__this->_sizing)->absoluteZoom = ::uPtr< ::app::Fuse::Controls::Image*>(__this->SemanticControl())->AbsoluteZoom();
    ::app::Uno::Float2 contentDesiredSize = __this->GetSize();
    ::app::Uno::Float2 scale = ::uPtr< ::app::Fuse::Internal::SizingContainer*>(__this->_sizing)->CalcScale_1(availableSize, contentDesiredSize);
    ::app::Uno::Float2 origin = ::uPtr< ::app::Fuse::Internal::SizingContainer*>(__this->_sizing)->CalcOrigin(availableSize, ::app::Uno::Float2__op_Multiply_1(NULL, contentDesiredSize, scale));
    ::app::Uno::Float2 drawOrigin = origin;
    ::app::Uno::Float2 drawSize = ::app::Uno::Float2__op_Multiply_1(NULL, contentDesiredSize, scale);
    ::app::Uno::Float4 uvClip = ::uPtr< ::app::Fuse::Internal::SizingContainer*>(__this->_sizing)->CalcClip(availableSize, &drawOrigin, &drawSize);
    ::app::Fuse::iOS::Transform__ApplyIdentity(NULL, (::app::iOS::UIKit::UIView*)__this->_imageView);
    ::uPtr< ::app::iOS::QuartzCore::CALayer*>(::uPtr< ::app::iOS::UIKit::UIImageView*>(__this->_imageView)->Layer())->AnchorPoint(::app::iOS::CoreGraphics::CGPoint__New_1(NULL, 0.0, 0.0));
    ::uPtr< ::app::iOS::QuartzCore::CALayer*>(::uPtr< ::app::iOS::UIKit::UIImageView*>(__this->_imageView)->Layer())->Position(::app::iOS::CoreGraphics::CGPoint__New_1(NULL, 0.0, 0.0));
    ::uPtr< ::app::iOS::QuartzCore::CALayer*>(::uPtr< ::app::iOS::UIKit::UIImageView*>(__this->_imageView)->Layer())->Bounds(::app::iOS::CoreGraphics::CGRect__New_1(NULL, ::app::iOS::CoreGraphics::CGPoint__New_1(NULL, 0.0, 0.0), ::app::iOS::CoreGraphics::CGSize__New_1(NULL, (double)contentDesiredSize.X, (double)contentDesiredSize.Y)));
    ::app::Uno::Float2 transformOrigin = ::app::Uno::Float2__op_Subtraction_2(NULL, origin, drawOrigin);
    ::app::Fuse::iOS::Transform__Apply(NULL, (::app::iOS::UIKit::UIView*)__this->_imageView, ::app::Uno::Matrix__Compose(NULL, ::app::Uno::Float3__New_4(NULL, scale, 0.0f), ::app::Uno::Float4__get_Identity(NULL), ::app::Uno::Float3__New_4(NULL, transformOrigin, 0.0f)));
    ::uPtr< ::app::iOS::UIKit::UIImageView*>(__this->_imageView)->setNeedsDisplay();
    __this->Position(drawOrigin);
    __this->ActualSize(drawSize);
    ::app::Fuse::UpdateManager__AddDeferredAction(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)::app::Fuse::iOS::NativeViews::NativeView__NotifyNewTransform, __this->NativeView()));
    return drawSize;
}

void Image__OnParamChanged(Image* __this, ::uObject* sender, ::app::Uno::EventArgs* args)
{
    if (((::uPtr< ::app::Fuse::Internal::SizingContainer*>(__this->_sizing)->SetStretchMode(::uPtr< ::app::Fuse::Controls::Image*>(__this->SemanticControl())->StretchMode()) || ::uPtr< ::app::Fuse::Internal::SizingContainer*>(__this->_sizing)->SetStretchDirection(::uPtr< ::app::Fuse::Controls::Image*>(__this->SemanticControl())->StretchDirection())) || ::uPtr< ::app::Fuse::Internal::SizingContainer*>(__this->_sizing)->SetStretchSizing(::uPtr< ::app::Fuse::Controls::Image*>(__this->SemanticControl())->StretchSizing())) || ::uPtr< ::app::Fuse::Internal::SizingContainer*>(__this->_sizing)->SetAlignment(::uPtr< ::app::Fuse::Controls::Image*>(__this->SemanticControl())->ContentAlignment()))
    {
        __this->Invalidate();
    }
}

void Image__OnSourceChanged(Image* __this, ::uObject* sender, ::app::Uno::EventArgs* args)
{
    if (::uPtr< ::app::Fuse::Controls::Image*>(__this->SemanticControl())->Source() == NULL)
    {
        return;
    }

    ::app::Fuse::Resources::FileImageSource* fs = ::uAs< ::app::Fuse::Resources::FileImageSource*>(::uPtr< ::app::Fuse::Controls::Image*>(__this->SemanticControl())->Source(), ::app::Fuse::Resources::FileImageSource__typeof());

    if (fs != NULL)
    {
        ::uPtr< ::app::iOS::UIKit::UIImageView*>(__this->_imageView)->Image(::app::Fuse::iOS::Controls::ImageCache__GetImage(NULL, ::uPtr< ::app::Fuse::Resources::FileImageSource*>(fs)->File()));
        ::uPtr< ::app::iOS::UIKit::UIImageView*>(__this->_imageView)->setNeedsDisplay();
        ::uPtr< ::app::Fuse::Controls::Image*>(__this->SemanticControl())->InvalidateLayout(2);
    }

    ::app::Fuse::Resources::HttpImageSource* http = ::uAs< ::app::Fuse::Resources::HttpImageSource*>(::uPtr< ::app::Fuse::Controls::Image*>(__this->SemanticControl())->Source(), ::app::Fuse::Resources::HttpImageSource__typeof());

    if (http != NULL)
    {
        ::app::iOS::Foundation::NSURL* nsurl = ::app::iOS::Foundation::NSURL__New_5(NULL);
        ::uPtr< ::app::iOS::Foundation::NSURL*>(nsurl)->initWithString(::uPtr< ::app::Fuse::Resources::HttpImageSource*>(http)->Url());
        ::uPtr< ::app::iOS::UIKit::UIImageView*>(__this->_imageView)->Image(::app::iOS::UIKit::UIImage___imageWithCIImage(NULL, ::app::iOS::CoreImage::CIImage___imageWithContentsOfURL(NULL, nsurl)));
        ::uPtr< ::app::iOS::UIKit::UIImageView*>(__this->_imageView)->setNeedsDisplay();
        ::uPtr< ::app::Fuse::Controls::Image*>(__this->SemanticControl())->InvalidateLayout(2);
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.11.3/Controls/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Uno::Collections::Dictionary__Uno_UX_FileSource__iOS_UIKit_UIImage*> ImageCache___cache;
int ImageCache___tempCount;

ImageCache__uType* ImageCache__typeof()
{
    static ::uStaticStrong<ImageCache__uType*> type;
    if (type != NULL) return type;

    type = (ImageCache__uType*)::uAllocClassType(sizeof(ImageCache__uType), "Fuse.iOS.Controls.ImageCache");

    return type;
}

void ImageCache___TypeInit(::uStatic* __this)
{
    ImageCache___cache = ::app::Uno::Collections::Dictionary__Uno_UX_FileSource__iOS_UIKit_UIImage__New_1(NULL);
}

::app::iOS::UIKit::UIImage* ImageCache__GetImage(::uStatic* __this, ::app::Uno::UX::FileSource* fileSource)
{
    if (!::uPtr< ::app::Uno::Collections::Dictionary__Uno_UX_FileSource__iOS_UIKit_UIImage*>(ImageCache___cache)->ContainsKey(fileSource))
    {
        ::uArray* data = ::uPtr< ::app::Uno::UX::FileSource*>(fileSource)->ReadAllBytes();
        ::uString* path = ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::IO::Directory__GetUserDirectory(NULL, 1), ::uGetConstString("/tempImage")), ::uBox< int>(::app::Uno::Int__typeof(), ImageCache___tempCount++));
        ::app::Uno::IO::File__WriteAllBytes(NULL, path, data);
        ::uPtr< ::app::Uno::Collections::Dictionary__Uno_UX_FileSource__iOS_UIKit_UIImage*>(ImageCache___cache)->Add(fileSource, ::app::iOS::UIKit::UIImage___imageWithContentsOfFile(NULL, path));
    }

    return ::uPtr< ::app::Uno::Collections::Dictionary__Uno_UX_FileSource__iOS_UIKit_UIImage*>(ImageCache___cache)->Item(fileSource);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.11.3/Controls/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* ITextInputImpl__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.iOS.Controls.ITextInputImpl");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.11.3/Controls/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MapView__uType* MapView__typeof()
{
    static ::uStaticStrong<MapView__uType*> type;
    if (type != NULL) return type;

    type = (MapView__uType*)::uAllocClassType(sizeof(MapView__uType), "Fuse.iOS.Controls.MapView", false, 1, 1, 0);

    type->SetBaseType(::app::Fuse::iOS::Controls::Element__typeof());
    type->__fp_CreateInternal = (::app::iOS::UIKit::UIView*(*)(::app::Fuse::iOS::Controls::Element*))MapView__CreateInternal;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(MapView__uType, __interface_0));

    type->SetStrongRefs(
        "_mapView", offsetof(MapView, _mapView));

    return type;
}

::app::iOS::UIKit::UIView* MapView__CreateInternal(MapView* __this)
{
    if (__this->_mapView == NULL)
    {
        __this->_mapView = ::app::iOS::MapKit::MKMapView__New_9(NULL);
        ::uPtr< ::app::iOS::MapKit::MKMapView*>(__this->_mapView)->init();
    }

    return (::app::iOS::UIKit::UIView*)__this->_mapView;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.11.3/Controls/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MultilineTextInput__uType* MultilineTextInput__typeof()
{
    static ::uStaticStrong<MultilineTextInput__uType*> type;
    if (type != NULL) return type;

    type = (MultilineTextInput__uType*)::uAllocClassType(sizeof(MultilineTextInput__uType), "Fuse.iOS.Controls.MultilineTextInput", false, 3, 2, 0);

    type->__interface_1.__fp_textViewDidChange = (void(*)(void*, ::app::iOS::UIKit::UITextView*))MultilineTextInput__iOS_UIKit_IUITextViewDelegate_textViewDidChange;
    type->__interface_1.__fp_textViewShouldBeginEditing = (bool(*)(void*, ::app::iOS::UIKit::UITextView*))MultilineTextInput__iOS_UIKit_IUITextViewDelegate_textViewShouldBeginEditing;
    type->__interface_1.__fp_textViewShouldEndEditing = (bool(*)(void*, ::app::iOS::UIKit::UITextView*))MultilineTextInput__iOS_UIKit_IUITextViewDelegate_textViewShouldEndEditing;
    type->__interface_1.__fp_textViewDidBeginEditing = (void(*)(void*, ::app::iOS::UIKit::UITextView*))MultilineTextInput__iOS_UIKit_IUITextViewDelegate_textViewDidBeginEditing;
    type->__interface_1.__fp_textViewDidEndEditing = (void(*)(void*, ::app::iOS::UIKit::UITextView*))MultilineTextInput__iOS_UIKit_IUITextViewDelegate_textViewDidEndEditing;
    type->__interface_1.__fp_textViewShouldChangeTextInRangeReplacementText = (bool(*)(void*, ::app::iOS::UIKit::UITextView*, ::app::iOS::Foundation::_NSRange, ::uString*))MultilineTextInput__iOS_UIKit_IUITextViewDelegate_textViewShouldChangeTextInRangeReplacementText;
    type->__interface_1.__fp_textViewDidChangeSelection = (void(*)(void*, ::app::iOS::UIKit::UITextView*))MultilineTextInput__iOS_UIKit_IUITextViewDelegate_textViewDidChangeSelection;
    type->__interface_1.__fp_textViewShouldInteractWithURLInRange = (bool(*)(void*, ::app::iOS::UIKit::UITextView*, ::app::iOS::Foundation::NSURL*, ::app::iOS::Foundation::_NSRange))MultilineTextInput__iOS_UIKit_IUITextViewDelegate_textViewShouldInteractWithURLInRange;
    type->__interface_1.__fp_textViewShouldInteractWithTextAttachmentInRange = (bool(*)(void*, ::app::iOS::UIKit::UITextView*, ::app::iOS::UIKit::NSTextAttachment*, ::app::iOS::Foundation::_NSRange))MultilineTextInput__iOS_UIKit_IUITextViewDelegate_textViewShouldInteractWithTextAttachmentInRange;
    type->__interface_1.__fp_scrollViewDidScroll = (void(*)(void*, ::app::iOS::UIKit::UIScrollView*))MultilineTextInput__iOS_UIKit_IUITextViewDelegate_scrollViewDidScroll;
    type->__interface_1.__fp_scrollViewDidZoom = (void(*)(void*, ::app::iOS::UIKit::UIScrollView*))MultilineTextInput__iOS_UIKit_IUITextViewDelegate_scrollViewDidZoom;
    type->__interface_1.__fp_scrollViewWillBeginDragging = (void(*)(void*, ::app::iOS::UIKit::UIScrollView*))MultilineTextInput__iOS_UIKit_IUITextViewDelegate_scrollViewWillBeginDragging;
    type->__interface_1.__fp_scrollViewDidEndDraggingWillDecelerate = (void(*)(void*, ::app::iOS::UIKit::UIScrollView*, bool))MultilineTextInput__iOS_UIKit_IUITextViewDelegate_scrollViewDidEndDraggingWillDecelerate;
    type->__interface_1.__fp_scrollViewWillBeginDecelerating = (void(*)(void*, ::app::iOS::UIKit::UIScrollView*))MultilineTextInput__iOS_UIKit_IUITextViewDelegate_scrollViewWillBeginDecelerating;
    type->__interface_1.__fp_scrollViewDidEndDecelerating = (void(*)(void*, ::app::iOS::UIKit::UIScrollView*))MultilineTextInput__iOS_UIKit_IUITextViewDelegate_scrollViewDidEndDecelerating;
    type->__interface_1.__fp_scrollViewDidEndScrollingAnimation = (void(*)(void*, ::app::iOS::UIKit::UIScrollView*))MultilineTextInput__iOS_UIKit_IUITextViewDelegate_scrollViewDidEndScrollingAnimation;
    type->__interface_1.__fp_viewForZoomingInScrollView = (::app::iOS::UIKit::UIView*(*)(void*, ::app::iOS::UIKit::UIScrollView*))MultilineTextInput__iOS_UIKit_IUITextViewDelegate_viewForZoomingInScrollView;
    type->__interface_1.__fp_scrollViewWillBeginZoomingWithView = (void(*)(void*, ::app::iOS::UIKit::UIScrollView*, ::app::iOS::UIKit::UIView*))MultilineTextInput__iOS_UIKit_IUITextViewDelegate_scrollViewWillBeginZoomingWithView;
    type->__interface_1.__fp_scrollViewDidEndZoomingWithViewAtScale = (void(*)(void*, ::app::iOS::UIKit::UIScrollView*, ::app::iOS::UIKit::UIView*, double))MultilineTextInput__iOS_UIKit_IUITextViewDelegate_scrollViewDidEndZoomingWithViewAtScale;
    type->__interface_1.__fp_scrollViewShouldScrollToTop = (bool(*)(void*, ::app::iOS::UIKit::UIScrollView*))MultilineTextInput__iOS_UIKit_IUITextViewDelegate_scrollViewShouldScrollToTop;
    type->__interface_1.__fp_scrollViewDidScrollToTop = (void(*)(void*, ::app::iOS::UIKit::UIScrollView*))MultilineTextInput__iOS_UIKit_IUITextViewDelegate_scrollViewDidScrollToTop;
    type->__interface_0.__fp_get_LineCount = (int(*)(void*))MultilineTextInput__Fuse_iOS_Controls_ITextInputImpl_get_LineCount;
    type->__interface_0.__fp_get_View = (::app::iOS::UIKit::UIView*(*)(void*))MultilineTextInput__Fuse_iOS_Controls_ITextInputImpl_get_View;
    type->__interface_0.__fp_get_IUITextInput = (::uObject*(*)(void*))MultilineTextInput__Fuse_iOS_Controls_ITextInputImpl_get_IUITextInput;
    type->__interface_0.__fp_set_TextColor = (void(*)(void*, ::app::iOS::UIKit::UIColor*))MultilineTextInput__Fuse_iOS_Controls_ITextInputImpl_set_TextColor;
    type->__interface_0.__fp_set_CaretColor = (void(*)(void*, ::app::iOS::UIKit::UIColor*))MultilineTextInput__Fuse_iOS_Controls_ITextInputImpl_set_CaretColor;
    type->__interface_0.__fp_set_TextAlignment = (void(*)(void*, int))MultilineTextInput__Fuse_iOS_Controls_ITextInputImpl_set_TextAlignment;
    type->__interface_0.__fp_get_Font = (::app::iOS::UIKit::UIFont*(*)(void*))MultilineTextInput__Fuse_iOS_Controls_ITextInputImpl_get_Font;
    type->__interface_0.__fp_set_Font = (void(*)(void*, ::app::iOS::UIKit::UIFont*))MultilineTextInput__Fuse_iOS_Controls_ITextInputImpl_set_Font;
    type->__interface_0.__fp_get_Text = (::uString*(*)(void*))MultilineTextInput__Fuse_iOS_Controls_ITextInputImpl_get_Text;
    type->__interface_0.__fp_set_Text = (void(*)(void*, ::uString*))MultilineTextInput__Fuse_iOS_Controls_ITextInputImpl_set_Text;
    type->__interface_0.__fp_add_TextChanged = (void(*)(void*, ::uDelegate*))MultilineTextInput__add_TextChanged;
    type->__interface_0.__fp_remove_TextChanged = (void(*)(void*, ::uDelegate*))MultilineTextInput__remove_TextChanged;

    type->SetInterfaces(
        ::app::Fuse::iOS::Controls::ITextInputImpl__typeof(), offsetof(MultilineTextInput__uType, __interface_0),
        ::app::iOS::UIKit::IUITextViewDelegate__typeof(), offsetof(MultilineTextInput__uType, __interface_1),
        ::app::iOS::UIKit::IUIScrollViewDelegate__typeof(), offsetof(MultilineTextInput__uType, __interface_2));

    type->SetStrongRefs(
        "_textView", offsetof(MultilineTextInput, _textView),
        "TextChanged", offsetof(MultilineTextInput, TextChanged));

    return type;
}

void MultilineTextInput___ObjInit(MultilineTextInput* __this)
{
}

void MultilineTextInput__add_TextChanged(MultilineTextInput* __this, ::uDelegate* value)
{
    __this->TextChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->TextChanged, (::uDelegate*)value), ::app::Uno::EventHandler__typeof());
}

::app::iOS::UIKit::UIFont* MultilineTextInput__Fuse_iOS_Controls_ITextInputImpl_get_Font(MultilineTextInput* __this)
{
    return ::uPtr< ::app::iOS::UIKit::UITextView*>(__this->TextView())->Font();
}

::uObject* MultilineTextInput__Fuse_iOS_Controls_ITextInputImpl_get_IUITextInput(MultilineTextInput* __this)
{
    return (::uObject*)__this->TextView();
}

int MultilineTextInput__Fuse_iOS_Controls_ITextInputImpl_get_LineCount(MultilineTextInput* __this)
{
    double height = (::uPtr< ::app::iOS::UIKit::UITextView*>(__this->TextView())->ContentSize().Height - ::uPtr< ::app::iOS::UIKit::UITextView*>(__this->TextView())->TextContainerInset().Top) - ::uPtr< ::app::iOS::UIKit::UITextView*>(__this->TextView())->TextContainerInset().Bottom;
    int lineCount = (int)(height / ::uPtr< ::app::iOS::UIKit::UIFont*>(::uPtr< ::app::iOS::UIKit::UITextView*>(__this->TextView())->Font())->LineHeight());
    return (lineCount > 0) ? lineCount : 1;
}

::uString* MultilineTextInput__Fuse_iOS_Controls_ITextInputImpl_get_Text(MultilineTextInput* __this)
{
    ::uString* ind_123 = ::uPtr< ::app::iOS::UIKit::UITextView*>(__this->TextView())->Text();
    return (ind_123 != NULL) ? ind_123 : ::uGetConstString("");
}

::app::iOS::UIKit::UIView* MultilineTextInput__Fuse_iOS_Controls_ITextInputImpl_get_View(MultilineTextInput* __this)
{
    return (::app::iOS::UIKit::UIView*)__this->TextView();
}

void MultilineTextInput__Fuse_iOS_Controls_ITextInputImpl_set_CaretColor(MultilineTextInput* __this, ::app::iOS::UIKit::UIColor* value)
{
    ::uPtr< ::app::iOS::UIKit::UITextView*>(__this->TextView())->TintColor(value);
}

void MultilineTextInput__Fuse_iOS_Controls_ITextInputImpl_set_Font(MultilineTextInput* __this, ::app::iOS::UIKit::UIFont* value)
{
    ::uPtr< ::app::iOS::UIKit::UITextView*>(__this->TextView())->Font(value);
}

void MultilineTextInput__Fuse_iOS_Controls_ITextInputImpl_set_Text(MultilineTextInput* __this, ::uString* value)
{
    ::uPtr< ::app::iOS::UIKit::UITextView*>(__this->TextView())->Text((value != NULL) ? value : ::uGetConstString(""));
}

void MultilineTextInput__Fuse_iOS_Controls_ITextInputImpl_set_TextAlignment(MultilineTextInput* __this, int value)
{
    ::uPtr< ::app::iOS::UIKit::UITextView*>(__this->TextView())->TextAlignment(value);
}

void MultilineTextInput__Fuse_iOS_Controls_ITextInputImpl_set_TextColor(MultilineTextInput* __this, ::app::iOS::UIKit::UIColor* value)
{
    ::uPtr< ::app::iOS::UIKit::UITextView*>(__this->TextView())->TextColor(value);
}

::app::iOS::UIKit::UITextView* MultilineTextInput__get_TextView(MultilineTextInput* __this)
{
    if (__this->_textView == NULL)
    {
        __this->_textView = ::app::iOS::UIKit::UITextView__New_11(NULL);
        ::uPtr< ::app::iOS::UIKit::UITextView*>(__this->_textView)->init();
        ::uPtr< ::app::iOS::UIKit::UITextView*>(__this->_textView)->BackgroundColor(::app::Fuse::iOS::iOSExtensions__ToUIColor(NULL, ::app::Uno::Float4__New_3(NULL, 0.0f)));
        ::uPtr< ::app::iOS::UIKit::UITextView*>(__this->_textView)->ClipsToBounds(false);
        ::uPtr< ::app::iOS::UIKit::UITextView*>(__this->_textView)->Opaque(false);
        ::uPtr< ::app::iOS::UIKit::UITextView*>(__this->_textView)->TextContainerInset(::app::iOS::UIKit::UIEdgeInsets__New_1(NULL, 0.0, -4.0, 0.0, 0.0));
        ::uPtr< ::app::iOS::UIKit::UITextView*>(__this->_textView)->Delegate_1((::uObject*)__this);
    }

    return __this->_textView;
}

void MultilineTextInput__iOS_UIKit_IUITextViewDelegate_scrollViewDidEndDecelerating(MultilineTextInput* __this, ::app::iOS::UIKit::UIScrollView* scrollView)
{
}

void MultilineTextInput__iOS_UIKit_IUITextViewDelegate_scrollViewDidEndDraggingWillDecelerate(MultilineTextInput* __this, ::app::iOS::UIKit::UIScrollView* scrollView, bool decelerate)
{
}

void MultilineTextInput__iOS_UIKit_IUITextViewDelegate_scrollViewDidEndScrollingAnimation(MultilineTextInput* __this, ::app::iOS::UIKit::UIScrollView* scrollView)
{
}

void MultilineTextInput__iOS_UIKit_IUITextViewDelegate_scrollViewDidEndZoomingWithViewAtScale(MultilineTextInput* __this, ::app::iOS::UIKit::UIScrollView* scrollView, ::app::iOS::UIKit::UIView* view, double scale)
{
}

void MultilineTextInput__iOS_UIKit_IUITextViewDelegate_scrollViewDidScroll(MultilineTextInput* __this, ::app::iOS::UIKit::UIScrollView* scrollView)
{
}

void MultilineTextInput__iOS_UIKit_IUITextViewDelegate_scrollViewDidScrollToTop(MultilineTextInput* __this, ::app::iOS::UIKit::UIScrollView* scrollView)
{
}

void MultilineTextInput__iOS_UIKit_IUITextViewDelegate_scrollViewDidZoom(MultilineTextInput* __this, ::app::iOS::UIKit::UIScrollView* scrollView)
{
}

bool MultilineTextInput__iOS_UIKit_IUITextViewDelegate_scrollViewShouldScrollToTop(MultilineTextInput* __this, ::app::iOS::UIKit::UIScrollView* scrollView)
{
    return true;
}

void MultilineTextInput__iOS_UIKit_IUITextViewDelegate_scrollViewWillBeginDecelerating(MultilineTextInput* __this, ::app::iOS::UIKit::UIScrollView* scrollView)
{
}

void MultilineTextInput__iOS_UIKit_IUITextViewDelegate_scrollViewWillBeginDragging(MultilineTextInput* __this, ::app::iOS::UIKit::UIScrollView* scrollView)
{
}

void MultilineTextInput__iOS_UIKit_IUITextViewDelegate_scrollViewWillBeginZoomingWithView(MultilineTextInput* __this, ::app::iOS::UIKit::UIScrollView* scrollView, ::app::iOS::UIKit::UIView* view)
{
}

void MultilineTextInput__iOS_UIKit_IUITextViewDelegate_textViewDidBeginEditing(MultilineTextInput* __this, ::app::iOS::UIKit::UITextView* textView)
{
}

void MultilineTextInput__iOS_UIKit_IUITextViewDelegate_textViewDidChange(MultilineTextInput* __this, ::app::iOS::UIKit::UITextView* textView)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->TextChanged, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->TextChanged)->InvokeVoid< ::uObject*, ::app::Uno::EventArgs*>((::uObject*)__this, ::app::Uno::EventArgs__Empty);
    }
}

void MultilineTextInput__iOS_UIKit_IUITextViewDelegate_textViewDidChangeSelection(MultilineTextInput* __this, ::app::iOS::UIKit::UITextView* textView)
{
}

void MultilineTextInput__iOS_UIKit_IUITextViewDelegate_textViewDidEndEditing(MultilineTextInput* __this, ::app::iOS::UIKit::UITextView* textView)
{
}

bool MultilineTextInput__iOS_UIKit_IUITextViewDelegate_textViewShouldBeginEditing(MultilineTextInput* __this, ::app::iOS::UIKit::UITextView* textView)
{
    return true;
}

bool MultilineTextInput__iOS_UIKit_IUITextViewDelegate_textViewShouldChangeTextInRangeReplacementText(MultilineTextInput* __this, ::app::iOS::UIKit::UITextView* textView, ::app::iOS::Foundation::_NSRange range, ::uString* text)
{
    return true;
}

bool MultilineTextInput__iOS_UIKit_IUITextViewDelegate_textViewShouldEndEditing(MultilineTextInput* __this, ::app::iOS::UIKit::UITextView* textView)
{
    return true;
}

bool MultilineTextInput__iOS_UIKit_IUITextViewDelegate_textViewShouldInteractWithTextAttachmentInRange(MultilineTextInput* __this, ::app::iOS::UIKit::UITextView* textView, ::app::iOS::UIKit::NSTextAttachment* textAttachment, ::app::iOS::Foundation::_NSRange characterRange)
{
    return true;
}

bool MultilineTextInput__iOS_UIKit_IUITextViewDelegate_textViewShouldInteractWithURLInRange(MultilineTextInput* __this, ::app::iOS::UIKit::UITextView* textView, ::app::iOS::Foundation::NSURL* URL, ::app::iOS::Foundation::_NSRange characterRange)
{
    return true;
}

::app::iOS::UIKit::UIView* MultilineTextInput__iOS_UIKit_IUITextViewDelegate_viewForZoomingInScrollView(MultilineTextInput* __this, ::app::iOS::UIKit::UIScrollView* scrollView)
{
    return NULL;
}

MultilineTextInput* MultilineTextInput__New_1(::uStatic* __this)
{
    MultilineTextInput* inst = (MultilineTextInput*)::uAllocObject(sizeof(MultilineTextInput), MultilineTextInput__typeof());
    inst->_ObjInit();
    return inst;
}

void MultilineTextInput__remove_TextChanged(MultilineTextInput* __this, ::uDelegate* value)
{
    __this->TextChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->TextChanged, (::uDelegate*)value), ::app::Uno::EventHandler__typeof());
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.11.3/Controls/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Rectangle__uType* Rectangle__typeof()
{
    static ::uStaticStrong<Rectangle__uType*> type;
    if (type != NULL) return type;

    type = (Rectangle__uType*)::uAllocClassType(sizeof(Rectangle__uType), "Fuse.iOS.Controls.Rectangle", false, 1, 0, 0);

    type->SetBaseType(::app::Fuse::iOS::Controls::Shape__Fuse_Controls_Rectangle__typeof());
    type->__fp_CreatePath = (::app::iOS::UIKit::UIBezierPath*(*)(::app::Fuse::iOS::Controls::Shape__Fuse_Controls_Rectangle*))Rectangle__CreatePath;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(Rectangle__uType, __interface_0));

    return type;
}

void Rectangle___ObjInit_4(Rectangle* __this)
{
    ::app::Fuse::iOS::Controls::Shape__Fuse_Controls_Rectangle___ObjInit_3(__this);
}

void Rectangle__AddArcWithCenter(Rectangle* __this, ::app::iOS::UIKit::UIBezierPath* path, ::app::Uno::Float2 center, float radius, float startAngle, float endAngle)
{
    ::uPtr< ::app::iOS::UIKit::UIBezierPath*>(path)->addArcWithCenterRadiusStartAngleEndAngleClockwise(::app::Fuse::iOS::iOSExtensions__ToCGPoint(NULL, ::app::Uno::Float2__op_Addition_2(NULL, __this->Position(), center)), (double)radius, (double)startAngle, (double)endAngle, true);
}

void Rectangle__AddLineToPoint(Rectangle* __this, ::app::iOS::UIKit::UIBezierPath* path, ::app::Uno::Float2 point)
{
    ::uPtr< ::app::iOS::UIKit::UIBezierPath*>(path)->addLineToPoint(::app::Fuse::iOS::iOSExtensions__ToCGPoint(NULL, ::app::Uno::Float2__op_Addition_2(NULL, __this->Position(), point)));
}

::app::iOS::UIKit::UIBezierPath* Rectangle__CreatePath(Rectangle* __this)
{
    ::app::Uno::Float4 cr = ::uPtr< ::app::Fuse::Controls::Rectangle*>(__this->SemanticControl())->CornerRadius();
    float mn = ::app::Uno::Math__Min_11(NULL, __this->ActualSize().X, __this->ActualSize().Y) / 2.0f;

    for (int i = 0; i < 4; ++i)
    {
        cr.Item(i, ::app::Uno::Math__Min_11(NULL, mn, cr.Item(i)));
    }

    ::app::iOS::UIKit::UIBezierPath* path = ::app::iOS::UIKit::UIBezierPath__New_5(NULL);
    ::uPtr< ::app::iOS::UIKit::UIBezierPath*>(path)->init();
    path->moveToPoint(::app::Fuse::iOS::iOSExtensions__ToCGPoint(NULL, ::app::Uno::Float2__New_2(NULL, __this->Position().X + cr.Item(0), __this->Position().Y)));
    __this->AddLineToPoint(path, ::app::Uno::Float2__New_2(NULL, __this->ActualSize().X - cr.Item(1), 0.0f));
    __this->AddArcWithCenter(path, ::app::Uno::Float2__New_2(NULL, __this->ActualSize().X - cr.Item(1), cr.Item(1)), cr.Item(1), -1.57079637f, 0.0f);
    __this->AddLineToPoint(path, ::app::Uno::Float2__New_2(NULL, __this->ActualSize().X, __this->ActualSize().Y - cr.Item(2)));
    __this->AddArcWithCenter(path, ::app::Uno::Float2__New_2(NULL, __this->ActualSize().X - cr.Item(2), __this->ActualSize().Y - cr.Item(2)), cr.Item(2), 0.0f, 1.57079637f);
    __this->AddLineToPoint(path, ::app::Uno::Float2__New_2(NULL, cr.Item(3), __this->ActualSize().Y));
    __this->AddArcWithCenter(path, ::app::Uno::Float2__New_2(NULL, cr.Item(3), __this->ActualSize().Y - cr.Item(3)), cr.Item(3), 1.57079637f, 3.14159274f);
    __this->AddLineToPoint(path, ::app::Uno::Float2__New_2(NULL, 0.0f, cr.Item(0)));
    __this->AddArcWithCenter(path, ::app::Uno::Float2__New_2(NULL, cr.Item(0), cr.Item(0)), cr.Item(0), -3.14159274f, -1.57079637f);
    path->closePath();
    return path;
}

Rectangle* Rectangle__New_1(::uStatic* __this)
{
    Rectangle* inst = (Rectangle*)::uAllocObject(sizeof(Rectangle), Rectangle__typeof());
    inst->_ObjInit_4();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.11.3/Controls/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

SingleLineTextInput__uType* SingleLineTextInput__typeof()
{
    static ::uStaticStrong<SingleLineTextInput__uType*> type;
    if (type != NULL) return type;

    type = (SingleLineTextInput__uType*)::uAllocClassType(sizeof(SingleLineTextInput__uType), "Fuse.iOS.Controls.SingleLineTextInput", false, 1, 3, 0);

    type->__interface_0.__fp_get_LineCount = (int(*)(void*))SingleLineTextInput__Fuse_iOS_Controls_ITextInputImpl_get_LineCount;
    type->__interface_0.__fp_get_View = (::app::iOS::UIKit::UIView*(*)(void*))SingleLineTextInput__Fuse_iOS_Controls_ITextInputImpl_get_View;
    type->__interface_0.__fp_get_IUITextInput = (::uObject*(*)(void*))SingleLineTextInput__Fuse_iOS_Controls_ITextInputImpl_get_IUITextInput;
    type->__interface_0.__fp_set_TextColor = (void(*)(void*, ::app::iOS::UIKit::UIColor*))SingleLineTextInput__Fuse_iOS_Controls_ITextInputImpl_set_TextColor;
    type->__interface_0.__fp_set_CaretColor = (void(*)(void*, ::app::iOS::UIKit::UIColor*))SingleLineTextInput__Fuse_iOS_Controls_ITextInputImpl_set_CaretColor;
    type->__interface_0.__fp_set_TextAlignment = (void(*)(void*, int))SingleLineTextInput__Fuse_iOS_Controls_ITextInputImpl_set_TextAlignment;
    type->__interface_0.__fp_get_Font = (::app::iOS::UIKit::UIFont*(*)(void*))SingleLineTextInput__Fuse_iOS_Controls_ITextInputImpl_get_Font;
    type->__interface_0.__fp_set_Font = (void(*)(void*, ::app::iOS::UIKit::UIFont*))SingleLineTextInput__Fuse_iOS_Controls_ITextInputImpl_set_Font;
    type->__interface_0.__fp_get_Text = (::uString*(*)(void*))SingleLineTextInput__Fuse_iOS_Controls_ITextInputImpl_get_Text;
    type->__interface_0.__fp_set_Text = (void(*)(void*, ::uString*))SingleLineTextInput__Fuse_iOS_Controls_ITextInputImpl_set_Text;
    type->__interface_0.__fp_add_TextChanged = (void(*)(void*, ::uDelegate*))SingleLineTextInput__add_TextChanged;
    type->__interface_0.__fp_remove_TextChanged = (void(*)(void*, ::uDelegate*))SingleLineTextInput__remove_TextChanged;

    type->SetInterfaces(
        ::app::Fuse::iOS::Controls::ITextInputImpl__typeof(), offsetof(SingleLineTextInput__uType, __interface_0));

    type->SetStrongRefs(
        "_textEditEvent", offsetof(SingleLineTextInput, _textEditEvent),
        "_textField", offsetof(SingleLineTextInput, _textField),
        "TextChanged", offsetof(SingleLineTextInput, TextChanged));

    return type;
}

void SingleLineTextInput___ObjInit(SingleLineTextInput* __this)
{
}

void SingleLineTextInput__add_TextChanged(SingleLineTextInput* __this, ::uDelegate* value)
{
    __this->TextChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->TextChanged, (::uDelegate*)value), ::app::Uno::EventHandler__typeof());
}

::app::iOS::UIKit::UIFont* SingleLineTextInput__Fuse_iOS_Controls_ITextInputImpl_get_Font(SingleLineTextInput* __this)
{
    return ::uPtr< ::app::iOS::UIKit::UITextField*>(__this->TextField())->Font();
}

::uObject* SingleLineTextInput__Fuse_iOS_Controls_ITextInputImpl_get_IUITextInput(SingleLineTextInput* __this)
{
    return (::uObject*)__this->TextField();
}

int SingleLineTextInput__Fuse_iOS_Controls_ITextInputImpl_get_LineCount(SingleLineTextInput* __this)
{
    return 1;
}

::uString* SingleLineTextInput__Fuse_iOS_Controls_ITextInputImpl_get_Text(SingleLineTextInput* __this)
{
    ::uString* ind_123 = ::uPtr< ::app::iOS::UIKit::UITextField*>(__this->TextField())->Text();
    return (ind_123 != NULL) ? ind_123 : ::uGetConstString("");
}

::app::iOS::UIKit::UIView* SingleLineTextInput__Fuse_iOS_Controls_ITextInputImpl_get_View(SingleLineTextInput* __this)
{
    return (::app::iOS::UIKit::UIView*)__this->TextField();
}

void SingleLineTextInput__Fuse_iOS_Controls_ITextInputImpl_set_CaretColor(SingleLineTextInput* __this, ::app::iOS::UIKit::UIColor* value)
{
    ::uPtr< ::app::iOS::UIKit::UITextField*>(__this->TextField())->TintColor(value);
}

void SingleLineTextInput__Fuse_iOS_Controls_ITextInputImpl_set_Font(SingleLineTextInput* __this, ::app::iOS::UIKit::UIFont* value)
{
    ::uPtr< ::app::iOS::UIKit::UITextField*>(__this->TextField())->Font(value);
}

void SingleLineTextInput__Fuse_iOS_Controls_ITextInputImpl_set_Text(SingleLineTextInput* __this, ::uString* value)
{
    ::uPtr< ::app::iOS::UIKit::UITextField*>(__this->TextField())->Text((value != NULL) ? value : ::uGetConstString(""));
}

void SingleLineTextInput__Fuse_iOS_Controls_ITextInputImpl_set_TextAlignment(SingleLineTextInput* __this, int value)
{
    ::uPtr< ::app::iOS::UIKit::UITextField*>(__this->TextField())->TextAlignment(value);
}

void SingleLineTextInput__Fuse_iOS_Controls_ITextInputImpl_set_TextColor(SingleLineTextInput* __this, ::app::iOS::UIKit::UIColor* value)
{
    ::uPtr< ::app::iOS::UIKit::UITextField*>(__this->TextField())->TextColor(value);
}

::app::iOS::UIKit::UITextField* SingleLineTextInput__get_TextField(SingleLineTextInput* __this)
{
    if (__this->_textField == NULL)
    {
        __this->_textField = ::app::iOS::UIKit::UITextField__New_11(NULL);
        ::uPtr< ::app::iOS::UIKit::UITextField*>(__this->_textField)->init();
        ::uPtr< ::app::iOS::UIKit::UITextField*>(__this->_textField)->Opaque(false);
        ::uPtr< ::app::iOS::UIKit::UITextField*>(__this->_textField)->BorderStyle(0);
        __this->_textEditEvent = ::app::Fuse::iOS::ControlEvent__AddHandler(NULL, (::app::iOS::UIKit::UIControl*)__this->_textField, ::uNewDelegateNonVirt(::app::Uno::Action__iOS_Foundation_NSObject__iOS_UIKit_UIEvent__typeof(), (const void*)SingleLineTextInput__OnTextEdit, __this), 983040);
    }

    return __this->_textField;
}

SingleLineTextInput* SingleLineTextInput__New_1(::uStatic* __this)
{
    SingleLineTextInput* inst = (SingleLineTextInput*)::uAllocObject(sizeof(SingleLineTextInput), SingleLineTextInput__typeof());
    inst->_ObjInit();
    return inst;
}

void SingleLineTextInput__OnTextEdit(SingleLineTextInput* __this, ::app::iOS::Foundation::NSObject* sender, ::app::iOS::UIKit::UIEvent* uiEvent)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->TextChanged, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->TextChanged)->InvokeVoid< ::uObject*, ::app::Uno::EventArgs*>((::uObject*)__this, ::app::Uno::EventArgs__Empty);
    }
}

void SingleLineTextInput__remove_TextChanged(SingleLineTextInput* __this, ::uDelegate* value)
{
    __this->TextChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->TextChanged, (::uDelegate*)value), ::app::Uno::EventHandler__typeof());
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.11.3/Controls/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Slider__uType* Slider__typeof()
{
    static ::uStaticStrong<Slider__uType*> type;
    if (type != NULL) return type;

    type = (Slider__uType*)::uAllocClassType(sizeof(Slider__uType), "Fuse.iOS.Controls.Slider", false, 1, 3, 0);

    type->SetBaseType(::app::Fuse::iOS::Controls::Control__Fuse_Controls_Slider__typeof());
    type->__fp_Finalize = (void(*)(::uObject*))Slider__Finalize;
    type->__fp_Attach = (void(*)(::app::Fuse::iOS::Controls::Control__Fuse_Controls_Slider*))Slider__Attach;
    type->__fp_CreateInternal = (::app::iOS::UIKit::UIView*(*)(::app::Fuse::iOS::Controls::Element*))Slider__CreateInternal;
    type->__fp_Detach = (void(*)(::app::Fuse::iOS::Controls::Control__Fuse_Controls_Slider*))Slider__Detach;
    type->__fp_GetMarginSize = (::app::Uno::Float2(*)(::app::Fuse::Node*, ::app::Uno::Float2, int))Slider__GetMarginSize;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(Slider__uType, __interface_0));

    type->SetStrongRefs(
        "_slider", offsetof(Slider, _slider),
        "_sliderContainer", offsetof(Slider, _sliderContainer),
        "_valueChangedEvent", offsetof(Slider, _valueChangedEvent));

    return type;
}

void Slider__Finalize(Slider* __this)
{
    if (__this->_valueChangedEvent != NULL)
    {
        ::uPtr< ::app::Fuse::iOS::ControlEvent*>(__this->_valueChangedEvent)->Dispose();
    }

    if (__this->_sliderContainer != NULL)
    {
        ::uPtr< ::app::Fuse::iOS::Controls::ViewContainer*>(__this->_sliderContainer)->remove_FrameChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__iOS_CoreGraphics_CGRect__typeof(), (const void*)Slider__OnFrameChanged, __this));
    }
}

void Slider___ObjInit_3(Slider* __this)
{
    ::app::Fuse::iOS::Controls::Control__Fuse_Controls_Slider___ObjInit_2(__this);
}

void Slider__Attach(Slider* __this)
{
    ::uPtr< ::app::Fuse::Controls::Slider*>(__this->SemanticControl())->add_ProgressChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)Slider__OnProgressChanged, __this));
    __this->Create();
    __this->Progress(::uPtr< ::app::Fuse::Controls::Slider*>(__this->SemanticControl())->Progress());
}

::app::iOS::UIKit::UIView* Slider__CreateInternal(Slider* __this)
{
    if (__this->_slider == NULL)
    {
        __this->_slider = ::app::iOS::UIKit::UISlider__New_11(NULL);
        ::uPtr< ::app::iOS::UIKit::UISlider*>(__this->_slider)->init();
        ::uPtr< ::app::iOS::UIKit::UISlider*>(__this->_slider)->MinimumValue(0.0f);
        ::uPtr< ::app::iOS::UIKit::UISlider*>(__this->_slider)->MaximumValue(100.0f);
        ::uPtr< ::app::iOS::UIKit::UISlider*>(__this->_slider)->Continuous(true);
        ::uPtr< ::app::iOS::UIKit::UISlider*>(__this->_slider)->ExclusiveTouch(true);
        __this->_valueChangedEvent = ::app::Fuse::iOS::ControlEvent__AddHandler(NULL, (::app::iOS::UIKit::UIControl*)__this->_slider, ::uNewDelegateNonVirt(::app::Uno::Action__iOS_Foundation_NSObject__iOS_UIKit_UIEvent__typeof(), (const void*)Slider__OnValueChanged, __this), 4096);
        __this->_sliderContainer = ::app::Fuse::iOS::Controls::ViewContainer__New_11(NULL);
        ::uPtr< ::app::Fuse::iOS::Controls::ViewContainer*>(__this->_sliderContainer)->init();
        ::uPtr< ::app::Fuse::iOS::Controls::ViewContainer*>(__this->_sliderContainer)->add_FrameChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__iOS_CoreGraphics_CGRect__typeof(), (const void*)Slider__OnFrameChanged, __this));
        ::uPtr< ::app::Fuse::iOS::Controls::ViewContainer*>(__this->_sliderContainer)->AutoresizesSubviews(true);
        ::uPtr< ::app::Fuse::iOS::Controls::ViewContainer*>(__this->_sliderContainer)->addSubview((::app::iOS::UIKit::UIView*)__this->_slider);
    }

    return (::app::iOS::UIKit::UIView*)__this->_sliderContainer;
}

void Slider__Detach(Slider* __this)
{
    ::uPtr< ::app::Fuse::Controls::Slider*>(__this->SemanticControl())->remove_ProgressChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)Slider__OnProgressChanged, __this));
}

double Slider__get_Progress(Slider* __this)
{
    return (double)(::uPtr< ::app::iOS::UIKit::UISlider*>(__this->_slider)->Value() / 100.0f);
}

::app::Uno::Float2 Slider__GetMarginSize(Slider* __this, ::app::Uno::Float2 fillSize, int fillSet)
{
    return ::app::Fuse::iOS::iOSBindingView__GetContentSize(NULL, (::app::iOS::UIKit::UIView*)__this->_slider, fillSize, fillSet);
}

Slider* Slider__New_1(::uStatic* __this)
{
    Slider* inst = (Slider*)::uAllocObject(sizeof(Slider), Slider__typeof());
    inst->_ObjInit_3();
    return inst;
}

void Slider__OnFrameChanged(Slider* __this, ::uObject* sender, ::app::iOS::CoreGraphics::CGRect frame)
{
    ::uPtr< ::app::iOS::UIKit::UISlider*>(__this->_slider)->Frame(::app::iOS::CoreGraphics::CGRect__New_1(NULL, ::uPtr< ::app::iOS::UIKit::UISlider*>(__this->_slider)->Frame().Origin, frame.Size));
}

void Slider__OnProgressChanged(Slider* __this, ::uObject* sender, ::app::Uno::EventArgs* args)
{
    __this->Progress(::uPtr< ::app::Fuse::Controls::Slider*>(__this->SemanticControl())->Progress());
}

void Slider__OnValueChanged(Slider* __this, ::app::iOS::Foundation::NSObject* sender, ::app::iOS::UIKit::UIEvent* uiEvent)
{
    ::uPtr< ::app::Fuse::Controls::Slider*>(__this->SemanticControl())->Progress(__this->Progress());
}

void Slider__set_Progress(Slider* __this, double value)
{
    if (value != __this->_prevProgress)
    {
        ::uPtr< ::app::iOS::UIKit::UISlider*>(__this->_slider)->Value((float)value * 100.0f);
        __this->_prevProgress = value;
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.11.3/Controls/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Switch__uType* Switch__typeof()
{
    static ::uStaticStrong<Switch__uType*> type;
    if (type != NULL) return type;

    type = (Switch__uType*)::uAllocClassType(sizeof(Switch__uType), "Fuse.iOS.Controls.Switch", false, 1, 2, 0);

    type->SetBaseType(::app::Fuse::iOS::Controls::Control__Fuse_Controls_Switch__typeof());
    type->__fp_Finalize = (void(*)(::uObject*))Switch__Finalize;
    type->__fp_Attach = (void(*)(::app::Fuse::iOS::Controls::Control__Fuse_Controls_Switch*))Switch__Attach;
    type->__fp_CreateInternal = (::app::iOS::UIKit::UIView*(*)(::app::Fuse::iOS::Controls::Element*))Switch__CreateInternal;
    type->__fp_Detach = (void(*)(::app::Fuse::iOS::Controls::Control__Fuse_Controls_Switch*))Switch__Detach;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(Switch__uType, __interface_0));

    type->SetStrongRefs(
        "_switch", offsetof(Switch, _switch),
        "_toggled", offsetof(Switch, _toggled));

    return type;
}

void Switch__Finalize(Switch* __this)
{
    if (__this->_switch != NULL)
    {
        ::uPtr< ::app::Fuse::iOS::ControlEvent*>(__this->_toggled)->Dispose();
    }
}

void Switch___ObjInit_3(Switch* __this)
{
    ::app::Fuse::iOS::Controls::Control__Fuse_Controls_Switch___ObjInit_2(__this);
}

void Switch__Attach(Switch* __this)
{
    ::uPtr< ::app::Fuse::Controls::Switch*>(__this->SemanticControl())->add_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__bool__typeof(), (const void*)Switch__OnValueChanged, __this));
    __this->Create();
    ::uPtr< ::app::iOS::UIKit::UISwitch*>(__this->_switch)->On(::uPtr< ::app::Fuse::Controls::Switch*>(__this->SemanticControl())->Value());
}

::app::iOS::UIKit::UIView* Switch__CreateInternal(Switch* __this)
{
    if (__this->_switch == NULL)
    {
        __this->_switch = ::app::iOS::UIKit::UISwitch__New_11(NULL);
        ::uPtr< ::app::iOS::UIKit::UISwitch*>(__this->_switch)->init();
        __this->_toggled = ::app::Fuse::iOS::ControlEvent__AddHandler(NULL, (::app::iOS::UIKit::UIControl*)__this->_switch, ::uNewDelegateNonVirt(::app::Uno::Action__iOS_Foundation_NSObject__iOS_UIKit_UIEvent__typeof(), (const void*)Switch__OnToggled, __this), 4096);
    }

    return (::app::iOS::UIKit::UIView*)__this->_switch;
}

void Switch__Detach(Switch* __this)
{
    ::uPtr< ::app::Fuse::Controls::Switch*>(__this->SemanticControl())->remove_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__bool__typeof(), (const void*)Switch__OnValueChanged, __this));
}

Switch* Switch__New_1(::uStatic* __this)
{
    Switch* inst = (Switch*)::uAllocObject(sizeof(Switch), Switch__typeof());
    inst->_ObjInit_3();
    return inst;
}

void Switch__OnToggled(Switch* __this, ::app::iOS::Foundation::NSObject* sender, ::app::iOS::UIKit::UIEvent* uiEvent)
{
    ::uPtr< ::app::Fuse::Controls::Switch*>(__this->SemanticControl())->Value(::uPtr< ::app::iOS::UIKit::UISwitch*>(__this->_switch)->On());
}

void Switch__OnValueChanged(Switch* __this, ::uObject* sender, ::app::Uno::UX::ValueChangedArgs__bool* args)
{
    ::uPtr< ::app::iOS::UIKit::UISwitch*>(__this->_switch)->On(::uPtr< ::app::Uno::UX::ValueChangedArgs__bool*>(args)->Value());
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.11.3/Controls/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

TextBlock__uType* TextBlock__typeof()
{
    static ::uStaticStrong<TextBlock__uType*> type;
    if (type != NULL) return type;

    type = (TextBlock__uType*)::uAllocClassType(sizeof(TextBlock__uType), "Fuse.iOS.Controls.TextBlock", false, 1, 1, 0);

    type->SetBaseType(::app::Fuse::iOS::Controls::Control__Fuse_Controls_TextBlock__typeof());
    type->__fp_Attach = (void(*)(::app::Fuse::iOS::Controls::Control__Fuse_Controls_TextBlock*))TextBlock__Attach;
    type->__fp_CreateInternal = (::app::iOS::UIKit::UIView*(*)(::app::Fuse::iOS::Controls::Element*))TextBlock__CreateInternal;
    type->__fp_Detach = (void(*)(::app::Fuse::iOS::Controls::Control__Fuse_Controls_TextBlock*))TextBlock__Detach;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(TextBlock__uType, __interface_0));

    type->SetStrongRefs(
        "_label", offsetof(TextBlock, _label));

    return type;
}

void TextBlock___ObjInit_3(TextBlock* __this)
{
    ::app::Fuse::iOS::Controls::Control__Fuse_Controls_TextBlock___ObjInit_2(__this);
}

void TextBlock__Attach(TextBlock* __this)
{
    __this->Create();
    ::uPtr< ::app::Fuse::Controls::TextBlock*>(__this->SemanticControl())->add_TextLayoutPropertyChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)TextBlock__OnTextLayoutPropertyChanged, __this));
    ::uPtr< ::app::Fuse::Controls::TextBlock*>(__this->SemanticControl())->add_TextRenderPropertyChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)TextBlock__OnTextRenderPropertyChanged, __this));
    ::uPtr< ::app::Fuse::Controls::TextBlock*>(__this->SemanticControl())->add_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__string__typeof(), (const void*)TextBlock__OnValueChanged, __this));
    __this->OnTextLayoutPropertyChanged(NULL, NULL);
    __this->OnTextRenderPropertyChanged(NULL, NULL);
    __this->OnValueChanged(NULL, NULL);
}

::app::iOS::UIKit::UIView* TextBlock__CreateInternal(TextBlock* __this)
{
    if (__this->_label == NULL)
    {
        __this->_label = ::app::iOS::UIKit::UILabel__New_9(NULL);
        ::uPtr< ::app::iOS::UIKit::UILabel*>(__this->_label)->init();
        ::uPtr< ::app::iOS::UIKit::UILabel*>(__this->_label)->NumberOfLines(1000);
    }

    return (::app::iOS::UIKit::UIView*)__this->_label;
}

void TextBlock__Detach(TextBlock* __this)
{
    ::uPtr< ::app::Fuse::Controls::TextBlock*>(__this->SemanticControl())->remove_TextLayoutPropertyChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)TextBlock__OnTextLayoutPropertyChanged, __this));
    ::uPtr< ::app::Fuse::Controls::TextBlock*>(__this->SemanticControl())->remove_TextRenderPropertyChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)TextBlock__OnTextRenderPropertyChanged, __this));
    ::uPtr< ::app::Fuse::Controls::TextBlock*>(__this->SemanticControl())->remove_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__string__typeof(), (const void*)TextBlock__OnValueChanged, __this));
}

TextBlock* TextBlock__New_1(::uStatic* __this)
{
    TextBlock* inst = (TextBlock*)::uAllocObject(sizeof(TextBlock), TextBlock__typeof());
    inst->_ObjInit_3();
    return inst;
}

void TextBlock__OnTextLayoutPropertyChanged(TextBlock* __this, ::uObject* sender, ::app::Uno::EventArgs* args)
{
    ::uPtr< ::app::iOS::UIKit::UILabel*>(__this->_label)->LineBreakMode((::uPtr< ::app::Fuse::Controls::TextBlock*>(__this->SemanticControl())->TextWrapping() == 0) ? 4 : 0);

    if (::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_TextControl__Fuse_Font*>(::app::Fuse::Controls::TextControl__FontProperty)->HasValue((::app::Fuse::Controls::TextControl*)__this->SemanticControl()))
    {
        ::uPtr< ::app::iOS::UIKit::UILabel*>(__this->_label)->Font(::app::Fuse::iOS::FontCache__GetFontFromFile(NULL, ::uPtr< ::app::Fuse::Font*>(::uPtr< ::app::Fuse::Controls::TextBlock*>(__this->SemanticControl())->Font())->File(), ::uPtr< ::app::Fuse::Controls::TextBlock*>(__this->SemanticControl())->FontSize()));
    }
    else
    {
        ::uPtr< ::app::iOS::UIKit::UILabel*>(__this->_label)->Font(::app::Fuse::iOS::FontCache__GetDefaultFont(NULL, ::uPtr< ::app::Fuse::Controls::TextBlock*>(__this->SemanticControl())->FontSize()));
    }

    ::uPtr< ::app::iOS::UIKit::UILabel*>(__this->_label)->Font(::app::Fuse::iOS::FontCache__CreateFontFromName(NULL, ::uPtr< ::app::iOS::UIKit::UIFont*>(::uPtr< ::app::iOS::UIKit::UILabel*>(__this->_label)->Font())->FontName(), ::uPtr< ::app::Fuse::Controls::TextBlock*>(__this->SemanticControl())->FontSize()));

    switch (::uPtr< ::app::Fuse::Controls::TextBlock*>(__this->SemanticControl())->TextAlignment())
    {
        case 0:
        {
            ::uPtr< ::app::iOS::UIKit::UILabel*>(__this->_label)->TextAlignment(0);
            break;
        }
        case 1:
        {
            ::uPtr< ::app::iOS::UIKit::UILabel*>(__this->_label)->TextAlignment(1);
            break;
        }
        case 2:
        {
            ::uPtr< ::app::iOS::UIKit::UILabel*>(__this->_label)->TextAlignment(2);
            break;
        }
    }
}

void TextBlock__OnTextRenderPropertyChanged(TextBlock* __this, ::uObject* sender, ::app::Uno::EventArgs* args)
{
    ::uPtr< ::app::iOS::UIKit::UILabel*>(__this->_label)->TextColor(::app::Fuse::iOS::iOSExtensions__ToUIColor(NULL, ::uPtr< ::app::Fuse::Controls::TextBlock*>(__this->SemanticControl())->TextColor()));
}

void TextBlock__OnValueChanged(TextBlock* __this, ::uObject* sender, ::app::Uno::UX::ValueChangedArgs__string* args)
{
    ::uString* ind_123;

    if ((args != NULL) && (::uPtr< ::app::Uno::UX::ValueChangedArgs__string*>(args)->Origin() == __this))
    {
        return;
    }

    ::uPtr< ::app::iOS::UIKit::UILabel*>(__this->_label)->Text((ind_123 = ::uPtr< ::app::Fuse::Controls::TextBlock*>(__this->SemanticControl())->Value(), (ind_123 != NULL) ? ind_123 : ::uGetConstString("")));
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.11.3/Controls/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

TextInput__uType* TextInput__typeof()
{
    static ::uStaticStrong<TextInput__uType*> type;
    if (type != NULL) return type;

    type = (TextInput__uType*)::uAllocClassType(sizeof(TextInput__uType), "Fuse.iOS.Controls.TextInput", false, 1, 2, 0);

    type->SetBaseType(::app::Fuse::iOS::Controls::Control__Fuse_Controls_TextInput__typeof());
    type->__fp_Attach = (void(*)(::app::Fuse::iOS::Controls::Control__Fuse_Controls_TextInput*))TextInput__Attach;
    type->__fp_CreateInternal = (::app::iOS::UIKit::UIView*(*)(::app::Fuse::iOS::Controls::Element*))TextInput__CreateInternal;
    type->__fp_Detach = (void(*)(::app::Fuse::iOS::Controls::Control__Fuse_Controls_TextInput*))TextInput__Detach;
    type->__fp_GetMarginSize = (::app::Uno::Float2(*)(::app::Fuse::Node*, ::app::Uno::Float2, int))TextInput__GetMarginSize;
    type->__fp_OnGotFocus = (void(*)(::app::Fuse::iOS::Controls::Control__Fuse_Controls_TextInput*))TextInput__OnGotFocus;
    type->__fp_OnLostFocus = (void(*)(::app::Fuse::iOS::Controls::Control__Fuse_Controls_TextInput*))TextInput__OnLostFocus;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(TextInput__uType, __interface_0));

    type->SetStrongRefs(
        "_container", offsetof(TextInput, _container),
        "_textInputImpl", offsetof(TextInput, _textInputImpl));

    return type;
}

void TextInput___ObjInit_3(TextInput* __this)
{
    __this->_prevLineCount = -1;
    ::app::Fuse::iOS::Controls::Control__Fuse_Controls_TextInput___ObjInit_2(__this);
    ::app::Fuse::Input::Focus__SetIsFocusable(NULL, (::app::Fuse::Node*)__this, true);
}

void TextInput__Attach(TextInput* __this)
{
    __this->Create();
    ::uPtr< ::app::Fuse::Controls::TextInput*>(__this->SemanticControl())->add_TextLayoutPropertyChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)TextInput__OnTextLayoutPropertyChanged, __this));
    ::uPtr< ::app::Fuse::Controls::TextInput*>(__this->SemanticControl())->add_TextRenderPropertyChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)TextInput__OnTextRenderPropertyChanged, __this));
    ::uPtr< ::app::Fuse::Controls::TextInput*>(__this->SemanticControl())->add_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__string__typeof(), (const void*)TextInput__OnValueChanged, __this));
    __this->UpdateProperties();
}

::app::iOS::UIKit::UIView* TextInput__CreateInternal(TextInput* __this)
{
    if (__this->_container == NULL)
    {
        __this->_container = ::app::Fuse::iOS::Controls::ViewContainer__New_11(NULL);
        ::uPtr< ::app::Fuse::iOS::Controls::ViewContainer*>(__this->_container)->init();
        ::uPtr< ::app::Fuse::iOS::Controls::ViewContainer*>(__this->_container)->Opaque(false);
        ::uPtr< ::app::Fuse::iOS::Controls::ViewContainer*>(__this->_container)->AutoresizesSubviews(true);
        ::uPtr< ::app::Fuse::iOS::Controls::ViewContainer*>(__this->_container)->add_FrameChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__iOS_CoreGraphics_CGRect__typeof(), (const void*)TextInput__OnFrameChanged, __this));
    }

    return (::app::iOS::UIKit::UIView*)__this->_container;
}

void TextInput__Detach(TextInput* __this)
{
    ::uPtr< ::app::Fuse::Controls::TextInput*>(__this->SemanticControl())->remove_TextLayoutPropertyChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)TextInput__OnTextLayoutPropertyChanged, __this));
    ::uPtr< ::app::Fuse::Controls::TextInput*>(__this->SemanticControl())->remove_TextRenderPropertyChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)TextInput__OnTextRenderPropertyChanged, __this));
    ::uPtr< ::app::Fuse::Controls::TextInput*>(__this->SemanticControl())->remove_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__string__typeof(), (const void*)TextInput__OnValueChanged, __this));
}

void TextInput__EnsureTextInputImpl(TextInput* __this)
{
    ::app::Fuse::iOS::Controls::MultilineTextInput* ind_123;
    ::app::Fuse::iOS::Controls::SingleLineTextInput* ind_124;
    __this->TextInputImpl(::uPtr< ::app::Fuse::Controls::TextInput*>(__this->SemanticControl())->IsMultiline() ? (::uObject*)(ind_123 = ::uAs< ::app::Fuse::iOS::Controls::MultilineTextInput*>(__this->TextInputImpl(), ::app::Fuse::iOS::Controls::MultilineTextInput__typeof()), ((ind_123 != NULL) ? ind_123 : ::app::Fuse::iOS::Controls::MultilineTextInput__New_1(NULL))) : (::uObject*)(ind_124 = ::uAs< ::app::Fuse::iOS::Controls::SingleLineTextInput*>(__this->TextInputImpl(), ::app::Fuse::iOS::Controls::SingleLineTextInput__typeof()), ((ind_124 != NULL) ? ind_124 : ::app::Fuse::iOS::Controls::SingleLineTextInput__New_1(NULL))));
}

::uObject* TextInput__get_TextInputImpl(TextInput* __this)
{
    return __this->_textInputImpl;
}

::app::Uno::Float2 TextInput__GetMarginSize(TextInput* __this, ::app::Uno::Float2 fillSize, int fillSet)
{
    __this->EnsureTextInputImpl();
    return ::app::Fuse::iOS::iOSBindingView__GetContentSize(NULL, ::app::Fuse::iOS::Controls::ITextInputImpl::View(::uPtr< ::uObject*>(__this->TextInputImpl())), fillSize, fillSet);
}

TextInput* TextInput__New_1(::uStatic* __this)
{
    TextInput* inst = (TextInput*)::uAllocObject(sizeof(TextInput), TextInput__typeof());
    inst->_ObjInit_3();
    return inst;
}

void TextInput__OnFrameChanged(TextInput* __this, ::uObject* sender, ::app::iOS::CoreGraphics::CGRect frame)
{
    if (__this->TextInputImpl() != NULL)
    {
        ::uPtr< ::app::iOS::UIKit::UIView*>(::app::Fuse::iOS::Controls::ITextInputImpl::View(::uPtr< ::uObject*>(__this->TextInputImpl())))->Frame(::app::iOS::CoreGraphics::CGRect__New_1(NULL, ::uPtr< ::app::iOS::UIKit::UIView*>(::app::Fuse::iOS::Controls::ITextInputImpl::View(::uPtr< ::uObject*>(__this->TextInputImpl())))->Frame().Origin, frame.Size));
    }
}

void TextInput__OnGotFocus(TextInput* __this)
{
    if (__this->TextInputImpl() != NULL)
    {
        ::uPtr< ::app::iOS::UIKit::UIView*>(::app::Fuse::iOS::Controls::ITextInputImpl::View(::uPtr< ::uObject*>(__this->TextInputImpl())))->becomeFirstResponder();
    }
}

void TextInput__OnLostFocus(TextInput* __this)
{
    if ((__this->TextInputImpl() != NULL) && ::uPtr< ::app::iOS::UIKit::UIView*>(::app::Fuse::iOS::Controls::ITextInputImpl::View(::uPtr< ::uObject*>(__this->TextInputImpl())))->isFirstResponder())
    {
        ::uPtr< ::app::iOS::UIKit::UIView*>(::app::Fuse::iOS::Controls::ITextInputImpl::View(::uPtr< ::uObject*>(__this->TextInputImpl())))->resignFirstResponder();
    }
}

void TextInput__OnTextChanged(TextInput* __this, ::uObject* sender, ::app::Uno::EventArgs* args)
{
    ::uPtr< ::app::Fuse::Controls::TextInput*>(__this->SemanticControl())->SetValue_1(::app::Fuse::iOS::Controls::ITextInputImpl::Text(::uPtr< ::uObject*>(__this->TextInputImpl())), (::uObject*)__this);
    __this->ValidateLineCount();
}

void TextInput__OnTextLayoutPropertyChanged(TextInput* __this, ::uObject* sender, ::app::Uno::EventArgs* args)
{
    __this->EnsureTextInputImpl();

    if (::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_TextControl__Fuse_Font*>(::app::Fuse::Controls::TextControl__FontProperty)->HasValue((::app::Fuse::Controls::TextControl*)__this->SemanticControl()))
    {
        ::app::Fuse::iOS::Controls::ITextInputImpl::Font(::uPtr< ::uObject*>(__this->TextInputImpl()), ::app::Fuse::iOS::FontCache__GetFontFromFile(NULL, ::uPtr< ::app::Fuse::Font*>(::uPtr< ::app::Fuse::Controls::TextInput*>(__this->SemanticControl())->Font())->File(), ::uPtr< ::app::Fuse::Controls::TextInput*>(__this->SemanticControl())->FontSize()));
    }
    else
    {
        ::app::Fuse::iOS::Controls::ITextInputImpl::Font(::uPtr< ::uObject*>(__this->TextInputImpl()), ::app::Fuse::iOS::FontCache__GetDefaultFont(NULL, ::uPtr< ::app::Fuse::Controls::TextInput*>(__this->SemanticControl())->FontSize()));
    }

    ::app::Fuse::iOS::Controls::ITextInputImpl::Font(::uPtr< ::uObject*>(__this->TextInputImpl()), ::app::Fuse::iOS::FontCache__CreateFontFromName(NULL, ::uPtr< ::app::iOS::UIKit::UIFont*>(::app::Fuse::iOS::Controls::ITextInputImpl::Font(::uPtr< ::uObject*>(__this->TextInputImpl())))->FontName(), ::uPtr< ::app::Fuse::Controls::TextInput*>(__this->SemanticControl())->FontSize()));

    switch (::uPtr< ::app::Fuse::Controls::TextInput*>(__this->SemanticControl())->TextAlignment())
    {
        case 0:
        {
            ::app::Fuse::iOS::Controls::ITextInputImpl::TextAlignment(::uPtr< ::uObject*>(__this->TextInputImpl()), 0);
            break;
        }
        case 1:
        {
            ::app::Fuse::iOS::Controls::ITextInputImpl::TextAlignment(::uPtr< ::uObject*>(__this->TextInputImpl()), 1);
            break;
        }
        case 2:
        {
            ::app::Fuse::iOS::Controls::ITextInputImpl::TextAlignment(::uPtr< ::uObject*>(__this->TextInputImpl()), 2);
            break;
        }
    }

    ::app::iOS::UIKit::IUITextInput::setSecureTextEntry(::uPtr< ::uObject*>(::app::Fuse::iOS::Controls::ITextInputImpl::IUITextInput(::uPtr< ::uObject*>(__this->TextInputImpl()))), ::uPtr< ::app::Fuse::Controls::TextInput*>(__this->SemanticControl())->IsPassword());

    switch (::uPtr< ::app::Fuse::Controls::TextInput*>(__this->SemanticControl())->InputHint())
    {
        case 0:
        {
            ::app::iOS::UIKit::IUITextInput::KeyboardType(::uPtr< ::uObject*>(::app::Fuse::iOS::Controls::ITextInputImpl::IUITextInput(::uPtr< ::uObject*>(__this->TextInputImpl()))), 0);
            break;
        }
        case 1:
        {
            ::app::iOS::UIKit::IUITextInput::KeyboardType(::uPtr< ::uObject*>(::app::Fuse::iOS::Controls::ITextInputImpl::IUITextInput(::uPtr< ::uObject*>(__this->TextInputImpl()))), 7);
            break;
        }
        case 2:
        {
            ::app::iOS::UIKit::IUITextInput::KeyboardType(::uPtr< ::uObject*>(::app::Fuse::iOS::Controls::ITextInputImpl::IUITextInput(::uPtr< ::uObject*>(__this->TextInputImpl()))), 3);
            break;
        }
        case 3:
        {
            ::app::iOS::UIKit::IUITextInput::KeyboardType(::uPtr< ::uObject*>(::app::Fuse::iOS::Controls::ITextInputImpl::IUITextInput(::uPtr< ::uObject*>(__this->TextInputImpl()))), 5);
            break;
        }
        case 4:
        {
            ::app::iOS::UIKit::IUITextInput::KeyboardType(::uPtr< ::uObject*>(::app::Fuse::iOS::Controls::ITextInputImpl::IUITextInput(::uPtr< ::uObject*>(__this->TextInputImpl()))), 4);
            break;
        }
    }
}

void TextInput__OnTextRenderPropertyChanged(TextInput* __this, ::uObject* sender, ::app::Uno::EventArgs* args)
{
    ::app::Fuse::iOS::Controls::ITextInputImpl::TextColor(::uPtr< ::uObject*>(__this->TextInputImpl()), ::app::Fuse::iOS::iOSExtensions__ToUIColor(NULL, ::uPtr< ::app::Fuse::Controls::TextInput*>(__this->SemanticControl())->TextColor()));

    if (::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_TextInput__float4*>(::app::Fuse::Controls::TextInput__CaretColorProperty)->HasValue(__this->SemanticControl()))
    {
        ::app::Fuse::iOS::Controls::ITextInputImpl::CaretColor(::uPtr< ::uObject*>(__this->TextInputImpl()), ::app::Fuse::iOS::iOSExtensions__ToUIColor(NULL, ::uPtr< ::app::Fuse::Controls::TextInput*>(__this->SemanticControl())->CaretColor()));
    }
}

void TextInput__OnValueChanged(TextInput* __this, ::uObject* sender, ::app::Uno::UX::ValueChangedArgs__string* args)
{
    if ((args != NULL) && (::uPtr< ::app::Uno::UX::ValueChangedArgs__string*>(args)->Origin() == __this))
    {
        return;
    }

    ::app::Fuse::iOS::Controls::ITextInputImpl::Text(::uPtr< ::uObject*>(__this->TextInputImpl()), ::uPtr< ::app::Fuse::Controls::TextInput*>(__this->SemanticControl())->Value());
}

void TextInput__set_TextInputImpl(TextInput* __this, ::uObject* value)
{
    if (__this->_textInputImpl == value)
    {
        return;
    }

    if (__this->_textInputImpl != NULL)
    {
        ::app::Fuse::iOS::Controls::ITextInputImpl::remove_TextChanged(::uPtr< ::uObject*>(__this->_textInputImpl), ::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)TextInput__OnTextChanged, __this));
        ::uPtr< ::app::iOS::UIKit::UIView*>(::app::Fuse::iOS::Controls::ITextInputImpl::View(::uPtr< ::uObject*>(__this->_textInputImpl)))->removeFromSuperview();
    }

    __this->_textInputImpl = value;

    if (__this->_textInputImpl != NULL)
    {
        ::app::Fuse::iOS::Controls::ITextInputImpl::add_TextChanged(::uPtr< ::uObject*>(__this->_textInputImpl), ::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)TextInput__OnTextChanged, __this));
        ::app::Fuse::iOS::Controls::ITextInputImpl::Text(::uPtr< ::uObject*>(__this->_textInputImpl), ::uPtr< ::app::Fuse::Controls::TextInput*>(__this->SemanticControl())->Value());
        ::uPtr< ::app::Fuse::iOS::Controls::ViewContainer*>(__this->_container)->addSubview(::app::Fuse::iOS::Controls::ITextInputImpl::View(::uPtr< ::uObject*>(__this->_textInputImpl)));
        ::uPtr< ::app::iOS::UIKit::UIView*>(::app::Fuse::iOS::Controls::ITextInputImpl::View(::uPtr< ::uObject*>(__this->_textInputImpl)))->sizeToFit();
        ::uPtr< ::app::iOS::UIKit::UIView*>(::app::Fuse::iOS::Controls::ITextInputImpl::View(::uPtr< ::uObject*>(__this->_textInputImpl)))->setNeedsDisplay();
        ::uPtr< ::app::Fuse::iOS::Controls::ViewContainer*>(__this->_container)->setNeedsDisplay();
        __this->UpdateProperties();
    }
}

void TextInput__UpdateProperties(TextInput* __this)
{
    __this->OnTextLayoutPropertyChanged(NULL, NULL);
    __this->OnTextRenderPropertyChanged(NULL, NULL);
    __this->OnValueChanged(NULL, NULL);
    __this->ValidateLineCount();
}

void TextInput__ValidateLineCount(TextInput* __this)
{
    if (__this->_prevLineCount != ::app::Fuse::iOS::Controls::ITextInputImpl::LineCount(::uPtr< ::uObject*>(__this->TextInputImpl())))
    {
        __this->_prevLineCount = ::app::Fuse::iOS::Controls::ITextInputImpl::LineCount(::uPtr< ::uObject*>(__this->TextInputImpl()));
        __this->InvalidateLayout(2);
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.11.3/Controls/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ViewContainer__uType* ViewContainer__typeof()
{
    static ::uStaticStrong<ViewContainer__uType*> type;
    if (type != NULL) return type;

    type = (ViewContainer__uType*)::uAllocClassType(sizeof(ViewContainer__uType), "Fuse.iOS.Controls.ViewContainer", false, 0, 1, 0);

    type->SetBaseType(::app::iOS::UIKit::UIControl__typeof());
    type->__fp_setFrame = (void(*)(::app::iOS::UIKit::UIView*, ::app::iOS::CoreGraphics::CGRect))ViewContainer__setFrame;

    type->SetStrongRefs(
        "FrameChanged", offsetof(ViewContainer, FrameChanged));

    return type;
}

void ViewContainer___ObjInit_10(ViewContainer* __this)
{
    ::app::iOS::UIKit::UIControl___ObjInit_9(__this);
}

void ViewContainer__add_FrameChanged(ViewContainer* __this, ::uDelegate* value)
{
    __this->FrameChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->FrameChanged, (::uDelegate*)value), ::app::Uno::EventHandler__iOS_CoreGraphics_CGRect__typeof());
}

ViewContainer* ViewContainer__New_11(::uStatic* __this)
{
    ViewContainer* inst = (ViewContainer*)::uAllocObject(sizeof(ViewContainer), ViewContainer__typeof());
    inst->_ObjInit_10();
    return inst;
}

void ViewContainer__remove_FrameChanged(ViewContainer* __this, ::uDelegate* value)
{
    __this->FrameChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->FrameChanged, (::uDelegate*)value), ::app::Uno::EventHandler__iOS_CoreGraphics_CGRect__typeof());
}

void ViewContainer__setFrame(ViewContainer* __this, ::app::iOS::CoreGraphics::CGRect frame)
{
    ::app::iOS::UIKit::UIView__setFrame(__this, frame);

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->FrameChanged, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->FrameChanged)->InvokeVoid< ::uObject*, ::app::iOS::CoreGraphics::CGRect>((::uObject*)__this, frame);
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.11.3/Controls/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

WebView__uType* WebView__typeof()
{
    static ::uStaticStrong<WebView__uType*> type;
    if (type != NULL) return type;

    type = (WebView__uType*)::uAllocClassType(sizeof(WebView__uType), "Fuse.iOS.Controls.WebView", false, 4, 3, 0);

    type->SetBaseType(::app::Fuse::iOS::Controls::Control__Fuse_Controls_WebView__typeof());
    type->__fp_Finalize = (void(*)(::uObject*))WebView__Finalize;
    type->__fp_Attach = (void(*)(::app::Fuse::iOS::Controls::Control__Fuse_Controls_WebView*))WebView__Attach;
    type->__fp_CreateInternal = (::app::iOS::UIKit::UIView*(*)(::app::Fuse::iOS::Controls::Element*))WebView__CreateInternal;
    type->__fp_Detach = (void(*)(::app::Fuse::iOS::Controls::Control__Fuse_Controls_WebView*))WebView__Detach;
    type->__interface_1.__fp_get_Url = (::uString*(*)(void*))WebView__get_Url;
    type->__interface_1.__fp_set_Url = (void(*)(void*, ::uString*))WebView__set_Url;
    type->__interface_1.__fp_get_File = (::app::Uno::UX::FileSource*(*)(void*))WebView__get_File;
    type->__interface_1.__fp_set_File = (void(*)(void*, ::app::Uno::UX::FileSource*))WebView__set_File;
    type->__interface_2.__fp_get_Progress = (double(*)(void*))WebView__get_Progress;
    type->__interface_2.__fp_add_ProgressChanged = (void(*)(void*, ::uDelegate*))WebView__add_ProgressChanged;
    type->__interface_2.__fp_remove_ProgressChanged = (void(*)(void*, ::uDelegate*))WebView__remove_ProgressChanged;
    type->__interface_3.__fp_GoBack = (void(*)(void*))WebView__GoBack;
    type->__interface_3.__fp_GoForward = (void(*)(void*))WebView__GoForward;
    type->__interface_3.__fp_Reload = (void(*)(void*))WebView__Reload;
    type->__interface_3.__fp_Stop = (void(*)(void*))WebView__Stop;
    type->__interface_3.__fp_LoadUrl = (void(*)(void*, ::uString*))WebView__LoadUrl;
    type->__interface_3.__fp_get_CanGoBack = (bool(*)(void*))WebView__get_CanGoBack;
    type->__interface_3.__fp_get_CanGoForward = (bool(*)(void*))WebView__get_CanGoForward;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(WebView__uType, __interface_0),
        ::app::Fuse::Controls::IWebView__typeof(), offsetof(WebView__uType, __interface_1),
        ::app::Fuse::Triggers::IProgress__typeof(), offsetof(WebView__uType, __interface_2),
        ::app::Fuse::Navigation::IWebViewNavgation__typeof(), offsetof(WebView__uType, __interface_3));

    type->SetStrongRefs(
        "_file", offsetof(WebView, _file),
        "_webView", offsetof(WebView, _webView),
        "ProgressChanged", offsetof(WebView, ProgressChanged));

    return type;
}

void WebView__Finalize(WebView* __this)
{
    if (__this->_webView != NULL)
    {
        ::app::Uno::Platform2::Application__remove_ReceivedLowMemoryWarning(NULL, ::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)WebView__OnLowMemory, __this));
    }
}

void WebView___ObjInit_3(WebView* __this)
{
    ::app::Fuse::iOS::Controls::Control__Fuse_Controls_WebView___ObjInit_2(__this);
}

void WebView__add_ProgressChanged(WebView* __this, ::uDelegate* value)
{
    __this->ProgressChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->ProgressChanged, (::uDelegate*)value), ::app::Uno::EventHandler__typeof());
}

void WebView__Attach(WebView* __this)
{
    __this->Create();
    ::uPtr< ::app::Fuse::Controls::WebView*>(__this->SemanticControl())->WebViewClient((::uObject*)__this);
}

::app::iOS::UIKit::UIView* WebView__CreateInternal(WebView* __this)
{
    if (__this->_webView == NULL)
    {
        __this->_webView = ::app::iOS::WebKit::WKWebView__New_9(NULL);
        ::uPtr< ::app::iOS::WebKit::WKWebView*>(__this->_webView)->init();
        ::app::Uno::Platform2::Application__add_ReceivedLowMemoryWarning(NULL, ::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)WebView__OnLowMemory, __this));
    }

    return (::app::iOS::UIKit::UIView*)__this->_webView;
}

void WebView__Detach(WebView* __this)
{
    ::uPtr< ::app::Fuse::Controls::WebView*>(__this->SemanticControl())->WebViewClient(NULL);
}

bool WebView__get_CanGoBack(WebView* __this)
{
    return ::uPtr< ::app::iOS::WebKit::WKWebView*>(__this->_webView)->CanGoBack();
}

bool WebView__get_CanGoForward(WebView* __this)
{
    return ::uPtr< ::app::iOS::WebKit::WKWebView*>(__this->_webView)->CanGoForward();
}

::app::Uno::UX::FileSource* WebView__get_File(WebView* __this)
{
    return __this->_file;
}

double WebView__get_Progress(WebView* __this)
{
    return ::uPtr< ::app::iOS::WebKit::WKWebView*>(__this->_webView)->EstimatedProgress();
}

::uString* WebView__get_Url(WebView* __this)
{
    return ::uPtr< ::app::iOS::Foundation::NSURL*>(::uPtr< ::app::iOS::WebKit::WKWebView*>(__this->_webView)->URL())->AbsoluteString();
}

void WebView__GoBack(WebView* __this)
{
    ::uPtr< ::app::iOS::WebKit::WKWebView*>(__this->_webView)->goBack();
}

void WebView__GoForward(WebView* __this)
{
    ::uPtr< ::app::iOS::WebKit::WKWebView*>(__this->_webView)->goForward();
}

void WebView__LoadFile(WebView* __this, ::app::Uno::UX::FileSource* file)
{
    ::uString* data = ::uPtr< ::app::Uno::UX::FileSource*>(file)->ReadAllText();
    ::uPtr< ::app::iOS::WebKit::WKWebView*>(__this->_webView)->loadHTMLStringBaseURL(data, NULL);
    __this->StartProgressUpdate();
}

void WebView__LoadUrl(WebView* __this, ::uString* url)
{
    if (::app::Uno::String__op_Equality(NULL, url, NULL))
    {
        return;
    }

    ::app::iOS::Foundation::NSURL* nsurl = ::app::iOS::Foundation::NSURL__New_5(NULL);
    ::uPtr< ::app::iOS::Foundation::NSURL*>(nsurl)->initWithString(url);
    ::app::iOS::Foundation::NSURLRequest* request = ::app::iOS::Foundation::NSURLRequest__New_5(NULL);
    ::uPtr< ::app::iOS::Foundation::NSURLRequest*>(request)->initWithURL(nsurl);
    ::uPtr< ::app::iOS::WebKit::WKWebView*>(__this->_webView)->loadRequest(request);
    __this->StartProgressUpdate();
}

WebView* WebView__New_1(::uStatic* __this)
{
    WebView* inst = (WebView*)::uAllocObject(sizeof(WebView), WebView__typeof());
    inst->_ObjInit_3();
    return inst;
}

void WebView__OnLowMemory(WebView* __this, ::uObject* sender, ::app::Uno::EventArgs* args)
{
    ::app::Uno::Diagnostics::Debug__Log_1(NULL, ::uGetConstString("low mem in WebView"), 1, ::uGetConstString("/usr/local/share/uno/Packages/Fuse.iOS/0.11.3/Controls/$.uno"), 1696);
    ::app::iOS::Foundation::NSURLCache* urlCache = ::app::iOS::Foundation::NSURLCache___sharedURLCache(NULL);

    if (urlCache != NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_1(NULL, ::uGetConstString("freeing mem in WebView"), 1, ::uGetConstString("/usr/local/share/uno/Packages/Fuse.iOS/0.11.3/Controls/$.uno"), 1700);
        ::uPtr< ::app::iOS::Foundation::NSURLCache*>(urlCache)->removeAllCachedResponses();
    }
}

void WebView__OnProgressChanged(WebView* __this)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->ProgressChanged, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->ProgressChanged)->InvokeVoid< ::uObject*, ::app::Uno::EventArgs*>((::uObject*)__this, ::app::Uno::EventArgs__Empty);
    }
}

void WebView__OnUpdate(WebView* __this)
{
    __this->OnProgressChanged();

    if (!::uPtr< ::app::iOS::WebKit::WKWebView*>(__this->_webView)->Loading())
    {
        __this->_isUpdating = false;
        ::app::Fuse::UpdateManager__RemoveAction(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)WebView__OnUpdate, __this), 0);
    }
}

void WebView__Reload(WebView* __this)
{
    ::uPtr< ::app::iOS::WebKit::WKWebView*>(__this->_webView)->reload();
}

void WebView__remove_ProgressChanged(WebView* __this, ::uDelegate* value)
{
    __this->ProgressChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->ProgressChanged, (::uDelegate*)value), ::app::Uno::EventHandler__typeof());
}

void WebView__set_File(WebView* __this, ::app::Uno::UX::FileSource* value)
{
    __this->_file = value;

    if (__this->_file != NULL)
    {
        __this->LoadFile(__this->_file);
    }
}

void WebView__set_Url(WebView* __this, ::uString* value)
{
    __this->LoadUrl(value);
}

void WebView__StartProgressUpdate(WebView* __this)
{
    if (!__this->_isUpdating)
    {
        ::app::Fuse::UpdateManager__AddAction(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)WebView__OnUpdate, __this), 0);
    }
}

void WebView__Stop(WebView* __this)
{
    ::uPtr< ::app::iOS::WebKit::WKWebView*>(__this->_webView)->stopLoading();
}

}}}}
