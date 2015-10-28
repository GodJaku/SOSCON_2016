// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE UIEvent
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::app::iOS::UIKit::UIEvent*
#define uObjC_UNO_TYPE_OBJECT ::app::iOS::UIKit::UIEvent__typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <app/iOS.Foundation.NSSet.h>
#include <app/iOS.UIKit.UIEvent.h>
#include <app/iOS.UIKit.UIView.h>

namespace app {
namespace iOS {
namespace UIKit {

UIEvent__uType* UIEvent__typeof()
{
    static ::uStaticStrong<UIEvent__uType*> type;
    if (type != NULL) return type;

    type = (UIEvent__uType*)::uAllocClassType(sizeof(UIEvent__uType), "iOS.UIKit.UIEvent", false, 0, 0, 0);

    type->SetBaseType(::app::iOS::Foundation::NSObject__typeof());

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}

::app::iOS::Foundation::NSSet* UIEvent__touchesForView(UIEvent* __this, ::app::iOS::UIKit::UIView* view_)
{
    ::NSSet* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::NSSet*, @selector(touchesForView:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)view_));
    return (::app::iOS::Foundation::NSSet*)uObjC::Lifetime::GetUnoObject(__return, ::app::iOS::Foundation::NSSet__typeof());
}

}}}
