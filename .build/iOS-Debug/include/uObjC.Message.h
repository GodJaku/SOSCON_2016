#pragma once

#include <objc/message.h>

#define uObjC_DO_INIT(...)                                              \
    do {                                                                \
        if (uObjC_OBJECT_HANDLE(__this) == nil)                         \
            uObjC::Lifetime::AllocateNativeAndAttach(__this);           \
                                                                        \
        ::id __self                                                     \
            = uObjC_SEND_MESSAGE_TO_INSTANCE(::id, __VA_ARGS__);        \
                                                                        \
        if (uObjC_OBJECT_HANDLE(__this) != __self)                      \
            uObjC::Lifetime::ReattachAfterInit(__this, __self);         \
    } while (false)                                                     \
    /**/

#define uObjC_SEND_MESSAGE_TO_CLASS(returnType, ...)                    \
    uObjC_SEND_MESSAGE(                                                 \
        false, returnType, _uObjC_RECEIVER_FOR_CLASS, __VA_ARGS__)      \
    /**/

#define uObjC_SEND_MESSAGE_TO_INSTANCE(returnType, ...)                 \
    uObjC_SEND_MESSAGE(true, returnType, __this, __VA_ARGS__)           \
    /**/

#define uObjC_SEND_MESSAGE(isInstanceMethod, returnType, receiver, ...) \
    uObjC::Message::Send<bool(isInstanceMethod),                        \
        bool(_uObjC_NATIVE_TYPE_IS_INTERFACE),                          \
        bool(uObjC_UNO_TYPE_IS_SEALED),                                 \
        returnType >(receiver, __VA_ARGS__)                             \
    /**/

namespace uObjC { namespace Message {

    using ::Class;
    using ::id;
    using ::objc_super;
    using ::SEL;

    using ::uObject;

    namespace Detail {

#if !defined(__arm64__)
        template <class T>
        struct IsRecordType
        {
        private:
            typedef char YesType;
            typedef float NoType;

            template <class U> static YesType Test(void(U::*)());
            template <class U> static NoType Test(...);

        public:
            static const bool Value = sizeof(Test<T>(0)) == sizeof(YesType);
        };

# if !defined(__arm__)
#   define _uObjC_RETURN_ON_STACK_SIZE_CONSTRAINT   \
        (sizeof(T) > 2 * sizeof(void *))            \
        /**/
# else
#   define _uObjC_RETURN_ON_STACK_SIZE_CONSTRAINT   \
        (IsRecordType<T>::Value                     \
            ? (sizeof(T) > sizeof(void *))          \
            : (sizeof(T) > 4 * sizeof(void *)))     \
        /**/
# endif

        template <class T, bool EnableIf
            = _uObjC_RETURN_ON_STACK_SIZE_CONSTRAINT
                || !__has_trivial_copy(T)
                || !__has_trivial_destructor(T)>
        struct ReturnValueIsStackAllocated;

        template <class T>
        struct ReturnValueIsStackAllocated<T, true>
        {
            typedef void Type;
        };
#endif // !defined(__arm64__)

        //
        //  objc_msgSend, objc_msgSend_fpret, objc_msgSend_fp2ret,
        //  and objc_msgSend_stret
        //

        template <class RT>
        struct MessageSendPlainSender
        {
            typedef RT (*SendMessageFunctionType) (id, SEL, ...);
            static SendMessageFunctionType SendMessageFunction()
            {
                return (SendMessageFunctionType) ::objc_msgSend;
            }
        };

#if !defined(__arm64__)
        template <class RT>
        struct MessageSendStructSender
        {
            typedef RT (*SendMessageFunctionType) (id, SEL, ...);
            static SendMessageFunctionType SendMessageFunction()
            {
                return (SendMessageFunctionType) ::objc_msgSend_stret;
            }
        };
#endif

#if defined(__i386__) || defined(__x86_64__)
        template <class RT>
        struct MessageSendFloatingPointSender
        {
            typedef RT (*SendMessageFunctionType) (id, SEL, ...);
            static SendMessageFunctionType SendMessageFunction()
            {
                return (SendMessageFunctionType) ::objc_msgSend_fpret;
            }
        };

#endif // __i386__ || __x86_64__

#if defined(__x86_64__)
        template <class RT>
        struct MessageSendFloatingPoint2Sender
        {
            typedef RT (*SendMessageFunctionType) (id, SEL, ...);
            static SendMessageFunctionType SendMessageFunction()
            {
                return (SendMessageFunctionType) ::objc_msgSend_fp2ret;
            }
        };
#endif // __x86_64__

        template <class RT, class SFINAE = void>
        struct MessageSendSenderBase
            : MessageSendPlainSender<RT>
        {
        };

#if !defined(__arm64__)
        template <class RT>
        struct MessageSendSenderBase<
                RT, typename ReturnValueIsStackAllocated<RT>::Type>
            : MessageSendStructSender<RT>
        {
        };
#endif

#if defined(__i386__)
        template <>
        struct MessageSendSenderBase<float>
            : MessageSendFloatingPointSender<float>
        {
        };

        template <>
        struct MessageSendSenderBase<double>
            : MessageSendFloatingPointSender<double>
        {
        };

        template <>
        struct MessageSendSenderBase<long double>
            : MessageSendFloatingPointSender<long double>
        {
        };
#endif // __i386__

#if defined(__x86_64__)
        template <>
        struct MessageSendSenderBase<long double>
            : MessageSendFloatingPointSender<long double>
        {
        };

#if __STDC_VERSION__ >= 199901L
        template <>
        struct MessageSendSenderBase<_Complex long double>
            : MessageSendFloatingPoint2Sender<_Complex long double>
        {
        };
#endif
#endif // __x86_64__

        template <class RT>
        struct MessageSendSender
            : MessageSendSenderBase<RT>
        {
            typedef id ReceiverType;

            static ReceiverType Receiver(uType *type)
            {
                return (id) uObjC::Lifetime::GetNativeClass(type);
            }

            static ReceiverType Receiver(uObject *object)
            {
                return uObjC::Lifetime::GetNativeHandle(object);
            }
        };

        //
        //  objc_msgSendSuper, and objc_msgSendSuper_stret
        //

        template <class RT>
        struct MessageSendSuperPlainSender
        {
            typedef RT (*SendMessageFunctionType) (objc_super *, SEL, ...);
            static SendMessageFunctionType SendMessageFunction()
            {
                return (SendMessageFunctionType) ::objc_msgSendSuper;
            }
        };

#if !defined(__arm64__)
        template <class RT>
        struct MessageSendSuperStructSender
        {
            typedef RT (*SendMessageFunctionType) (objc_super *, SEL, ...);
            static SendMessageFunctionType SendMessageFunction()
            {
                return (SendMessageFunctionType) ::objc_msgSendSuper_stret;
            }
        };
#endif

        ////////////////////////////////////////////////////////////////////////
        template <class RT, class SFINAE = void>
        struct MessageSendSuperSenderBase
            : MessageSendSuperPlainSender<RT>
        {
        };

#if !defined(__arm64__)
        template <class RT>
        struct MessageSendSuperSenderBase<
                RT, typename ReturnValueIsStackAllocated<RT>::Type>
            : MessageSendSuperStructSender<RT>
        {
        };
#endif

        template <class RT>
        struct MessageSendSuperSender
            : MessageSendSuperSenderBase<RT>
        {
            typedef objc_super *ReceiverType;
            ReceiverType Receiver(uObject *object)
            {
                id self = uObjC::Lifetime::GetNativeHandle(object);
                Class cls = uObjC::Lifetime::GetNativeClass(object);

                super.receiver = self;
                super.super_class = cls;

                return &super;
            }

            objc_super super;
        };

        ////////////////////////////////////////////////////////////////////////
        template <
            bool IsInstanceMethod,
            bool IsInterface,
            bool IsSealed,
            class RT>
        struct MessageSender
            : MessageSendSender<RT>
        {
        };

        // Class Wrapper, Instance Method
        template <class RT>
        struct MessageSender<true, false, false, RT>
            : MessageSendSuperSender<RT>
        {
        };

        // Interface wrapper, class method
        template <class RT>
        struct MessageSender<false, true, false, RT>
            : MessageSendSender<RT>
        {
            typedef id ReceiverType;
            static ReceiverType Receiver(uObject *object)
            {
                return (id) ::object_getClass(
                    MessageSendSender<RT>::Receiver(object));
            }
        };

    } // namespace Detail

    template<bool IsInstanceMethod, bool IsInterface, bool IsSealed, class RT,
        class Recv, class...Params>
    inline RT Send(Recv recv, SEL _cmd, Params...params)
    {
        typedef Detail::MessageSender<
            IsInstanceMethod, IsInterface, IsSealed, RT> MessageSender;
        typedef typename MessageSender::ReceiverType ReceiverType;
        typedef RT (*SendMessageFn) (ReceiverType, SEL, Params...);

        MessageSender sender;
        SendMessageFn msgSend = (SendMessageFn) sender.SendMessageFunction();
        ReceiverType receiver = sender.Receiver(recv);

        return msgSend(receiver, _cmd, params...);
    }
}} // namespace uObjC::Message
