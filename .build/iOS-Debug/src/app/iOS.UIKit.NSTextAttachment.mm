// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE NSTextAttachment
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::app::iOS::UIKit::NSTextAttachment*
#define uObjC_UNO_TYPE_OBJECT ::app::iOS::UIKit::NSTextAttachment__typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <app/iOS.UIKit.NSTextAttachment.h>

namespace app {
namespace iOS {
namespace UIKit {

NSTextAttachment__uType* NSTextAttachment__typeof()
{
    static ::uStaticStrong<NSTextAttachment__uType*> type;
    if (type != NULL) return type;

    type = (NSTextAttachment__uType*)::uAllocClassType(sizeof(NSTextAttachment__uType), "iOS.UIKit.NSTextAttachment", false, 0, 0, 0);

    type->SetBaseType(::app::iOS::Foundation::NSObject__typeof());

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}

}}}
