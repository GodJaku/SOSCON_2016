// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.11.3/Controls/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_I_O_S_CONTROLS_RECTANGLE_H__
#define __APP_FUSE_I_O_S_CONTROLS_RECTANGLE_H__

#include <app/Fuse.iOS.Controls.Shape__Fuse_Controls_Rectangle.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <Uno.h>
namespace app { namespace iOS { namespace UIKit { struct UIBezierPath; } } }
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {
namespace iOS {
namespace Controls {

struct Rectangle;

struct Rectangle__uType : ::app::Fuse::iOS::Controls::Shape__Fuse_Controls_Rectangle__uType
{
};

Rectangle__uType* Rectangle__typeof();

void Rectangle___ObjInit_4(Rectangle* __this);
void Rectangle__AddArcWithCenter(Rectangle* __this, ::app::iOS::UIKit::UIBezierPath* path, ::app::Uno::Float2 center, float radius, float startAngle, float endAngle);
void Rectangle__AddLineToPoint(Rectangle* __this, ::app::iOS::UIKit::UIBezierPath* path, ::app::Uno::Float2 point);
::app::iOS::UIKit::UIBezierPath* Rectangle__CreatePath(Rectangle* __this);
Rectangle* Rectangle__New_1(::uStatic* __this);

struct Rectangle : ::app::Fuse::iOS::Controls::Shape__Fuse_Controls_Rectangle
{
    void _ObjInit_4() { Rectangle___ObjInit_4(this); }
    void AddArcWithCenter(::app::iOS::UIKit::UIBezierPath* path, ::app::Uno::Float2 center, float radius, float startAngle, float endAngle);
    void AddLineToPoint(::app::iOS::UIKit::UIBezierPath* path, ::app::Uno::Float2 point);
};

}}}}

#include <app/Uno.Float2.h>

namespace app {
namespace Fuse {
namespace iOS {
namespace Controls {

inline void Rectangle::AddArcWithCenter(::app::iOS::UIKit::UIBezierPath* path, ::app::Uno::Float2 center, float radius, float startAngle, float endAngle) { Rectangle__AddArcWithCenter(this, path, center, radius, startAngle, endAngle); }
inline void Rectangle::AddLineToPoint(::app::iOS::UIKit::UIBezierPath* path, ::app::Uno::Float2 point) { Rectangle__AddLineToPoint(this, path, point); }

}}}}


#endif
