// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.11.3/Controls/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_I_O_S_CONTROLS_ELEMENT_H__
#define __APP_FUSE_I_O_S_CONTROLS_ELEMENT_H__

#include <app/Fuse.Node.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <app/Uno.Float2.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace iOS { namespace NativeViews { struct NativeView; } } } }
namespace app { namespace Fuse { struct FastMatrix; } }
namespace app { namespace Fuse { struct HitTestContext; } }
namespace app { namespace Fuse { struct NodeBounds; } }
namespace app { namespace iOS { namespace UIKit { struct UIView; } } }
namespace app { namespace Uno { struct Rect; } }

namespace app {
namespace Fuse {
namespace iOS {
namespace Controls {

struct Element;

struct Element__uType : ::app::Fuse::Node__uType
{
    ::app::iOS::UIKit::UIView*(*__fp_Create)(Element*);
    ::app::iOS::UIKit::UIView*(*__fp_CreateInternal)(Element*);
};

Element__uType* Element__typeof();

void Element___ObjInit_1(Element* __this);
::app::iOS::UIKit::UIView* Element__Create(Element* __this);
::app::Uno::Float2 Element__get_ActualSize(Element* __this);
::app::Fuse::NodeBounds* Element__get_HitTestLocalBounds(Element* __this);
::app::Uno::Rect Element__get_LocalRenderBounds(Element* __this);
::app::Fuse::iOS::NativeViews::NativeView* Element__get_NativeView(Element* __this);
::app::Uno::Float2 Element__get_Position(Element* __this);
::app::Uno::Float2 Element__GetMarginSize(Element* __this, ::app::Uno::Float2 fillSize, int fillSet);
bool Element__IsPointInside(Element* __this, ::app::Uno::Float2 localPoint);
::app::Uno::Float2 Element__OnArrangeMarginBox(Element* __this, ::app::Uno::Float2 position, ::app::Uno::Float2 availableSize, int availSet);
void Element__OnHitTest(Element* __this, ::app::Fuse::HitTestContext* htc);
void Element__PrependImplicitTransform(Element* __this, ::app::Fuse::FastMatrix* m);
void Element__set_ActualSize(Element* __this, ::app::Uno::Float2 value);
void Element__set_Position(Element* __this, ::app::Uno::Float2 value);

struct Element : ::app::Fuse::Node
{
    ::app::Uno::Float2 _ActualSize;
    ::app::Uno::Float2 _Position;

    void _ObjInit_1() { Element___ObjInit_1(this); }
    ::app::iOS::UIKit::UIView* Create() { return (((Element__uType*)this->__obj_type)->__fp_Create)(this); }
    ::app::iOS::UIKit::UIView* CreateInternal() { return (((Element__uType*)this->__obj_type)->__fp_CreateInternal)(this); }
    ::app::Uno::Float2 ActualSize();
    ::app::Fuse::iOS::NativeViews::NativeView* NativeView() { return Element__get_NativeView(this); }
    ::app::Uno::Float2 Position();
    bool IsPointInside(::app::Uno::Float2 localPoint);
    void ActualSize(::app::Uno::Float2 value);
    void Position(::app::Uno::Float2 value);
};

}}}}

#include <app/Uno.Rect.h>

namespace app {
namespace Fuse {
namespace iOS {
namespace Controls {

inline ::app::Uno::Float2 Element::ActualSize() { return Element__get_ActualSize(this); }
inline ::app::Uno::Float2 Element::Position() { return Element__get_Position(this); }
inline bool Element::IsPointInside(::app::Uno::Float2 localPoint) { return Element__IsPointInside(this, localPoint); }
inline void Element::ActualSize(::app::Uno::Float2 value) { Element__set_ActualSize(this, value); }
inline void Element::Position(::app::Uno::Float2 value) { Element__set_Position(this, value); }

}}}}


#endif
