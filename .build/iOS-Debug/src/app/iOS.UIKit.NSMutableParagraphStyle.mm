// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE NSMutableParagraphStyle
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::app::iOS::UIKit::NSMutableParagraphStyle*
#define uObjC_UNO_TYPE_OBJECT ::app::iOS::UIKit::NSMutableParagraphStyle__typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <app/iOS.UIKit.NSLineBreakMode.h>
#include <app/iOS.UIKit.NSMutableParagraphStyle.h>
#include <app/iOS.UIKit.NSTextAlignment.h>
#include <app/ObjC.ID.h>

namespace app {
namespace iOS {
namespace UIKit {

NSMutableParagraphStyle__uType* NSMutableParagraphStyle__typeof()
{
    static ::uStaticStrong<NSMutableParagraphStyle__uType*> type;
    if (type != NULL) return type;

    type = (NSMutableParagraphStyle__uType*)::uAllocClassType(sizeof(NSMutableParagraphStyle__uType), "iOS.UIKit.NSMutableParagraphStyle", false, 1, 0, 0);

    type->SetBaseType(::app::iOS::UIKit::NSParagraphStyle__typeof());

    type->SetInterfaces(
        ::app::iOS::Foundation::INSCopying__typeof(), offsetof(NSMutableParagraphStyle__uType, __interface_0));

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}

void NSMutableParagraphStyle___ObjInit_6(NSMutableParagraphStyle* __this, ::id __id)
{
    ::app::iOS::UIKit::NSParagraphStyle___ObjInit_5(__this, __id);
}

NSMutableParagraphStyle* NSMutableParagraphStyle__New_8(::uStatic* __this, ::id __id)
{
    NSMutableParagraphStyle* inst = (NSMutableParagraphStyle*)::uAllocObject(sizeof(NSMutableParagraphStyle), NSMutableParagraphStyle__typeof());
    inst->_ObjInit_6(__id);
    return inst;
}

void NSMutableParagraphStyle__setAlignment(NSMutableParagraphStyle* __this, int alignment_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setAlignment:),
        ::NSTextAlignment(alignment_));
}

void NSMutableParagraphStyle__setLineBreakMode(NSMutableParagraphStyle* __this, int lineBreakMode_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setLineBreakMode:),
        ::NSLineBreakMode(lineBreakMode_));
}

}}}
