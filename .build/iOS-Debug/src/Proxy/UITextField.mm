#define uObjC_NATIVE_TYPE UITextField
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::app::iOS::UIKit::UITextField*
#define uObjC_UNO_TYPE_OBJECT ::app::iOS::UIKit::UITextField__typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <uObjC.Proxy.h>

#if !uObjC_UNO_TYPE_IS_SEALED
@implementation uObjC_PROXY

















































































- (NSString *) text
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::uString* __return = __this->text();
    return uObjC::NativeString(__return);
}



- (void) setText:(NSString *)text
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setText(uObjC::UnoString(text));
}




















- (UIColor *) textColor
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::UIKit::UIColor* __return = __this->textColor();
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}



- (void) setTextColor:(UIColor *)textColor
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setTextColor((::app::iOS::UIKit::UIColor*)uObjC::Lifetime::GetUnoObject(textColor, ::app::iOS::UIKit::UIColor__typeof()));
}



- (UIFont *) font
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::UIKit::UIFont* __return = __this->font();
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}



- (void) setFont:(UIFont *)font
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setFont((::app::iOS::UIKit::UIFont*)uObjC::Lifetime::GetUnoObject(font, ::app::iOS::UIKit::UIFont__typeof()));
}



- (NSTextAlignment) textAlignment
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    int __return = __this->textAlignment();
    return ::NSTextAlignment(__return);
}



- (void) setTextAlignment:(NSTextAlignment)textAlignment
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setTextAlignment(int(textAlignment));
}



- (UITextBorderStyle) borderStyle
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    int __return = __this->borderStyle();
    return ::UITextBorderStyle(__return);
}



- (void) setBorderStyle:(UITextBorderStyle)borderStyle
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setBorderStyle(int(borderStyle));
}















































































































































































































































































































































- (NSString *) textInRange:(UITextRange *)range
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::uString* __return = __this->textInRange((::app::iOS::UIKit::UITextRange*)uObjC::Lifetime::GetUnoObject(range, ::app::iOS::UIKit::UITextRange__typeof()));
    return uObjC::NativeString(__return);
}



- (void) replaceRange:(UITextRange *)range withText:(NSString *)text
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->replaceRangeWithText((::app::iOS::UIKit::UITextRange*)uObjC::Lifetime::GetUnoObject(range, ::app::iOS::UIKit::UITextRange__typeof()), uObjC::UnoString(text));
}



- (void) setMarkedText:(NSString *)markedText selectedRange:(NSRange)selectedRange
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setMarkedTextSelectedRange(uObjC::UnoString(markedText), uObjC::Struct::ToUno__NSRange(selectedRange, ::app::iOS::Foundation::_NSRange()));
}



- (void) unmarkText
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->unmarkText();
}



- (UITextRange *) textRangeFromPosition:(UITextPosition *)fromPosition toPosition:(UITextPosition *)toPosition
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::UIKit::UITextRange* __return = __this->textRangeFromPositionToPosition((::app::iOS::UIKit::UITextPosition*)uObjC::Lifetime::GetUnoObject(fromPosition, ::app::iOS::UIKit::UITextPosition__typeof()), (::app::iOS::UIKit::UITextPosition*)uObjC::Lifetime::GetUnoObject(toPosition, ::app::iOS::UIKit::UITextPosition__typeof()));
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}



- (UITextPosition *) positionFromPosition:(UITextPosition *)position offset:(NSInteger)offset
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::UIKit::UITextPosition* __return = __this->positionFromPositionOffset((::app::iOS::UIKit::UITextPosition*)uObjC::Lifetime::GetUnoObject(position, ::app::iOS::UIKit::UITextPosition__typeof()), (int)offset);
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}



- (UITextPosition *) positionFromPosition:(UITextPosition *)position inDirection:(UITextLayoutDirection)direction offset:(NSInteger)offset
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::UIKit::UITextPosition* __return = __this->positionFromPositionInDirectionOffset((::app::iOS::UIKit::UITextPosition*)uObjC::Lifetime::GetUnoObject(position, ::app::iOS::UIKit::UITextPosition__typeof()), int(direction), (int)offset);
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}



- (NSComparisonResult) comparePosition:(UITextPosition *)position toPosition:(UITextPosition *)other
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    int __return = __this->comparePositionToPosition((::app::iOS::UIKit::UITextPosition*)uObjC::Lifetime::GetUnoObject(position, ::app::iOS::UIKit::UITextPosition__typeof()), (::app::iOS::UIKit::UITextPosition*)uObjC::Lifetime::GetUnoObject(other, ::app::iOS::UIKit::UITextPosition__typeof()));
    return ::NSComparisonResult(__return);
}



- (NSInteger) offsetFromPosition:(UITextPosition *)from toPosition:(UITextPosition *)toPosition
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    int __return = __this->offsetFromPositionToPosition((::app::iOS::UIKit::UITextPosition*)uObjC::Lifetime::GetUnoObject(from, ::app::iOS::UIKit::UITextPosition__typeof()), (::app::iOS::UIKit::UITextPosition*)uObjC::Lifetime::GetUnoObject(toPosition, ::app::iOS::UIKit::UITextPosition__typeof()));
    return (long)__return;
}



- (UITextPosition *) positionWithinRange:(UITextRange *)range farthestInDirection:(UITextLayoutDirection)direction
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::UIKit::UITextPosition* __return = __this->positionWithinRangeFarthestInDirection((::app::iOS::UIKit::UITextRange*)uObjC::Lifetime::GetUnoObject(range, ::app::iOS::UIKit::UITextRange__typeof()), int(direction));
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}



- (UITextRange *) characterRangeByExtendingPosition:(UITextPosition *)position inDirection:(UITextLayoutDirection)direction
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::UIKit::UITextRange* __return = __this->characterRangeByExtendingPositionInDirection((::app::iOS::UIKit::UITextPosition*)uObjC::Lifetime::GetUnoObject(position, ::app::iOS::UIKit::UITextPosition__typeof()), int(direction));
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}



- (UITextWritingDirection) baseWritingDirectionForPosition:(UITextPosition *)position inDirection:(UITextStorageDirection)direction
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    int __return = __this->baseWritingDirectionForPositionInDirection((::app::iOS::UIKit::UITextPosition*)uObjC::Lifetime::GetUnoObject(position, ::app::iOS::UIKit::UITextPosition__typeof()), int(direction));
    return ::UITextWritingDirection(__return);
}



- (void) setBaseWritingDirection:(UITextWritingDirection)writingDirection forRange:(UITextRange *)range
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setBaseWritingDirectionForRange(int(writingDirection), (::app::iOS::UIKit::UITextRange*)uObjC::Lifetime::GetUnoObject(range, ::app::iOS::UIKit::UITextRange__typeof()));
}



- (CGRect) firstRectForRange:(UITextRange *)range
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::CoreGraphics::CGRect __return = __this->firstRectForRange((::app::iOS::UIKit::UITextRange*)uObjC::Lifetime::GetUnoObject(range, ::app::iOS::UIKit::UITextRange__typeof()));
    return uObjC::Struct::FromUno_CGRect(__return, ::CGRect());
}



- (CGRect) caretRectForPosition:(UITextPosition *)position
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::CoreGraphics::CGRect __return = __this->caretRectForPosition((::app::iOS::UIKit::UITextPosition*)uObjC::Lifetime::GetUnoObject(position, ::app::iOS::UIKit::UITextPosition__typeof()));
    return uObjC::Struct::FromUno_CGRect(__return, ::CGRect());
}



- (NSArray *) selectionRectsForRange:(UITextRange *)range
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::Foundation::NSArray* __return = __this->selectionRectsForRange((::app::iOS::UIKit::UITextRange*)uObjC::Lifetime::GetUnoObject(range, ::app::iOS::UIKit::UITextRange__typeof()));
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}



- (UITextPosition *) closestPositionToPoint:(CGPoint)point
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::UIKit::UITextPosition* __return = __this->closestPositionToPoint(uObjC::Struct::ToUno_CGPoint(point, ::app::iOS::CoreGraphics::CGPoint()));
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}



- (UITextPosition *) closestPositionToPoint:(CGPoint)point withinRange:(UITextRange *)range
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::UIKit::UITextPosition* __return = __this->closestPositionToPointWithinRange(uObjC::Struct::ToUno_CGPoint(point, ::app::iOS::CoreGraphics::CGPoint()), (::app::iOS::UIKit::UITextRange*)uObjC::Lifetime::GetUnoObject(range, ::app::iOS::UIKit::UITextRange__typeof()));
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}



- (UITextRange *) characterRangeAtPoint:(CGPoint)point
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::UIKit::UITextRange* __return = __this->characterRangeAtPoint(uObjC::Struct::ToUno_CGPoint(point, ::app::iOS::CoreGraphics::CGPoint()));
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}



- (BOOL) shouldChangeTextInRange:(UITextRange *)range replacementText:(NSString *)text
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    bool __return = __this->shouldChangeTextInRangeReplacementText((::app::iOS::UIKit::UITextRange*)uObjC::Lifetime::GetUnoObject(range, ::app::iOS::UIKit::UITextRange__typeof()), uObjC::UnoString(text));
    return (BOOL)__return;
}



- (NSDictionary *) textStylingAtPosition:(UITextPosition *)position inDirection:(UITextStorageDirection)direction
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::Foundation::NSDictionary* __return = __this->textStylingAtPositionInDirection((::app::iOS::UIKit::UITextPosition*)uObjC::Lifetime::GetUnoObject(position, ::app::iOS::UIKit::UITextPosition__typeof()), int(direction));
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}



- (UITextPosition *) positionWithinRange:(UITextRange *)range atCharacterOffset:(NSInteger)offset
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::UIKit::UITextPosition* __return = __this->positionWithinRangeAtCharacterOffset((::app::iOS::UIKit::UITextRange*)uObjC::Lifetime::GetUnoObject(range, ::app::iOS::UIKit::UITextRange__typeof()), (int)offset);
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}



- (NSInteger) characterOffsetOfPosition:(UITextPosition *)position withinRange:(UITextRange *)range
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    int __return = __this->characterOffsetOfPositionWithinRange((::app::iOS::UIKit::UITextPosition*)uObjC::Lifetime::GetUnoObject(position, ::app::iOS::UIKit::UITextPosition__typeof()), (::app::iOS::UIKit::UITextRange*)uObjC::Lifetime::GetUnoObject(range, ::app::iOS::UIKit::UITextRange__typeof()));
    return (long)__return;
}



- (void) insertDictationResult:(NSArray *)dictationResult
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->insertDictationResult((::app::iOS::Foundation::NSArray*)uObjC::Lifetime::GetUnoObject(dictationResult, ::app::iOS::Foundation::NSArray__typeof()));
}



- (void) dictationRecordingDidEnd
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->dictationRecordingDidEnd();
}



- (void) dictationRecognitionFailed
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->dictationRecognitionFailed();
}



- (id) insertDictationResultPlaceholder
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::id __return = __this->insertDictationResultPlaceholder();
    return (::id)__return;
}



- (CGRect) frameForDictationResultPlaceholder:(id)placeholder
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::CoreGraphics::CGRect __return = __this->frameForDictationResultPlaceholder((::id)placeholder);
    return uObjC::Struct::FromUno_CGRect(__return, ::CGRect());
}



- (void) removeDictationResultPlaceholder:(id)placeholder willInsertResult:(BOOL)willInsertResult
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->removeDictationResultPlaceholderWillInsertResult((::id)placeholder, (bool)willInsertResult);
}



- (UITextRange *) selectedTextRange
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::UIKit::UITextRange* __return = __this->selectedTextRange();
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}



- (void) setSelectedTextRange:(UITextRange *)selectedTextRange
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setSelectedTextRange((::app::iOS::UIKit::UITextRange*)uObjC::Lifetime::GetUnoObject(selectedTextRange, ::app::iOS::UIKit::UITextRange__typeof()));
}



- (UITextRange *) markedTextRange
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::UIKit::UITextRange* __return = __this->markedTextRange();
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}



- (NSDictionary *) markedTextStyle
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::Foundation::NSDictionary* __return = __this->markedTextStyle();
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}



- (void) setMarkedTextStyle:(NSDictionary *)markedTextStyle
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setMarkedTextStyle((::app::iOS::Foundation::NSDictionary*)uObjC::Lifetime::GetUnoObject(markedTextStyle, ::app::iOS::Foundation::NSDictionary__typeof()));
}



- (UITextPosition *) beginningOfDocument
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::UIKit::UITextPosition* __return = __this->beginningOfDocument();
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}



- (UITextPosition *) endOfDocument
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::UIKit::UITextPosition* __return = __this->endOfDocument();
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}



- (id<UITextInputDelegate>) inputDelegate
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::uObject* __return = __this->inputDelegate();
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return, ::app::iOS::UIKit::IUITextInputDelegate__typeof());
}



- (void) setInputDelegate:(id<UITextInputDelegate>)inputDelegate
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setInputDelegate(uObjC::Lifetime::GetUnoObject(inputDelegate, ::app::iOS::UIKit::Interop::IUITextInputDelegate__typeof()));
}



- (id<UITextInputTokenizer>) tokenizer
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::uObject* __return = __this->tokenizer();
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return, ::app::iOS::UIKit::IUITextInputTokenizer__typeof());
}



- (UIView *) textInputView
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::UIKit::UIView* __return = __this->textInputView();
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}



- (UITextStorageDirection) selectionAffinity
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    int __return = __this->selectionAffinity();
    return ::UITextStorageDirection(__return);
}



- (void) setSelectionAffinity:(UITextStorageDirection)selectionAffinity
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setSelectionAffinity(int(selectionAffinity));
}



- (BOOL) hasText
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    bool __return = __this->hasText();
    return (BOOL)__return;
}



- (void) insertText:(NSString *)text
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->insertText(uObjC::UnoString(text));
}



- (void) deleteBackward
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->deleteBackward();
}



- (UITextAutocapitalizationType) autocapitalizationType
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    int __return = __this->autocapitalizationType();
    return ::UITextAutocapitalizationType(__return);
}



- (void) setAutocapitalizationType:(UITextAutocapitalizationType)autocapitalizationType
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setAutocapitalizationType(int(autocapitalizationType));
}



- (UITextAutocorrectionType) autocorrectionType
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    int __return = __this->autocorrectionType();
    return ::UITextAutocorrectionType(__return);
}



- (void) setAutocorrectionType:(UITextAutocorrectionType)autocorrectionType
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setAutocorrectionType(int(autocorrectionType));
}



- (UITextSpellCheckingType) spellCheckingType
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    int __return = __this->spellCheckingType();
    return ::UITextSpellCheckingType(__return);
}



- (void) setSpellCheckingType:(UITextSpellCheckingType)spellCheckingType
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setSpellCheckingType(int(spellCheckingType));
}



- (UIKeyboardType) keyboardType
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    int __return = __this->keyboardType();
    return ::UIKeyboardType(__return);
}



- (void) setKeyboardType:(UIKeyboardType)keyboardType
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setKeyboardType(int(keyboardType));
}



- (UIKeyboardAppearance) keyboardAppearance
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    int __return = __this->keyboardAppearance();
    return ::UIKeyboardAppearance(__return);
}



- (void) setKeyboardAppearance:(UIKeyboardAppearance)keyboardAppearance
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setKeyboardAppearance(int(keyboardAppearance));
}



- (UIReturnKeyType) returnKeyType
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    int __return = __this->returnKeyType();
    return ::UIReturnKeyType(__return);
}



- (void) setReturnKeyType:(UIReturnKeyType)returnKeyType
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setReturnKeyType(int(returnKeyType));
}



- (BOOL) enablesReturnKeyAutomatically
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    bool __return = __this->enablesReturnKeyAutomatically();
    return (BOOL)__return;
}



- (void) setEnablesReturnKeyAutomatically:(BOOL)enablesReturnKeyAutomatically
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setEnablesReturnKeyAutomatically((bool)enablesReturnKeyAutomatically);
}



- (BOOL) isSecureTextEntry
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    bool __return = __this->isSecureTextEntry();
    return (BOOL)__return;
}



- (void) setSecureTextEntry:(BOOL)secureTextEntry
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setSecureTextEntry((bool)secureTextEntry);
}


@end
#endif // !uObjC_UNO_TYPE_IS_SEALED
