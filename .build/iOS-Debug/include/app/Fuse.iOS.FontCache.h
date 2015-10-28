// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_I_O_S_FONT_CACHE_H__
#define __APP_FUSE_I_O_S_FONT_CACHE_H__

#include <Uno.h>
namespace app { namespace iOS { namespace UIKit { struct UIFont; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__string__string; } } }
namespace app { namespace Uno { namespace UX { struct BundleFileSource; } } }
namespace app { namespace Uno { namespace UX { struct FileSource; } } }

namespace app {
namespace Fuse {
namespace iOS {

extern ::uStaticStrong< ::app::Uno::Collections::Dictionary__string__string*> FontCache___fontNameCache;

struct FontCache__uType : ::uClassType
{
};

FontCache__uType* FontCache__typeof();

void FontCache___TypeInit(::uStatic* __this);
app::CGFontRef* FontCache__CoreGraphicsFontRefFromPath(::uStatic* __this, ::uString* path);
::app::iOS::UIKit::UIFont* FontCache__CreateFontFromName(::uStatic* __this, ::uString* fontName, float fontSize);
::app::iOS::UIKit::UIFont* FontCache__GetDefaultFont(::uStatic* __this, float fontSize);
::app::iOS::UIKit::UIFont* FontCache__GetFontFromFile(::uStatic* __this, ::app::Uno::UX::FileSource* fileSource, float fontSize);
::app::iOS::UIKit::UIFont* FontCache__GetFromBundleFileSource(::uStatic* __this, ::app::Uno::UX::BundleFileSource* bundleFileSource, float fontSize);
::app::iOS::UIKit::UIFont* FontCache__GetFromFileSource(::uStatic* __this, ::app::Uno::UX::FileSource* fileSource, float fontSize);
::uString* FontCache__GetPostScriptNameOfCGFontRef(::uStatic* __this, app::CGFontRef* font);
bool FontCache__RegisterFont(::uStatic* __this, app::CGFontRef* font);

}}}


#endif
