#pragma once

struct uString;

#ifdef __OBJC__
@class NSObject;
#else
struct NSObject;
#endif

namespace app { namespace Uno { namespace Net { namespace Http { struct HttpMessageHandlerRequest; } } } }

namespace Uno {
    namespace Net {
    namespace Http {
    namespace iOS
{
    void SetupSharedCache(bool isCacheEnabled = true, size_t sizeInBytes = 0);
    void PurgeSharedCache();

    struct HttpRequest
    {
        struct Private;

        HttpRequest(
            ::app::Uno::Net::Http::HttpMessageHandlerRequest* unoRequest,
            uString *method, uString *url);
        ~HttpRequest();

        void SetTimeout(int ms);
        void SetCacheEnabled(bool isCacheEnabled);
        void SetHeader(uString *key, uString *value);

        void SendAsync(uString *content);
        void SendAsync(const void *data, size_t length);

        void Abort();

        int GetResponseStatus() const;
        uString *GetResponseHeader(uString *key) const;
        uString *GetResponseHeaders() const;
        uString *GetResponseContentString() const;
        uArray *GetResponseContentByteArray() const;

    private:
        HttpRequest(HttpRequest const &);
        void operator=(HttpRequest);

        ::app::Uno::Net::Http::HttpMessageHandlerRequest* unoRequest_;

        NSObject *requestTaskOrResponse_;
        uStrong<uObject *> responseContent_;
    };

}}}} // namespace Uno::Net::Http::Implementation::iOS
