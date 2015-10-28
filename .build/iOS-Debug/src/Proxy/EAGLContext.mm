#define uObjC_NATIVE_TYPE EAGLContext
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::app::iOS::OpenGLES::EAGLContext*
#define uObjC_UNO_TYPE_OBJECT ::app::iOS::OpenGLES::EAGLContext__typeof()

#include <OpenGLES/EAGL.h>
#include <uObjC.Wrapper.h>
#include <uObjC.Proxy.h>

#if !uObjC_UNO_TYPE_IS_SEALED
@implementation uObjC_PROXY




























+ (EAGLContext *) currentContext
{
    ::app::iOS::OpenGLES::EAGLContext* __return = ::app::iOS::OpenGLES::EAGLContext___currentContext(NULL);
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}








































































@end
#endif // !uObjC_UNO_TYPE_IS_SEALED
