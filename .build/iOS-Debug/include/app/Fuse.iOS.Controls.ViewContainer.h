// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.11.3/Controls/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_I_O_S_CONTROLS_VIEW_CONTAINER_H__
#define __APP_FUSE_I_O_S_CONTROLS_VIEW_CONTAINER_H__

#include <app/iOS.UIKit.UIControl.h>
#include <Uno.h>
namespace app { namespace iOS { namespace CoreGraphics { struct CGRect; } } }

namespace app {
namespace Fuse {
namespace iOS {
namespace Controls {

struct ViewContainer;

struct ViewContainer__uType : ::app::iOS::UIKit::UIControl__uType
{
};

ViewContainer__uType* ViewContainer__typeof();

void ViewContainer___ObjInit_10(ViewContainer* __this);
void ViewContainer__add_FrameChanged(ViewContainer* __this, ::uDelegate* value);
ViewContainer* ViewContainer__New_11(::uStatic* __this);
void ViewContainer__remove_FrameChanged(ViewContainer* __this, ::uDelegate* value);
void ViewContainer__setFrame(ViewContainer* __this, ::app::iOS::CoreGraphics::CGRect frame);

struct ViewContainer : ::app::iOS::UIKit::UIControl
{
    ::uStrong< ::uDelegate*> FrameChanged;

    void _ObjInit_10() { ViewContainer___ObjInit_10(this); }
    void add_FrameChanged(::uDelegate* value) { ViewContainer__add_FrameChanged(this, value); }
    void remove_FrameChanged(::uDelegate* value) { ViewContainer__remove_FrameChanged(this, value); }
};

}}}}


#endif
