// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.11.3/Graphics/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_GRAPHICS_SHAPE_VISUAL__FUSE_CONTROLS_PATH_H__
#define __APP_FUSE_CONTROLS_GRAPHICS_SHAPE_VISUAL__FUSE_CONTROLS_PATH_H__

#include <app/Fuse.Controls.Graphics.ControlVisual__Fuse_Controls_Path.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { struct Shape; } } }
namespace app { namespace Fuse { namespace Drawing { struct Brush; } } }
namespace app { namespace Fuse { namespace Drawing { struct Stroke; } } }
namespace app { namespace Fuse { struct DrawContext; } }
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {
namespace Controls {
namespace Graphics {

struct ShapeVisual__Fuse_Controls_Path;

struct ShapeVisual__Fuse_Controls_Path__uType : ::app::Fuse::Controls::Graphics::ControlVisual__Fuse_Controls_Path__uType
{
    void(*__fp_DrawFill)(ShapeVisual__Fuse_Controls_Path*, ::app::Fuse::DrawContext*, ::app::Fuse::Drawing::Brush*);
    void(*__fp_DrawStroke)(ShapeVisual__Fuse_Controls_Path*, ::app::Fuse::DrawContext*, ::app::Fuse::Drawing::Stroke*);
    void(*__fp_PrepareDraw)(ShapeVisual__Fuse_Controls_Path*, ::app::Fuse::DrawContext*);
};

ShapeVisual__Fuse_Controls_Path__uType* ShapeVisual__Fuse_Controls_Path__typeof();

void ShapeVisual__Fuse_Controls_Path___ObjInit_3(ShapeVisual__Fuse_Controls_Path* __this);
void ShapeVisual__Fuse_Controls_Path__Attach(ShapeVisual__Fuse_Controls_Path* __this);
void ShapeVisual__Fuse_Controls_Path__Detach(ShapeVisual__Fuse_Controls_Path* __this);
::app::Fuse::Controls::Shape* ShapeVisual__Fuse_Controls_Path__get_Shape(ShapeVisual__Fuse_Controls_Path* __this);
::app::Uno::Float2 ShapeVisual__Fuse_Controls_Path__GetMarginSize(ShapeVisual__Fuse_Controls_Path* __this, ::app::Uno::Float2 availableSize, int flags);
void ShapeVisual__Fuse_Controls_Path__OnDraw(ShapeVisual__Fuse_Controls_Path* __this, ::app::Fuse::DrawContext* dc);
void ShapeVisual__Fuse_Controls_Path__PrepareDraw(ShapeVisual__Fuse_Controls_Path* __this, ::app::Fuse::DrawContext* dc);

struct ShapeVisual__Fuse_Controls_Path : ::app::Fuse::Controls::Graphics::ControlVisual__Fuse_Controls_Path
{
    void _ObjInit_3() { ShapeVisual__Fuse_Controls_Path___ObjInit_3(this); }
    void DrawFill(::app::Fuse::DrawContext* dc, ::app::Fuse::Drawing::Brush* fill) { (((ShapeVisual__Fuse_Controls_Path__uType*)this->__obj_type)->__fp_DrawFill)(this, dc, fill); }
    void DrawStroke(::app::Fuse::DrawContext* dc, ::app::Fuse::Drawing::Stroke* stroke) { (((ShapeVisual__Fuse_Controls_Path__uType*)this->__obj_type)->__fp_DrawStroke)(this, dc, stroke); }
    ::app::Fuse::Controls::Shape* Shape() { return ShapeVisual__Fuse_Controls_Path__get_Shape(this); }
    void PrepareDraw(::app::Fuse::DrawContext* dc) { (((ShapeVisual__Fuse_Controls_Path__uType*)this->__obj_type)->__fp_PrepareDraw)(this, dc); }
};

}}}}


#endif
