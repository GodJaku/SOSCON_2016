#define uObjC_NATIVE_TYPE UIControlCallback
#define uObjC_UNO_TYPE_IS_SEALED 0
#define uObjC_UNO_TYPE ::app::Fuse::iOS::UIControlCallback*
#define uObjC_UNO_TYPE_OBJECT ::app::Fuse::iOS::UIControlCallback__typeof()

#include "Implementation/UIControlCallback.h"
#include <uObjC.Wrapper.h>
#include <uObjC.Proxy.h>

#if !uObjC_UNO_TYPE_IS_SEALED
@implementation uObjC_PROXY


- (void) callback:(id)sender:(UIEvent *)uiEvent
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->callback((::app::iOS::Foundation::NSObject*)uObjC::Lifetime::GetUnoObject(sender, ::app::iOS::Foundation::NSObject__typeof()), (::app::iOS::UIKit::UIEvent*)uObjC::Lifetime::GetUnoObject(uiEvent, ::app::iOS::UIKit::UIEvent__typeof()));
}



- (SEL) callbackSelector
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    uObjC::Selector __return = __this->callbackSelector();
    return (::SEL)__return;
}


@end
#endif // !uObjC_UNO_TYPE_IS_SEALED