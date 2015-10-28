#pragma once

#include <Uno/Uno.h>
#include <Xli/Exception.h>
#include <objc/objc.h>

#if __OBJC__
@class NSException, NSString;
#else
struct NSException;
struct NSString;
#endif

namespace uObjC {

    using ::Class;
    using ::id;
    using ::NSException;
    using ::NSString;
    using ::SEL;

    using ::uObject;
    using ::uInterfaceType;
    using ::uString;
    using ::uType;

    template <class T> void UnusedVariable(T const &) { }

    struct Exception
        : Xli::Exception
    {
        Exception(NSException *exception, char const *function, int line)
            XLI_NOEXCEPT;

        ~Exception() XLI_NOEXCEPT;

        NSException *GetNativeException() const XLI_NOEXCEPT
        {
            return _exception;
        }

    private:
        NSException *_exception;
    };

    uString *UnoString(NSString *string);
    NSString *NativeString(uString *string);

    // Should be ::objc_selector/::SEL, but that affects binary compatibility
    // between Objective C++ and C++, see clang PR21688.
    struct Selector
    {
        Selector(SEL selector = NULL) : selector_(selector) { }
        operator SEL() const { return selector_; }

    private:
        SEL selector_;
    };

    uString *UnoString(Selector);
    Selector NativeSelector(uString *);

    struct Protocol
    {
        Protocol(id protocol = nil) : protocol_(protocol) { }
        operator id() const { return protocol_; }

    private:
        id protocol_;
    };

    uString *UnoString(Protocol);
    Protocol NativeProtocol(uString *);

    template <class RT, class...Args>
    using Block = RT (^)(Args...);

} // namespace uObjC




#include <app/ObjC.Object.h>

#define uObjC_OBJECT_TYPE ::app::ObjC::Object*
#define uObjC_OBJECT_TYPE_OBJECT ::app::ObjC::Object__typeof()
#define uObjC_OBJECT_HANDLE(obj) obj->__handle

#define uObjC_AS_OBJECT(obj) \
    ::uCast< uObjC_OBJECT_TYPE>(obj, uObjC_OBJECT_TYPE_OBJECT)

#define uObjC_PROXY_CLASS(class) _uObjC_PROXY_NAME(uno_, class)
#define uObjC_PROXY_INTERFACE(interface) _uObjC_PROXY_NAME(uno_I, interface)

#define _uObjC_PROXY_NAME(prefix, name) prefix ## name ## _Proxy

#define uObjC_PROXY_FUNCTION_PROLOGUE                               \
    uAutoReleasePool __autoreleasepool;                             \
    uObjC::UnusedVariable(__autoreleasepool);                       \
                                                                    \
    uObjC_UNO_TYPE __this = static_cast< uObjC_UNO_TYPE>(           \
        uObjC::Lifetime::GetUnoObject(self, uObjC_UNO_TYPE_OBJECT));\
    /**/

#define uObjC_REGISTER_TYPE()                                       \
    uObjC::Lifetime::RegisterType(type, sizeof(*(uObjC_UNO_TYPE)0), \
        _uObjC_NATIVE_CLASS, _uObjC_PROXY_CLASS)                    \
    /**/

