// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.11.3/NativeViews/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_I_O_S_NATIVE_VIEWS_PANEL_H__
#define __APP_FUSE_I_O_S_NATIVE_VIEWS_PANEL_H__

#include <app/Fuse.iOS.NativeViews.ParentNativeView__Fuse_Controls_Panel.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace iOS { namespace NativeViews { struct NativeView; } } } }
namespace app { namespace iOS { namespace UIKit { struct UIControl; } } }
namespace app { namespace iOS { namespace UIKit { struct UIView; } } }

namespace app {
namespace Fuse {
namespace iOS {
namespace NativeViews {

struct Panel;

struct Panel__uType : ::app::Fuse::iOS::NativeViews::ParentNativeView__Fuse_Controls_Panel__uType
{
};

Panel__uType* Panel__typeof();

void Panel___ObjInit_3(Panel* __this);
void Panel__ApplyZOrder(Panel* __this);
void Panel__Attach(Panel* __this);
void Panel__ChildRooted(Panel* __this, ::app::Fuse::iOS::NativeViews::NativeView* child);
::app::iOS::UIKit::UIView* Panel__Create(Panel* __this);
void Panel__Detach(Panel* __this);
Panel* Panel__New_1(::uStatic* __this);
void Panel__OnZOrderChanged(Panel* __this, ::uObject* s, ::uObject* a);

struct Panel : ::app::Fuse::iOS::NativeViews::ParentNativeView__Fuse_Controls_Panel
{
    ::uStrong< ::app::iOS::UIKit::UIControl*> _group;

    void _ObjInit_3() { Panel___ObjInit_3(this); }
    void ApplyZOrder() { Panel__ApplyZOrder(this); }
    void OnZOrderChanged(::uObject* s, ::uObject* a) { Panel__OnZOrderChanged(this, s, a); }
};

}}}}


#endif
