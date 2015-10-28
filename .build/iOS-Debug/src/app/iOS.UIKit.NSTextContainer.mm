// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE NSTextContainer
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::app::iOS::UIKit::NSTextContainer*
#define uObjC_UNO_TYPE_OBJECT ::app::iOS::UIKit::NSTextContainer__typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <app/iOS.UIKit.NSTextContainer.h>
#include <app/Uno.Double.h>

namespace app {
namespace iOS {
namespace UIKit {

NSTextContainer__uType* NSTextContainer__typeof()
{
    static ::uStaticStrong<NSTextContainer__uType*> type;
    if (type != NULL) return type;

    type = (NSTextContainer__uType*)::uAllocClassType(sizeof(NSTextContainer__uType), "iOS.UIKit.NSTextContainer", false, 0, 0, 0);

    type->SetBaseType(::app::iOS::Foundation::NSObject__typeof());

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}

void NSTextContainer___ObjInit_5(NSTextContainer* __this)
{
    ::app::iOS::Foundation::NSObject___ObjInit_2(__this);
}

void NSTextContainer__initWithSize(NSTextContainer* __this, ::app::iOS::CoreGraphics::CGSize size_)
{
    uObjC_DO_INIT(@selector(initWithSize:),
        uObjC::Struct::FromUno_CGSize(size_, ::CGSize()));
}

NSTextContainer* NSTextContainer__New_5(::uStatic* __this)
{
    NSTextContainer* inst = (NSTextContainer*)::uAllocObject(sizeof(NSTextContainer), NSTextContainer__typeof());
    inst->_ObjInit_5();
    return inst;
}

void NSTextContainer__setLineFragmentPadding(NSTextContainer* __this, double lineFragmentPadding_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setLineFragmentPadding:),
        (CGFloat)lineFragmentPadding_);
}

}}}
