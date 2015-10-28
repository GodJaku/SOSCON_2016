// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.11.3/Controls/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_I_O_S_CONTROLS_CIRCLE_H__
#define __APP_FUSE_I_O_S_CONTROLS_CIRCLE_H__

#include <app/Fuse.iOS.Controls.Shape__Fuse_Controls_Circle.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <Uno.h>
namespace app { namespace iOS { namespace UIKit { struct UIBezierPath; } } }

namespace app {
namespace Fuse {
namespace iOS {
namespace Controls {

struct Circle;

struct Circle__uType : ::app::Fuse::iOS::Controls::Shape__Fuse_Controls_Circle__uType
{
};

Circle__uType* Circle__typeof();

void Circle___ObjInit_4(Circle* __this);
::app::iOS::UIKit::UIBezierPath* Circle__CreatePath(Circle* __this);
Circle* Circle__New_1(::uStatic* __this);

struct Circle : ::app::Fuse::iOS::Controls::Shape__Fuse_Controls_Circle
{
    void _ObjInit_4() { Circle___ObjInit_4(this); }
};

}}}}


#endif
