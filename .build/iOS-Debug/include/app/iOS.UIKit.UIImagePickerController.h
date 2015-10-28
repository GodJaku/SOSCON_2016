// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_I_O_S_U_I_KIT_U_I_IMAGE_PICKER_CONTROLLER_H__
#define __APP_I_O_S_U_I_KIT_U_I_IMAGE_PICKER_CONTROLLER_H__

#include <app/iOS.UIKit.UINavigationController.h>
#include <Uno.h>
namespace app { namespace iOS { namespace Foundation { struct NSArray; } } }

namespace app {
namespace iOS {
namespace UIKit {

struct UIImagePickerController;

struct UIImagePickerController__uType : ::app::iOS::UIKit::UINavigationController__uType
{
};

UIImagePickerController__uType* UIImagePickerController__typeof();

::app::iOS::Foundation::NSArray* UIImagePickerController___availableMediaTypesForSourceType(::uStatic* __this, int sourceType_);
bool UIImagePickerController___isSourceTypeAvailable(::uStatic* __this, int sourceType_);
void UIImagePickerController___ObjInit_11(UIImagePickerController* __this);
::uObject* UIImagePickerController__delegate__1(UIImagePickerController* __this);
::uObject* UIImagePickerController__get_Delegate_1(UIImagePickerController* __this);
::app::iOS::Foundation::NSArray* UIImagePickerController__get_MediaTypes(UIImagePickerController* __this);
int UIImagePickerController__get_SourceType(UIImagePickerController* __this);
::app::iOS::Foundation::NSArray* UIImagePickerController__mediaTypes(UIImagePickerController* __this);
UIImagePickerController* UIImagePickerController__New_11(::uStatic* __this);
void UIImagePickerController__set_Delegate_1(UIImagePickerController* __this, ::uObject* value);
void UIImagePickerController__set_MediaTypes(UIImagePickerController* __this, ::app::iOS::Foundation::NSArray* value);
void UIImagePickerController__set_SourceType(UIImagePickerController* __this, int value);
void UIImagePickerController__setDelegate_1(UIImagePickerController* __this, ::uObject* delegate__);
void UIImagePickerController__setMediaTypes(UIImagePickerController* __this, ::app::iOS::Foundation::NSArray* mediaTypes_);
void UIImagePickerController__setSourceType(UIImagePickerController* __this, int sourceType_);
int UIImagePickerController__sourceType(UIImagePickerController* __this);

struct UIImagePickerController : ::app::iOS::UIKit::UINavigationController
{
    void _ObjInit_11() { UIImagePickerController___ObjInit_11(this); }
    ::uObject* delegate__1() { return UIImagePickerController__delegate__1(this); }
    ::uObject* Delegate_1() { return UIImagePickerController__get_Delegate_1(this); }
    ::app::iOS::Foundation::NSArray* MediaTypes() { return UIImagePickerController__get_MediaTypes(this); }
    int SourceType() { return UIImagePickerController__get_SourceType(this); }
    ::app::iOS::Foundation::NSArray* mediaTypes() { return UIImagePickerController__mediaTypes(this); }
    void Delegate_1(::uObject* value) { UIImagePickerController__set_Delegate_1(this, value); }
    void MediaTypes(::app::iOS::Foundation::NSArray* value) { UIImagePickerController__set_MediaTypes(this, value); }
    void SourceType(int value) { UIImagePickerController__set_SourceType(this, value); }
    void setDelegate_1(::uObject* delegate__) { UIImagePickerController__setDelegate_1(this, delegate__); }
    void setMediaTypes(::app::iOS::Foundation::NSArray* mediaTypes_) { UIImagePickerController__setMediaTypes(this, mediaTypes_); }
    void setSourceType(int sourceType_) { UIImagePickerController__setSourceType(this, sourceType_); }
    int sourceType() { return UIImagePickerController__sourceType(this); }
};

}}}


#endif
