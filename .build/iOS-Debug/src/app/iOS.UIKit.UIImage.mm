// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE UIImage
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::app::iOS::UIKit::UIImage*
#define uObjC_UNO_TYPE_OBJECT ::app::iOS::UIKit::UIImage__typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <app/iOS.CoreImage.CIImage.h>
#include <app/iOS.UIKit.UIImage.h>
#include <app/ObjC.ID.h>
#include <app/Uno.String.h>

namespace app {
namespace iOS {
namespace UIKit {

UIImage__uType* UIImage__typeof()
{
    static ::uStaticStrong<UIImage__uType*> type;
    if (type != NULL) return type;

    type = (UIImage__uType*)::uAllocClassType(sizeof(UIImage__uType), "iOS.UIKit.UIImage", false, 0, 0, 0);

    type->SetBaseType(::app::iOS::Foundation::NSObject__typeof());

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}

UIImage* UIImage___imageWithCIImage(::uStatic* __this, ::app::iOS::CoreImage::CIImage* ciImage_)
{
    ::UIImage* __return = uObjC_SEND_MESSAGE_TO_CLASS(::UIImage*, @selector(imageWithCIImage:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)ciImage_));
    return (UIImage*)uObjC::Lifetime::GetUnoObject(__return, ::app::iOS::UIKit::UIImage__typeof());
}

UIImage* UIImage___imageWithContentsOfFile(::uStatic* __this, ::uString* path_)
{
    ::UIImage* __return = uObjC_SEND_MESSAGE_TO_CLASS(::UIImage*, @selector(imageWithContentsOfFile:),
        uObjC::NativeString(path_));
    return (UIImage*)uObjC::Lifetime::GetUnoObject(__return, ::app::iOS::UIKit::UIImage__typeof());
}

void UIImage___ObjInit_5(UIImage* __this, ::id __id)
{
    ::app::iOS::Foundation::NSObject___ObjInit_3(__this, __id);
}

void UIImage__drawInRect(UIImage* __this, ::app::iOS::CoreGraphics::CGRect rect_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(drawInRect:),
        uObjC::Struct::FromUno_CGRect(rect_, ::CGRect()));
}

::app::iOS::CoreGraphics::CGSize UIImage__get_Size(UIImage* __this)
{
    return __this->size();
}

UIImage* UIImage__New_6(::uStatic* __this, ::id __id)
{
    UIImage* inst = (UIImage*)::uAllocObject(sizeof(UIImage), UIImage__typeof());
    inst->_ObjInit_5(__id);
    return inst;
}

::app::iOS::CoreGraphics::CGSize UIImage__size(UIImage* __this)
{
    ::CGSize __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::CGSize, @selector(size));
    return uObjC::Struct::ToUno_CGSize(__return, ::app::iOS::CoreGraphics::CGSize());
}

}}}
