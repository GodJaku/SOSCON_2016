// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.11.3/Controls/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_I_O_S_CONTROLS_IMAGE_H__
#define __APP_FUSE_I_O_S_CONTROLS_IMAGE_H__

#include <app/Fuse.iOS.Controls.Control__Fuse_Controls_Image.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Internal { struct SizingContainer; } } }
namespace app { namespace iOS { namespace UIKit { struct UIControl; } } }
namespace app { namespace iOS { namespace UIKit { struct UIImageView; } } }
namespace app { namespace iOS { namespace UIKit { struct UIView; } } }
namespace app { namespace Uno { struct EventArgs; } }
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {
namespace iOS {
namespace Controls {

struct Image;

struct Image__uType : ::app::Fuse::iOS::Controls::Control__Fuse_Controls_Image__uType
{
};

Image__uType* Image__typeof();

void Image___ObjInit_3(Image* __this);
void Image__Attach(Image* __this);
::app::iOS::UIKit::UIView* Image__CreateInternal(Image* __this);
void Image__Detach(Image* __this);
::app::Uno::Float2 Image__GetMarginSize(Image* __this, ::app::Uno::Float2 fillSize, int fillSet);
::app::Uno::Float2 Image__GetSize(Image* __this);
void Image__Invalidate(Image* __this);
Image* Image__New_1(::uStatic* __this);
::app::Uno::Float2 Image__OnArrangeMarginBox(Image* __this, ::app::Uno::Float2 position, ::app::Uno::Float2 availableSize, int availSet);
void Image__OnParamChanged(Image* __this, ::uObject* sender, ::app::Uno::EventArgs* args);
void Image__OnSourceChanged(Image* __this, ::uObject* sender, ::app::Uno::EventArgs* args);

struct Image : ::app::Fuse::iOS::Controls::Control__Fuse_Controls_Image
{
    ::uStrong< ::app::iOS::UIKit::UIImageView*> _imageView;
    ::uStrong< ::app::iOS::UIKit::UIControl*> _imageContainer;
    ::uStrong< ::app::Fuse::Internal::SizingContainer*> _sizing;

    void _ObjInit_3() { Image___ObjInit_3(this); }
    ::app::Uno::Float2 GetSize();
    void Invalidate() { Image__Invalidate(this); }
    void OnParamChanged(::uObject* sender, ::app::Uno::EventArgs* args) { Image__OnParamChanged(this, sender, args); }
    void OnSourceChanged(::uObject* sender, ::app::Uno::EventArgs* args) { Image__OnSourceChanged(this, sender, args); }
};

}}}}

#include <app/Uno.Float2.h>

namespace app {
namespace Fuse {
namespace iOS {
namespace Controls {

inline ::app::Uno::Float2 Image::GetSize() { return Image__GetSize(this); }

}}}}


#endif
