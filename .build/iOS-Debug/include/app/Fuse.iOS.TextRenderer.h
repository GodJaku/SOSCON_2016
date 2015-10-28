// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_I_O_S_TEXT_RENDERER_H__
#define __APP_FUSE_I_O_S_TEXT_RENDERER_H__

#include <app/Fuse.Controls.Graphics.TextVisual.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Rect.h>
#include <Uno.h>
namespace app { namespace Fuse { struct DrawContext; } }
namespace app { namespace iOS { namespace Foundation { struct NSDictionary; } } }
namespace app { namespace iOS { namespace Foundation { struct NSString; } } }
namespace app { namespace iOS { namespace UIKit { struct NSLayoutManager; } } }
namespace app { namespace iOS { namespace UIKit { struct NSMutableParagraphStyle; } } }
namespace app { namespace iOS { namespace UIKit { struct NSTextContainer; } } }
namespace app { namespace iOS { namespace UIKit { struct NSTextStorage; } } }
namespace app { namespace iOS { namespace UIKit { struct UIColor; } } }
namespace app { namespace iOS { namespace UIKit { struct UIFont; } } }
namespace app { namespace Uno { namespace Graphics { struct Texture2D; } } }
namespace app { namespace Uno { namespace UX { struct ValueChangedArgs__string; } } }
namespace app { namespace Uno { struct EventArgs; } }

namespace app {
namespace Fuse {
namespace iOS {

struct TextRenderer;

struct TextRenderer__uType : ::app::Fuse::Controls::Graphics::TextVisual__uType
{
};

TextRenderer__uType* TextRenderer__typeof();

void TextRenderer___ObjInit_4(TextRenderer* __this);
void TextRenderer__Attach(TextRenderer* __this);
void TextRenderer__Detach(TextRenderer* __this);
::app::Uno::Float2 TextRenderer__GetMarginSize(TextRenderer* __this, ::app::Uno::Float2 fillSize, int fillSet);
::app::iOS::Foundation::NSDictionary* TextRenderer__GetTextAttributes(TextRenderer* __this);
TextRenderer* TextRenderer__New_1(::uStatic* __this);
void TextRenderer__OnDraw(TextRenderer* __this, ::app::Fuse::DrawContext* dc);
void TextRenderer__OnTextLayoutPropertyChanged_1(TextRenderer* __this, ::uObject* sender, ::app::Uno::EventArgs* args);
void TextRenderer__OnTextRenderPropertyChanged_1(TextRenderer* __this, ::uObject* sender, ::app::Uno::EventArgs* args);
void TextRenderer__OnValueChanged_1(TextRenderer* __this, ::uObject* sender, ::app::Uno::UX::ValueChangedArgs__string* args);
void TextRenderer__UpdateBounds(TextRenderer* __this, ::app::Uno::Float2 size);
void TextRenderer__UpdateLayout_1(TextRenderer* __this, ::app::Uno::Float2 size);

struct TextRenderer : ::app::Fuse::Controls::Graphics::TextVisual
{
    ::uStrong< ::app::iOS::UIKit::NSTextStorage*> _textStorage;
    ::uStrong< ::app::iOS::UIKit::NSLayoutManager*> _layoutManager;
    ::uStrong< ::app::iOS::UIKit::NSTextContainer*> _textContainer;
    ::uStrong< ::app::iOS::UIKit::NSMutableParagraphStyle*> _style;
    app::CGColorSpaceRef* _colorSpace;
    ::app::Uno::Float2 _size;
    ::uStrong< ::app::iOS::UIKit::UIFont*> _font;
    ::uStrong< ::app::iOS::UIKit::UIColor*> _textColor;
    bool _layoutValid;
    ::uStrong< ::app::iOS::Foundation::NSString*> NSFontAttributeName;
    ::uStrong< ::app::iOS::Foundation::NSString*> NSForegroundColorAttributeName;
    ::uStrong< ::app::iOS::Foundation::NSString*> NSParagraphStyleAttributeName;
    ::app::Uno::Rect _pixelBounds;
    ::uStrong< ::app::Uno::Graphics::Texture2D*> _oldTexture;

    void _ObjInit_4() { TextRenderer___ObjInit_4(this); }
    ::app::iOS::Foundation::NSDictionary* GetTextAttributes() { return TextRenderer__GetTextAttributes(this); }
    void OnTextLayoutPropertyChanged_1(::uObject* sender, ::app::Uno::EventArgs* args) { TextRenderer__OnTextLayoutPropertyChanged_1(this, sender, args); }
    void OnTextRenderPropertyChanged_1(::uObject* sender, ::app::Uno::EventArgs* args) { TextRenderer__OnTextRenderPropertyChanged_1(this, sender, args); }
    void OnValueChanged_1(::uObject* sender, ::app::Uno::UX::ValueChangedArgs__string* args) { TextRenderer__OnValueChanged_1(this, sender, args); }
    void UpdateBounds(::app::Uno::Float2 size) { TextRenderer__UpdateBounds(this, size); }
    void UpdateLayout_1(::app::Uno::Float2 size) { TextRenderer__UpdateLayout_1(this, size); }
};

}}}


#endif
