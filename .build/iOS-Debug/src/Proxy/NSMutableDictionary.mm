#define uObjC_NATIVE_TYPE NSMutableDictionary
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::app::iOS::Foundation::NSMutableDictionary*
#define uObjC_UNO_TYPE_OBJECT ::app::iOS::Foundation::NSMutableDictionary__typeof()

#include <Foundation/Foundation.h>
#include <uObjC.Wrapper.h>
#include <uObjC.Proxy.h>

#if !uObjC_UNO_TYPE_IS_SEALED
@implementation uObjC_PROXY










- (void) setObject:(id)anObject forKey:(id<NSCopying>)aKey
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setObjectForKey((::id)anObject, uObjC::Lifetime::GetUnoObject(aKey, ::app::iOS::Foundation::Interop::INSCopying__typeof()));
}



- (instancetype) init
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->init();
    return uObjC_OBJECT_HANDLE(__this);
}





































+ (instancetype) dictionaryWithCapacity:(NSUInteger)numItems
{
    ::id __return = ::app::iOS::Foundation::NSMutableDictionary___dictionaryWithCapacity(NULL, (::uULong)numItems);
    return (::id)__return;
}












































































@end
#endif // !uObjC_UNO_TYPE_IS_SEALED
