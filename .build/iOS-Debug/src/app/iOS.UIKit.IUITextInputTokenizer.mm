// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/interface/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE_IS_INTERFACE 1
#define uObjC_NATIVE_TYPE UITextInputTokenizer
#define uObjC_UNO_TYPE ::uObject*
#define uObjC_UNO_TYPE_OBJECT ::app::iOS::UIKit::IUITextInputTokenizer__typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <app/iOS.UIKit.IUITextInputTokenizer.h>
#include <app/iOS.UIKit.UITextGranularity.h>
#include <app/iOS.UIKit.UITextPosition.h>
#include <app/iOS.UIKit.UITextRange.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Int.h>

namespace app {
namespace iOS {
namespace UIKit {

::uInterfaceType* IUITextInputTokenizer__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("iOS.UIKit.IUITextInputTokenizer");

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}

}}}
