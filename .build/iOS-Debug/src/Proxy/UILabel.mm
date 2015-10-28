#define uObjC_NATIVE_TYPE UILabel
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::app::iOS::UIKit::UILabel*
#define uObjC_UNO_TYPE_OBJECT ::app::iOS::UIKit::UILabel__typeof()

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



- (NSLineBreakMode) lineBreakMode
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    int __return = __this->lineBreakMode();
    return ::NSLineBreakMode(__return);
}



- (void) setLineBreakMode:(NSLineBreakMode)lineBreakMode
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setLineBreakMode(int(lineBreakMode));
}






















































- (BOOL) isUserInteractionEnabled
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    bool __return = __this->isUserInteractionEnabled();
    return (BOOL)__return;
}



- (void) setUserInteractionEnabled:(BOOL)userInteractionEnabled
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setUserInteractionEnabled((bool)userInteractionEnabled);
}




















- (NSInteger) numberOfLines
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    int __return = __this->numberOfLines();
    return (long)__return;
}



- (void) setNumberOfLines:(NSInteger)numberOfLines
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setNumberOfLines((int)numberOfLines);
}

























































































































@end
#endif // !uObjC_UNO_TYPE_IS_SEALED
