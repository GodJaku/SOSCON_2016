// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.11.3/Graphics/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_GRAPHICS_CONTROL_VISUAL__FUSE_CONTROLS_CIRCLE_H__
#define __APP_FUSE_CONTROLS_GRAPHICS_CONTROL_VISUAL__FUSE_CONTROLS_CIRCLE_H__

#include <app/Fuse.Controls.Graphics.Visual.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { struct Circle; } } }
namespace app { namespace Fuse { struct NodeBounds; } }

namespace app {
namespace Fuse {
namespace Controls {
namespace Graphics {

struct ControlVisual__Fuse_Controls_Circle;

struct ControlVisual__Fuse_Controls_Circle__uType : ::app::Fuse::Controls::Graphics::Visual__uType
{
    void(*__fp_Attach)(ControlVisual__Fuse_Controls_Circle*);
    void(*__fp_Detach)(ControlVisual__Fuse_Controls_Circle*);
};

ControlVisual__Fuse_Controls_Circle__uType* ControlVisual__Fuse_Controls_Circle__typeof();

void ControlVisual__Fuse_Controls_Circle___ObjInit_2(ControlVisual__Fuse_Controls_Circle* __this);
::app::Fuse::Controls::Circle* ControlVisual__Fuse_Controls_Circle__FindControl(ControlVisual__Fuse_Controls_Circle* __this);
::app::Fuse::Controls::Circle* ControlVisual__Fuse_Controls_Circle__get_Control(ControlVisual__Fuse_Controls_Circle* __this);
::app::Fuse::NodeBounds* ControlVisual__Fuse_Controls_Circle__get_HitTestLocalBounds(ControlVisual__Fuse_Controls_Circle* __this);
void ControlVisual__Fuse_Controls_Circle__OnRooted(ControlVisual__Fuse_Controls_Circle* __this);
void ControlVisual__Fuse_Controls_Circle__OnUnrooted(ControlVisual__Fuse_Controls_Circle* __this);

struct ControlVisual__Fuse_Controls_Circle : ::app::Fuse::Controls::Graphics::Visual
{
    ::uStrong< ::app::Fuse::Controls::Circle*> _control;

    void _ObjInit_2() { ControlVisual__Fuse_Controls_Circle___ObjInit_2(this); }
    void Attach() { (((ControlVisual__Fuse_Controls_Circle__uType*)this->__obj_type)->__fp_Attach)(this); }
    void Detach() { (((ControlVisual__Fuse_Controls_Circle__uType*)this->__obj_type)->__fp_Detach)(this); }
    ::app::Fuse::Controls::Circle* FindControl() { return ControlVisual__Fuse_Controls_Circle__FindControl(this); }
    ::app::Fuse::Controls::Circle* Control() { return ControlVisual__Fuse_Controls_Circle__get_Control(this); }
};

}}}}


#endif
