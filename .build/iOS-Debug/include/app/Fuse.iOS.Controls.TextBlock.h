// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.11.3/Controls/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_I_O_S_CONTROLS_TEXT_BLOCK_H__
#define __APP_FUSE_I_O_S_CONTROLS_TEXT_BLOCK_H__

#include <app/Fuse.iOS.Controls.Control__Fuse_Controls_TextBlock.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <Uno.h>
namespace app { namespace iOS { namespace UIKit { struct UILabel; } } }
namespace app { namespace iOS { namespace UIKit { struct UIView; } } }
namespace app { namespace Uno { namespace UX { struct ValueChangedArgs__string; } } }
namespace app { namespace Uno { struct EventArgs; } }

namespace app {
namespace Fuse {
namespace iOS {
namespace Controls {

struct TextBlock;

struct TextBlock__uType : ::app::Fuse::iOS::Controls::Control__Fuse_Controls_TextBlock__uType
{
};

TextBlock__uType* TextBlock__typeof();

void TextBlock___ObjInit_3(TextBlock* __this);
void TextBlock__Attach(TextBlock* __this);
::app::iOS::UIKit::UIView* TextBlock__CreateInternal(TextBlock* __this);
void TextBlock__Detach(TextBlock* __this);
TextBlock* TextBlock__New_1(::uStatic* __this);
void TextBlock__OnTextLayoutPropertyChanged(TextBlock* __this, ::uObject* sender, ::app::Uno::EventArgs* args);
void TextBlock__OnTextRenderPropertyChanged(TextBlock* __this, ::uObject* sender, ::app::Uno::EventArgs* args);
void TextBlock__OnValueChanged(TextBlock* __this, ::uObject* sender, ::app::Uno::UX::ValueChangedArgs__string* args);

struct TextBlock : ::app::Fuse::iOS::Controls::Control__Fuse_Controls_TextBlock
{
    ::uStrong< ::app::iOS::UIKit::UILabel*> _label;

    void _ObjInit_3() { TextBlock___ObjInit_3(this); }
    void OnTextLayoutPropertyChanged(::uObject* sender, ::app::Uno::EventArgs* args) { TextBlock__OnTextLayoutPropertyChanged(this, sender, args); }
    void OnTextRenderPropertyChanged(::uObject* sender, ::app::Uno::EventArgs* args) { TextBlock__OnTextRenderPropertyChanged(this, sender, args); }
    void OnValueChanged(::uObject* sender, ::app::Uno::UX::ValueChangedArgs__string* args) { TextBlock__OnValueChanged(this, sender, args); }
};

}}}}


#endif
