// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE CIImage
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::app::iOS::CoreImage::CIImage*
#define uObjC_UNO_TYPE_OBJECT ::app::iOS::CoreImage::CIImage__typeof()

#include <CoreImage/CoreImage.h>
#include <uObjC.Wrapper.h>
#include <app/iOS.CoreImage.CIImage.h>
#include <app/iOS.Foundation.NSURL.h>

namespace app {
namespace iOS {
namespace CoreImage {

CIImage__uType* CIImage__typeof()
{
    static ::uStaticStrong<CIImage__uType*> type;
    if (type != NULL) return type;

    type = (CIImage__uType*)::uAllocClassType(sizeof(CIImage__uType), "iOS.CoreImage.CIImage", false, 1, 0, 0);

    type->SetBaseType(::app::iOS::Foundation::NSObject__typeof());

    type->SetInterfaces(
        ::app::iOS::Foundation::INSCopying__typeof(), offsetof(CIImage__uType, __interface_0));

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}

CIImage* CIImage___imageWithContentsOfURL(::uStatic* __this, ::app::iOS::Foundation::NSURL* url_)
{
    ::CIImage* __return = uObjC_SEND_MESSAGE_TO_CLASS(::CIImage*, @selector(imageWithContentsOfURL:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)url_));
    return (CIImage*)uObjC::Lifetime::GetUnoObject(__return, ::app::iOS::CoreImage::CIImage__typeof());
}

}}}
