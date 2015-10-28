// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.11.3/NativeViews/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_I_O_S_NATIVE_VIEWS_NATIVE_VIEW_HOST_H__
#define __APP_FUSE_I_O_S_NATIVE_VIEWS_NATIVE_VIEW_HOST_H__

#include <app/Fuse.iOS.NativeViews.ParentNativeView__Fuse_Controls_NativeViewHost.h>
#include <app/Uno.Float2.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace iOS { namespace NativeViews { struct NativeView; } } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace iOS { namespace UIKit { struct UIControl; } } }
namespace app { namespace iOS { namespace UIKit { struct UIView; } } }

namespace app {
namespace Fuse {
namespace iOS {
namespace NativeViews {

struct NativeViewHost;

struct NativeViewHost__uType : ::app::Fuse::iOS::NativeViews::ParentNativeView__Fuse_Controls_NativeViewHost__uType
{
};

NativeViewHost__uType* NativeViewHost__typeof();

void NativeViewHost___ObjInit_3(NativeViewHost* __this);
::app::iOS::UIKit::UIView* NativeViewHost__Create(NativeViewHost* __this);
::app::Fuse::iOS::NativeViews::NativeView* NativeViewHost__get_Parent(NativeViewHost* __this);
NativeViewHost* NativeViewHost__New_1(::uStatic* __this);
void NativeViewHost__OnRooted(NativeViewHost* __this, ::app::Fuse::Node* node);
void NativeViewHost__OnUnrooted(NativeViewHost* __this, ::app::Fuse::Node* node);
void NativeViewHost__Update(NativeViewHost* __this);
void NativeViewHost__UpdateTransform(NativeViewHost* __this);

struct NativeViewHost : ::app::Fuse::iOS::NativeViews::ParentNativeView__Fuse_Controls_NativeViewHost
{
    ::uStrong< ::app::iOS::UIKit::UIControl*> _group;
    ::app::Uno::Float2 _sizeCache;

    void _ObjInit_3() { NativeViewHost___ObjInit_3(this); }
    void Update() { NativeViewHost__Update(this); }
};

}}}}


#endif
