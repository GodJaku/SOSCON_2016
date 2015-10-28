#define uObjC_NATIVE_TYPE_IS_INTERFACE 1
#define uObjC_NATIVE_TYPE UITextInputTokenizer
#define uObjC_UNO_TYPE ::uObject*
#define uObjC_UNO_TYPE_OBJECT ::app::iOS::UIKit::IUITextInputTokenizer__typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <uObjC.Proxy.h>

#if !uObjC_UNO_TYPE_IS_SEALED
@implementation uObjC_PROXY


- (UITextRange *) rangeEnclosingPosition:(UITextPosition *)position withGranularity:(UITextGranularity)granularity inDirection:(UITextDirection)direction
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::UIKit::UITextRange* __return = ::app::iOS::UIKit::IUITextInputTokenizer::rangeEnclosingPositionWithGranularityInDirection(__this, (::app::iOS::UIKit::UITextPosition*)uObjC::Lifetime::GetUnoObject(position, ::app::iOS::UIKit::UITextPosition__typeof()), int(granularity), (int)direction);
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}



- (BOOL) isPosition:(UITextPosition *)position atBoundary:(UITextGranularity)granularity inDirection:(UITextDirection)direction
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    bool __return = ::app::iOS::UIKit::IUITextInputTokenizer::isPositionAtBoundaryInDirection(__this, (::app::iOS::UIKit::UITextPosition*)uObjC::Lifetime::GetUnoObject(position, ::app::iOS::UIKit::UITextPosition__typeof()), int(granularity), (int)direction);
    return (BOOL)__return;
}



- (UITextPosition *) positionFromPosition:(UITextPosition *)position toBoundary:(UITextGranularity)granularity inDirection:(UITextDirection)direction
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::UIKit::UITextPosition* __return = ::app::iOS::UIKit::IUITextInputTokenizer::positionFromPositionToBoundaryInDirection(__this, (::app::iOS::UIKit::UITextPosition*)uObjC::Lifetime::GetUnoObject(position, ::app::iOS::UIKit::UITextPosition__typeof()), int(granularity), (int)direction);
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}



- (BOOL) isPosition:(UITextPosition *)position withinTextUnit:(UITextGranularity)granularity inDirection:(UITextDirection)direction
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    bool __return = ::app::iOS::UIKit::IUITextInputTokenizer::isPositionWithinTextUnitInDirection(__this, (::app::iOS::UIKit::UITextPosition*)uObjC::Lifetime::GetUnoObject(position, ::app::iOS::UIKit::UITextPosition__typeof()), int(granularity), (int)direction);
    return (BOOL)__return;
}


@end
#endif // !uObjC_UNO_TYPE_IS_SEALED
