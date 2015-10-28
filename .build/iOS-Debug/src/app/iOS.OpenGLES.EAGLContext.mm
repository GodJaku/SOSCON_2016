// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE EAGLContext
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::app::iOS::OpenGLES::EAGLContext*
#define uObjC_UNO_TYPE_OBJECT ::app::iOS::OpenGLES::EAGLContext__typeof()

#include <OpenGLES/EAGL.h>
#include <uObjC.Wrapper.h>
#include <app/iOS.OpenGLES.EAGLContext.h>

namespace app {
namespace iOS {
namespace OpenGLES {

EAGLContext__uType* EAGLContext__typeof()
{
    static ::uStaticStrong<EAGLContext__uType*> type;
    if (type != NULL) return type;

    type = (EAGLContext__uType*)::uAllocClassType(sizeof(EAGLContext__uType), "iOS.OpenGLES.EAGLContext", false, 0, 0, 0);

    type->SetBaseType(::app::iOS::Foundation::NSObject__typeof());

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}

EAGLContext* EAGLContext___currentContext(::uStatic* __this)
{
    ::EAGLContext* __return = uObjC_SEND_MESSAGE_TO_CLASS(::EAGLContext*, @selector(currentContext));
    return (EAGLContext*)uObjC::Lifetime::GetUnoObject(__return, ::app::iOS::OpenGLES::EAGLContext__typeof());
}

}}}
