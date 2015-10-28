// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_I_O_S_U_I_KIT_U_I_FONT_H__
#define __APP_I_O_S_U_I_KIT_U_I_FONT_H__

#include <app/iOS.Foundation.INSCopying.h>
#include <app/iOS.Foundation.NSObject.h>
#include <Uno.h>

namespace app {
namespace iOS {
namespace UIKit {

struct UIFont;

struct UIFont__uType : ::app::iOS::Foundation::NSObject__uType
{
    ::app::iOS::Foundation::INSCopying __interface_0;
};

UIFont__uType* UIFont__typeof();

UIFont* UIFont___fontWithNameSize(::uStatic* __this, ::uString* fontName_, double fontSize_);
UIFont* UIFont___systemFontOfSize(::uStatic* __this, double fontSize_);
::uString* UIFont__fontName(UIFont* __this);
::uString* UIFont__get_FontName(UIFont* __this);
double UIFont__get_LineHeight(UIFont* __this);
double UIFont__lineHeight(UIFont* __this);

struct UIFont : ::app::iOS::Foundation::NSObject
{
    ::uString* fontName() { return UIFont__fontName(this); }
    ::uString* FontName() { return UIFont__get_FontName(this); }
    double LineHeight() { return UIFont__get_LineHeight(this); }
    double lineHeight() { return UIFont__lineHeight(this); }
};

}}}


#endif
