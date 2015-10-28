#define uObjC_NATIVE_TYPE_IS_INTERFACE 1
#define uObjC_NATIVE_TYPE UITextInputDelegate
#define uObjC_UNO_TYPE ::uObject*
#define uObjC_UNO_TYPE_OBJECT ::app::iOS::UIKit::IUITextInputDelegate__typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <uObjC.Proxy.h>

#if !uObjC_UNO_TYPE_IS_SEALED
@implementation uObjC_PROXY


- (void) selectionWillChange:(id<UITextInput>)textInput
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::UIKit::IUITextInputDelegate::selectionWillChange(__this, uObjC::Lifetime::GetUnoObject(textInput, ::app::iOS::UIKit::Interop::IUITextInput__typeof()));
}



- (void) selectionDidChange:(id<UITextInput>)textInput
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::UIKit::IUITextInputDelegate::selectionDidChange(__this, uObjC::Lifetime::GetUnoObject(textInput, ::app::iOS::UIKit::Interop::IUITextInput__typeof()));
}



- (void) textWillChange:(id<UITextInput>)textInput
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::UIKit::IUITextInputDelegate::textWillChange(__this, uObjC::Lifetime::GetUnoObject(textInput, ::app::iOS::UIKit::Interop::IUITextInput__typeof()));
}



- (void) textDidChange:(id<UITextInput>)textInput
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::UIKit::IUITextInputDelegate::textDidChange(__this, uObjC::Lifetime::GetUnoObject(textInput, ::app::iOS::UIKit::Interop::IUITextInput__typeof()));
}


@end
#endif // !uObjC_UNO_TYPE_IS_SEALED
