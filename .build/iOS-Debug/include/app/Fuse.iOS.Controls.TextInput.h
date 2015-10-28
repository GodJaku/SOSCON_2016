// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.11.3/Controls/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_I_O_S_CONTROLS_TEXT_INPUT_H__
#define __APP_FUSE_I_O_S_CONTROLS_TEXT_INPUT_H__

#include <app/Fuse.iOS.Controls.Control__Fuse_Controls_TextInput.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace iOS { namespace Controls { struct ViewContainer; } } } }
namespace app { namespace iOS { namespace CoreGraphics { struct CGRect; } } }
namespace app { namespace iOS { namespace UIKit { struct UIView; } } }
namespace app { namespace Uno { namespace UX { struct ValueChangedArgs__string; } } }
namespace app { namespace Uno { struct EventArgs; } }
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {
namespace iOS {
namespace Controls {

struct TextInput;

struct TextInput__uType : ::app::Fuse::iOS::Controls::Control__Fuse_Controls_TextInput__uType
{
};

TextInput__uType* TextInput__typeof();

void TextInput___ObjInit_3(TextInput* __this);
void TextInput__Attach(TextInput* __this);
::app::iOS::UIKit::UIView* TextInput__CreateInternal(TextInput* __this);
void TextInput__Detach(TextInput* __this);
void TextInput__EnsureTextInputImpl(TextInput* __this);
::uObject* TextInput__get_TextInputImpl(TextInput* __this);
::app::Uno::Float2 TextInput__GetMarginSize(TextInput* __this, ::app::Uno::Float2 fillSize, int fillSet);
TextInput* TextInput__New_1(::uStatic* __this);
void TextInput__OnFrameChanged(TextInput* __this, ::uObject* sender, ::app::iOS::CoreGraphics::CGRect frame);
void TextInput__OnGotFocus(TextInput* __this);
void TextInput__OnLostFocus(TextInput* __this);
void TextInput__OnTextChanged(TextInput* __this, ::uObject* sender, ::app::Uno::EventArgs* args);
void TextInput__OnTextLayoutPropertyChanged(TextInput* __this, ::uObject* sender, ::app::Uno::EventArgs* args);
void TextInput__OnTextRenderPropertyChanged(TextInput* __this, ::uObject* sender, ::app::Uno::EventArgs* args);
void TextInput__OnValueChanged(TextInput* __this, ::uObject* sender, ::app::Uno::UX::ValueChangedArgs__string* args);
void TextInput__set_TextInputImpl(TextInput* __this, ::uObject* value);
void TextInput__UpdateProperties(TextInput* __this);
void TextInput__ValidateLineCount(TextInput* __this);

struct TextInput : ::app::Fuse::iOS::Controls::Control__Fuse_Controls_TextInput
{
    ::uStrong< ::uObject*> _textInputImpl;
    ::uStrong< ::app::Fuse::iOS::Controls::ViewContainer*> _container;
    int _prevLineCount;

    void _ObjInit_3() { TextInput___ObjInit_3(this); }
    void EnsureTextInputImpl() { TextInput__EnsureTextInputImpl(this); }
    ::uObject* TextInputImpl() { return TextInput__get_TextInputImpl(this); }
    void OnFrameChanged(::uObject* sender, ::app::iOS::CoreGraphics::CGRect frame);
    void OnTextChanged(::uObject* sender, ::app::Uno::EventArgs* args) { TextInput__OnTextChanged(this, sender, args); }
    void OnTextLayoutPropertyChanged(::uObject* sender, ::app::Uno::EventArgs* args) { TextInput__OnTextLayoutPropertyChanged(this, sender, args); }
    void OnTextRenderPropertyChanged(::uObject* sender, ::app::Uno::EventArgs* args) { TextInput__OnTextRenderPropertyChanged(this, sender, args); }
    void OnValueChanged(::uObject* sender, ::app::Uno::UX::ValueChangedArgs__string* args) { TextInput__OnValueChanged(this, sender, args); }
    void TextInputImpl(::uObject* value) { TextInput__set_TextInputImpl(this, value); }
    void UpdateProperties() { TextInput__UpdateProperties(this); }
    void ValidateLineCount() { TextInput__ValidateLineCount(this); }
};

}}}}

#include <app/iOS.CoreGraphics.CGRect.h>
#include <app/Uno.Float2.h>

namespace app {
namespace Fuse {
namespace iOS {
namespace Controls {

inline void TextInput::OnFrameChanged(::uObject* sender, ::app::iOS::CoreGraphics::CGRect frame) { TextInput__OnFrameChanged(this, sender, frame); }

}}}}


#endif
