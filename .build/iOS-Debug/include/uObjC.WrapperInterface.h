#pragma once

#define _uObjC_NATIVE_TYPE_IS_INTERFACE 1
#define _uObjC_RECEIVER_FOR_CLASS __this

#define _uObjC_NATIVE_CLASS (::id) @protocol(uObjC_NATIVE_TYPE)
#define _uObjC_PROXY_CLASS [::uObjC_PROXY class]

#define uObjC_UNO_TYPE_IS_SEALED 0
#define uObjC_PROXY uObjC_PROXY_INTERFACE(uObjC_NATIVE_TYPE)


@interface uObjC_PROXY : NSObject <uObjC_NATIVE_TYPE>
{
    uObject *unoObject_;
}
@end
