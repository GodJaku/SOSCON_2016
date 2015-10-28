// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.11.3/Controls/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_I_O_S_CONTROLS_IMAGE_CACHE_H__
#define __APP_FUSE_I_O_S_CONTROLS_IMAGE_CACHE_H__

#include <Uno.h>
namespace app { namespace iOS { namespace UIKit { struct UIImage; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__Uno_UX_FileSource__iOS_UIKit_UIImage; } } }
namespace app { namespace Uno { namespace UX { struct FileSource; } } }

namespace app {
namespace Fuse {
namespace iOS {
namespace Controls {

extern ::uStaticStrong< ::app::Uno::Collections::Dictionary__Uno_UX_FileSource__iOS_UIKit_UIImage*> ImageCache___cache;
extern int ImageCache___tempCount;

struct ImageCache__uType : ::uClassType
{
};

ImageCache__uType* ImageCache__typeof();

void ImageCache___TypeInit(::uStatic* __this);
::app::iOS::UIKit::UIImage* ImageCache__GetImage(::uStatic* __this, ::app::Uno::UX::FileSource* fileSource);

}}}}


#endif
