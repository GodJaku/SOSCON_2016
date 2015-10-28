// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.11.3/Controls/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_I_O_S_CONTROLS_CONTROL__FUSE_CONTROLS_SWITCH_H__
#define __APP_FUSE_I_O_S_CONTROLS_CONTROL__FUSE_CONTROLS_SWITCH_H__

#include <app/Fuse.iOS.Controls.Element.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { struct Switch; } } }
namespace app { namespace iOS { namespace UIKit { struct UIView; } } }

namespace app {
namespace Fuse {
namespace iOS {
namespace Controls {

struct Control__Fuse_Controls_Switch;

struct Control__Fuse_Controls_Switch__uType : ::app::Fuse::iOS::Controls::Element__uType
{
    void(*__fp_Attach)(Control__Fuse_Controls_Switch*);
    void(*__fp_Detach)(Control__Fuse_Controls_Switch*);
};

Control__Fuse_Controls_Switch__uType* Control__Fuse_Controls_Switch__typeof();

void Control__Fuse_Controls_Switch___ObjInit_2(Control__Fuse_Controls_Switch* __this);
::app::iOS::UIKit::UIView* Control__Fuse_Controls_Switch__Create(Control__Fuse_Controls_Switch* __this);
::app::Fuse::Controls::Switch* Control__Fuse_Controls_Switch__FindSemanticControl(Control__Fuse_Controls_Switch* __this);
::app::Fuse::Controls::Switch* Control__Fuse_Controls_Switch__get_SemanticControl(Control__Fuse_Controls_Switch* __this);
void Control__Fuse_Controls_Switch__OnGotFocus(Control__Fuse_Controls_Switch* __this);
void Control__Fuse_Controls_Switch__OnGotFocus_1(Control__Fuse_Controls_Switch* __this, ::uObject* s, ::uObject* a);
void Control__Fuse_Controls_Switch__OnLostFocus(Control__Fuse_Controls_Switch* __this);
void Control__Fuse_Controls_Switch__OnLostFocus_1(Control__Fuse_Controls_Switch* __this, ::uObject* s, ::uObject* a);
void Control__Fuse_Controls_Switch__OnRooted(Control__Fuse_Controls_Switch* __this);
void Control__Fuse_Controls_Switch__OnUnrooted(Control__Fuse_Controls_Switch* __this);

struct Control__Fuse_Controls_Switch : ::app::Fuse::iOS::Controls::Element
{
    ::uStrong< ::app::Fuse::Controls::Switch*> _SemanticControl;
    ::uStrong< ::app::iOS::UIKit::UIView*> _view;

    void _ObjInit_2() { Control__Fuse_Controls_Switch___ObjInit_2(this); }
    void Attach() { (((Control__Fuse_Controls_Switch__uType*)this->__obj_type)->__fp_Attach)(this); }
    void Detach() { (((Control__Fuse_Controls_Switch__uType*)this->__obj_type)->__fp_Detach)(this); }
    ::app::Fuse::Controls::Switch* FindSemanticControl() { return Control__Fuse_Controls_Switch__FindSemanticControl(this); }
    ::app::Fuse::Controls::Switch* SemanticControl() { return Control__Fuse_Controls_Switch__get_SemanticControl(this); }
    void OnGotFocus() { Control__Fuse_Controls_Switch__OnGotFocus(this); }
    void OnGotFocus_1(::uObject* s, ::uObject* a) { Control__Fuse_Controls_Switch__OnGotFocus_1(this, s, a); }
    void OnLostFocus() { Control__Fuse_Controls_Switch__OnLostFocus(this); }
    void OnLostFocus_1(::uObject* s, ::uObject* a) { Control__Fuse_Controls_Switch__OnLostFocus_1(this, s, a); }
};

}}}}


#endif
