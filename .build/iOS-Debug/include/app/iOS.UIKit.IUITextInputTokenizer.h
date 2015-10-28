// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/interface/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_I_O_S_U_I_KIT_I_U_I_TEXT_INPUT_TOKENIZER_H__
#define __APP_I_O_S_U_I_KIT_I_U_I_TEXT_INPUT_TOKENIZER_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace iOS { namespace UIKit { struct UITextPosition; } } }
namespace app { namespace iOS { namespace UIKit { struct UITextRange; } } }

namespace app {
namespace iOS {
namespace UIKit {

::uInterfaceType* IUITextInputTokenizer__typeof();

struct IUITextInputTokenizer
{
    bool(*__fp_isPositionAtBoundaryInDirection)(void*, ::app::iOS::UIKit::UITextPosition*, int, int);
    bool(*__fp_isPositionWithinTextUnitInDirection)(void*, ::app::iOS::UIKit::UITextPosition*, int, int);
    ::app::iOS::UIKit::UITextPosition*(*__fp_positionFromPositionToBoundaryInDirection)(void*, ::app::iOS::UIKit::UITextPosition*, int, int);
    ::app::iOS::UIKit::UITextRange*(*__fp_rangeEnclosingPositionWithGranularityInDirection)(void*, ::app::iOS::UIKit::UITextPosition*, int, int);

    static bool isPositionAtBoundaryInDirection(::uObject* __this, ::app::iOS::UIKit::UITextPosition* position, int granularity, int direction) { return ((IUITextInputTokenizer*)uGetInterfacePtr(__this, IUITextInputTokenizer__typeof()))->__fp_isPositionAtBoundaryInDirection((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), position, granularity, direction); }
    static bool isPositionWithinTextUnitInDirection(::uObject* __this, ::app::iOS::UIKit::UITextPosition* position, int granularity, int direction) { return ((IUITextInputTokenizer*)uGetInterfacePtr(__this, IUITextInputTokenizer__typeof()))->__fp_isPositionWithinTextUnitInDirection((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), position, granularity, direction); }
    static ::app::iOS::UIKit::UITextPosition* positionFromPositionToBoundaryInDirection(::uObject* __this, ::app::iOS::UIKit::UITextPosition* position, int granularity, int direction) { return ((IUITextInputTokenizer*)uGetInterfacePtr(__this, IUITextInputTokenizer__typeof()))->__fp_positionFromPositionToBoundaryInDirection((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), position, granularity, direction); }
    static ::app::iOS::UIKit::UITextRange* rangeEnclosingPositionWithGranularityInDirection(::uObject* __this, ::app::iOS::UIKit::UITextPosition* position, int granularity, int direction) { return ((IUITextInputTokenizer*)uGetInterfacePtr(__this, IUITextInputTokenizer__typeof()))->__fp_rangeEnclosingPositionWithGranularityInDirection((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), position, granularity, direction); }
};

}}}


#endif
