// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE NSTextStorage
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::app::iOS::UIKit::NSTextStorage*
#define uObjC_UNO_TYPE_OBJECT ::app::iOS::UIKit::NSTextStorage__typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <app/iOS.UIKit.NSTextStorage.h>

namespace app {
namespace iOS {
namespace UIKit {

NSTextStorage__uType* NSTextStorage__typeof()
{
    static ::uStaticStrong<NSTextStorage__uType*> type;
    if (type != NULL) return type;

    type = (NSTextStorage__uType*)::uAllocClassType(sizeof(NSTextStorage__uType), "iOS.UIKit.NSTextStorage", false, 1, 0, 0);

    type->SetBaseType(::app::iOS::Foundation::NSMutableAttributedString__typeof());

    type->SetInterfaces(
        ::app::iOS::Foundation::INSCopying__typeof(), offsetof(NSTextStorage__uType, __interface_0));

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}

void NSTextStorage___ObjInit_8(NSTextStorage* __this)
{
    ::app::iOS::Foundation::NSMutableAttributedString___ObjInit_6(__this);
}

NSTextStorage* NSTextStorage__New_9(::uStatic* __this)
{
    NSTextStorage* inst = (NSTextStorage*)::uAllocObject(sizeof(NSTextStorage), NSTextStorage__typeof());
    inst->_ObjInit_8();
    return inst;
}

}}}
