#define uObjC_NATIVE_TYPE NSTextContainer
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::app::iOS::UIKit::NSTextContainer*
#define uObjC_UNO_TYPE_OBJECT ::app::iOS::UIKit::NSTextContainer__typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <uObjC.Proxy.h>

#if !uObjC_UNO_TYPE_IS_SEALED
@implementation uObjC_PROXY


- (instancetype) initWithSize:(CGSize)size
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->initWithSize(uObjC::Struct::ToUno_CGSize(size, ::app::iOS::CoreGraphics::CGSize()));
    return uObjC_OBJECT_HANDLE(__this);
}
















































































- (void) setLineFragmentPadding:(CGFloat)lineFragmentPadding
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setLineFragmentPadding((double)lineFragmentPadding);
}























































































@end
#endif // !uObjC_UNO_TYPE_IS_SEALED
