#define uObjC_NATIVE_TYPE UIImagePickerController
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::app::iOS::UIKit::UIImagePickerController*
#define uObjC_UNO_TYPE_OBJECT ::app::iOS::UIKit::UIImagePickerController__typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <uObjC.Proxy.h>

#if !uObjC_UNO_TYPE_IS_SEALED
@implementation uObjC_PROXY


+ (BOOL) isSourceTypeAvailable:(UIImagePickerControllerSourceType)sourceType
{
    bool __return = ::app::iOS::UIKit::UIImagePickerController___isSourceTypeAvailable(NULL, int(sourceType));
    return (BOOL)__return;
}



+ (NSArray *) availableMediaTypesForSourceType:(UIImagePickerControllerSourceType)sourceType
{
    ::app::iOS::Foundation::NSArray* __return = ::app::iOS::UIKit::UIImagePickerController___availableMediaTypesForSourceType(NULL, int(sourceType));
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}




















































- (UIImagePickerControllerSourceType) sourceType
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    int __return = __this->sourceType();
    return ::UIImagePickerControllerSourceType(__return);
}



- (void) setSourceType:(UIImagePickerControllerSourceType)sourceType
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setSourceType(int(sourceType));
}



- (NSArray *) mediaTypes
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::Foundation::NSArray* __return = __this->mediaTypes();
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}



- (void) setMediaTypes:(NSArray *)mediaTypes
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setMediaTypes((::app::iOS::Foundation::NSArray*)uObjC::Lifetime::GetUnoObject(mediaTypes, ::app::iOS::Foundation::NSArray__typeof()));
}













































































































































































- (id<UIImagePickerControllerDelegate>) delegate
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::uObject* __return = __this->delegate__1();
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return, ::app::iOS::UIKit::IUIImagePickerControllerDelegate__typeof());
}



- (void) setDelegate:(id<UIImagePickerControllerDelegate>)delegate
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setDelegate_1(uObjC::Lifetime::GetUnoObject(delegate, ::app::iOS::UIKit::Interop::IUIImagePickerControllerDelegate__typeof()));
}


@end
#endif // !uObjC_UNO_TYPE_IS_SEALED
