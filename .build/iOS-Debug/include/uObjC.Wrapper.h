#pragma once

#include <uObjC.h>
#include <uObjC.Lifetime.h>

#include <uObjC.Class.h>
#include <uObjC.Interface.h>
#include <uObjC.Struct.h>

#include <uObjC.Message.h>

#if !defined(uObjC_NATIVE_TYPE) \
    || !defined(uObjC_UNO_TYPE) || !defined(uObjC_UNO_TYPE_OBJECT)
#error "Required #defines are missing."
#endif

#if uObjC_NATIVE_TYPE_IS_INTERFACE
#include <uObjC.WrapperInterface.h>
#else
#include <uObjC.WrapperClass.h>
#endif
