// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.11.3/Controls/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_I_O_S_CONTROLS_SINGLE_LINE_TEXT_INPUT_H__
#define __APP_FUSE_I_O_S_CONTROLS_SINGLE_LINE_TEXT_INPUT_H__

#include <app/Fuse.iOS.Controls.ITextInputImpl.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace iOS { struct ControlEvent; } } }
namespace app { namespace iOS { namespace Foundation { struct NSObject; } } }
namespace app { namespace iOS { namespace UIKit { struct UIColor; } } }
namespace app { namespace iOS { namespace UIKit { struct UIEvent; } } }
namespace app { namespace iOS { namespace UIKit { struct UIFont; } } }
namespace app { namespace iOS { namespace UIKit { struct UITextField; } } }
namespace app { namespace iOS { namespace UIKit { struct UIView; } } }

namespace app {
namespace Fuse {
namespace iOS {
namespace Controls {

struct SingleLineTextInput;

struct SingleLineTextInput__uType : ::uClassType
{
    ::app::Fuse::iOS::Controls::ITextInputImpl __interface_0;
};

SingleLineTextInput__uType* SingleLineTextInput__typeof();

void SingleLineTextInput___ObjInit(SingleLineTextInput* __this);
void SingleLineTextInput__add_TextChanged(SingleLineTextInput* __this, ::uDelegate* value);
::app::iOS::UIKit::UIFont* SingleLineTextInput__Fuse_iOS_Controls_ITextInputImpl_get_Font(SingleLineTextInput* __this);
::uObject* SingleLineTextInput__Fuse_iOS_Controls_ITextInputImpl_get_IUITextInput(SingleLineTextInput* __this);
int SingleLineTextInput__Fuse_iOS_Controls_ITextInputImpl_get_LineCount(SingleLineTextInput* __this);
::uString* SingleLineTextInput__Fuse_iOS_Controls_ITextInputImpl_get_Text(SingleLineTextInput* __this);
::app::iOS::UIKit::UIView* SingleLineTextInput__Fuse_iOS_Controls_ITextInputImpl_get_View(SingleLineTextInput* __this);
void SingleLineTextInput__Fuse_iOS_Controls_ITextInputImpl_set_CaretColor(SingleLineTextInput* __this, ::app::iOS::UIKit::UIColor* value);
void SingleLineTextInput__Fuse_iOS_Controls_ITextInputImpl_set_Font(SingleLineTextInput* __this, ::app::iOS::UIKit::UIFont* value);
void SingleLineTextInput__Fuse_iOS_Controls_ITextInputImpl_set_Text(SingleLineTextInput* __this, ::uString* value);
void SingleLineTextInput__Fuse_iOS_Controls_ITextInputImpl_set_TextAlignment(SingleLineTextInput* __this, int value);
void SingleLineTextInput__Fuse_iOS_Controls_ITextInputImpl_set_TextColor(SingleLineTextInput* __this, ::app::iOS::UIKit::UIColor* value);
::app::iOS::UIKit::UITextField* SingleLineTextInput__get_TextField(SingleLineTextInput* __this);
SingleLineTextInput* SingleLineTextInput__New_1(::uStatic* __this);
void SingleLineTextInput__OnTextEdit(SingleLineTextInput* __this, ::app::iOS::Foundation::NSObject* sender, ::app::iOS::UIKit::UIEvent* uiEvent);
void SingleLineTextInput__remove_TextChanged(SingleLineTextInput* __this, ::uDelegate* value);

struct SingleLineTextInput : ::uObject
{
    ::uStrong< ::app::Fuse::iOS::ControlEvent*> _textEditEvent;
    ::uStrong< ::app::iOS::UIKit::UITextField*> _textField;
    ::uStrong< ::uDelegate*> TextChanged;

    void _ObjInit() { SingleLineTextInput___ObjInit(this); }
    void add_TextChanged(::uDelegate* value) { SingleLineTextInput__add_TextChanged(this, value); }
    ::app::iOS::UIKit::UITextField* TextField() { return SingleLineTextInput__get_TextField(this); }
    void OnTextEdit(::app::iOS::Foundation::NSObject* sender, ::app::iOS::UIKit::UIEvent* uiEvent) { SingleLineTextInput__OnTextEdit(this, sender, uiEvent); }
    void remove_TextChanged(::uDelegate* value) { SingleLineTextInput__remove_TextChanged(this, value); }
};

}}}}


#endif
