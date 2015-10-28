#pragma once

#define _uObjC_NATIVE_TYPE_IS_INTERFACE 0
#define _uObjC_RECEIVER_FOR_CLASS uObjC_UNO_TYPE_OBJECT

#define _uObjC_NATIVE_CLASS [::uObjC_NATIVE_TYPE class]

#if uObjC_UNO_TYPE_IS_SEALED
#   define _uObjC_PROXY_CLASS Nil
#else // !uObjC_UNO_TYPE_IS_SEALED
#   define _uObjC_PROXY_CLASS [::uObjC_PROXY class]

#   define uObjC_PROXY uObjC_PROXY_CLASS(uObjC_NATIVE_TYPE)
@interface uObjC_PROXY : uObjC_NATIVE_TYPE
{
    uObjC::Lifetime::HybridHandle *handle_;
}
@end
#endif // !uObjC_UNO_TYPE_IS_SEALED
