// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.11.3/NativeViews/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_I_O_S_NATIVE_VIEWS_LEAF_NATIVE_VIEW_H__
#define __APP_FUSE_I_O_S_NATIVE_VIEWS_LEAF_NATIVE_VIEW_H__

#include <app/Fuse.iOS.NativeViews.NativeView.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace iOS { namespace Controls { struct Element; } } } }
namespace app { namespace iOS { namespace UIKit { struct UIView; } } }
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {
namespace iOS {
namespace NativeViews {

struct LeafNativeView;

struct LeafNativeView__uType : ::app::Fuse::iOS::NativeViews::NativeView__uType
{
};

LeafNativeView__uType* LeafNativeView__typeof();

void LeafNativeView___ObjInit_2(LeafNativeView* __this);
::app::iOS::UIKit::UIView* LeafNativeView__Create(LeafNativeView* __this);
::app::Fuse::iOS::Controls::Element* LeafNativeView__get_LeafElement(LeafNativeView* __this);
::app::Uno::Float2 LeafNativeView__get_Size(LeafNativeView* __this);
LeafNativeView* LeafNativeView__New_1(::uStatic* __this);

struct LeafNativeView : ::app::Fuse::iOS::NativeViews::NativeView
{
    void _ObjInit_2() { LeafNativeView___ObjInit_2(this); }
    ::app::Fuse::iOS::Controls::Element* LeafElement() { return LeafNativeView__get_LeafElement(this); }
};

}}}}


#endif
