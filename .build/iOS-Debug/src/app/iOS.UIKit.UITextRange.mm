// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE UITextRange
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::app::iOS::UIKit::UITextRange*
#define uObjC_UNO_TYPE_OBJECT ::app::iOS::UIKit::UITextRange__typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <app/iOS.UIKit.UITextRange.h>

namespace app {
namespace iOS {
namespace UIKit {

UITextRange__uType* UITextRange__typeof()
{
    static ::uStaticStrong<UITextRange__uType*> type;
    if (type != NULL) return type;

    type = (UITextRange__uType*)::uAllocClassType(sizeof(UITextRange__uType), "iOS.UIKit.UITextRange", false, 0, 0, 0);

    type->SetBaseType(::app::iOS::Foundation::NSObject__typeof());

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}

}}}
