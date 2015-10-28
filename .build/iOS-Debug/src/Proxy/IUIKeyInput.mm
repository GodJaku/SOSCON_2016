#define uObjC_NATIVE_TYPE_IS_INTERFACE 1
#define uObjC_NATIVE_TYPE UIKeyInput
#define uObjC_UNO_TYPE ::uObject*
#define uObjC_UNO_TYPE_OBJECT ::app::iOS::UIKit::IUIKeyInput__typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <uObjC.Proxy.h>

#if !uObjC_UNO_TYPE_IS_SEALED
@implementation uObjC_PROXY


- (BOOL) hasText
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    bool __return = ::app::iOS::UIKit::IUIKeyInput::hasText(__this);
    return (BOOL)__return;
}



- (void) insertText:(NSString *)text
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::UIKit::IUIKeyInput::insertText(__this, uObjC::UnoString(text));
}



- (void) deleteBackward
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::UIKit::IUIKeyInput::deleteBackward(__this);
}



- (UITextAutocapitalizationType) autocapitalizationType
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    int __return = ::app::iOS::UIKit::IUIKeyInput::autocapitalizationType(__this);
    return ::UITextAutocapitalizationType(__return);
}



- (void) setAutocapitalizationType:(UITextAutocapitalizationType)autocapitalizationType
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::UIKit::IUIKeyInput::setAutocapitalizationType(__this, int(autocapitalizationType));
}



- (UITextAutocorrectionType) autocorrectionType
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    int __return = ::app::iOS::UIKit::IUIKeyInput::autocorrectionType(__this);
    return ::UITextAutocorrectionType(__return);
}



- (void) setAutocorrectionType:(UITextAutocorrectionType)autocorrectionType
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::UIKit::IUIKeyInput::setAutocorrectionType(__this, int(autocorrectionType));
}



- (UITextSpellCheckingType) spellCheckingType
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    int __return = ::app::iOS::UIKit::IUIKeyInput::spellCheckingType(__this);
    return ::UITextSpellCheckingType(__return);
}



- (void) setSpellCheckingType:(UITextSpellCheckingType)spellCheckingType
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::UIKit::IUIKeyInput::setSpellCheckingType(__this, int(spellCheckingType));
}



- (UIKeyboardType) keyboardType
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    int __return = ::app::iOS::UIKit::IUIKeyInput::keyboardType(__this);
    return ::UIKeyboardType(__return);
}



- (void) setKeyboardType:(UIKeyboardType)keyboardType
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::UIKit::IUIKeyInput::setKeyboardType(__this, int(keyboardType));
}



- (UIKeyboardAppearance) keyboardAppearance
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    int __return = ::app::iOS::UIKit::IUIKeyInput::keyboardAppearance(__this);
    return ::UIKeyboardAppearance(__return);
}



- (void) setKeyboardAppearance:(UIKeyboardAppearance)keyboardAppearance
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::UIKit::IUIKeyInput::setKeyboardAppearance(__this, int(keyboardAppearance));
}



- (UIReturnKeyType) returnKeyType
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    int __return = ::app::iOS::UIKit::IUIKeyInput::returnKeyType(__this);
    return ::UIReturnKeyType(__return);
}



- (void) setReturnKeyType:(UIReturnKeyType)returnKeyType
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::UIKit::IUIKeyInput::setReturnKeyType(__this, int(returnKeyType));
}



- (BOOL) enablesReturnKeyAutomatically
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    bool __return = ::app::iOS::UIKit::IUIKeyInput::enablesReturnKeyAutomatically(__this);
    return (BOOL)__return;
}



- (void) setEnablesReturnKeyAutomatically:(BOOL)enablesReturnKeyAutomatically
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::UIKit::IUIKeyInput::setEnablesReturnKeyAutomatically(__this, (bool)enablesReturnKeyAutomatically);
}



- (BOOL) isSecureTextEntry
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    bool __return = ::app::iOS::UIKit::IUIKeyInput::isSecureTextEntry(__this);
    return (BOOL)__return;
}



- (void) setSecureTextEntry:(BOOL)secureTextEntry
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::UIKit::IUIKeyInput::setSecureTextEntry(__this, (bool)secureTextEntry);
}


@end
#endif // !uObjC_UNO_TYPE_IS_SEALED
