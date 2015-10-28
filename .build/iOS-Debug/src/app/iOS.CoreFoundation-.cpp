#include <app/iOS.CoreFoundation.CFStringRef.h>

namespace app {
namespace iOS {
namespace CoreFoundation {

// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/opaque/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

CFStringRef__uType* CFStringRef__typeof()
{
    static ::uStaticStrong<CFStringRef__uType*> type;
    if (type != NULL) return type;

    type = (CFStringRef__uType*)::uAllocStructType(sizeof(CFStringRef__uType), "iOS.CoreFoundation.CFStringRef", sizeof(app::CFStringRef*), 0, 0, 0);

    return type;
}

}}}
