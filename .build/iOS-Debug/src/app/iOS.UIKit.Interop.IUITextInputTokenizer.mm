// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/interface/wrapper/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE_IS_INTERFACE 1
#define uObjC_NATIVE_TYPE UITextInputTokenizer
#define uObjC_UNO_TYPE ::uObject*
#define uObjC_UNO_TYPE_OBJECT ::app::iOS::UIKit::IUITextInputTokenizer__typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <app/iOS.UIKit.Interop.IUITextInputTokenizer.h>
#include <app/iOS.UIKit.UITextGranularity.h>
#include <app/iOS.UIKit.UITextPosition.h>
#include <app/iOS.UIKit.UITextRange.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Int.h>

namespace app {
namespace iOS {
namespace UIKit {
namespace Interop {

IUITextInputTokenizer__uType* IUITextInputTokenizer__typeof()
{
    static ::uStaticStrong<IUITextInputTokenizer__uType*> type;
    if (type != NULL) return type;

    type = (IUITextInputTokenizer__uType*)::uAllocClassType(sizeof(IUITextInputTokenizer__uType), "iOS.UIKit.Interop.IUITextInputTokenizer", false, 1, 0, 0);

    type->SetBaseType(::app::ObjC::Object__typeof());
    type->__interface_0.__fp_rangeEnclosingPositionWithGranularityInDirection = (::app::iOS::UIKit::UITextRange*(*)(void*, ::app::iOS::UIKit::UITextPosition*, int, int))IUITextInputTokenizer__rangeEnclosingPositionWithGranularityInDirection;
    type->__interface_0.__fp_isPositionAtBoundaryInDirection = (bool(*)(void*, ::app::iOS::UIKit::UITextPosition*, int, int))IUITextInputTokenizer__isPositionAtBoundaryInDirection;
    type->__interface_0.__fp_positionFromPositionToBoundaryInDirection = (::app::iOS::UIKit::UITextPosition*(*)(void*, ::app::iOS::UIKit::UITextPosition*, int, int))IUITextInputTokenizer__positionFromPositionToBoundaryInDirection;
    type->__interface_0.__fp_isPositionWithinTextUnitInDirection = (bool(*)(void*, ::app::iOS::UIKit::UITextPosition*, int, int))IUITextInputTokenizer__isPositionWithinTextUnitInDirection;

    type->SetInterfaces(
        ::app::iOS::UIKit::IUITextInputTokenizer__typeof(), offsetof(IUITextInputTokenizer__uType, __interface_0));

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}

bool IUITextInputTokenizer__isPositionAtBoundaryInDirection(IUITextInputTokenizer* __this, ::app::iOS::UIKit::UITextPosition* position_, int granularity_, int direction_)
{
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(BOOL, @selector(isPosition:atBoundary:inDirection:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)position_),
        ::UITextGranularity(granularity_),
        (long)direction_);
    return (bool)__return;
}

bool IUITextInputTokenizer__isPositionWithinTextUnitInDirection(IUITextInputTokenizer* __this, ::app::iOS::UIKit::UITextPosition* position_, int granularity_, int direction_)
{
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(BOOL, @selector(isPosition:withinTextUnit:inDirection:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)position_),
        ::UITextGranularity(granularity_),
        (long)direction_);
    return (bool)__return;
}

::app::iOS::UIKit::UITextPosition* IUITextInputTokenizer__positionFromPositionToBoundaryInDirection(IUITextInputTokenizer* __this, ::app::iOS::UIKit::UITextPosition* position_, int granularity_, int direction_)
{
    ::UITextPosition* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::UITextPosition*, @selector(positionFromPosition:toBoundary:inDirection:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)position_),
        ::UITextGranularity(granularity_),
        (long)direction_);
    return (::app::iOS::UIKit::UITextPosition*)uObjC::Lifetime::GetUnoObject(__return, ::app::iOS::UIKit::UITextPosition__typeof());
}

::app::iOS::UIKit::UITextRange* IUITextInputTokenizer__rangeEnclosingPositionWithGranularityInDirection(IUITextInputTokenizer* __this, ::app::iOS::UIKit::UITextPosition* position_, int granularity_, int direction_)
{
    ::UITextRange* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::UITextRange*, @selector(rangeEnclosingPosition:withGranularity:inDirection:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)position_),
        ::UITextGranularity(granularity_),
        (long)direction_);
    return (::app::iOS::UIKit::UITextRange*)uObjC::Lifetime::GetUnoObject(__return, ::app::iOS::UIKit::UITextRange__typeof());
}

}}}}
