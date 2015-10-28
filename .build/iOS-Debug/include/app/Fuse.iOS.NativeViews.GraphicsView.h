// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.11.3/NativeViews/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_I_O_S_NATIVE_VIEWS_GRAPHICS_VIEW_H__
#define __APP_FUSE_I_O_S_NATIVE_VIEWS_GRAPHICS_VIEW_H__

#include <app/Fuse.iOS.NativeViews.ParentNativeView__Fuse_Controls_GraphicsView.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace iOS { namespace NativeViews { struct NativeView; } } } }
namespace app { namespace Fuse { struct DrawContext; } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace iOS { namespace GLKit { struct GLKView; } } }
namespace app { namespace iOS { namespace UIKit { struct UIControl; } } }
namespace app { namespace iOS { namespace UIKit { struct UIView; } } }
namespace app { namespace Uno { struct EventArgs; } }

namespace app {
namespace Fuse {
namespace iOS {
namespace NativeViews {

struct GraphicsView;

struct GraphicsView__uType : ::app::Fuse::iOS::NativeViews::ParentNativeView__Fuse_Controls_GraphicsView__uType
{
};

GraphicsView__uType* GraphicsView__typeof();

void GraphicsView___ObjInit_3(GraphicsView* __this);
void GraphicsView__Attach(GraphicsView* __this);
void GraphicsView__ChildRooted(GraphicsView* __this, ::app::Fuse::iOS::NativeViews::NativeView* child);
void GraphicsView__ChildUnrooted(GraphicsView* __this, ::app::Fuse::iOS::NativeViews::NativeView* child);
::app::iOS::UIKit::UIView* GraphicsView__Create(GraphicsView* __this);
void GraphicsView__Detach(GraphicsView* __this);
void GraphicsView__DoDraw(GraphicsView* __this);
void GraphicsView__DrawFrame(GraphicsView* __this, ::uObject* sender, ::app::Uno::EventArgs* args);
GraphicsView* GraphicsView__Find(::uStatic* __this, ::app::Fuse::Node* node);
::app::iOS::UIKit::UIView* GraphicsView__get_HitTestHandle(GraphicsView* __this);
GraphicsView* GraphicsView__New_1(::uStatic* __this);
void GraphicsView__UpdateTransform(GraphicsView* __this);

struct GraphicsView : ::app::Fuse::iOS::NativeViews::ParentNativeView__Fuse_Controls_GraphicsView
{
    ::uStrong< ::app::iOS::GLKit::GLKView*> _glkView;
    ::uStrong< ::app::iOS::UIKit::UIView*> _container;
    ::uStrong< ::app::iOS::UIKit::UIControl*> _hitSurface;
    ::uStrong< ::app::Fuse::DrawContext*> _dc;

    void _ObjInit_3() { GraphicsView___ObjInit_3(this); }
    void DoDraw() { GraphicsView__DoDraw(this); }
    void DrawFrame(::uObject* sender, ::app::Uno::EventArgs* args) { GraphicsView__DrawFrame(this, sender, args); }
};

}}}}


#endif
