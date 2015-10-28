// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE NSURLCache
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::app::iOS::Foundation::NSURLCache*
#define uObjC_UNO_TYPE_OBJECT ::app::iOS::Foundation::NSURLCache__typeof()

#include <Foundation/Foundation.h>
#include <uObjC.Wrapper.h>
#include <app/iOS.Foundation.NSURLCache.h>

namespace app {
namespace iOS {
namespace Foundation {

NSURLCache__uType* NSURLCache__typeof()
{
    static ::uStaticStrong<NSURLCache__uType*> type;
    if (type != NULL) return type;

    type = (NSURLCache__uType*)::uAllocClassType(sizeof(NSURLCache__uType), "iOS.Foundation.NSURLCache", false, 0, 0, 0);

    type->SetBaseType(::app::iOS::Foundation::NSObject__typeof());

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}

NSURLCache* NSURLCache___sharedURLCache(::uStatic* __this)
{
    ::NSURLCache* __return = uObjC_SEND_MESSAGE_TO_CLASS(::NSURLCache*, @selector(sharedURLCache));
    return (NSURLCache*)uObjC::Lifetime::GetUnoObject(__return, ::app::iOS::Foundation::NSURLCache__typeof());
}

void NSURLCache__removeAllCachedResponses(NSURLCache* __this)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(removeAllCachedResponses));
}

}}}
