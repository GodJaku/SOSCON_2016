// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.11.3/.cache/GeneratedCode/Graphics/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_GRAPHICS_GRAPHICS_STYLE_TEMPLATE3_H__
#define __APP_FUSE_CONTROLS_GRAPHICS_GRAPHICS_STYLE_TEMPLATE3_H__

#include <app/Uno.UX.ITemplate.h>
#include <app/Uno.UX.Template__Fuse_Controls_Star.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { namespace Graphics { struct GraphicsStyle; } } } }
namespace app { namespace Fuse { namespace Controls { struct Star; } } }

namespace app {
namespace Fuse {
namespace Controls {
namespace Graphics {

struct GraphicsStyle_Template3;

struct GraphicsStyle_Template3__uType : ::app::Uno::UX::Template__Fuse_Controls_Star__uType
{
};

GraphicsStyle_Template3__uType* GraphicsStyle_Template3__typeof();

void GraphicsStyle_Template3___ObjInit_1(GraphicsStyle_Template3* __this, ::app::Fuse::Controls::Graphics::GraphicsStyle* parent);
GraphicsStyle_Template3* GraphicsStyle_Template3__New_1(::uStatic* __this, ::app::Fuse::Controls::Graphics::GraphicsStyle* parent);
void GraphicsStyle_Template3__OnApply(GraphicsStyle_Template3* __this, ::app::Fuse::Controls::Star* self);

struct GraphicsStyle_Template3 : ::app::Uno::UX::Template__Fuse_Controls_Star
{
    ::uStrong< ::app::Fuse::Controls::Graphics::GraphicsStyle*> __parent;

    void _ObjInit_1(::app::Fuse::Controls::Graphics::GraphicsStyle* parent) { GraphicsStyle_Template3___ObjInit_1(this, parent); }
};

}}}}


#endif
