#define uObjC_NATIVE_TYPE NSMutableParagraphStyle
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::app::iOS::UIKit::NSMutableParagraphStyle*
#define uObjC_UNO_TYPE_OBJECT ::app::iOS::UIKit::NSMutableParagraphStyle__typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <uObjC.Proxy.h>

#if !uObjC_UNO_TYPE_IS_SEALED
@implementation uObjC_PROXY













































- (void) setAlignment:(NSTextAlignment)alignment
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setAlignment(int(alignment));
}































































- (void) setLineBreakMode:(NSLineBreakMode)lineBreakMode
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setLineBreakMode(int(lineBreakMode));
}










































































































































@end
#endif // !uObjC_UNO_TYPE_IS_SEALED