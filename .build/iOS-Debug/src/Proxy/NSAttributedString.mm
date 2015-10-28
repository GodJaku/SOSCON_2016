#define uObjC_NATIVE_TYPE NSAttributedString
#define uObjC_UNO_TYPE_IS_SEALED 0
#define uObjC_UNO_TYPE ::app::iOS::Foundation::NSAttributedString*
#define uObjC_UNO_TYPE_OBJECT ::app::iOS::Foundation::NSAttributedString__typeof()

#include <Foundation/Foundation.h>
#include <uObjC.Wrapper.h>
#include <uObjC.Proxy.h>

#if !uObjC_UNO_TYPE_IS_SEALED
@implementation uObjC_PROXY






































- (instancetype) initWithString:(NSString *)str attributes:(NSDictionary *)attrs
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->initWithStringAttributes(uObjC::UnoString(str), (::app::iOS::Foundation::NSDictionary*)uObjC::Lifetime::GetUnoObject(attrs, ::app::iOS::Foundation::NSDictionary__typeof()));
    return uObjC_OBJECT_HANDLE(__this);
}













































@end
#endif // !uObjC_UNO_TYPE_IS_SEALED
