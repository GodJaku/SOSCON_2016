#define uObjC_NATIVE_TYPE_IS_INTERFACE 1
#define uObjC_NATIVE_TYPE UITextInputTraits
#define uObjC_UNO_TYPE ::uObject*
#define uObjC_UNO_TYPE_OBJECT ::app::iOS::UIKit::IUITextInputTraits__typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <uObjC.Proxy.h>

#if !uObjC_UNO_TYPE_IS_SEALED
@implementation uObjC_PROXY


- (UITextAutocapitalizationType) autocapitalizationType
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    int __return = ::app::iOS::UIKit::IUITextInputTraits::autocapitalizationType(__this);
    return ::UITextAutocapitalizationType(__return);
}



- (void) setAutocapitalizationType:(UITextAutocapitalizationType)autocapitalizationType
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::UIKit::IUITextInputTraits::setAutocapitalizationType(__this, int(autocapitalizationType));
}



- (UITextAutocorrectionType) autocorrectionType
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    int __return = ::app::iOS::UIKit::IUITextInputTraits::autocorrectionType(__this);
    return ::UITextAutocorrectionType(__return);
}



- (void) setAutocorrectionType:(UITextAutocorrectionType)autocorrectionType
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::UIKit::IUITextInputTraits::setAutocorrectionType(__this, int(autocorrectionType));
}



- (UITextSpellCheckingType) spellCheckingType
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    int __return = ::app::iOS::UIKit::IUITextInputTraits::spellCheckingType(__this);
    return ::UITextSpellCheckingType(__return);
}



- (void) setSpellCheckingType:(UITextSpellCheckingType)spellCheckingType
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::UIKit::IUITextInputTraits::setSpellCheckingType(__this, int(spellCheckingType));
}



- (UIKeyboardType) keyboardType
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    int __return = ::app::iOS::UIKit::IUITextInputTraits::keyboardType(__this);
    return ::UIKeyboardType(__return);
}



- (void) setKeyboardType:(UIKeyboardType)keyboardType
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::UIKit::IUITextInputTraits::setKeyboardType(__this, int(keyboardType));
}



- (UIKeyboardAppearance) keyboardAppearance
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    int __return = ::app::iOS::UIKit::IUITextInputTraits::keyboardAppearance(__this);
    return ::UIKeyboardAppearance(__return);
}



- (void) setKeyboardAppearance:(UIKeyboardAppearance)keyboardAppearance
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::UIKit::IUITextInputTraits::setKeyboardAppearance(__this, int(keyboardAppearance));
}



- (UIReturnKeyType) returnKeyType
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    int __return = ::app::iOS::UIKit::IUITextInputTraits::returnKeyType(__this);
    return ::UIReturnKeyType(__return);
}



- (void) setReturnKeyType:(UIReturnKeyType)returnKeyType
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::UIKit::IUITextInputTraits::setReturnKeyType(__this, int(returnKeyType));
}



- (BOOL) enablesReturnKeyAutomatically
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    bool __return = ::app::iOS::UIKit::IUITextInputTraits::enablesReturnKeyAutomatically(__this);
    return (BOOL)__return;
}



- (void) setEnablesReturnKeyAutomatically:(BOOL)enablesReturnKeyAutomatically
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::UIKit::IUITextInputTraits::setEnablesReturnKeyAutomatically(__this, (bool)enablesReturnKeyAutomatically);
}



- (BOOL) isSecureTextEntry
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    bool __return = ::app::iOS::UIKit::IUITextInputTraits::isSecureTextEntry(__this);
    return (BOOL)__return;
}



- (void) setSecureTextEntry:(BOOL)secureTextEntry
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::UIKit::IUITextInputTraits::setSecureTextEntry(__this, (bool)secureTextEntry);
}


@end
#endif // !uObjC_UNO_TYPE_IS_SEALED
