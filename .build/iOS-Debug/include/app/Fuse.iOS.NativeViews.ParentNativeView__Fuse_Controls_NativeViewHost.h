// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.11.3/NativeViews/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_I_O_S_NATIVE_VIEWS_PARENT_NATIVE_VIEW__FUSE_CONTROLS_NATIVE_VIEW_HOST_H__
#define __APP_FUSE_I_O_S_NATIVE_VIEWS_PARENT_NATIVE_VIEW__FUSE_CONTROLS_NATIVE_VIEW_HOST_H__

#include <app/Fuse.iOS.NativeViews.NativeView.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { struct NativeViewHost; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {
namespace iOS {
namespace NativeViews {

struct ParentNativeView__Fuse_Controls_NativeViewHost;

struct ParentNativeView__Fuse_Controls_NativeViewHost__uType : ::app::Fuse::iOS::NativeViews::NativeView__uType
{
};

ParentNativeView__Fuse_Controls_NativeViewHost__uType* ParentNativeView__Fuse_Controls_NativeViewHost__typeof();

void ParentNativeView__Fuse_Controls_NativeViewHost___ObjInit_2(ParentNativeView__Fuse_Controls_NativeViewHost* __this);
void ParentNativeView__Fuse_Controls_NativeViewHost__Attach(ParentNativeView__Fuse_Controls_NativeViewHost* __this);
void ParentNativeView__Fuse_Controls_NativeViewHost__Detach(ParentNativeView__Fuse_Controls_NativeViewHost* __this);
::app::Fuse::Controls::NativeViewHost* ParentNativeView__Fuse_Controls_NativeViewHost__get_Control(ParentNativeView__Fuse_Controls_NativeViewHost* __this);
::app::Uno::Float2 ParentNativeView__Fuse_Controls_NativeViewHost__get_Size(ParentNativeView__Fuse_Controls_NativeViewHost* __this);
void ParentNativeView__Fuse_Controls_NativeViewHost__OnRooted(ParentNativeView__Fuse_Controls_NativeViewHost* __this, ::app::Fuse::Node* n);
void ParentNativeView__Fuse_Controls_NativeViewHost__OnUnrooted(ParentNativeView__Fuse_Controls_NativeViewHost* __this, ::app::Fuse::Node* n);

struct ParentNativeView__Fuse_Controls_NativeViewHost : ::app::Fuse::iOS::NativeViews::NativeView
{
    void _ObjInit_2() { ParentNativeView__Fuse_Controls_NativeViewHost___ObjInit_2(this); }
    void Attach() { ParentNativeView__Fuse_Controls_NativeViewHost__Attach(this); }
    void Detach() { ParentNativeView__Fuse_Controls_NativeViewHost__Detach(this); }
    ::app::Fuse::Controls::NativeViewHost* Control() { return ParentNativeView__Fuse_Controls_NativeViewHost__get_Control(this); }
};

}}}}


#endif
