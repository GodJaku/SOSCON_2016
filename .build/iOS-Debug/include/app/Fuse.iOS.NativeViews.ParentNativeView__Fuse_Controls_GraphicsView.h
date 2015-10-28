// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.11.3/NativeViews/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_I_O_S_NATIVE_VIEWS_PARENT_NATIVE_VIEW__FUSE_CONTROLS_GRAPHICS_VIEW_H__
#define __APP_FUSE_I_O_S_NATIVE_VIEWS_PARENT_NATIVE_VIEW__FUSE_CONTROLS_GRAPHICS_VIEW_H__

#include <app/Fuse.iOS.NativeViews.NativeView.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { struct GraphicsView; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {
namespace iOS {
namespace NativeViews {

struct ParentNativeView__Fuse_Controls_GraphicsView;

struct ParentNativeView__Fuse_Controls_GraphicsView__uType : ::app::Fuse::iOS::NativeViews::NativeView__uType
{
    void(*__fp_Attach)(ParentNativeView__Fuse_Controls_GraphicsView*);
    void(*__fp_Detach)(ParentNativeView__Fuse_Controls_GraphicsView*);
};

ParentNativeView__Fuse_Controls_GraphicsView__uType* ParentNativeView__Fuse_Controls_GraphicsView__typeof();

void ParentNativeView__Fuse_Controls_GraphicsView___ObjInit_2(ParentNativeView__Fuse_Controls_GraphicsView* __this);
void ParentNativeView__Fuse_Controls_GraphicsView__Attach(ParentNativeView__Fuse_Controls_GraphicsView* __this);
void ParentNativeView__Fuse_Controls_GraphicsView__Detach(ParentNativeView__Fuse_Controls_GraphicsView* __this);
::app::Fuse::Controls::GraphicsView* ParentNativeView__Fuse_Controls_GraphicsView__get_Control(ParentNativeView__Fuse_Controls_GraphicsView* __this);
::app::Uno::Float2 ParentNativeView__Fuse_Controls_GraphicsView__get_Size(ParentNativeView__Fuse_Controls_GraphicsView* __this);
void ParentNativeView__Fuse_Controls_GraphicsView__OnRooted(ParentNativeView__Fuse_Controls_GraphicsView* __this, ::app::Fuse::Node* n);
void ParentNativeView__Fuse_Controls_GraphicsView__OnUnrooted(ParentNativeView__Fuse_Controls_GraphicsView* __this, ::app::Fuse::Node* n);

struct ParentNativeView__Fuse_Controls_GraphicsView : ::app::Fuse::iOS::NativeViews::NativeView
{
    void _ObjInit_2() { ParentNativeView__Fuse_Controls_GraphicsView___ObjInit_2(this); }
    void Attach() { (((ParentNativeView__Fuse_Controls_GraphicsView__uType*)this->__obj_type)->__fp_Attach)(this); }
    void Detach() { (((ParentNativeView__Fuse_Controls_GraphicsView__uType*)this->__obj_type)->__fp_Detach)(this); }
    ::app::Fuse::Controls::GraphicsView* Control() { return ParentNativeView__Fuse_Controls_GraphicsView__get_Control(this); }
};

}}}}


#endif
