// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_I_O_S_U_I_KIT_U_I_IMAGE_H__
#define __APP_I_O_S_U_I_KIT_U_I_IMAGE_H__

#include <app/iOS.Foundation.NSObject.h>
#include <Uno.h>
#include <uObjC.h>
namespace app { namespace iOS { namespace CoreGraphics { struct CGRect; } } }
namespace app { namespace iOS { namespace CoreGraphics { struct CGSize; } } }
namespace app { namespace iOS { namespace CoreImage { struct CIImage; } } }

namespace app {
namespace iOS {
namespace UIKit {

struct UIImage;

struct UIImage__uType : ::app::iOS::Foundation::NSObject__uType
{
};

UIImage__uType* UIImage__typeof();

UIImage* UIImage___imageWithCIImage(::uStatic* __this, ::app::iOS::CoreImage::CIImage* ciImage_);
UIImage* UIImage___imageWithContentsOfFile(::uStatic* __this, ::uString* path_);
void UIImage___ObjInit_5(UIImage* __this, ::id __id);
void UIImage__drawInRect(UIImage* __this, ::app::iOS::CoreGraphics::CGRect rect_);
::app::iOS::CoreGraphics::CGSize UIImage__get_Size(UIImage* __this);
UIImage* UIImage__New_6(::uStatic* __this, ::id __id);
::app::iOS::CoreGraphics::CGSize UIImage__size(UIImage* __this);

struct UIImage : ::app::iOS::Foundation::NSObject
{
    void _ObjInit_5(::id __id) { UIImage___ObjInit_5(this, __id); }
    void drawInRect(::app::iOS::CoreGraphics::CGRect rect_);
    ::app::iOS::CoreGraphics::CGSize Size();
    ::app::iOS::CoreGraphics::CGSize size();
};

}}}

#include <app/iOS.CoreGraphics.CGRect.h>
#include <app/iOS.CoreGraphics.CGSize.h>

namespace app {
namespace iOS {
namespace UIKit {

inline void UIImage::drawInRect(::app::iOS::CoreGraphics::CGRect rect_) { UIImage__drawInRect(this, rect_); }
inline ::app::iOS::CoreGraphics::CGSize UIImage::Size() { return UIImage__get_Size(this); }
inline ::app::iOS::CoreGraphics::CGSize UIImage::size() { return UIImage__size(this); }

}}}


#endif
