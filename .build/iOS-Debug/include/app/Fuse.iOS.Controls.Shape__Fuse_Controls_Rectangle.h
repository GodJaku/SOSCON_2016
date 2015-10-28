// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.11.3/Controls/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_I_O_S_CONTROLS_SHAPE__FUSE_CONTROLS_RECTANGLE_H__
#define __APP_FUSE_I_O_S_CONTROLS_SHAPE__FUSE_CONTROLS_RECTANGLE_H__

#include <app/Fuse.iOS.Controls.Control__Fuse_Controls_Rectangle.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct Brush; } } }
namespace app { namespace iOS { namespace QuartzCore { struct CAShapeLayer; } } }
namespace app { namespace iOS { namespace UIKit { struct UIBezierPath; } } }
namespace app { namespace iOS { namespace UIKit { struct UIView; } } }
namespace app { namespace Uno { namespace Collections { struct List__iOS_QuartzCore_CAShapeLayer; } } }
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {
namespace iOS {
namespace Controls {

struct Shape__Fuse_Controls_Rectangle;

struct Shape__Fuse_Controls_Rectangle__uType : ::app::Fuse::iOS::Controls::Control__Fuse_Controls_Rectangle__uType
{
    ::app::iOS::UIKit::UIBezierPath*(*__fp_CreatePath)(Shape__Fuse_Controls_Rectangle*);
};

Shape__Fuse_Controls_Rectangle__uType* Shape__Fuse_Controls_Rectangle__typeof();

void Shape__Fuse_Controls_Rectangle___ObjInit_3(Shape__Fuse_Controls_Rectangle* __this);
void Shape__Fuse_Controls_Rectangle__Attach(Shape__Fuse_Controls_Rectangle* __this);
::app::iOS::UIKit::UIView* Shape__Fuse_Controls_Rectangle__CreateInternal(Shape__Fuse_Controls_Rectangle* __this);
void Shape__Fuse_Controls_Rectangle__Detach(Shape__Fuse_Controls_Rectangle* __this);
::app::iOS::QuartzCore::CAShapeLayer* Shape__Fuse_Controls_Rectangle__GetSubLayer(Shape__Fuse_Controls_Rectangle* __this, int index);
::app::Uno::Float2 Shape__Fuse_Controls_Rectangle__OnArrangeMarginBox(Shape__Fuse_Controls_Rectangle* __this, ::app::Uno::Float2 position, ::app::Uno::Float2 availableSize, int availSet);
void Shape__Fuse_Controls_Rectangle__OnShapeChanged(Shape__Fuse_Controls_Rectangle* __this);
void Shape__Fuse_Controls_Rectangle__SetLayerBrush(Shape__Fuse_Controls_Rectangle* __this, ::app::iOS::QuartzCore::CAShapeLayer* layer, ::app::Fuse::Drawing::Brush* brush, bool line);

struct Shape__Fuse_Controls_Rectangle : ::app::Fuse::iOS::Controls::Control__Fuse_Controls_Rectangle
{
    ::uStrong< ::app::iOS::UIKit::UIView*> _control;
    ::uStrong< ::app::Uno::Collections::List__iOS_QuartzCore_CAShapeLayer*> _layers;

    void _ObjInit_3() { Shape__Fuse_Controls_Rectangle___ObjInit_3(this); }
    ::app::iOS::UIKit::UIBezierPath* CreatePath() { return (((Shape__Fuse_Controls_Rectangle__uType*)this->__obj_type)->__fp_CreatePath)(this); }
    ::app::iOS::QuartzCore::CAShapeLayer* GetSubLayer(int index) { return Shape__Fuse_Controls_Rectangle__GetSubLayer(this, index); }
    void OnShapeChanged() { Shape__Fuse_Controls_Rectangle__OnShapeChanged(this); }
    void SetLayerBrush(::app::iOS::QuartzCore::CAShapeLayer* layer, ::app::Fuse::Drawing::Brush* brush, bool line) { Shape__Fuse_Controls_Rectangle__SetLayerBrush(this, layer, brush, line); }
};

}}}}


#endif
