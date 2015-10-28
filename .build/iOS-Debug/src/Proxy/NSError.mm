#define uObjC_NATIVE_TYPE NSError
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::app::iOS::Foundation::NSError*
#define uObjC_UNO_TYPE_OBJECT ::app::iOS::Foundation::NSError__typeof()

#include <Foundation/Foundation.h>
#include <uObjC.Wrapper.h>
#include <uObjC.Proxy.h>

#if !uObjC_UNO_TYPE_IS_SEALED
@implementation uObjC_PROXY




























- (NSInteger) code
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    int __return = __this->code();
    return (long)__return;
}


























































































@end
#endif // !uObjC_UNO_TYPE_IS_SEALED
