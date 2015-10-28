#include <app/Fuse.Controls.Circle.h>
#include <app/Fuse.Controls.Rectangle.h>
#include <app/Fuse.Controls.Shape.h>
#include <app/Fuse.Diagnostics.h>
#include <app/Fuse.Drawing.Brush.h>
#include <app/Fuse.Drawing.SolidColor.h>
#include <app/Fuse.Drawing.StaticSolidColor.h>
#include <app/Fuse.Drawing.Stroke.h>
#include <app/Fuse.iOS.Controls.Element.h>
#include <app/Fuse.iOS.Controls.Shape__Fuse_Controls_Circle.h>
#include <app/Fuse.iOS.Controls.Shape__Fuse_Controls_Rectangle.h>
#include <app/Fuse.iOS.iOSExtensions.h>
#include <app/Fuse.SizeFlags.h>
#include <app/iOS.CoreGraphics.CGColorRef.h>
#include <app/iOS.CoreGraphics.CGPathRef.h>
#include <app/iOS.Foundation.NSObject.h>
#include <app/iOS.QuartzCore.CALayer.h>
#include <app/iOS.QuartzCore.CAShapeLayer.h>
#include <app/iOS.UIKit.UIBezierPath.h>
#include <app/iOS.UIKit.UIColor.h>
#include <app/iOS.UIKit.UIView.h>
#include <app/Uno.Action.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.List__iOS_QuartzCore_CAShapeLayer.h>
#include <app/Uno.Double.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Int.h>
#include <app/Uno.Object.h>
#include <app/Uno.String.h>

namespace app {
namespace Fuse {
namespace iOS {
namespace Controls {

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.11.3/Controls/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Shape__Fuse_Controls_Circle__uType* Shape__Fuse_Controls_Circle__typeof()
{
    static ::uStaticStrong<Shape__Fuse_Controls_Circle__uType*> type;
    if (type != NULL) return type;

    type = (Shape__Fuse_Controls_Circle__uType*)::uAllocClassType(sizeof(Shape__Fuse_Controls_Circle__uType), "Fuse.iOS.Controls.Shape<Fuse.Controls.Circle>", false, 1, 2, 0);

    type->SetBaseType(::app::Fuse::iOS::Controls::Control__Fuse_Controls_Circle__typeof());
    type->__fp_Attach = (void(*)(::app::Fuse::iOS::Controls::Control__Fuse_Controls_Circle*))Shape__Fuse_Controls_Circle__Attach;
    type->__fp_CreateInternal = (::app::iOS::UIKit::UIView*(*)(::app::Fuse::iOS::Controls::Element*))Shape__Fuse_Controls_Circle__CreateInternal;
    type->__fp_Detach = (void(*)(::app::Fuse::iOS::Controls::Control__Fuse_Controls_Circle*))Shape__Fuse_Controls_Circle__Detach;
    type->__fp_OnArrangeMarginBox = (::app::Uno::Float2(*)(::app::Fuse::Node*, ::app::Uno::Float2, ::app::Uno::Float2, int))Shape__Fuse_Controls_Circle__OnArrangeMarginBox;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(Shape__Fuse_Controls_Circle__uType, __interface_0));

    type->SetStrongRefs(
        "_control", offsetof(Shape__Fuse_Controls_Circle, _control),
        "_layers", offsetof(Shape__Fuse_Controls_Circle, _layers));

    return type;
}

void Shape__Fuse_Controls_Circle___ObjInit_3(Shape__Fuse_Controls_Circle* __this)
{
    ::app::Fuse::iOS::Controls::Control__Fuse_Controls_Circle___ObjInit_2(__this);
}

void Shape__Fuse_Controls_Circle__Attach(Shape__Fuse_Controls_Circle* __this)
{
    __this->Create();
    ::uPtr< ::app::Fuse::Controls::Circle*>(__this->SemanticControl())->add_ShapeChanged(::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)Shape__Fuse_Controls_Circle__OnShapeChanged, __this));
    __this->OnShapeChanged();
}

::app::iOS::UIKit::UIView* Shape__Fuse_Controls_Circle__CreateInternal(Shape__Fuse_Controls_Circle* __this)
{
    if (__this->_control == NULL)
    {
        __this->_control = ::app::iOS::UIKit::UIView__New_7(NULL);
        ::uPtr< ::app::iOS::UIKit::UIView*>(__this->_control)->init();
        ::uPtr< ::app::iOS::UIKit::UIView*>(__this->_control)->MultipleTouchEnabled(true);
        ::uPtr< ::app::iOS::UIKit::UIView*>(__this->_control)->Opaque(false);
    }

    return __this->_control;
}

void Shape__Fuse_Controls_Circle__Detach(Shape__Fuse_Controls_Circle* __this)
{
    ::uPtr< ::app::Fuse::Controls::Circle*>(__this->SemanticControl())->remove_ShapeChanged(::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)Shape__Fuse_Controls_Circle__OnShapeChanged, __this));

    if (__this->_layers != NULL)
    {
        for (int i = 0; i < ::uPtr< ::app::Uno::Collections::List__iOS_QuartzCore_CAShapeLayer*>(__this->_layers)->Count(); ++i)
        {
            ::uPtr< ::app::iOS::QuartzCore::CAShapeLayer*>(::uPtr< ::app::Uno::Collections::List__iOS_QuartzCore_CAShapeLayer*>(__this->_layers)->Item(i))->removeFromSuperlayer();
        }

        __this->_layers = NULL;
    }
}

::app::iOS::QuartzCore::CAShapeLayer* Shape__Fuse_Controls_Circle__GetSubLayer(Shape__Fuse_Controls_Circle* __this, int index)
{
    if (__this->_layers == NULL)
    {
        __this->_layers = ::app::Uno::Collections::List__iOS_QuartzCore_CAShapeLayer__New_1(NULL);
    }

    while (index >= ::uPtr< ::app::Uno::Collections::List__iOS_QuartzCore_CAShapeLayer*>(__this->_layers)->Count())
    {
        ::app::iOS::QuartzCore::CAShapeLayer* layer = ::app::iOS::QuartzCore::CAShapeLayer__New_7(NULL);
        ::uPtr< ::app::iOS::QuartzCore::CAShapeLayer*>(layer)->init();
        ::uPtr< ::app::Uno::Collections::List__iOS_QuartzCore_CAShapeLayer*>(__this->_layers)->Add(layer);
        ::uPtr< ::app::iOS::QuartzCore::CALayer*>(::uPtr< ::app::iOS::UIKit::UIView*>(__this->_control)->Layer())->addSublayer((::app::iOS::QuartzCore::CALayer*)layer);
    }

    return ::uPtr< ::app::Uno::Collections::List__iOS_QuartzCore_CAShapeLayer*>(__this->_layers)->Item(index);
}

::app::Uno::Float2 Shape__Fuse_Controls_Circle__OnArrangeMarginBox(Shape__Fuse_Controls_Circle* __this, ::app::Uno::Float2 position, ::app::Uno::Float2 availableSize, int availSet)
{
    ::app::Uno::Float2 r = ::app::Fuse::iOS::Controls::Element__OnArrangeMarginBox(__this, position, availableSize, availSet);
    __this->OnShapeChanged();
    return r;
}

void Shape__Fuse_Controls_Circle__OnShapeChanged(Shape__Fuse_Controls_Circle* __this)
{
    if (__this->_control == NULL)
    {
        return;
    }

    int layerIndex = 0;

    if (::uPtr< ::app::Fuse::Controls::Circle*>(__this->SemanticControl())->HasFills())
    {
        ::app::iOS::QuartzCore::CAShapeLayer* layer = __this->GetSubLayer(layerIndex++);
        __this->SetLayerBrush(layer, ::uPtr< ::app::Fuse::Controls::Circle*>(__this->SemanticControl())->Fill(), false);
        ::uPtr< ::app::iOS::QuartzCore::CAShapeLayer*>(layer)->setPath(::uPtr< ::app::iOS::UIKit::UIBezierPath*>(__this->CreatePath())->CGPath());
        layer->setStrokeColor(nil);
    }

    if (::uPtr< ::app::Fuse::Controls::Circle*>(__this->SemanticControl())->HasStrokes())
    {
        ::app::Fuse::Drawing::Stroke* stroke = ::uPtr< ::app::Fuse::Controls::Circle*>(__this->SemanticControl())->Stroke();
        ::app::iOS::QuartzCore::CAShapeLayer* layer = __this->GetSubLayer(layerIndex++);
        __this->SetLayerBrush(layer, ::uPtr< ::app::Fuse::Drawing::Stroke*>(stroke)->Brush(), true);
        ::uPtr< ::app::iOS::QuartzCore::CAShapeLayer*>(layer)->setPath(::uPtr< ::app::iOS::UIKit::UIBezierPath*>(__this->CreatePath())->CGPath());
        layer->setFillColor(nil);
        layer->setLineWidth((double)stroke->Width());
    }

    if (__this->_layers != NULL)
    {
        while (::uPtr< ::app::Uno::Collections::List__iOS_QuartzCore_CAShapeLayer*>(__this->_layers)->Count() > layerIndex)
        {
            ::uPtr< ::app::iOS::QuartzCore::CAShapeLayer*>(::uPtr< ::app::Uno::Collections::List__iOS_QuartzCore_CAShapeLayer*>(__this->_layers)->Item(layerIndex))->removeFromSuperlayer();
            ::uPtr< ::app::Uno::Collections::List__iOS_QuartzCore_CAShapeLayer*>(__this->_layers)->RemoveAt(layerIndex);
        }
    }
}

void Shape__Fuse_Controls_Circle__SetLayerBrush(Shape__Fuse_Controls_Circle* __this, ::app::iOS::QuartzCore::CAShapeLayer* layer, ::app::Fuse::Drawing::Brush* brush, bool line)
{
    ::app::Uno::Float4 color = ::app::Uno::Float4();

    if (::uIs(brush, ::app::Fuse::Drawing::SolidColor__typeof()))
    {
        color = ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->Color();
    }
    else if (::uIs(brush, ::app::Fuse::Drawing::StaticSolidColor__typeof()))
    {
        color = ::uPtr< ::app::Fuse::Drawing::StaticSolidColor*>(::uAs< ::app::Fuse::Drawing::StaticSolidColor*>(brush, ::app::Fuse::Drawing::StaticSolidColor__typeof()))->Color();
    }
    else
    {
        ::app::Fuse::Diagnostics__Unsupported(NULL, ::uGetConstString("shape brush"), (::uObject*)brush, ::uGetConstString("/usr/local/share/uno/Packages/Fuse.iOS/0.11.3/Controls/$.uno"), 883, ::uGetConstString("SetLayerBrush"));
        return;
    }

    if (line)
    {
        ::uPtr< ::app::iOS::QuartzCore::CAShapeLayer*>(layer)->setStrokeColor(::uPtr< ::app::iOS::UIKit::UIColor*>(::app::Fuse::iOS::iOSExtensions__ToUIColor(NULL, color))->CGColor());
    }
    else
    {
        layer->setFillColor(::uPtr< ::app::iOS::UIKit::UIColor*>(::app::Fuse::iOS::iOSExtensions__ToUIColor(NULL, color))->CGColor());
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.11.3/Controls/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Shape__Fuse_Controls_Rectangle__uType* Shape__Fuse_Controls_Rectangle__typeof()
{
    static ::uStaticStrong<Shape__Fuse_Controls_Rectangle__uType*> type;
    if (type != NULL) return type;

    type = (Shape__Fuse_Controls_Rectangle__uType*)::uAllocClassType(sizeof(Shape__Fuse_Controls_Rectangle__uType), "Fuse.iOS.Controls.Shape<Fuse.Controls.Rectangle>", false, 1, 2, 0);

    type->SetBaseType(::app::Fuse::iOS::Controls::Control__Fuse_Controls_Rectangle__typeof());
    type->__fp_Attach = (void(*)(::app::Fuse::iOS::Controls::Control__Fuse_Controls_Rectangle*))Shape__Fuse_Controls_Rectangle__Attach;
    type->__fp_CreateInternal = (::app::iOS::UIKit::UIView*(*)(::app::Fuse::iOS::Controls::Element*))Shape__Fuse_Controls_Rectangle__CreateInternal;
    type->__fp_Detach = (void(*)(::app::Fuse::iOS::Controls::Control__Fuse_Controls_Rectangle*))Shape__Fuse_Controls_Rectangle__Detach;
    type->__fp_OnArrangeMarginBox = (::app::Uno::Float2(*)(::app::Fuse::Node*, ::app::Uno::Float2, ::app::Uno::Float2, int))Shape__Fuse_Controls_Rectangle__OnArrangeMarginBox;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(Shape__Fuse_Controls_Rectangle__uType, __interface_0));

    type->SetStrongRefs(
        "_control", offsetof(Shape__Fuse_Controls_Rectangle, _control),
        "_layers", offsetof(Shape__Fuse_Controls_Rectangle, _layers));

    return type;
}

void Shape__Fuse_Controls_Rectangle___ObjInit_3(Shape__Fuse_Controls_Rectangle* __this)
{
    ::app::Fuse::iOS::Controls::Control__Fuse_Controls_Rectangle___ObjInit_2(__this);
}

void Shape__Fuse_Controls_Rectangle__Attach(Shape__Fuse_Controls_Rectangle* __this)
{
    __this->Create();
    ::uPtr< ::app::Fuse::Controls::Rectangle*>(__this->SemanticControl())->add_ShapeChanged(::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)Shape__Fuse_Controls_Rectangle__OnShapeChanged, __this));
    __this->OnShapeChanged();
}

::app::iOS::UIKit::UIView* Shape__Fuse_Controls_Rectangle__CreateInternal(Shape__Fuse_Controls_Rectangle* __this)
{
    if (__this->_control == NULL)
    {
        __this->_control = ::app::iOS::UIKit::UIView__New_7(NULL);
        ::uPtr< ::app::iOS::UIKit::UIView*>(__this->_control)->init();
        ::uPtr< ::app::iOS::UIKit::UIView*>(__this->_control)->MultipleTouchEnabled(true);
        ::uPtr< ::app::iOS::UIKit::UIView*>(__this->_control)->Opaque(false);
    }

    return __this->_control;
}

void Shape__Fuse_Controls_Rectangle__Detach(Shape__Fuse_Controls_Rectangle* __this)
{
    ::uPtr< ::app::Fuse::Controls::Rectangle*>(__this->SemanticControl())->remove_ShapeChanged(::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)Shape__Fuse_Controls_Rectangle__OnShapeChanged, __this));

    if (__this->_layers != NULL)
    {
        for (int i = 0; i < ::uPtr< ::app::Uno::Collections::List__iOS_QuartzCore_CAShapeLayer*>(__this->_layers)->Count(); ++i)
        {
            ::uPtr< ::app::iOS::QuartzCore::CAShapeLayer*>(::uPtr< ::app::Uno::Collections::List__iOS_QuartzCore_CAShapeLayer*>(__this->_layers)->Item(i))->removeFromSuperlayer();
        }

        __this->_layers = NULL;
    }
}

::app::iOS::QuartzCore::CAShapeLayer* Shape__Fuse_Controls_Rectangle__GetSubLayer(Shape__Fuse_Controls_Rectangle* __this, int index)
{
    if (__this->_layers == NULL)
    {
        __this->_layers = ::app::Uno::Collections::List__iOS_QuartzCore_CAShapeLayer__New_1(NULL);
    }

    while (index >= ::uPtr< ::app::Uno::Collections::List__iOS_QuartzCore_CAShapeLayer*>(__this->_layers)->Count())
    {
        ::app::iOS::QuartzCore::CAShapeLayer* layer = ::app::iOS::QuartzCore::CAShapeLayer__New_7(NULL);
        ::uPtr< ::app::iOS::QuartzCore::CAShapeLayer*>(layer)->init();
        ::uPtr< ::app::Uno::Collections::List__iOS_QuartzCore_CAShapeLayer*>(__this->_layers)->Add(layer);
        ::uPtr< ::app::iOS::QuartzCore::CALayer*>(::uPtr< ::app::iOS::UIKit::UIView*>(__this->_control)->Layer())->addSublayer((::app::iOS::QuartzCore::CALayer*)layer);
    }

    return ::uPtr< ::app::Uno::Collections::List__iOS_QuartzCore_CAShapeLayer*>(__this->_layers)->Item(index);
}

::app::Uno::Float2 Shape__Fuse_Controls_Rectangle__OnArrangeMarginBox(Shape__Fuse_Controls_Rectangle* __this, ::app::Uno::Float2 position, ::app::Uno::Float2 availableSize, int availSet)
{
    ::app::Uno::Float2 r = ::app::Fuse::iOS::Controls::Element__OnArrangeMarginBox(__this, position, availableSize, availSet);
    __this->OnShapeChanged();
    return r;
}

void Shape__Fuse_Controls_Rectangle__OnShapeChanged(Shape__Fuse_Controls_Rectangle* __this)
{
    if (__this->_control == NULL)
    {
        return;
    }

    int layerIndex = 0;

    if (::uPtr< ::app::Fuse::Controls::Rectangle*>(__this->SemanticControl())->HasFills())
    {
        ::app::iOS::QuartzCore::CAShapeLayer* layer = __this->GetSubLayer(layerIndex++);
        __this->SetLayerBrush(layer, ::uPtr< ::app::Fuse::Controls::Rectangle*>(__this->SemanticControl())->Fill(), false);
        ::uPtr< ::app::iOS::QuartzCore::CAShapeLayer*>(layer)->setPath(::uPtr< ::app::iOS::UIKit::UIBezierPath*>(__this->CreatePath())->CGPath());
        layer->setStrokeColor(nil);
    }

    if (::uPtr< ::app::Fuse::Controls::Rectangle*>(__this->SemanticControl())->HasStrokes())
    {
        ::app::Fuse::Drawing::Stroke* stroke = ::uPtr< ::app::Fuse::Controls::Rectangle*>(__this->SemanticControl())->Stroke();
        ::app::iOS::QuartzCore::CAShapeLayer* layer = __this->GetSubLayer(layerIndex++);
        __this->SetLayerBrush(layer, ::uPtr< ::app::Fuse::Drawing::Stroke*>(stroke)->Brush(), true);
        ::uPtr< ::app::iOS::QuartzCore::CAShapeLayer*>(layer)->setPath(::uPtr< ::app::iOS::UIKit::UIBezierPath*>(__this->CreatePath())->CGPath());
        layer->setFillColor(nil);
        layer->setLineWidth((double)stroke->Width());
    }

    if (__this->_layers != NULL)
    {
        while (::uPtr< ::app::Uno::Collections::List__iOS_QuartzCore_CAShapeLayer*>(__this->_layers)->Count() > layerIndex)
        {
            ::uPtr< ::app::iOS::QuartzCore::CAShapeLayer*>(::uPtr< ::app::Uno::Collections::List__iOS_QuartzCore_CAShapeLayer*>(__this->_layers)->Item(layerIndex))->removeFromSuperlayer();
            ::uPtr< ::app::Uno::Collections::List__iOS_QuartzCore_CAShapeLayer*>(__this->_layers)->RemoveAt(layerIndex);
        }
    }
}

void Shape__Fuse_Controls_Rectangle__SetLayerBrush(Shape__Fuse_Controls_Rectangle* __this, ::app::iOS::QuartzCore::CAShapeLayer* layer, ::app::Fuse::Drawing::Brush* brush, bool line)
{
    ::app::Uno::Float4 color = ::app::Uno::Float4();

    if (::uIs(brush, ::app::Fuse::Drawing::SolidColor__typeof()))
    {
        color = ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->Color();
    }
    else if (::uIs(brush, ::app::Fuse::Drawing::StaticSolidColor__typeof()))
    {
        color = ::uPtr< ::app::Fuse::Drawing::StaticSolidColor*>(::uAs< ::app::Fuse::Drawing::StaticSolidColor*>(brush, ::app::Fuse::Drawing::StaticSolidColor__typeof()))->Color();
    }
    else
    {
        ::app::Fuse::Diagnostics__Unsupported(NULL, ::uGetConstString("shape brush"), (::uObject*)brush, ::uGetConstString("/usr/local/share/uno/Packages/Fuse.iOS/0.11.3/Controls/$.uno"), 883, ::uGetConstString("SetLayerBrush"));
        return;
    }

    if (line)
    {
        ::uPtr< ::app::iOS::QuartzCore::CAShapeLayer*>(layer)->setStrokeColor(::uPtr< ::app::iOS::UIKit::UIColor*>(::app::Fuse::iOS::iOSExtensions__ToUIColor(NULL, color))->CGColor());
    }
    else
    {
        layer->setFillColor(::uPtr< ::app::iOS::UIKit::UIColor*>(::app::Fuse::iOS::iOSExtensions__ToUIColor(NULL, color))->CGColor());
    }
}

}}}}
