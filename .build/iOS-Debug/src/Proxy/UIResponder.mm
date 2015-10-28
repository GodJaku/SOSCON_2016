#define uObjC_NATIVE_TYPE UIResponder
#define uObjC_UNO_TYPE_IS_SEALED 0
#define uObjC_UNO_TYPE ::app::iOS::UIKit::UIResponder*
#define uObjC_UNO_TYPE_OBJECT ::app::iOS::UIKit::UIResponder__typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <uObjC.Proxy.h>

#if !uObjC_UNO_TYPE_IS_SEALED
@implementation uObjC_PROXY




















- (BOOL) becomeFirstResponder
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    bool __return = __this->becomeFirstResponder();
    return (BOOL)__return;
}












- (BOOL) resignFirstResponder
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    bool __return = __this->resignFirstResponder();
    return (BOOL)__return;
}



- (BOOL) isFirstResponder
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    bool __return = __this->isFirstResponder();
    return (BOOL)__return;
}












































































































































































































@end
#endif // !uObjC_UNO_TYPE_IS_SEALED
