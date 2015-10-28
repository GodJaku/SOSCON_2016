// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/interface/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_I_O_S_U_I_KIT_I_U_I_TEXT_INPUT_DELEGATE_H__
#define __APP_I_O_S_U_I_KIT_I_U_I_TEXT_INPUT_DELEGATE_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace iOS {
namespace UIKit {

::uInterfaceType* IUITextInputDelegate__typeof();

struct IUITextInputDelegate
{
    void(*__fp_selectionDidChange)(void*, ::uObject*);
    void(*__fp_selectionWillChange)(void*, ::uObject*);
    void(*__fp_textDidChange)(void*, ::uObject*);
    void(*__fp_textWillChange)(void*, ::uObject*);

    static void selectionDidChange(::uObject* __this, ::uObject* textInput) { ((IUITextInputDelegate*)uGetInterfacePtr(__this, IUITextInputDelegate__typeof()))->__fp_selectionDidChange((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), textInput); }
    static void selectionWillChange(::uObject* __this, ::uObject* textInput) { ((IUITextInputDelegate*)uGetInterfacePtr(__this, IUITextInputDelegate__typeof()))->__fp_selectionWillChange((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), textInput); }
    static void textDidChange(::uObject* __this, ::uObject* textInput) { ((IUITextInputDelegate*)uGetInterfacePtr(__this, IUITextInputDelegate__typeof()))->__fp_textDidChange((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), textInput); }
    static void textWillChange(::uObject* __this, ::uObject* textInput) { ((IUITextInputDelegate*)uGetInterfacePtr(__this, IUITextInputDelegate__typeof()))->__fp_textWillChange((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), textInput); }
};

}}}


#endif
