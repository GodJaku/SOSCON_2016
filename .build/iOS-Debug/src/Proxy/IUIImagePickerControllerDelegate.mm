#define uObjC_NATIVE_TYPE_IS_INTERFACE 1
#define uObjC_NATIVE_TYPE UIImagePickerControllerDelegate
#define uObjC_UNO_TYPE ::uObject*
#define uObjC_UNO_TYPE_OBJECT ::app::iOS::UIKit::IUIImagePickerControllerDelegate__typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <uObjC.Proxy.h>

#if !uObjC_UNO_TYPE_IS_SEALED
@implementation uObjC_PROXY


- (void) imagePickerController:(UIImagePickerController *)picker didFinishPickingImage:(UIImage *)image editingInfo:(NSDictionary *)editingInfo
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::UIKit::IUIImagePickerControllerDelegate::imagePickerControllerDidFinishPickingImageEditingInfo(__this, (::app::iOS::UIKit::UIImagePickerController*)uObjC::Lifetime::GetUnoObject(picker, ::app::iOS::UIKit::UIImagePickerController__typeof()), (::app::iOS::UIKit::UIImage*)uObjC::Lifetime::GetUnoObject(image, ::app::iOS::UIKit::UIImage__typeof()), (::app::iOS::Foundation::NSDictionary*)uObjC::Lifetime::GetUnoObject(editingInfo, ::app::iOS::Foundation::NSDictionary__typeof()));
}



- (void) imagePickerController:(UIImagePickerController *)picker didFinishPickingMediaWithInfo:(NSDictionary *)info
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::UIKit::IUIImagePickerControllerDelegate::imagePickerControllerDidFinishPickingMediaWithInfo(__this, (::app::iOS::UIKit::UIImagePickerController*)uObjC::Lifetime::GetUnoObject(picker, ::app::iOS::UIKit::UIImagePickerController__typeof()), (::app::iOS::Foundation::NSDictionary*)uObjC::Lifetime::GetUnoObject(info, ::app::iOS::Foundation::NSDictionary__typeof()));
}



- (void) imagePickerControllerDidCancel:(UIImagePickerController *)picker
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::app::iOS::UIKit::IUIImagePickerControllerDelegate::imagePickerControllerDidCancel(__this, (::app::iOS::UIKit::UIImagePickerController*)uObjC::Lifetime::GetUnoObject(picker, ::app::iOS::UIKit::UIImagePickerController__typeof()));
}


@end
#endif // !uObjC_UNO_TYPE_IS_SEALED
