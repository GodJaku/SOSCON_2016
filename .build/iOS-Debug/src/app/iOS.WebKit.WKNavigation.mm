// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE WKNavigation
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::app::iOS::WebKit::WKNavigation*
#define uObjC_UNO_TYPE_OBJECT ::app::iOS::WebKit::WKNavigation__typeof()

#include <WebKit/WebKit.h>
#include <uObjC.Wrapper.h>
#include <app/iOS.WebKit.WKNavigation.h>

namespace app {
namespace iOS {
namespace WebKit {

WKNavigation__uType* WKNavigation__typeof()
{
    static ::uStaticStrong<WKNavigation__uType*> type;
    if (type != NULL) return type;

    type = (WKNavigation__uType*)::uAllocClassType(sizeof(WKNavigation__uType), "iOS.WebKit.WKNavigation", false, 0, 0, 0);

    type->SetBaseType(::app::iOS::Foundation::NSObject__typeof());

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}

}}}
