// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE UIImagePickerController
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::app::iOS::UIKit::UIImagePickerController*
#define uObjC_UNO_TYPE_OBJECT ::app::iOS::UIKit::UIImagePickerController__typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <app/iOS.Foundation.NSArray.h>
#include <app/iOS.UIKit.IUIImagePickerControllerDelegate.h>
#include <app/iOS.UIKit.UIImagePickerController.h>
#include <app/iOS.UIKit.UIImagePickerControllerSourceType.h>
#include <app/Uno.Bool.h>

namespace app {
namespace iOS {
namespace UIKit {

UIImagePickerController__uType* UIImagePickerController__typeof()
{
    static ::uStaticStrong<UIImagePickerController__uType*> type;
    if (type != NULL) return type;

    type = (UIImagePickerController__uType*)::uAllocClassType(sizeof(UIImagePickerController__uType), "iOS.UIKit.UIImagePickerController", false, 0, 0, 0);

    type->SetBaseType(::app::iOS::UIKit::UINavigationController__typeof());

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}

::app::iOS::Foundation::NSArray* UIImagePickerController___availableMediaTypesForSourceType(::uStatic* __this, int sourceType_)
{
    ::NSArray* __return = uObjC_SEND_MESSAGE_TO_CLASS(::NSArray*, @selector(availableMediaTypesForSourceType:),
        ::UIImagePickerControllerSourceType(sourceType_));
    return (::app::iOS::Foundation::NSArray*)uObjC::Lifetime::GetUnoObject(__return, ::app::iOS::Foundation::NSArray__typeof());
}

bool UIImagePickerController___isSourceTypeAvailable(::uStatic* __this, int sourceType_)
{
    BOOL __return = uObjC_SEND_MESSAGE_TO_CLASS(BOOL, @selector(isSourceTypeAvailable:),
        ::UIImagePickerControllerSourceType(sourceType_));
    return (bool)__return;
}

void UIImagePickerController___ObjInit_11(UIImagePickerController* __this)
{
    ::app::iOS::UIKit::UINavigationController___ObjInit_9(__this);
}

::uObject* UIImagePickerController__delegate__1(UIImagePickerController* __this)
{
    id<UIImagePickerControllerDelegate> __return = uObjC_SEND_MESSAGE_TO_INSTANCE(id<UIImagePickerControllerDelegate>, @selector(delegate));
    return uObjC::Lifetime::GetUnoObject(__return, ::app::iOS::UIKit::Interop::IUIImagePickerControllerDelegate__typeof());
}

::uObject* UIImagePickerController__get_Delegate_1(UIImagePickerController* __this)
{
    return __this->delegate__1();
}

::app::iOS::Foundation::NSArray* UIImagePickerController__get_MediaTypes(UIImagePickerController* __this)
{
    return __this->mediaTypes();
}

int UIImagePickerController__get_SourceType(UIImagePickerController* __this)
{
    return __this->sourceType();
}

::app::iOS::Foundation::NSArray* UIImagePickerController__mediaTypes(UIImagePickerController* __this)
{
    ::NSArray* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::NSArray*, @selector(mediaTypes));
    return (::app::iOS::Foundation::NSArray*)uObjC::Lifetime::GetUnoObject(__return, ::app::iOS::Foundation::NSArray__typeof());
}

UIImagePickerController* UIImagePickerController__New_11(::uStatic* __this)
{
    UIImagePickerController* inst = (UIImagePickerController*)::uAllocObject(sizeof(UIImagePickerController), UIImagePickerController__typeof());
    inst->_ObjInit_11();
    return inst;
}

void UIImagePickerController__set_Delegate_1(UIImagePickerController* __this, ::uObject* value)
{
    __this->setDelegate_1(value);
}

void UIImagePickerController__set_MediaTypes(UIImagePickerController* __this, ::app::iOS::Foundation::NSArray* value)
{
    __this->setMediaTypes(value);
}

void UIImagePickerController__set_SourceType(UIImagePickerController* __this, int value)
{
    __this->setSourceType(value);
}

void UIImagePickerController__setDelegate_1(UIImagePickerController* __this, ::uObject* delegate__)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setDelegate:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)delegate__, ::app::iOS::UIKit::IUIImagePickerControllerDelegate__typeof()));
}

void UIImagePickerController__setMediaTypes(UIImagePickerController* __this, ::app::iOS::Foundation::NSArray* mediaTypes_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setMediaTypes:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)mediaTypes_));
}

void UIImagePickerController__setSourceType(UIImagePickerController* __this, int sourceType_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setSourceType:),
        ::UIImagePickerControllerSourceType(sourceType_));
}

int UIImagePickerController__sourceType(UIImagePickerController* __this)
{
    ::UIImagePickerControllerSourceType __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::UIImagePickerControllerSourceType, @selector(sourceType));
    return int(__return);
}

}}}
