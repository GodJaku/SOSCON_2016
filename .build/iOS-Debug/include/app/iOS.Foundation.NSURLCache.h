// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_I_O_S_FOUNDATION_N_S_U_R_L_CACHE_H__
#define __APP_I_O_S_FOUNDATION_N_S_U_R_L_CACHE_H__

#include <app/iOS.Foundation.NSObject.h>
#include <Uno.h>

namespace app {
namespace iOS {
namespace Foundation {

struct NSURLCache;

struct NSURLCache__uType : ::app::iOS::Foundation::NSObject__uType
{
};

NSURLCache__uType* NSURLCache__typeof();

NSURLCache* NSURLCache___sharedURLCache(::uStatic* __this);
void NSURLCache__removeAllCachedResponses(NSURLCache* __this);

struct NSURLCache : ::app::iOS::Foundation::NSObject
{
    void removeAllCachedResponses() { NSURLCache__removeAllCachedResponses(this); }
};

}}}


#endif
