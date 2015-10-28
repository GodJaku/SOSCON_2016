#include <app/iOS.UIKit.NSLineBreakMode.h>
#include <app/iOS.UIKit.NSTextAlignment.h>
#include <app/iOS.UIKit.UIButtonType.h>
#include <app/iOS.UIKit.UIControlEvents.h>
#include <app/iOS.UIKit.UIControlState.h>
#include <app/iOS.UIKit.UIEdgeInsets.h>
#include <app/iOS.UIKit.UIImagePickerControllerSourceType.h>
#include <app/iOS.UIKit.UIInterfaceOrientation.h>
#include <app/iOS.UIKit.UIKeyboardAppearance.h>
#include <app/iOS.UIKit.UIKeyboardType.h>
#include <app/iOS.UIKit.UIReturnKeyType.h>
#include <app/iOS.UIKit.UITextAutocapitalizationType.h>
#include <app/iOS.UIKit.UITextAutocorrectionType.h>
#include <app/iOS.UIKit.UITextBorderStyle.h>
#include <app/iOS.UIKit.UITextGranularity.h>
#include <app/iOS.UIKit.UITextLayoutDirection.h>
#include <app/iOS.UIKit.UITextSpellCheckingType.h>
#include <app/iOS.UIKit.UITextStorageDirection.h>
#include <app/iOS.UIKit.UITextWritingDirection.h>
#include <app/iOS.UIKit.UITouchPhase.h>
#include <app/Uno.Double.h>

namespace app {
namespace iOS {
namespace UIKit {

// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/enum/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* NSLineBreakMode__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("iOS.UIKit.NSLineBreakMode", ::app::Uno::Int__typeof(), 6);

    type->SetLiterals(
        "NSLineBreakByWordWrapping", 0LL,
        "NSLineBreakByCharWrapping", 1LL,
        "NSLineBreakByClipping", 2LL,
        "NSLineBreakByTruncatingHead", 3LL,
        "NSLineBreakByTruncatingTail", 4LL,
        "NSLineBreakByTruncatingMiddle", 5LL);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/enum/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* NSTextAlignment__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("iOS.UIKit.NSTextAlignment", ::app::Uno::Int__typeof(), 5);

    type->SetLiterals(
        "NSTextAlignmentLeft", 0LL,
        "NSTextAlignmentCenter", 1LL,
        "NSTextAlignmentRight", 2LL,
        "NSTextAlignmentJustified", 3LL,
        "NSTextAlignmentNatural", 4LL);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/enum/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* UIButtonType__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("iOS.UIKit.UIButtonType", ::app::Uno::Int__typeof(), 7);

    type->SetLiterals(
        "UIButtonTypeCustom", 0LL,
        "UIButtonTypeSystem", 1LL,
        "UIButtonTypeDetailDisclosure", 2LL,
        "UIButtonTypeInfoLight", 3LL,
        "UIButtonTypeInfoDark", 4LL,
        "UIButtonTypeContactAdd", 5LL,
        "UIButtonTypeRoundedRect", 1LL);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/enum/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* UIControlEvents__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("iOS.UIKit.UIControlEvents", ::app::Uno::UInt__typeof(), 19);

    type->SetLiterals(
        "UIControlEventTouchDown", 1LL,
        "UIControlEventTouchDownRepeat", 2LL,
        "UIControlEventTouchDragInside", 4LL,
        "UIControlEventTouchDragOutside", 8LL,
        "UIControlEventTouchDragEnter", 16LL,
        "UIControlEventTouchDragExit", 32LL,
        "UIControlEventTouchUpInside", 64LL,
        "UIControlEventTouchUpOutside", 128LL,
        "UIControlEventTouchCancel", 256LL,
        "UIControlEventValueChanged", 4096LL,
        "UIControlEventEditingDidBegin", 65536LL,
        "UIControlEventEditingChanged", 131072LL,
        "UIControlEventEditingDidEnd", 262144LL,
        "UIControlEventEditingDidEndOnExit", 524288LL,
        "UIControlEventAllTouchEvents", 4095LL,
        "UIControlEventAllEditingEvents", 983040LL,
        "UIControlEventApplicationReserved", 251658240LL,
        "UIControlEventSystemReserved", 4026531840LL,
        "UIControlEventAllEvents", 4294967295LL);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/enum/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* UIControlState__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("iOS.UIKit.UIControlState", ::app::Uno::UInt__typeof(), 6);

    type->SetLiterals(
        "UIControlStateNormal", 0LL,
        "UIControlStateHighlighted", 1LL,
        "UIControlStateDisabled", 2LL,
        "UIControlStateSelected", 4LL,
        "UIControlStateApplication", 16711680LL,
        "UIControlStateReserved", 4278190080LL);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/struct/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UIEdgeInsets__uType* UIEdgeInsets__typeof()
{
    static ::uStaticStrong<UIEdgeInsets__uType*> type;
    if (type != NULL) return type;

    type = (UIEdgeInsets__uType*)::uAllocStructType(sizeof(UIEdgeInsets__uType), "iOS.UIKit.UIEdgeInsets", sizeof(UIEdgeInsets), 0, 0, 0);

    return type;
}

void UIEdgeInsets___ObjInit(UIEdgeInsets* __this, double Top, double Left, double Bottom, double Right)
{
    __this->Top = Top;
    __this->Left = Left;
    __this->Bottom = Bottom;
    __this->Right = Right;
}

UIEdgeInsets UIEdgeInsets__New_1(::uStatic* __this, double Top, double Left, double Bottom, double Right)
{
    UIEdgeInsets inst = ::uDefault< UIEdgeInsets>();
    inst._ObjInit(Top, Left, Bottom, Right);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/enum/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* UIImagePickerControllerSourceType__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("iOS.UIKit.UIImagePickerControllerSourceType", ::app::Uno::Int__typeof(), 3);

    type->SetLiterals(
        "UIImagePickerControllerSourceTypePhotoLibrary", 0LL,
        "UIImagePickerControllerSourceTypeCamera", 1LL,
        "UIImagePickerControllerSourceTypeSavedPhotosAlbum", 2LL);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/enum/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* UIInterfaceOrientation__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("iOS.UIKit.UIInterfaceOrientation", ::app::Uno::Int__typeof(), 5);

    type->SetLiterals(
        "UIInterfaceOrientationUnknown", 0LL,
        "UIInterfaceOrientationPortrait", 1LL,
        "UIInterfaceOrientationPortraitUpsideDown", 2LL,
        "UIInterfaceOrientationLandscapeLeft", 4LL,
        "UIInterfaceOrientationLandscapeRight", 3LL);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/enum/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* UIKeyboardAppearance__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("iOS.UIKit.UIKeyboardAppearance", ::app::Uno::Int__typeof(), 4);

    type->SetLiterals(
        "UIKeyboardAppearanceDefault", 0LL,
        "UIKeyboardAppearanceDark", 1LL,
        "UIKeyboardAppearanceLight", 2LL,
        "UIKeyboardAppearanceAlert", 1LL);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/enum/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* UIKeyboardType__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("iOS.UIKit.UIKeyboardType", ::app::Uno::Int__typeof(), 12);

    type->SetLiterals(
        "UIKeyboardTypeDefault", 0LL,
        "UIKeyboardTypeASCIICapable", 1LL,
        "UIKeyboardTypeNumbersAndPunctuation", 2LL,
        "UIKeyboardTypeURL", 3LL,
        "UIKeyboardTypeNumberPad", 4LL,
        "UIKeyboardTypePhonePad", 5LL,
        "UIKeyboardTypeNamePhonePad", 6LL,
        "UIKeyboardTypeEmailAddress", 7LL,
        "UIKeyboardTypeDecimalPad", 8LL,
        "UIKeyboardTypeTwitter", 9LL,
        "UIKeyboardTypeWebSearch", 10LL,
        "UIKeyboardTypeAlphabet", 1LL);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/enum/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* UIReturnKeyType__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("iOS.UIKit.UIReturnKeyType", ::app::Uno::Int__typeof(), 11);

    type->SetLiterals(
        "UIReturnKeyDefault", 0LL,
        "UIReturnKeyGo", 1LL,
        "UIReturnKeyGoogle", 2LL,
        "UIReturnKeyJoin", 3LL,
        "UIReturnKeyNext", 4LL,
        "UIReturnKeyRoute", 5LL,
        "UIReturnKeySearch", 6LL,
        "UIReturnKeySend", 7LL,
        "UIReturnKeyYahoo", 8LL,
        "UIReturnKeyDone", 9LL,
        "UIReturnKeyEmergencyCall", 10LL);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/enum/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* UITextAutocapitalizationType__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("iOS.UIKit.UITextAutocapitalizationType", ::app::Uno::Int__typeof(), 4);

    type->SetLiterals(
        "UITextAutocapitalizationTypeNone", 0LL,
        "UITextAutocapitalizationTypeWords", 1LL,
        "UITextAutocapitalizationTypeSentences", 2LL,
        "UITextAutocapitalizationTypeAllCharacters", 3LL);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/enum/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* UITextAutocorrectionType__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("iOS.UIKit.UITextAutocorrectionType", ::app::Uno::Int__typeof(), 3);

    type->SetLiterals(
        "UITextAutocorrectionTypeDefault", 0LL,
        "UITextAutocorrectionTypeNo", 1LL,
        "UITextAutocorrectionTypeYes", 2LL);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/enum/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* UITextBorderStyle__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("iOS.UIKit.UITextBorderStyle", ::app::Uno::Int__typeof(), 4);

    type->SetLiterals(
        "UITextBorderStyleNone", 0LL,
        "UITextBorderStyleLine", 1LL,
        "UITextBorderStyleBezel", 2LL,
        "UITextBorderStyleRoundedRect", 3LL);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/enum/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* UITextGranularity__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("iOS.UIKit.UITextGranularity", ::app::Uno::Int__typeof(), 6);

    type->SetLiterals(
        "UITextGranularityCharacter", 0LL,
        "UITextGranularityWord", 1LL,
        "UITextGranularitySentence", 2LL,
        "UITextGranularityParagraph", 3LL,
        "UITextGranularityLine", 4LL,
        "UITextGranularityDocument", 5LL);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/enum/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* UITextLayoutDirection__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("iOS.UIKit.UITextLayoutDirection", ::app::Uno::Int__typeof(), 4);

    type->SetLiterals(
        "UITextLayoutDirectionRight", 2LL,
        "UITextLayoutDirectionLeft", 3LL,
        "UITextLayoutDirectionUp", 4LL,
        "UITextLayoutDirectionDown", 5LL);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/enum/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* UITextSpellCheckingType__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("iOS.UIKit.UITextSpellCheckingType", ::app::Uno::Int__typeof(), 3);

    type->SetLiterals(
        "UITextSpellCheckingTypeDefault", 0LL,
        "UITextSpellCheckingTypeNo", 1LL,
        "UITextSpellCheckingTypeYes", 2LL);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/enum/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* UITextStorageDirection__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("iOS.UIKit.UITextStorageDirection", ::app::Uno::Int__typeof(), 2);

    type->SetLiterals(
        "UITextStorageDirectionForward", 0LL,
        "UITextStorageDirectionBackward", 1LL);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/enum/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* UITextWritingDirection__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("iOS.UIKit.UITextWritingDirection", ::app::Uno::Int__typeof(), 3);

    type->SetLiterals(
        "UITextWritingDirectionNatural", -1LL,
        "UITextWritingDirectionLeftToRight", 0LL,
        "UITextWritingDirectionRightToLeft", 1LL);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/enum/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* UITouchPhase__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("iOS.UIKit.UITouchPhase", ::app::Uno::Int__typeof(), 5);

    type->SetLiterals(
        "UITouchPhaseBegan", 0LL,
        "UITouchPhaseMoved", 1LL,
        "UITouchPhaseStationary", 2LL,
        "UITouchPhaseEnded", 3LL,
        "UITouchPhaseCancelled", 4LL);

    return type;
}

}}}
