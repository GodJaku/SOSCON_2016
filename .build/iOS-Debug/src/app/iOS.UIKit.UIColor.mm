// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE UIColor
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::app::iOS::UIKit::UIColor*
#define uObjC_UNO_TYPE_OBJECT ::app::iOS::UIKit::UIColor__typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <app/iOS.CoreGraphics.CGColorRef.h>
#include <app/iOS.UIKit.UIColor.h>
#include <app/Uno.Double.h>

namespace app {
namespace iOS {
namespace UIKit {

UIColor__uType* UIColor__typeof()
{
    static ::uStaticStrong<UIColor__uType*> type;
    if (type != NULL) return type;

    type = (UIColor__uType*)::uAllocClassType(sizeof(UIColor__uType), "iOS.UIKit.UIColor", false, 1, 0, 0);

    type->SetBaseType(::app::iOS::Foundation::NSObject__typeof());

    type->SetInterfaces(
        ::app::iOS::Foundation::INSCopying__typeof(), offsetof(UIColor__uType, __interface_0));

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}

UIColor* UIColor___colorWithRedGreenBlueAlpha(::uStatic* __this, double red_, double green_, double blue_, double alpha_)
{
    ::UIColor* __return = uObjC_SEND_MESSAGE_TO_CLASS(::UIColor*, @selector(colorWithRed:green:blue:alpha:),
        (CGFloat)red_,
        (CGFloat)green_,
        (CGFloat)blue_,
        (CGFloat)alpha_);
    return (UIColor*)uObjC::Lifetime::GetUnoObject(__return, ::app::iOS::UIKit::UIColor__typeof());
}

void UIColor___ObjInit_5(UIColor* __this)
{
    ::app::iOS::Foundation::NSObject___ObjInit_2(__this);
}

app::CGColorRef* UIColor__cgColor(UIColor* __this)
{
    ::CGColorRef __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::CGColorRef, @selector(CGColor));
    return (app::CGColorRef*)(size_t) __return;
}

app::CGColorRef* UIColor__get_CGColor(UIColor* __this)
{
    return __this->cgColor();
}

void UIColor__initWithRedGreenBlueAlpha(UIColor* __this, double red_, double green_, double blue_, double alpha_)
{
    uObjC_DO_INIT(@selector(initWithRed:green:blue:alpha:),
        (CGFloat)red_,
        (CGFloat)green_,
        (CGFloat)blue_,
        (CGFloat)alpha_);
}

UIColor* UIColor__New_5(::uStatic* __this)
{
    UIColor* inst = (UIColor*)::uAllocObject(sizeof(UIColor), UIColor__typeof());
    inst->_ObjInit_5();
    return inst;
}

}}}
