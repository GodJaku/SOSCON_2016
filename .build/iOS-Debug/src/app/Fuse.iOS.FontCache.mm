// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.iOS.FontCache.h>
#include <app/iOS.CoreFoundation.CFStringRef.h>
#include <app/iOS.CoreGraphics.CGDataProviderRef.h>
#include <app/iOS.CoreGraphics.CGFontRef.h>
#include <app/iOS.CoreGraphics.Functions.h>
#include <app/iOS.Foundation.NSBundle.h>
#include <app/iOS.Foundation.NSError.h>
#include <app/iOS.Foundation.NSString.h>
#include <app/iOS.UIKit.UIFont.h>
#include <app/Uno.Bool.h>
#include <app/Uno.BundleFile.h>
#include <app/Uno.Byte.h>
#include <app/Uno.Collections.Dictionary__string__string.h>
#include <app/Uno.Double.h>
#include <app/Uno.Float.h>
#include <app/Uno.Int.h>
#include <app/Uno.IO.Directory.h>
#include <app/Uno.IO.File.h>
#include <app/Uno.IO.UserDirectory.h>
#include <app/Uno.String.h>
#include <app/Uno.UX.BundleFileSource.h>
#include <app/Uno.UX.FileSource.h>
#include <CoreGraphics/CGBitmapContext.h>
#include <CoreText/CTFontManager.h>
#include <OpenGLES/ES2/gl.h>
#include <OpenGLES/ES2/glext.h>
#include <UIKit/NSAttributedString.h>

namespace app {
namespace Fuse {
namespace iOS {

::uStaticStrong< ::app::Uno::Collections::Dictionary__string__string*> FontCache___fontNameCache;

FontCache__uType* FontCache__typeof()
{
    static ::uStaticStrong<FontCache__uType*> type;
    if (type != NULL) return type;

    type = (FontCache__uType*)::uAllocClassType(sizeof(FontCache__uType), "Fuse.iOS.FontCache");

    return type;
}

void FontCache___TypeInit(::uStatic* __this)
{
    FontCache___fontNameCache = ::app::Uno::Collections::Dictionary__string__string__New_1(NULL);
}

app::CGFontRef* FontCache__CoreGraphicsFontRefFromPath(::uStatic* __this, ::uString* path)
{
    app::CGDataProviderRef* fontDataProvider = (::app::CGDataProviderRef *)CGDataProviderCreateWithFilename(::uStringToCStr(path));
    app::CGFontRef* font = ::app::iOS::CoreGraphics::Functions__CGFontCreateWithDataProvider(NULL, fontDataProvider);
    ::app::iOS::CoreGraphics::Functions__CGDataProviderRelease(NULL, fontDataProvider);
    return font;
}

::app::iOS::UIKit::UIFont* FontCache__CreateFontFromName(::uStatic* __this, ::uString* fontName, float fontSize)
{
    return ::app::iOS::UIKit::UIFont___fontWithNameSize(NULL, fontName, (double)fontSize);
}

::app::iOS::UIKit::UIFont* FontCache__GetDefaultFont(::uStatic* __this, float fontSize)
{
    return ::app::iOS::UIKit::UIFont___systemFontOfSize(NULL, (double)fontSize);
}

::app::iOS::UIKit::UIFont* FontCache__GetFontFromFile(::uStatic* __this, ::app::Uno::UX::FileSource* fileSource, float fontSize)
{
    if (::uIs(fileSource, ::app::Uno::UX::BundleFileSource__typeof()))
    {
        return FontCache__GetFromBundleFileSource(NULL, ::uCast< ::app::Uno::UX::BundleFileSource*>(fileSource, ::app::Uno::UX::BundleFileSource__typeof()), fontSize);
    }

    return FontCache__GetFromFileSource(NULL, fileSource, fontSize);
}

::app::iOS::UIKit::UIFont* FontCache__GetFromBundleFileSource(::uStatic* __this, ::app::Uno::UX::BundleFileSource* bundleFileSource, float fontSize)
{
    ::app::Uno::BundleFile* bundleFile = ::uPtr< ::app::Uno::UX::BundleFileSource*>(bundleFileSource)->BundleFile;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__string__string*>(FontCache___fontNameCache)->ContainsKey(::uPtr< ::app::Uno::BundleFile*>(bundleFile)->Name()))
    {
        ::uString* path = ::uPtr< ::app::iOS::Foundation::NSBundle*>(::app::iOS::Foundation::NSBundle___mainBundle(NULL))->pathForResourceOfType(::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("data/"), ::uPtr< ::app::Uno::BundleFile*>(bundleFile)->Name()), ::uGetConstString(""));
        app::CGFontRef* font = FontCache__CoreGraphicsFontRefFromPath(NULL, path);

        if (font == nil)
        {
            return NULL;
        }

        ::uString* name = FontCache__GetPostScriptNameOfCGFontRef(NULL, font);
        ::app::iOS::CoreGraphics::Functions__CGFontRelease(NULL, font);
        ::uPtr< ::app::Uno::Collections::Dictionary__string__string*>(FontCache___fontNameCache)->Add(bundleFile->Name(), name);
    }

    ::uString* fontName = ::uPtr< ::app::Uno::Collections::Dictionary__string__string*>(FontCache___fontNameCache)->Item(::uPtr< ::app::Uno::BundleFile*>(bundleFile)->Name());
    return FontCache__CreateFontFromName(NULL, fontName, fontSize);
}

::app::iOS::UIKit::UIFont* FontCache__GetFromFileSource(::uStatic* __this, ::app::Uno::UX::FileSource* fileSource, float fontSize)
{
    if (!::uPtr< ::app::Uno::Collections::Dictionary__string__string*>(FontCache___fontNameCache)->ContainsKey(::uPtr< ::app::Uno::UX::FileSource*>(fileSource)->Name))
    {
        ::uArray* data = ::uPtr< ::app::Uno::UX::FileSource*>(fileSource)->ReadAllBytes();
        ::uString* path = ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::IO::Directory__GetUserDirectory(NULL, 1), ::uGetConstString("/tempFont"));
        ::app::Uno::IO::File__WriteAllBytes(NULL, path, data);
        app::CGFontRef* font = FontCache__CoreGraphicsFontRefFromPath(NULL, path);

        if (font == nil)
        {
            return NULL;
        }

        FontCache__RegisterFont(NULL, font);
        ::uString* name = FontCache__GetPostScriptNameOfCGFontRef(NULL, font);
        ::app::iOS::CoreGraphics::Functions__CGFontRelease(NULL, font);
        ::app::Uno::IO::File__Delete(NULL, path);
        ::uPtr< ::app::Uno::Collections::Dictionary__string__string*>(FontCache___fontNameCache)->Add(fileSource->Name, name);
    }

    ::uString* fontName = ::uPtr< ::app::Uno::Collections::Dictionary__string__string*>(FontCache___fontNameCache)->Item(::uPtr< ::app::Uno::UX::FileSource*>(fileSource)->Name);
    return FontCache__CreateFontFromName(NULL, fontName, fontSize);
}

::uString* FontCache__GetPostScriptNameOfCGFontRef(::uStatic* __this, app::CGFontRef* font)
{
    app::CFStringRef* fontName = ::app::iOS::CoreGraphics::Functions__CGFontCopyPostScriptName(NULL, font);
    ::app::iOS::Foundation::NSString* nsFontName = (::app::iOS::Foundation::NSString *)uObjC::Lifetime::GetUnoObject((__bridge ::NSString *)fontName, ::app::iOS::Foundation::NSString__typeof());
    return ::uPtr< ::app::iOS::Foundation::NSString*>(nsFontName)->stringByAppendingString(::uGetConstString(""));
}

bool FontCache__RegisterFont(::uStatic* __this, app::CGFontRef* font)
{
    ::CFErrorRef cfError;

    if (!CTFontManagerRegisterGraphicsFont((::CGFontRef)font, &cfError))
    {
        ::app::iOS::Foundation::NSError* error = (::app::iOS::Foundation::NSError *)uObjC::Lifetime::GetUnoObject((__bridge NSError *)cfError, ::app::iOS::Foundation::NSError__typeof());

        if (::uPtr< ::app::iOS::Foundation::NSError*>(error)->Code() != 120)
        {
            return false;
        }
    }

    return true;
}

}}}
