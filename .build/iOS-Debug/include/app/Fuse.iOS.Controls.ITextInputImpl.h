// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.11.3/Controls/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_I_O_S_CONTROLS_I_TEXT_INPUT_IMPL_H__
#define __APP_FUSE_I_O_S_CONTROLS_I_TEXT_INPUT_IMPL_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace iOS { namespace UIKit { struct UIColor; } } }
namespace app { namespace iOS { namespace UIKit { struct UIFont; } } }
namespace app { namespace iOS { namespace UIKit { struct UIView; } } }

namespace app {
namespace Fuse {
namespace iOS {
namespace Controls {

::uInterfaceType* ITextInputImpl__typeof();

struct ITextInputImpl
{
    void(*__fp_add_TextChanged)(void*, ::uDelegate*);
    ::app::iOS::UIKit::UIFont*(*__fp_get_Font)(void*);
    ::uObject*(*__fp_get_IUITextInput)(void*);
    int(*__fp_get_LineCount)(void*);
    ::uString*(*__fp_get_Text)(void*);
    ::app::iOS::UIKit::UIView*(*__fp_get_View)(void*);
    void(*__fp_remove_TextChanged)(void*, ::uDelegate*);
    void(*__fp_set_CaretColor)(void*, ::app::iOS::UIKit::UIColor*);
    void(*__fp_set_Font)(void*, ::app::iOS::UIKit::UIFont*);
    void(*__fp_set_Text)(void*, ::uString*);
    void(*__fp_set_TextAlignment)(void*, int);
    void(*__fp_set_TextColor)(void*, ::app::iOS::UIKit::UIColor*);

    static void add_TextChanged(::uObject* __this, ::uDelegate* value) { ((ITextInputImpl*)uGetInterfacePtr(__this, ITextInputImpl__typeof()))->__fp_add_TextChanged((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), value); }
    static ::app::iOS::UIKit::UIFont* Font(::uObject* __this) { return ((ITextInputImpl*)uGetInterfacePtr(__this, ITextInputImpl__typeof()))->__fp_get_Font((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static ::uObject* IUITextInput(::uObject* __this) { return ((ITextInputImpl*)uGetInterfacePtr(__this, ITextInputImpl__typeof()))->__fp_get_IUITextInput((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static int LineCount(::uObject* __this) { return ((ITextInputImpl*)uGetInterfacePtr(__this, ITextInputImpl__typeof()))->__fp_get_LineCount((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static ::uString* Text(::uObject* __this) { return ((ITextInputImpl*)uGetInterfacePtr(__this, ITextInputImpl__typeof()))->__fp_get_Text((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static ::app::iOS::UIKit::UIView* View(::uObject* __this) { return ((ITextInputImpl*)uGetInterfacePtr(__this, ITextInputImpl__typeof()))->__fp_get_View((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static void remove_TextChanged(::uObject* __this, ::uDelegate* value) { ((ITextInputImpl*)uGetInterfacePtr(__this, ITextInputImpl__typeof()))->__fp_remove_TextChanged((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), value); }
    static void CaretColor(::uObject* __this, ::app::iOS::UIKit::UIColor* value) { ((ITextInputImpl*)uGetInterfacePtr(__this, ITextInputImpl__typeof()))->__fp_set_CaretColor((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), value); }
    static void Font(::uObject* __this, ::app::iOS::UIKit::UIFont* value) { ((ITextInputImpl*)uGetInterfacePtr(__this, ITextInputImpl__typeof()))->__fp_set_Font((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), value); }
    static void Text(::uObject* __this, ::uString* value) { ((ITextInputImpl*)uGetInterfacePtr(__this, ITextInputImpl__typeof()))->__fp_set_Text((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), value); }
    static void TextAlignment(::uObject* __this, int value) { ((ITextInputImpl*)uGetInterfacePtr(__this, ITextInputImpl__typeof()))->__fp_set_TextAlignment((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), value); }
    static void TextColor(::uObject* __this, ::app::iOS::UIKit::UIColor* value) { ((ITextInputImpl*)uGetInterfacePtr(__this, ITextInputImpl__typeof()))->__fp_set_TextColor((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), value); }
};

}}}}


#endif
