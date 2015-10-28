// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Controls.Graphics.ControlVisual__Fuse_Controls_TextControl.h>
#include <app/Fuse.Controls.Graphics.Visual.h>
#include <app/Fuse.Controls.TextControl.h>
#include <app/Fuse.DrawContext.h>
#include <app/Fuse.Elements.TextAlignment.h>
#include <app/Fuse.Elements.TextWrapping.h>
#include <app/Fuse.Font.h>
#include <app/Fuse.iOS.Blitter.h>
#include <app/Fuse.iOS.FontCache.h>
#include <app/Fuse.iOS.Helpers.h>
#include <app/Fuse.iOS.TextRenderer.h>
#include <app/Fuse.IViewport.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.SizeFlags.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_TextControl__Fuse_Font.h>
#include <app/iOS.CoreGraphics.CGBitmapInfo.h>
#include <app/iOS.CoreGraphics.CGColorSpaceRef.h>
#include <app/iOS.CoreGraphics.CGContextRef.h>
#include <app/iOS.CoreGraphics.CGPoint.h>
#include <app/iOS.CoreGraphics.CGRect.h>
#include <app/iOS.CoreGraphics.CGSize.h>
#include <app/iOS.CoreGraphics.Functions.h>
#include <app/iOS.Foundation._NSRange.h>
#include <app/iOS.Foundation.INSCopying.h>
#include <app/iOS.Foundation.NSArray.h>
#include <app/iOS.Foundation.NSAttributedString.h>
#include <app/iOS.Foundation.NSDictionary.h>
#include <app/iOS.Foundation.NSObject.h>
#include <app/iOS.Foundation.NSString.h>
#include <app/iOS.UIKit.Functions.h>
#include <app/iOS.UIKit.NSLayoutManager.h>
#include <app/iOS.UIKit.NSLineBreakMode.h>
#include <app/iOS.UIKit.NSMutableParagraphStyle.h>
#include <app/iOS.UIKit.NSParagraphStyle.h>
#include <app/iOS.UIKit.NSTextAlignment.h>
#include <app/iOS.UIKit.NSTextContainer.h>
#include <app/iOS.UIKit.NSTextStorage.h>
#include <app/iOS.UIKit.UIColor.h>
#include <app/iOS.UIKit.UIFont.h>
#include <app/ObjC.ID.h>
#include <app/ObjC.Object.h>
#include <app/OpenGL.GL.h>
#include <app/OpenGL.GLPixelFormat.h>
#include <app/OpenGL.GLPixelType.h>
#include <app/OpenGL.GLTextureHandle.h>
#include <app/OpenGL.GLTextureTarget.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.Dictionary__iOS_Foundation_INSCopying__ObjC_ID.h>
#include <app/Uno.Double.h>
#include <app/Uno.EventArgs.h>
#include <app/Uno.EventHandler.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Float4x4.h>
#include <app/Uno.Graphics.Format.h>
#include <app/Uno.Graphics.Texture2D.h>
#include <app/Uno.Int.h>
#include <app/Uno.Int2.h>
#include <app/Uno.IntPtr.h>
#include <app/Uno.Math.h>
#include <app/Uno.Object.h>
#include <app/Uno.String.h>
#include <app/Uno.ULong.h>
#include <app/Uno.UX.FileSource.h>
#include <app/Uno.UX.ValueChangedArgs__string.h>
#include <app/Uno.UX.ValueChangedHandler__string.h>
#include <UIKit/NSAttributedString.h>

namespace app {
namespace Fuse {
namespace iOS {

TextRenderer__uType* TextRenderer__typeof()
{
    static ::uStaticStrong<TextRenderer__uType*> type;
    if (type != NULL) return type;

    type = (TextRenderer__uType*)::uAllocClassType(sizeof(TextRenderer__uType), "Fuse.iOS.TextRenderer", false, 1, 10, 0);

    type->SetBaseType(::app::Fuse::Controls::Graphics::TextVisual__typeof());
    type->__fp_Attach = (void(*)(::app::Fuse::Controls::Graphics::ControlVisual__Fuse_Controls_TextControl*))TextRenderer__Attach;
    type->__fp_Detach = (void(*)(::app::Fuse::Controls::Graphics::ControlVisual__Fuse_Controls_TextControl*))TextRenderer__Detach;
    type->__fp_GetMarginSize = (::app::Uno::Float2(*)(::app::Fuse::Node*, ::app::Uno::Float2, int))TextRenderer__GetMarginSize;
    type->__fp_OnDraw = (void(*)(::app::Fuse::Controls::Graphics::Visual*, ::app::Fuse::DrawContext*))TextRenderer__OnDraw;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(TextRenderer__uType, __interface_0));

    type->SetStrongRefs(
        "_font", offsetof(TextRenderer, _font),
        "_layoutManager", offsetof(TextRenderer, _layoutManager),
        "_oldTexture", offsetof(TextRenderer, _oldTexture),
        "_style", offsetof(TextRenderer, _style),
        "_textColor", offsetof(TextRenderer, _textColor),
        "_textContainer", offsetof(TextRenderer, _textContainer),
        "_textStorage", offsetof(TextRenderer, _textStorage),
        "NSFontAttributeName", offsetof(TextRenderer, NSFontAttributeName),
        "NSForegroundColorAttributeName", offsetof(TextRenderer, NSForegroundColorAttributeName),
        "NSParagraphStyleAttributeName", offsetof(TextRenderer, NSParagraphStyleAttributeName));

    return type;
}

void TextRenderer___ObjInit_4(TextRenderer* __this)
{
    __this->NSFontAttributeName = ::app::iOS::Foundation::NSString__New_6(NULL, ::NSFontAttributeName);
    __this->NSForegroundColorAttributeName = ::app::iOS::Foundation::NSString__New_6(NULL, ::NSForegroundColorAttributeName);
    __this->NSParagraphStyleAttributeName = ::app::iOS::Foundation::NSString__New_6(NULL, ::NSParagraphStyleAttributeName);
    ::app::Fuse::Controls::Graphics::TextVisual___ObjInit_3(__this);
    __this->_colorSpace = ::app::iOS::CoreGraphics::Functions__CGColorSpaceCreateDeviceRGB(NULL);
    __this->_layoutManager = ::app::iOS::UIKit::NSLayoutManager__New_5(NULL);
    __this->_textContainer = ::app::iOS::UIKit::NSTextContainer__New_5(NULL);
    __this->_style = ::app::iOS::UIKit::NSMutableParagraphStyle__New_8(NULL, ::uPtr< ::app::iOS::UIKit::NSParagraphStyle*>(::app::iOS::UIKit::NSParagraphStyle___defaultParagraphStyle(NULL))->mutableCopy());
    ::uPtr< ::app::iOS::UIKit::NSLayoutManager*>(__this->_layoutManager)->init();
}

void TextRenderer__Attach(TextRenderer* __this)
{
    ::uPtr< ::app::Fuse::Controls::TextControl*>(__this->Control())->add_TextLayoutPropertyChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)TextRenderer__OnTextLayoutPropertyChanged_1, __this));
    ::uPtr< ::app::Fuse::Controls::TextControl*>(__this->Control())->add_TextRenderPropertyChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)TextRenderer__OnTextRenderPropertyChanged_1, __this));
    ::uPtr< ::app::Fuse::Controls::TextControl*>(__this->Control())->add_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__string__typeof(), (const void*)TextRenderer__OnValueChanged_1, __this));
    ::app::Fuse::Controls::Graphics::TextVisual__Attach(__this);
}

void TextRenderer__Detach(TextRenderer* __this)
{
    ::app::Fuse::Controls::Graphics::TextVisual__Detach(__this);
    ::uPtr< ::app::Fuse::Controls::TextControl*>(__this->Control())->remove_TextLayoutPropertyChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)TextRenderer__OnTextLayoutPropertyChanged_1, __this));
    ::uPtr< ::app::Fuse::Controls::TextControl*>(__this->Control())->remove_TextRenderPropertyChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)TextRenderer__OnTextRenderPropertyChanged_1, __this));
    ::uPtr< ::app::Fuse::Controls::TextControl*>(__this->Control())->remove_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__string__typeof(), (const void*)TextRenderer__OnValueChanged_1, __this));
}

::app::Uno::Float2 TextRenderer__GetMarginSize(TextRenderer* __this, ::app::Uno::Float2 fillSize, int fillSet)
{
    ::app::Uno::Float2 size = ::app::Uno::Float2__New_2(NULL, ((fillSet & 1) == 1) ? ::app::Uno::Math__Max_8(NULL, fillSize.X, 0.0f) : FLT_INF, ((fillSet & 2) == 2) ? ::app::Uno::Math__Max_8(NULL, fillSize.Y, 0.0f) : FLT_INF);
    __this->UpdateBounds(size);
    return ::app::Uno::Float2__op_Division_1(NULL, __this->_pixelBounds.Size(), ::app::Fuse::IViewport::PointDensity(::uPtr< ::uObject*>(__this->Viewport())));
}

::app::iOS::Foundation::NSDictionary* TextRenderer__GetTextAttributes(TextRenderer* __this)
{
    ::app::Uno::Collections::Dictionary__iOS_Foundation_INSCopying__ObjC_ID* collection_123;
    return ::app::Fuse::iOS::Helpers__CreateNSDictionary(NULL, (collection_123 = ::app::Uno::Collections::Dictionary__iOS_Foundation_INSCopying__ObjC_ID__New_1(NULL), ::uPtr< ::app::Uno::Collections::Dictionary__iOS_Foundation_INSCopying__ObjC_ID*>(collection_123)->Add((::uObject*)__this->NSFontAttributeName, ::app::ObjC::Object__op_Implicit(NULL, (::app::ObjC::Object*)__this->_font)), ::uPtr< ::app::Uno::Collections::Dictionary__iOS_Foundation_INSCopying__ObjC_ID*>(collection_123)->Add((::uObject*)__this->NSForegroundColorAttributeName, ::app::ObjC::Object__op_Implicit(NULL, (::app::ObjC::Object*)__this->_textColor)), ::uPtr< ::app::Uno::Collections::Dictionary__iOS_Foundation_INSCopying__ObjC_ID*>(collection_123)->Add((::uObject*)__this->NSParagraphStyleAttributeName, ::app::ObjC::Object__op_Implicit(NULL, (::app::ObjC::Object*)__this->_style)), collection_123));
}

TextRenderer* TextRenderer__New_1(::uStatic* __this)
{
    TextRenderer* inst = (TextRenderer*)::uAllocObject(sizeof(TextRenderer), TextRenderer__typeof());
    inst->_ObjInit_4();
    return inst;
}

void TextRenderer__OnDraw(TextRenderer* __this, ::app::Fuse::DrawContext* dc)
{
    __this->UpdateBounds(__this->ActualSize());

    if ((__this->_oldTexture != NULL) && !::uPtr< ::app::Uno::Graphics::Texture2D*>(__this->_oldTexture)->IsDisposed())
    {
        ::uPtr< ::app::Uno::Graphics::Texture2D*>(__this->_oldTexture)->Dispose();
    }

    ::app::Uno::Float4x4 m = ::uPtr< ::app::Fuse::DrawContext*>(dc)->GetLocalToClipTransform((::app::Fuse::Node*)__this->Control());
    ::app::Uno::Int2 pixelSize = ::app::Uno::Int2__op_Explicit(NULL, ::app::Uno::Math__Ceil_2(NULL, __this->_pixelBounds.Size()));

    if ((((pixelSize.X < 1) || (pixelSize.Y < 1)) || (pixelSize.X > ::app::Uno::Graphics::Texture2D__get_MaxSize(NULL))) || (pixelSize.Y > ::app::Uno::Graphics::Texture2D__get_MaxSize(NULL)))
    {
        return;
    }

    ::app::Uno::Float2 pointSize = ::app::Uno::Float2__op_Division_1(NULL, ::app::Uno::Float2__op_Implicit_4(NULL, pixelSize), ::app::Fuse::IViewport::PointDensity(::uPtr< ::uObject*>(__this->Viewport())));
    void* textureBuffer = malloc(pixelSize.X * pixelSize.Y * 4);

    if (::app::Uno::IntPtr__op_Equality(NULL, textureBuffer, ::app::Uno::IntPtr__Zero))
    {
        return;
    }

    ::uUInt flags = 8194;
    app::CGContextRef* imageContext = ::app::iOS::CoreGraphics::Functions__CGBitmapContextCreate(NULL, textureBuffer, (::uULong)pixelSize.X, (::uULong)pixelSize.Y, 8ull, (::uULong)(pixelSize.X * 4), __this->_colorSpace, flags);

    if (::app::Uno::IntPtr__op_Equality(NULL, imageContext, ::app::Uno::IntPtr__Zero))
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Failed to create CGBitmapContext")));
    }

    ::app::iOS::UIKit::Functions__UIGraphicsPushContext(NULL, imageContext);
    ::app::iOS::CoreGraphics::CGRect rect = ::app::iOS::CoreGraphics::Functions__CGRectMake(NULL, 0.0, 0.0, (double)pixelSize.X, (double)pixelSize.Y);
    ::app::iOS::CoreGraphics::Functions__CGContextClearRect(NULL, imageContext, rect);
    ::app::iOS::Foundation::_NSRange glyphRange = ::uPtr< ::app::iOS::UIKit::NSLayoutManager*>(__this->_layoutManager)->glyphRangeForTextContainer(__this->_textContainer);
    ::app::iOS::CoreGraphics::CGPoint pos = ::app::iOS::CoreGraphics::Functions__CGPointMake(NULL, (double)-__this->_pixelBounds.Position().X, (double)-__this->_pixelBounds.Position().Y);
    ::uPtr< ::app::iOS::UIKit::NSLayoutManager*>(__this->_layoutManager)->drawGlyphsForGlyphRangeAtPoint(glyphRange, pos);
    ::app::iOS::UIKit::Functions__UIGraphicsPopContext(NULL);
    ::app::iOS::CoreGraphics::Functions__CGContextRelease(NULL, imageContext);
    ::uUInt textureHandle = ::app::OpenGL::GL__CreateTexture(NULL);
    ::app::OpenGL::GL__BindTexture(NULL, 3553, textureHandle);
    ::app::OpenGL::GL__TexImage2D(NULL, 3553, 0, 6408, pixelSize.X, pixelSize.Y, 0, 32993, 5121, textureBuffer);
    free(textureBuffer);
    textureBuffer = ::app::Uno::IntPtr__Zero;
    ::app::OpenGL::GL__BindTexture(NULL, 3553, ::app::OpenGL::GLTextureHandle__Zero);
    ::app::Uno::Graphics::Texture2D* texture = __this->_oldTexture = ::app::Uno::Graphics::Texture2D__New_1(NULL, textureHandle, pixelSize, 1, 3);
    ::uPtr< ::app::Fuse::iOS::Blitter*>(::app::Fuse::iOS::Blitter__Singleton)->Blit(texture, ::app::Uno::Float2__op_Division_1(NULL, __this->_pixelBounds.Position(), ::app::Fuse::IViewport::PointDensity(::uPtr< ::uObject*>(__this->Viewport()))), pointSize, m);
}

void TextRenderer__OnTextLayoutPropertyChanged_1(TextRenderer* __this, ::uObject* sender, ::app::Uno::EventArgs* args)
{
    __this->_layoutValid = false;
}

void TextRenderer__OnTextRenderPropertyChanged_1(TextRenderer* __this, ::uObject* sender, ::app::Uno::EventArgs* args)
{
    __this->_layoutValid = false;
}

void TextRenderer__OnValueChanged_1(TextRenderer* __this, ::uObject* sender, ::app::Uno::UX::ValueChangedArgs__string* args)
{
    __this->_layoutValid = false;
}

void TextRenderer__UpdateBounds(TextRenderer* __this, ::app::Uno::Float2 size)
{
    __this->UpdateLayout_1(size);
    ::app::iOS::Foundation::_NSRange glyphRange = ::uPtr< ::app::iOS::UIKit::NSLayoutManager*>(__this->_layoutManager)->glyphRangeForTextContainer(__this->_textContainer);
    ::app::iOS::CoreGraphics::CGRect cgRect = ::uPtr< ::app::iOS::UIKit::NSLayoutManager*>(__this->_layoutManager)->boundingRectForGlyphRangeInTextContainer(glyphRange, __this->_textContainer);
    __this->_pixelBounds = ::app::Uno::Rect__New_2(NULL, ::app::Uno::Float2__New_2(NULL, (float)cgRect.Origin.X, (float)-cgRect.Origin.Y), ::app::Uno::Float2__New_2(NULL, (float)cgRect.Size.Width, (float)cgRect.Size.Height));
}

void TextRenderer__UpdateLayout_1(TextRenderer* __this, ::app::Uno::Float2 size)
{
    size = ::app::Uno::Float2__op_Multiply_2(NULL, size, ::app::Fuse::IViewport::PointDensity(::uPtr< ::uObject*>(__this->Viewport())));

    if (__this->_layoutValid && ::app::Uno::Float2__op_Equality(NULL, __this->_size, size))
    {
        return;
    }

    if (::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_TextControl__Fuse_Font*>(::app::Fuse::Controls::TextControl__FontProperty)->HasValue(__this->Control()))
    {
        __this->_font = ::app::Fuse::iOS::FontCache__GetFontFromFile(NULL, ::uPtr< ::app::Fuse::Font*>(::uPtr< ::app::Fuse::Controls::TextControl*>(__this->Control())->Font())->File(), ::uPtr< ::app::Fuse::Controls::TextControl*>(__this->Control())->FontSize() * ::app::Fuse::IViewport::PointDensity(::uPtr< ::uObject*>(__this->Viewport())));
    }
    else
    {
        __this->_font = ::app::iOS::UIKit::UIFont___systemFontOfSize(NULL, (double)(::uPtr< ::app::Fuse::Controls::TextControl*>(__this->Control())->FontSize() * ::app::Fuse::IViewport::PointDensity(::uPtr< ::uObject*>(__this->Viewport()))));
    }

    __this->_textColor = ::app::iOS::UIKit::UIColor___colorWithRedGreenBlueAlpha(NULL, (double)::uPtr< ::app::Fuse::Controls::TextControl*>(__this->Control())->TextColor().X, (double)::uPtr< ::app::Fuse::Controls::TextControl*>(__this->Control())->TextColor().Y, (double)::uPtr< ::app::Fuse::Controls::TextControl*>(__this->Control())->TextColor().Z, (double)::uPtr< ::app::Fuse::Controls::TextControl*>(__this->Control())->TextColor().W);

    while (::uPtr< ::app::iOS::Foundation::NSArray*>(::uPtr< ::app::iOS::UIKit::NSLayoutManager*>(__this->_layoutManager)->textContainers())->count() > 0ull)
    {
        ::uPtr< ::app::iOS::UIKit::NSLayoutManager*>(__this->_layoutManager)->removeTextContainerAtIndex(0ull);
    }

    ::uPtr< ::app::iOS::UIKit::NSTextContainer*>(__this->_textContainer)->initWithSize(::app::iOS::CoreGraphics::Functions__CGSizeMake(NULL, (double)size.X, (double)size.Y));
    ::uPtr< ::app::iOS::UIKit::NSTextContainer*>(__this->_textContainer)->setLineFragmentPadding(0.0);
    ::uPtr< ::app::iOS::UIKit::NSLayoutManager*>(__this->_layoutManager)->addTextContainer(__this->_textContainer);

    switch (::uPtr< ::app::Fuse::Controls::TextControl*>(__this->Control())->TextAlignment())
    {
        case 0:
        {
            ::uPtr< ::app::iOS::UIKit::NSMutableParagraphStyle*>(__this->_style)->setAlignment(0);
            break;
        }
        case 1:
        {
            ::uPtr< ::app::iOS::UIKit::NSMutableParagraphStyle*>(__this->_style)->setAlignment(1);
            break;
        }
        case 2:
        {
            ::uPtr< ::app::iOS::UIKit::NSMutableParagraphStyle*>(__this->_style)->setAlignment(2);
            break;
        }
    }

    switch (::uPtr< ::app::Fuse::Controls::TextControl*>(__this->Control())->TextWrapping())
    {
        case 0:
        {
            ::uPtr< ::app::iOS::UIKit::NSMutableParagraphStyle*>(__this->_style)->setLineBreakMode(4);
            break;
        }
        case 1:
        {
            ::uPtr< ::app::iOS::UIKit::NSMutableParagraphStyle*>(__this->_style)->setLineBreakMode(0);
            break;
        }
    }

    __this->_textStorage = ::app::iOS::UIKit::NSTextStorage__New_9(NULL);
    ::uPtr< ::app::iOS::UIKit::NSTextStorage*>(__this->_textStorage)->initWithStringAttributes(::uPtr< ::app::Fuse::Controls::TextControl*>(__this->Control())->RenderValue(), __this->GetTextAttributes());
    ::uPtr< ::app::iOS::UIKit::NSLayoutManager*>(__this->_layoutManager)->setTextStorage(__this->_textStorage);
    __this->_size = size;
    __this->_layoutValid = true;
}

}}}
