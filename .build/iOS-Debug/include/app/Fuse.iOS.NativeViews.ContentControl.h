// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.11.3/NativeViews/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_I_O_S_NATIVE_VIEWS_CONTENT_CONTROL_H__
#define __APP_FUSE_I_O_S_NATIVE_VIEWS_CONTENT_CONTROL_H__

#include <app/Fuse.iOS.NativeViews.ParentNativeView__Fuse_Controls_ContentControl.h>
#include <Uno.h>
namespace app { namespace iOS { namespace UIKit { struct UIControl; } } }
namespace app { namespace iOS { namespace UIKit { struct UIView; } } }

namespace app {
namespace Fuse {
namespace iOS {
namespace NativeViews {

struct ContentControl;

struct ContentControl__uType : ::app::Fuse::iOS::NativeViews::ParentNativeView__Fuse_Controls_ContentControl__uType
{
};

ContentControl__uType* ContentControl__typeof();

void ContentControl___ObjInit_3(ContentControl* __this);
::app::iOS::UIKit::UIView* ContentControl__Create(ContentControl* __this);
ContentControl* ContentControl__New_1(::uStatic* __this);

struct ContentControl : ::app::Fuse::iOS::NativeViews::ParentNativeView__Fuse_Controls_ContentControl
{
    ::uStrong< ::app::iOS::UIKit::UIControl*> _group;

    void _ObjInit_3() { ContentControl___ObjInit_3(this); }
};

}}}}


#endif
