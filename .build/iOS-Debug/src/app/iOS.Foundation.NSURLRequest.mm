// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE NSURLRequest
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::app::iOS::Foundation::NSURLRequest*
#define uObjC_UNO_TYPE_OBJECT ::app::iOS::Foundation::NSURLRequest__typeof()

#include <Foundation/Foundation.h>
#include <uObjC.Wrapper.h>
#include <app/iOS.Foundation.NSURL.h>
#include <app/iOS.Foundation.NSURLRequest.h>

namespace app {
namespace iOS {
namespace Foundation {

NSURLRequest__uType* NSURLRequest__typeof()
{
    static ::uStaticStrong<NSURLRequest__uType*> type;
    if (type != NULL) return type;

    type = (NSURLRequest__uType*)::uAllocClassType(sizeof(NSURLRequest__uType), "iOS.Foundation.NSURLRequest", false, 1, 0, 0);

    type->SetBaseType(::app::iOS::Foundation::NSObject__typeof());

    type->SetInterfaces(
        ::app::iOS::Foundation::INSCopying__typeof(), offsetof(NSURLRequest__uType, __interface_0));

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}

void NSURLRequest___ObjInit_5(NSURLRequest* __this)
{
    ::app::iOS::Foundation::NSObject___ObjInit_2(__this);
}

void NSURLRequest__initWithURL(NSURLRequest* __this, ::app::iOS::Foundation::NSURL* URL_)
{
    uObjC_DO_INIT(@selector(initWithURL:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)URL_));
}

NSURLRequest* NSURLRequest__New_5(::uStatic* __this)
{
    NSURLRequest* inst = (NSURLRequest*)::uAllocObject(sizeof(NSURLRequest), NSURLRequest__typeof());
    inst->_ObjInit_5();
    return inst;
}

}}}
