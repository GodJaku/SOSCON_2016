// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE UIFont
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::app::iOS::UIKit::UIFont*
#define uObjC_UNO_TYPE_OBJECT ::app::iOS::UIKit::UIFont__typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <app/iOS.UIKit.UIFont.h>
#include <app/Uno.Double.h>
#include <app/Uno.String.h>

namespace app {
namespace iOS {
namespace UIKit {

UIFont__uType* UIFont__typeof()
{
    static ::uStaticStrong<UIFont__uType*> type;
    if (type != NULL) return type;

    type = (UIFont__uType*)::uAllocClassType(sizeof(UIFont__uType), "iOS.UIKit.UIFont", false, 1, 0, 0);

    type->SetBaseType(::app::iOS::Foundation::NSObject__typeof());

    type->SetInterfaces(
        ::app::iOS::Foundation::INSCopying__typeof(), offsetof(UIFont__uType, __interface_0));

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}

UIFont* UIFont___fontWithNameSize(::uStatic* __this, ::uString* fontName_, double fontSize_)
{
    ::UIFont* __return = uObjC_SEND_MESSAGE_TO_CLASS(::UIFont*, @selector(fontWithName:size:),
        uObjC::NativeString(fontName_),
        (CGFloat)fontSize_);
    return (UIFont*)uObjC::Lifetime::GetUnoObject(__return, ::app::iOS::UIKit::UIFont__typeof());
}

UIFont* UIFont___systemFontOfSize(::uStatic* __this, double fontSize_)
{
    ::UIFont* __return = uObjC_SEND_MESSAGE_TO_CLASS(::UIFont*, @selector(systemFontOfSize:),
        (CGFloat)fontSize_);
    return (UIFont*)uObjC::Lifetime::GetUnoObject(__return, ::app::iOS::UIKit::UIFont__typeof());
}

::uString* UIFont__fontName(UIFont* __this)
{
    ::NSString * __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::NSString *, @selector(fontName));
    return uObjC::UnoString(__return);
}

::uString* UIFont__get_FontName(UIFont* __this)
{
    return __this->fontName();
}

double UIFont__get_LineHeight(UIFont* __this)
{
    return __this->lineHeight();
}

double UIFont__lineHeight(UIFont* __this)
{
    CGFloat __return = uObjC_SEND_MESSAGE_TO_INSTANCE(CGFloat, @selector(lineHeight));
    return (double)__return;
}

}}}
