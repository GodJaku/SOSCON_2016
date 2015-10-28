// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/interface/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE_IS_INTERFACE 1
#define uObjC_NATIVE_TYPE UITextInput
#define uObjC_UNO_TYPE ::uObject*
#define uObjC_UNO_TYPE_OBJECT ::app::iOS::UIKit::IUITextInput__typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <app/iOS.Foundation.NSArray.h>
#include <app/iOS.Foundation.NSComparisonResult.h>
#include <app/iOS.Foundation.NSDictionary.h>
#include <app/iOS.UIKit.IUITextInput.h>
#include <app/iOS.UIKit.IUITextInputDelegate.h>
#include <app/iOS.UIKit.IUITextInputTokenizer.h>
#include <app/iOS.UIKit.UIKeyboardAppearance.h>
#include <app/iOS.UIKit.UIKeyboardType.h>
#include <app/iOS.UIKit.UIReturnKeyType.h>
#include <app/iOS.UIKit.UITextAutocapitalizationType.h>
#include <app/iOS.UIKit.UITextAutocorrectionType.h>
#include <app/iOS.UIKit.UITextLayoutDirection.h>
#include <app/iOS.UIKit.UITextPosition.h>
#include <app/iOS.UIKit.UITextRange.h>
#include <app/iOS.UIKit.UITextSpellCheckingType.h>
#include <app/iOS.UIKit.UITextStorageDirection.h>
#include <app/iOS.UIKit.UITextWritingDirection.h>
#include <app/iOS.UIKit.UIView.h>
#include <app/ObjC.ID.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Int.h>
#include <app/Uno.String.h>

namespace app {
namespace iOS {
namespace UIKit {

::uInterfaceType* IUITextInput__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("iOS.UIKit.IUITextInput");

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}

}}}
