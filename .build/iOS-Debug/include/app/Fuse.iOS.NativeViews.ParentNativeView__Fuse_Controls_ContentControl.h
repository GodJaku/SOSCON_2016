// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.11.3/NativeViews/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_I_O_S_NATIVE_VIEWS_PARENT_NATIVE_VIEW__FUSE_CONTROLS_CONTENT_CONTROL_H__
#define __APP_FUSE_I_O_S_NATIVE_VIEWS_PARENT_NATIVE_VIEW__FUSE_CONTROLS_CONTENT_CONTROL_H__

#include <app/Fuse.iOS.NativeViews.NativeView.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { struct ContentControl; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {
namespace iOS {
namespace NativeViews {

struct ParentNativeView__Fuse_Controls_ContentControl;

struct ParentNativeView__Fuse_Controls_ContentControl__uType : ::app::Fuse::iOS::NativeViews::NativeView__uType
{
};

ParentNativeView__Fuse_Controls_ContentControl__uType* ParentNativeView__Fuse_Controls_ContentControl__typeof();

void ParentNativeView__Fuse_Controls_ContentControl___ObjInit_2(ParentNativeView__Fuse_Controls_ContentControl* __this);
void ParentNativeView__Fuse_Controls_ContentControl__Attach(ParentNativeView__Fuse_Controls_ContentControl* __this);
void ParentNativeView__Fuse_Controls_ContentControl__Detach(ParentNativeView__Fuse_Controls_ContentControl* __this);
::app::Fuse::Controls::ContentControl* ParentNativeView__Fuse_Controls_ContentControl__get_Control(ParentNativeView__Fuse_Controls_ContentControl* __this);
::app::Uno::Float2 ParentNativeView__Fuse_Controls_ContentControl__get_Size(ParentNativeView__Fuse_Controls_ContentControl* __this);
void ParentNativeView__Fuse_Controls_ContentControl__OnRooted(ParentNativeView__Fuse_Controls_ContentControl* __this, ::app::Fuse::Node* n);
void ParentNativeView__Fuse_Controls_ContentControl__OnUnrooted(ParentNativeView__Fuse_Controls_ContentControl* __this, ::app::Fuse::Node* n);

struct ParentNativeView__Fuse_Controls_ContentControl : ::app::Fuse::iOS::NativeViews::NativeView
{
    void _ObjInit_2() { ParentNativeView__Fuse_Controls_ContentControl___ObjInit_2(this); }
    void Attach() { ParentNativeView__Fuse_Controls_ContentControl__Attach(this); }
    void Detach() { ParentNativeView__Fuse_Controls_ContentControl__Detach(this); }
    ::app::Fuse::Controls::ContentControl* Control() { return ParentNativeView__Fuse_Controls_ContentControl__get_Control(this); }
};

}}}}


#endif
