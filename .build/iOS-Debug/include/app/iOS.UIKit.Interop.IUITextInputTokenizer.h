// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/interface/wrapper/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_I_O_S_U_I_KIT_INTEROP_I_U_I_TEXT_INPUT_TOKENIZER_H__
#define __APP_I_O_S_U_I_KIT_INTEROP_I_U_I_TEXT_INPUT_TOKENIZER_H__

#include <app/iOS.UIKit.IUITextInputTokenizer.h>
#include <app/ObjC.Object.h>
#include <Uno.h>
namespace app { namespace iOS { namespace UIKit { struct UITextPosition; } } }
namespace app { namespace iOS { namespace UIKit { struct UITextRange; } } }

namespace app {
namespace iOS {
namespace UIKit {
namespace Interop {

struct IUITextInputTokenizer;

struct IUITextInputTokenizer__uType : ::app::ObjC::Object__uType
{
    ::app::iOS::UIKit::IUITextInputTokenizer __interface_0;
};

IUITextInputTokenizer__uType* IUITextInputTokenizer__typeof();

bool IUITextInputTokenizer__isPositionAtBoundaryInDirection(IUITextInputTokenizer* __this, ::app::iOS::UIKit::UITextPosition* position_, int granularity_, int direction_);
bool IUITextInputTokenizer__isPositionWithinTextUnitInDirection(IUITextInputTokenizer* __this, ::app::iOS::UIKit::UITextPosition* position_, int granularity_, int direction_);
::app::iOS::UIKit::UITextPosition* IUITextInputTokenizer__positionFromPositionToBoundaryInDirection(IUITextInputTokenizer* __this, ::app::iOS::UIKit::UITextPosition* position_, int granularity_, int direction_);
::app::iOS::UIKit::UITextRange* IUITextInputTokenizer__rangeEnclosingPositionWithGranularityInDirection(IUITextInputTokenizer* __this, ::app::iOS::UIKit::UITextPosition* position_, int granularity_, int direction_);

struct IUITextInputTokenizer : ::app::ObjC::Object
{
    bool isPositionAtBoundaryInDirection(::app::iOS::UIKit::UITextPosition* position_, int granularity_, int direction_) { return IUITextInputTokenizer__isPositionAtBoundaryInDirection(this, position_, granularity_, direction_); }
    bool isPositionWithinTextUnitInDirection(::app::iOS::UIKit::UITextPosition* position_, int granularity_, int direction_) { return IUITextInputTokenizer__isPositionWithinTextUnitInDirection(this, position_, granularity_, direction_); }
    ::app::iOS::UIKit::UITextPosition* positionFromPositionToBoundaryInDirection(::app::iOS::UIKit::UITextPosition* position_, int granularity_, int direction_) { return IUITextInputTokenizer__positionFromPositionToBoundaryInDirection(this, position_, granularity_, direction_); }
    ::app::iOS::UIKit::UITextRange* rangeEnclosingPositionWithGranularityInDirection(::app::iOS::UIKit::UITextPosition* position_, int granularity_, int direction_) { return IUITextInputTokenizer__rangeEnclosingPositionWithGranularityInDirection(this, position_, granularity_, direction_); }
};

}}}}


#endif
