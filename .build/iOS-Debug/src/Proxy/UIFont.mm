#define uObjC_NATIVE_TYPE UIFont
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::app::iOS::UIKit::UIFont*
#define uObjC_UNO_TYPE_OBJECT ::app::iOS::UIKit::UIFont__typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <uObjC.Proxy.h>

#if !uObjC_UNO_TYPE_IS_SEALED
@implementation uObjC_PROXY










+ (UIFont *) fontWithName:(NSString *)fontName size:(CGFloat)fontSize
{
    ::app::iOS::UIKit::UIFont* __return = ::app::iOS::UIKit::UIFont___fontWithNameSize(NULL, uObjC::UnoString(fontName), (double)fontSize);
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}



















+ (UIFont *) systemFontOfSize:(CGFloat)fontSize
{
    ::app::iOS::UIKit::UIFont* __return = ::app::iOS::UIKit::UIFont___systemFontOfSize(NULL, (double)fontSize);
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}






























































- (NSString *) fontName
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::uString* __return = __this->fontName();
    return uObjC::NativeString(__return);
}
















































- (CGFloat) lineHeight
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    double __return = __this->lineHeight();
    return (CGFloat)__return;
}











































@end
#endif // !uObjC_UNO_TYPE_IS_SEALED
