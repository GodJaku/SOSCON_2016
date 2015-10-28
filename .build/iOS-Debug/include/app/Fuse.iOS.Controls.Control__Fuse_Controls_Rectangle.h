// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.11.3/Controls/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_I_O_S_CONTROLS_CONTROL__FUSE_CONTROLS_RECTANGLE_H__
#define __APP_FUSE_I_O_S_CONTROLS_CONTROL__FUSE_CONTROLS_RECTANGLE_H__

#include <app/Fuse.iOS.Controls.Element.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { struct Rectangle; } } }
namespace app { namespace iOS { namespace UIKit { struct UIView; } } }

namespace app {
namespace Fuse {
namespace iOS {
namespace Controls {

struct Control__Fuse_Controls_Rectangle;

struct Control__Fuse_Controls_Rectangle__uType : ::app::Fuse::iOS::Controls::Element__uType
{
    void(*__fp_Attach)(Control__Fuse_Controls_Rectangle*);
    void(*__fp_Detach)(Control__Fuse_Controls_Rectangle*);
};

Control__Fuse_Controls_Rectangle__uType* Control__Fuse_Controls_Rectangle__typeof();

void Control__Fuse_Controls_Rectangle___ObjInit_2(Control__Fuse_Controls_Rectangle* __this);
::app::iOS::UIKit::UIView* Control__Fuse_Controls_Rectangle__Create(Control__Fuse_Controls_Rectangle* __this);
::app::Fuse::Controls::Rectangle* Control__Fuse_Controls_Rectangle__FindSemanticControl(Control__Fuse_Controls_Rectangle* __this);
::app::Fuse::Controls::Rectangle* Control__Fuse_Controls_Rectangle__get_SemanticControl(Control__Fuse_Controls_Rectangle* __this);
void Control__Fuse_Controls_Rectangle__OnGotFocus(Control__Fuse_Controls_Rectangle* __this);
void Control__Fuse_Controls_Rectangle__OnGotFocus_1(Control__Fuse_Controls_Rectangle* __this, ::uObject* s, ::uObject* a);
void Control__Fuse_Controls_Rectangle__OnLostFocus(Control__Fuse_Controls_Rectangle* __this);
void Control__Fuse_Controls_Rectangle__OnLostFocus_1(Control__Fuse_Controls_Rectangle* __this, ::uObject* s, ::uObject* a);
void Control__Fuse_Controls_Rectangle__OnRooted(Control__Fuse_Controls_Rectangle* __this);
void Control__Fuse_Controls_Rectangle__OnUnrooted(Control__Fuse_Controls_Rectangle* __this);

struct Control__Fuse_Controls_Rectangle : ::app::Fuse::iOS::Controls::Element
{
    ::uStrong< ::app::Fuse::Controls::Rectangle*> _SemanticControl;
    ::uStrong< ::app::iOS::UIKit::UIView*> _view;

    void _ObjInit_2() { Control__Fuse_Controls_Rectangle___ObjInit_2(this); }
    void Attach() { (((Control__Fuse_Controls_Rectangle__uType*)this->__obj_type)->__fp_Attach)(this); }
    void Detach() { (((Control__Fuse_Controls_Rectangle__uType*)this->__obj_type)->__fp_Detach)(this); }
    ::app::Fuse::Controls::Rectangle* FindSemanticControl() { return Control__Fuse_Controls_Rectangle__FindSemanticControl(this); }
    ::app::Fuse::Controls::Rectangle* SemanticControl() { return Control__Fuse_Controls_Rectangle__get_SemanticControl(this); }
    void OnGotFocus() { Control__Fuse_Controls_Rectangle__OnGotFocus(this); }
    void OnGotFocus_1(::uObject* s, ::uObject* a) { Control__Fuse_Controls_Rectangle__OnGotFocus_1(this, s, a); }
    void OnLostFocus() { Control__Fuse_Controls_Rectangle__OnLostFocus(this); }
    void OnLostFocus_1(::uObject* s, ::uObject* a) { Control__Fuse_Controls_Rectangle__OnLostFocus_1(this, s, a); }
};

}}}}


#endif
