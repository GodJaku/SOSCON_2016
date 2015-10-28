// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE NSParagraphStyle
#define uObjC_UNO_TYPE_IS_SEALED 0
#define uObjC_UNO_TYPE ::app::iOS::UIKit::NSParagraphStyle*
#define uObjC_UNO_TYPE_OBJECT ::app::iOS::UIKit::NSParagraphStyle__typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <app/iOS.UIKit.NSParagraphStyle.h>
#include <app/ObjC.ID.h>

namespace app {
namespace iOS {
namespace UIKit {

NSParagraphStyle__uType* NSParagraphStyle__typeof()
{
    static ::uStaticStrong<NSParagraphStyle__uType*> type;
    if (type != NULL) return type;

    type = (NSParagraphStyle__uType*)::uAllocClassType(sizeof(NSParagraphStyle__uType), "iOS.UIKit.NSParagraphStyle", false, 1, 0, 0);

    type->SetBaseType(::app::iOS::Foundation::NSObject__typeof());

    type->SetInterfaces(
        ::app::iOS::Foundation::INSCopying__typeof(), offsetof(NSParagraphStyle__uType, __interface_0));

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}

NSParagraphStyle* NSParagraphStyle___defaultParagraphStyle(::uStatic* __this)
{
    ::NSParagraphStyle* __return = uObjC_SEND_MESSAGE_TO_CLASS(::NSParagraphStyle*, @selector(defaultParagraphStyle));
    return (NSParagraphStyle*)uObjC::Lifetime::GetUnoObject(__return, ::app::iOS::UIKit::NSParagraphStyle__typeof());
}

void NSParagraphStyle___ObjInit_5(NSParagraphStyle* __this, ::id __id)
{
    ::app::iOS::Foundation::NSObject___ObjInit_3(__this, __id);
}

}}}
