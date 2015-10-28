// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.11.3/Controls/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_I_O_S_CONTROLS_CONTROL__FUSE_CONTROLS_TEXT_INPUT_H__
#define __APP_FUSE_I_O_S_CONTROLS_CONTROL__FUSE_CONTROLS_TEXT_INPUT_H__

#include <app/Fuse.iOS.Controls.Element.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { struct TextInput; } } }
namespace app { namespace iOS { namespace UIKit { struct UIView; } } }

namespace app {
namespace Fuse {
namespace iOS {
namespace Controls {

struct Control__Fuse_Controls_TextInput;

struct Control__Fuse_Controls_TextInput__uType : ::app::Fuse::iOS::Controls::Element__uType
{
    void(*__fp_Attach)(Control__Fuse_Controls_TextInput*);
    void(*__fp_Detach)(Control__Fuse_Controls_TextInput*);
    void(*__fp_OnGotFocus)(Control__Fuse_Controls_TextInput*);
    void(*__fp_OnLostFocus)(Control__Fuse_Controls_TextInput*);
};

Control__Fuse_Controls_TextInput__uType* Control__Fuse_Controls_TextInput__typeof();

void Control__Fuse_Controls_TextInput___ObjInit_2(Control__Fuse_Controls_TextInput* __this);
::app::iOS::UIKit::UIView* Control__Fuse_Controls_TextInput__Create(Control__Fuse_Controls_TextInput* __this);
::app::Fuse::Controls::TextInput* Control__Fuse_Controls_TextInput__FindSemanticControl(Control__Fuse_Controls_TextInput* __this);
::app::Fuse::Controls::TextInput* Control__Fuse_Controls_TextInput__get_SemanticControl(Control__Fuse_Controls_TextInput* __this);
void Control__Fuse_Controls_TextInput__OnGotFocus(Control__Fuse_Controls_TextInput* __this);
void Control__Fuse_Controls_TextInput__OnGotFocus_1(Control__Fuse_Controls_TextInput* __this, ::uObject* s, ::uObject* a);
void Control__Fuse_Controls_TextInput__OnLostFocus(Control__Fuse_Controls_TextInput* __this);
void Control__Fuse_Controls_TextInput__OnLostFocus_1(Control__Fuse_Controls_TextInput* __this, ::uObject* s, ::uObject* a);
void Control__Fuse_Controls_TextInput__OnRooted(Control__Fuse_Controls_TextInput* __this);
void Control__Fuse_Controls_TextInput__OnUnrooted(Control__Fuse_Controls_TextInput* __this);

struct Control__Fuse_Controls_TextInput : ::app::Fuse::iOS::Controls::Element
{
    ::uStrong< ::app::Fuse::Controls::TextInput*> _SemanticControl;
    ::uStrong< ::app::iOS::UIKit::UIView*> _view;

    void _ObjInit_2() { Control__Fuse_Controls_TextInput___ObjInit_2(this); }
    void Attach() { (((Control__Fuse_Controls_TextInput__uType*)this->__obj_type)->__fp_Attach)(this); }
    void Detach() { (((Control__Fuse_Controls_TextInput__uType*)this->__obj_type)->__fp_Detach)(this); }
    ::app::Fuse::Controls::TextInput* FindSemanticControl() { return Control__Fuse_Controls_TextInput__FindSemanticControl(this); }
    ::app::Fuse::Controls::TextInput* SemanticControl() { return Control__Fuse_Controls_TextInput__get_SemanticControl(this); }
    void OnGotFocus() { (((Control__Fuse_Controls_TextInput__uType*)this->__obj_type)->__fp_OnGotFocus)(this); }
    void OnGotFocus_1(::uObject* s, ::uObject* a) { Control__Fuse_Controls_TextInput__OnGotFocus_1(this, s, a); }
    void OnLostFocus() { (((Control__Fuse_Controls_TextInput__uType*)this->__obj_type)->__fp_OnLostFocus)(this); }
    void OnLostFocus_1(::uObject* s, ::uObject* a) { Control__Fuse_Controls_TextInput__OnLostFocus_1(this, s, a); }
};

}}}}


#endif
