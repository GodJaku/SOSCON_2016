#define uObjC_NATIVE_TYPE NSNumber
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::app::iOS::Foundation::NSNumber*
#define uObjC_UNO_TYPE_OBJECT ::app::iOS::Foundation::NSNumber__typeof()

#include <Foundation/Foundation.h>
#include <uObjC.Wrapper.h>
#include <uObjC.Proxy.h>

#if !uObjC_UNO_TYPE_IS_SEALED
@implementation uObjC_PROXY































































































































































































- (int) intValue
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    int __return = __this->intValue();
    return __return;
}





















































































































































































































@end
#endif // !uObjC_UNO_TYPE_IS_SEALED
