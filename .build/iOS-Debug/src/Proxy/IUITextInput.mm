#define uObjC_NATIVE_TYPE_IS_INTERFACE 1
#define uObjC_NATIVE_TYPE UITextInput
#define uObjC_UNO_TYPE ::uObject*
#define uObjC_UNO_TYPE_OBJECT ::app::iOS::UIKit::IUITextInput__typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <uObjC.Proxy.h>

#if !uObjC_UNO_TYPE_IS_SEALED
@implementation uObjC_PROXY


- (NSString *) textInRange:(UITextRange *)range
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::uString* __return = ::app::iOS::UIKit::IUITextInput::textInRange(__this, (::app::iOS::UIKit::UITextRange*)uObjC::Lifetime::GetUnoObject(range, ::app::iOS::UIKit::UITextRange__typeof()));
    return uObjC::NativeString(__return);
}



- (void) replaceRange:(UITextRange *)range withText:(NSString *)text
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::UIKit::IUITextInput::replaceRangeWithText(__this, (::app::iOS::UIKit::UITextRange*)uObjC::Lifetime::GetUnoObject(range, ::app::iOS::UIKit::UITextRange__typeof()), uObjC::UnoString(text));
}



- (void) setMarkedText:(NSString *)markedText selectedRange:(NSRange)selectedRange
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::UIKit::IUITextInput::setMarkedTextSelectedRange(__this, uObjC::UnoString(markedText), uObjC::Struct::ToUno__NSRange(selectedRange, ::app::iOS::Foundation::_NSRange()));
}



- (void) unmarkText
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::UIKit::IUITextInput::unmarkText(__this);
}



- (UITextRange *) textRangeFromPosition:(UITextPosition *)fromPosition toPosition:(UITextPosition *)toPosition
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::UIKit::UITextRange* __return = ::app::iOS::UIKit::IUITextInput::textRangeFromPositionToPosition(__this, (::app::iOS::UIKit::UITextPosition*)uObjC::Lifetime::GetUnoObject(fromPosition, ::app::iOS::UIKit::UITextPosition__typeof()), (::app::iOS::UIKit::UITextPosition*)uObjC::Lifetime::GetUnoObject(toPosition, ::app::iOS::UIKit::UITextPosition__typeof()));
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}



- (UITextPosition *) positionFromPosition:(UITextPosition *)position offset:(NSInteger)offset
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::UIKit::UITextPosition* __return = ::app::iOS::UIKit::IUITextInput::positionFromPositionOffset(__this, (::app::iOS::UIKit::UITextPosition*)uObjC::Lifetime::GetUnoObject(position, ::app::iOS::UIKit::UITextPosition__typeof()), (int)offset);
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}



- (UITextPosition *) positionFromPosition:(UITextPosition *)position inDirection:(UITextLayoutDirection)direction offset:(NSInteger)offset
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::UIKit::UITextPosition* __return = ::app::iOS::UIKit::IUITextInput::positionFromPositionInDirectionOffset(__this, (::app::iOS::UIKit::UITextPosition*)uObjC::Lifetime::GetUnoObject(position, ::app::iOS::UIKit::UITextPosition__typeof()), int(direction), (int)offset);
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}



- (NSComparisonResult) comparePosition:(UITextPosition *)position toPosition:(UITextPosition *)other
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    int __return = ::app::iOS::UIKit::IUITextInput::comparePositionToPosition(__this, (::app::iOS::UIKit::UITextPosition*)uObjC::Lifetime::GetUnoObject(position, ::app::iOS::UIKit::UITextPosition__typeof()), (::app::iOS::UIKit::UITextPosition*)uObjC::Lifetime::GetUnoObject(other, ::app::iOS::UIKit::UITextPosition__typeof()));
    return ::NSComparisonResult(__return);
}



- (NSInteger) offsetFromPosition:(UITextPosition *)from toPosition:(UITextPosition *)toPosition
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    int __return = ::app::iOS::UIKit::IUITextInput::offsetFromPositionToPosition(__this, (::app::iOS::UIKit::UITextPosition*)uObjC::Lifetime::GetUnoObject(from, ::app::iOS::UIKit::UITextPosition__typeof()), (::app::iOS::UIKit::UITextPosition*)uObjC::Lifetime::GetUnoObject(toPosition, ::app::iOS::UIKit::UITextPosition__typeof()));
    return (long)__return;
}



- (UITextPosition *) positionWithinRange:(UITextRange *)range farthestInDirection:(UITextLayoutDirection)direction
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::UIKit::UITextPosition* __return = ::app::iOS::UIKit::IUITextInput::positionWithinRangeFarthestInDirection(__this, (::app::iOS::UIKit::UITextRange*)uObjC::Lifetime::GetUnoObject(range, ::app::iOS::UIKit::UITextRange__typeof()), int(direction));
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}



- (UITextRange *) characterRangeByExtendingPosition:(UITextPosition *)position inDirection:(UITextLayoutDirection)direction
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::UIKit::UITextRange* __return = ::app::iOS::UIKit::IUITextInput::characterRangeByExtendingPositionInDirection(__this, (::app::iOS::UIKit::UITextPosition*)uObjC::Lifetime::GetUnoObject(position, ::app::iOS::UIKit::UITextPosition__typeof()), int(direction));
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}



- (UITextWritingDirection) baseWritingDirectionForPosition:(UITextPosition *)position inDirection:(UITextStorageDirection)direction
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    int __return = ::app::iOS::UIKit::IUITextInput::baseWritingDirectionForPositionInDirection(__this, (::app::iOS::UIKit::UITextPosition*)uObjC::Lifetime::GetUnoObject(position, ::app::iOS::UIKit::UITextPosition__typeof()), int(direction));
    return ::UITextWritingDirection(__return);
}



- (void) setBaseWritingDirection:(UITextWritingDirection)writingDirection forRange:(UITextRange *)range
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::UIKit::IUITextInput::setBaseWritingDirectionForRange(__this, int(writingDirection), (::app::iOS::UIKit::UITextRange*)uObjC::Lifetime::GetUnoObject(range, ::app::iOS::UIKit::UITextRange__typeof()));
}



- (CGRect) firstRectForRange:(UITextRange *)range
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::CoreGraphics::CGRect __return = ::app::iOS::UIKit::IUITextInput::firstRectForRange(__this, (::app::iOS::UIKit::UITextRange*)uObjC::Lifetime::GetUnoObject(range, ::app::iOS::UIKit::UITextRange__typeof()));
    return uObjC::Struct::FromUno_CGRect(__return, ::CGRect());
}



- (CGRect) caretRectForPosition:(UITextPosition *)position
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::CoreGraphics::CGRect __return = ::app::iOS::UIKit::IUITextInput::caretRectForPosition(__this, (::app::iOS::UIKit::UITextPosition*)uObjC::Lifetime::GetUnoObject(position, ::app::iOS::UIKit::UITextPosition__typeof()));
    return uObjC::Struct::FromUno_CGRect(__return, ::CGRect());
}



- (NSArray *) selectionRectsForRange:(UITextRange *)range
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::Foundation::NSArray* __return = ::app::iOS::UIKit::IUITextInput::selectionRectsForRange(__this, (::app::iOS::UIKit::UITextRange*)uObjC::Lifetime::GetUnoObject(range, ::app::iOS::UIKit::UITextRange__typeof()));
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}



- (UITextPosition *) closestPositionToPoint:(CGPoint)point
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::UIKit::UITextPosition* __return = ::app::iOS::UIKit::IUITextInput::closestPositionToPoint(__this, uObjC::Struct::ToUno_CGPoint(point, ::app::iOS::CoreGraphics::CGPoint()));
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}



- (UITextPosition *) closestPositionToPoint:(CGPoint)point withinRange:(UITextRange *)range
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::UIKit::UITextPosition* __return = ::app::iOS::UIKit::IUITextInput::closestPositionToPointWithinRange(__this, uObjC::Struct::ToUno_CGPoint(point, ::app::iOS::CoreGraphics::CGPoint()), (::app::iOS::UIKit::UITextRange*)uObjC::Lifetime::GetUnoObject(range, ::app::iOS::UIKit::UITextRange__typeof()));
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}



- (UITextRange *) characterRangeAtPoint:(CGPoint)point
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::UIKit::UITextRange* __return = ::app::iOS::UIKit::IUITextInput::characterRangeAtPoint(__this, uObjC::Struct::ToUno_CGPoint(point, ::app::iOS::CoreGraphics::CGPoint()));
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}



- (BOOL) shouldChangeTextInRange:(UITextRange *)range replacementText:(NSString *)text
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    bool __return = ::app::iOS::UIKit::IUITextInput::shouldChangeTextInRangeReplacementText(__this, (::app::iOS::UIKit::UITextRange*)uObjC::Lifetime::GetUnoObject(range, ::app::iOS::UIKit::UITextRange__typeof()), uObjC::UnoString(text));
    return (BOOL)__return;
}



- (NSDictionary *) textStylingAtPosition:(UITextPosition *)position inDirection:(UITextStorageDirection)direction
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::Foundation::NSDictionary* __return = ::app::iOS::UIKit::IUITextInput::textStylingAtPositionInDirection(__this, (::app::iOS::UIKit::UITextPosition*)uObjC::Lifetime::GetUnoObject(position, ::app::iOS::UIKit::UITextPosition__typeof()), int(direction));
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}



- (UITextPosition *) positionWithinRange:(UITextRange *)range atCharacterOffset:(NSInteger)offset
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::UIKit::UITextPosition* __return = ::app::iOS::UIKit::IUITextInput::positionWithinRangeAtCharacterOffset(__this, (::app::iOS::UIKit::UITextRange*)uObjC::Lifetime::GetUnoObject(range, ::app::iOS::UIKit::UITextRange__typeof()), (int)offset);
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}



- (NSInteger) characterOffsetOfPosition:(UITextPosition *)position withinRange:(UITextRange *)range
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    int __return = ::app::iOS::UIKit::IUITextInput::characterOffsetOfPositionWithinRange(__this, (::app::iOS::UIKit::UITextPosition*)uObjC::Lifetime::GetUnoObject(position, ::app::iOS::UIKit::UITextPosition__typeof()), (::app::iOS::UIKit::UITextRange*)uObjC::Lifetime::GetUnoObject(range, ::app::iOS::UIKit::UITextRange__typeof()));
    return (long)__return;
}



- (void) insertDictationResult:(NSArray *)dictationResult
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::UIKit::IUITextInput::insertDictationResult(__this, (::app::iOS::Foundation::NSArray*)uObjC::Lifetime::GetUnoObject(dictationResult, ::app::iOS::Foundation::NSArray__typeof()));
}



- (void) dictationRecordingDidEnd
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::UIKit::IUITextInput::dictationRecordingDidEnd(__this);
}



- (void) dictationRecognitionFailed
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::UIKit::IUITextInput::dictationRecognitionFailed(__this);
}



- (id) insertDictationResultPlaceholder
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::id __return = ::app::iOS::UIKit::IUITextInput::insertDictationResultPlaceholder(__this);
    return (::id)__return;
}



- (CGRect) frameForDictationResultPlaceholder:(id)placeholder
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::CoreGraphics::CGRect __return = ::app::iOS::UIKit::IUITextInput::frameForDictationResultPlaceholder(__this, (::id)placeholder);
    return uObjC::Struct::FromUno_CGRect(__return, ::CGRect());
}



- (void) removeDictationResultPlaceholder:(id)placeholder willInsertResult:(BOOL)willInsertResult
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::UIKit::IUITextInput::removeDictationResultPlaceholderWillInsertResult(__this, (::id)placeholder, (bool)willInsertResult);
}



- (UITextRange *) selectedTextRange
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::UIKit::UITextRange* __return = ::app::iOS::UIKit::IUITextInput::selectedTextRange(__this);
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}



- (void) setSelectedTextRange:(UITextRange *)selectedTextRange
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::UIKit::IUITextInput::setSelectedTextRange(__this, (::app::iOS::UIKit::UITextRange*)uObjC::Lifetime::GetUnoObject(selectedTextRange, ::app::iOS::UIKit::UITextRange__typeof()));
}



- (UITextRange *) markedTextRange
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::UIKit::UITextRange* __return = ::app::iOS::UIKit::IUITextInput::markedTextRange(__this);
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}



- (NSDictionary *) markedTextStyle
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::Foundation::NSDictionary* __return = ::app::iOS::UIKit::IUITextInput::markedTextStyle(__this);
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}



- (void) setMarkedTextStyle:(NSDictionary *)markedTextStyle
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::UIKit::IUITextInput::setMarkedTextStyle(__this, (::app::iOS::Foundation::NSDictionary*)uObjC::Lifetime::GetUnoObject(markedTextStyle, ::app::iOS::Foundation::NSDictionary__typeof()));
}



- (UITextPosition *) beginningOfDocument
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::UIKit::UITextPosition* __return = ::app::iOS::UIKit::IUITextInput::beginningOfDocument(__this);
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}



- (UITextPosition *) endOfDocument
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::UIKit::UITextPosition* __return = ::app::iOS::UIKit::IUITextInput::endOfDocument(__this);
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}



- (id<UITextInputDelegate>) inputDelegate
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::uObject* __return = ::app::iOS::UIKit::IUITextInput::inputDelegate(__this);
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return, ::app::iOS::UIKit::IUITextInputDelegate__typeof());
}



- (void) setInputDelegate:(id<UITextInputDelegate>)inputDelegate
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::UIKit::IUITextInput::setInputDelegate(__this, uObjC::Lifetime::GetUnoObject(inputDelegate, ::app::iOS::UIKit::Interop::IUITextInputDelegate__typeof()));
}



- (id<UITextInputTokenizer>) tokenizer
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::uObject* __return = ::app::iOS::UIKit::IUITextInput::tokenizer(__this);
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return, ::app::iOS::UIKit::IUITextInputTokenizer__typeof());
}



- (UIView *) textInputView
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::UIKit::UIView* __return = ::app::iOS::UIKit::IUITextInput::textInputView(__this);
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}



- (UITextStorageDirection) selectionAffinity
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    int __return = ::app::iOS::UIKit::IUITextInput::selectionAffinity(__this);
    return ::UITextStorageDirection(__return);
}



- (void) setSelectionAffinity:(UITextStorageDirection)selectionAffinity
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::UIKit::IUITextInput::setSelectionAffinity(__this, int(selectionAffinity));
}



- (BOOL) hasText
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    bool __return = ::app::iOS::UIKit::IUITextInput::hasText(__this);
    return (BOOL)__return;
}



- (void) insertText:(NSString *)text
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::UIKit::IUITextInput::insertText(__this, uObjC::UnoString(text));
}



- (void) deleteBackward
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::UIKit::IUITextInput::deleteBackward(__this);
}



- (UITextAutocapitalizationType) autocapitalizationType
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    int __return = ::app::iOS::UIKit::IUITextInput::autocapitalizationType(__this);
    return ::UITextAutocapitalizationType(__return);
}



- (void) setAutocapitalizationType:(UITextAutocapitalizationType)autocapitalizationType
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::UIKit::IUITextInput::setAutocapitalizationType(__this, int(autocapitalizationType));
}



- (UITextAutocorrectionType) autocorrectionType
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    int __return = ::app::iOS::UIKit::IUITextInput::autocorrectionType(__this);
    return ::UITextAutocorrectionType(__return);
}



- (void) setAutocorrectionType:(UITextAutocorrectionType)autocorrectionType
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::UIKit::IUITextInput::setAutocorrectionType(__this, int(autocorrectionType));
}



- (UITextSpellCheckingType) spellCheckingType
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    int __return = ::app::iOS::UIKit::IUITextInput::spellCheckingType(__this);
    return ::UITextSpellCheckingType(__return);
}



- (void) setSpellCheckingType:(UITextSpellCheckingType)spellCheckingType
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::UIKit::IUITextInput::setSpellCheckingType(__this, int(spellCheckingType));
}



- (UIKeyboardType) keyboardType
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    int __return = ::app::iOS::UIKit::IUITextInput::keyboardType(__this);
    return ::UIKeyboardType(__return);
}



- (void) setKeyboardType:(UIKeyboardType)keyboardType
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::UIKit::IUITextInput::setKeyboardType(__this, int(keyboardType));
}



- (UIKeyboardAppearance) keyboardAppearance
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    int __return = ::app::iOS::UIKit::IUITextInput::keyboardAppearance(__this);
    return ::UIKeyboardAppearance(__return);
}



- (void) setKeyboardAppearance:(UIKeyboardAppearance)keyboardAppearance
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::UIKit::IUITextInput::setKeyboardAppearance(__this, int(keyboardAppearance));
}



- (UIReturnKeyType) returnKeyType
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    int __return = ::app::iOS::UIKit::IUITextInput::returnKeyType(__this);
    return ::UIReturnKeyType(__return);
}



- (void) setReturnKeyType:(UIReturnKeyType)returnKeyType
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::UIKit::IUITextInput::setReturnKeyType(__this, int(returnKeyType));
}



- (BOOL) enablesReturnKeyAutomatically
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    bool __return = ::app::iOS::UIKit::IUITextInput::enablesReturnKeyAutomatically(__this);
    return (BOOL)__return;
}



- (void) setEnablesReturnKeyAutomatically:(BOOL)enablesReturnKeyAutomatically
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::UIKit::IUITextInput::setEnablesReturnKeyAutomatically(__this, (bool)enablesReturnKeyAutomatically);
}



- (BOOL) isSecureTextEntry
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    bool __return = ::app::iOS::UIKit::IUITextInput::isSecureTextEntry(__this);
    return (BOOL)__return;
}



- (void) setSecureTextEntry:(BOOL)secureTextEntry
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::UIKit::IUITextInput::setSecureTextEntry(__this, (bool)secureTextEntry);
}


@end
#endif // !uObjC_UNO_TYPE_IS_SEALED
