// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE UITextPosition
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::app::iOS::UIKit::UITextPosition*
#define uObjC_UNO_TYPE_OBJECT ::app::iOS::UIKit::UITextPosition__typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <app/iOS.UIKit.UITextPosition.h>

namespace app {
namespace iOS {
namespace UIKit {

UITextPosition__uType* UITextPosition__typeof()
{
    static ::uStaticStrong<UITextPosition__uType*> type;
    if (type != NULL) return type;

    type = (UITextPosition__uType*)::uAllocClassType(sizeof(UITextPosition__uType), "iOS.UIKit.UITextPosition", false, 0, 0, 0);

    type->SetBaseType(::app::iOS::Foundation::NSObject__typeof());

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}

}}}
