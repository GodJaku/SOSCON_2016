// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.11.3/Controls/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_I_O_S_CONTROLS_BUTTON_H__
#define __APP_FUSE_I_O_S_CONTROLS_BUTTON_H__

#include <app/Fuse.iOS.Controls.Control__Fuse_Controls_Button.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace iOS { struct ControlEvent; } } }
namespace app { namespace Fuse { struct StyleProperty__Fuse_iOS_Controls_Button__float4; } }
namespace app { namespace iOS { namespace Foundation { struct NSObject; } } }
namespace app { namespace iOS { namespace UIKit { struct UIButton; } } }
namespace app { namespace iOS { namespace UIKit { struct UIEvent; } } }
namespace app { namespace iOS { namespace UIKit { struct UIView; } } }
namespace app { namespace Uno { namespace UX { struct ValueChangedArgs__string; } } }
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Fuse {
namespace iOS {
namespace Controls {

struct Button;

extern ::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_iOS_Controls_Button__float4*> Button__DisabledColorProperty;
extern ::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_iOS_Controls_Button__float4*> Button__HighlightedColorProperty;
extern ::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_iOS_Controls_Button__float4*> Button__NormalColorProperty;
extern ::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_iOS_Controls_Button__float4*> Button__SelectedColorProperty;

struct Button__uType : ::app::Fuse::iOS::Controls::Control__Fuse_Controls_Button__uType
{
};

Button__uType* Button__typeof();

void Button__Finalize(Button* __this);
void Button___ObjInit_3(Button* __this);
void Button___TypeInit_1(::uStatic* __this);
void Button__Attach(Button* __this);
::app::iOS::UIKit::UIView* Button__CreateInternal(Button* __this);
void Button__Detach(Button* __this);
::app::Uno::Float4 Button__get_DisabledColor(Button* __this);
::app::Uno::Float4 Button__get_HighlightedColor(Button* __this);
::app::Uno::Float4 Button__get_NormalColor(Button* __this);
::app::Uno::Float4 Button__get_SelectedColor(Button* __this);
Button* Button__New_1(::uStatic* __this);
void Button__OnButtonPropertyChanged(::uStatic* __this, Button* t);
void Button__OnClicked(Button* __this, ::app::iOS::Foundation::NSObject* sender, ::app::iOS::UIKit::UIEvent* uiEvent);
void Button__OnTextChanged(Button* __this, ::uObject* sender, ::app::Uno::UX::ValueChangedArgs__string* args);
void Button__set_DisabledColor(Button* __this, ::app::Uno::Float4 value);
void Button__set_HighlightedColor(Button* __this, ::app::Uno::Float4 value);
void Button__set_NormalColor(Button* __this, ::app::Uno::Float4 value);
void Button__set_NormalText(Button* __this, ::uString* value);
void Button__set_SelectedColor(Button* __this, ::app::Uno::Float4 value);

struct Button : ::app::Fuse::iOS::Controls::Control__Fuse_Controls_Button
{
    ::uStrong< ::app::iOS::UIKit::UIButton*> _button;
    ::uStrong< ::app::Fuse::iOS::ControlEvent*> _clickedEvent;

    void _ObjInit_3() { Button___ObjInit_3(this); }
    ::app::Uno::Float4 DisabledColor();
    ::app::Uno::Float4 HighlightedColor();
    ::app::Uno::Float4 NormalColor();
    ::app::Uno::Float4 SelectedColor();
    void OnClicked(::app::iOS::Foundation::NSObject* sender, ::app::iOS::UIKit::UIEvent* uiEvent) { Button__OnClicked(this, sender, uiEvent); }
    void OnTextChanged(::uObject* sender, ::app::Uno::UX::ValueChangedArgs__string* args) { Button__OnTextChanged(this, sender, args); }
    void DisabledColor(::app::Uno::Float4 value);
    void HighlightedColor(::app::Uno::Float4 value);
    void NormalColor(::app::Uno::Float4 value);
    void NormalText(::uString* value) { Button__set_NormalText(this, value); }
    void SelectedColor(::app::Uno::Float4 value);
};

}}}}

#include <app/Uno.Float4.h>

namespace app {
namespace Fuse {
namespace iOS {
namespace Controls {

inline ::app::Uno::Float4 Button::DisabledColor() { return Button__get_DisabledColor(this); }
inline ::app::Uno::Float4 Button::HighlightedColor() { return Button__get_HighlightedColor(this); }
inline ::app::Uno::Float4 Button::NormalColor() { return Button__get_NormalColor(this); }
inline ::app::Uno::Float4 Button::SelectedColor() { return Button__get_SelectedColor(this); }
inline void Button::DisabledColor(::app::Uno::Float4 value) { Button__set_DisabledColor(this, value); }
inline void Button::HighlightedColor(::app::Uno::Float4 value) { Button__set_HighlightedColor(this, value); }
inline void Button::NormalColor(::app::Uno::Float4 value) { Button__set_NormalColor(this, value); }
inline void Button::SelectedColor(::app::Uno::Float4 value) { Button__set_SelectedColor(this, value); }

}}}}


#endif
