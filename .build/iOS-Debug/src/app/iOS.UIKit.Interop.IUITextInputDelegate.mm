// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/interface/wrapper/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE_IS_INTERFACE 1
#define uObjC_NATIVE_TYPE UITextInputDelegate
#define uObjC_UNO_TYPE ::uObject*
#define uObjC_UNO_TYPE_OBJECT ::app::iOS::UIKit::IUITextInputDelegate__typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <app/iOS.UIKit.Interop.IUITextInputDelegate.h>
#include <app/iOS.UIKit.IUITextInput.h>

namespace app {
namespace iOS {
namespace UIKit {
namespace Interop {

IUITextInputDelegate__uType* IUITextInputDelegate__typeof()
{
    static ::uStaticStrong<IUITextInputDelegate__uType*> type;
    if (type != NULL) return type;

    type = (IUITextInputDelegate__uType*)::uAllocClassType(sizeof(IUITextInputDelegate__uType), "iOS.UIKit.Interop.IUITextInputDelegate", false, 1, 0, 0);

    type->SetBaseType(::app::ObjC::Object__typeof());
    type->__interface_0.__fp_selectionWillChange = (void(*)(void*, ::uObject*))IUITextInputDelegate__selectionWillChange;
    type->__interface_0.__fp_selectionDidChange = (void(*)(void*, ::uObject*))IUITextInputDelegate__selectionDidChange;
    type->__interface_0.__fp_textWillChange = (void(*)(void*, ::uObject*))IUITextInputDelegate__textWillChange;
    type->__interface_0.__fp_textDidChange = (void(*)(void*, ::uObject*))IUITextInputDelegate__textDidChange;

    type->SetInterfaces(
        ::app::iOS::UIKit::IUITextInputDelegate__typeof(), offsetof(IUITextInputDelegate__uType, __interface_0));

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}

void IUITextInputDelegate__selectionDidChange(IUITextInputDelegate* __this, ::uObject* textInput_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(selectionDidChange:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)textInput_, ::app::iOS::UIKit::IUITextInput__typeof()));
}

void IUITextInputDelegate__selectionWillChange(IUITextInputDelegate* __this, ::uObject* textInput_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(selectionWillChange:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)textInput_, ::app::iOS::UIKit::IUITextInput__typeof()));
}

void IUITextInputDelegate__textDidChange(IUITextInputDelegate* __this, ::uObject* textInput_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(textDidChange:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)textInput_, ::app::iOS::UIKit::IUITextInput__typeof()));
}

void IUITextInputDelegate__textWillChange(IUITextInputDelegate* __this, ::uObject* textInput_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(textWillChange:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)textInput_, ::app::iOS::UIKit::IUITextInput__typeof()));
}

}}}}
