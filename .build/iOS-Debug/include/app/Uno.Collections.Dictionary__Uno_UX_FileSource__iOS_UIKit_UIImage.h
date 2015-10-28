// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.13.2/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY__UNO_U_X_FILE_SOURCE__I_O_S_U_I_KIT_U_I_IMAGE_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY__UNO_U_X_FILE_SOURCE__I_O_S_U_I_KIT_U_I_IMAGE_H__

#include <app/Uno.Collections.Dictionary2_Bucket__Uno_UX_FileSource__iOS_UIKit_UIImage.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace iOS { namespace UIKit { struct UIImage; } } }
namespace app { namespace Uno { namespace UX { struct FileSource; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary__Uno_UX_FileSource__iOS_UIKit_UIImage;

struct Dictionary__Uno_UX_FileSource__iOS_UIKit_UIImage__uType : ::uClassType
{
};

Dictionary__Uno_UX_FileSource__iOS_UIKit_UIImage__uType* Dictionary__Uno_UX_FileSource__iOS_UIKit_UIImage__typeof();

void Dictionary__Uno_UX_FileSource__iOS_UIKit_UIImage___ObjInit_1(Dictionary__Uno_UX_FileSource__iOS_UIKit_UIImage* __this);
void Dictionary__Uno_UX_FileSource__iOS_UIKit_UIImage__Add(Dictionary__Uno_UX_FileSource__iOS_UIKit_UIImage* __this, ::app::Uno::UX::FileSource* key, ::app::iOS::UIKit::UIImage* value);
bool Dictionary__Uno_UX_FileSource__iOS_UIKit_UIImage__ContainsKey(Dictionary__Uno_UX_FileSource__iOS_UIKit_UIImage* __this, ::app::Uno::UX::FileSource* key);
::app::iOS::UIKit::UIImage* Dictionary__Uno_UX_FileSource__iOS_UIKit_UIImage__get_Item(Dictionary__Uno_UX_FileSource__iOS_UIKit_UIImage* __this, ::app::Uno::UX::FileSource* key);
Dictionary__Uno_UX_FileSource__iOS_UIKit_UIImage* Dictionary__Uno_UX_FileSource__iOS_UIKit_UIImage__New_1(::uStatic* __this);
void Dictionary__Uno_UX_FileSource__iOS_UIKit_UIImage__Rehash(Dictionary__Uno_UX_FileSource__iOS_UIKit_UIImage* __this);
void Dictionary__Uno_UX_FileSource__iOS_UIKit_UIImage__set_Item(Dictionary__Uno_UX_FileSource__iOS_UIKit_UIImage* __this, ::app::Uno::UX::FileSource* key, ::app::iOS::UIKit::UIImage* value);

struct Dictionary__Uno_UX_FileSource__iOS_UIKit_UIImage : ::uObject
{
    int _count;
    int _dummies;
    ::uStrong< ::uArray*> _buckets;
    int _version;

    void _ObjInit_1() { Dictionary__Uno_UX_FileSource__iOS_UIKit_UIImage___ObjInit_1(this); }
    void Add(::app::Uno::UX::FileSource* key, ::app::iOS::UIKit::UIImage* value) { Dictionary__Uno_UX_FileSource__iOS_UIKit_UIImage__Add(this, key, value); }
    bool ContainsKey(::app::Uno::UX::FileSource* key) { return Dictionary__Uno_UX_FileSource__iOS_UIKit_UIImage__ContainsKey(this, key); }
    ::app::iOS::UIKit::UIImage* Item(::app::Uno::UX::FileSource* key) { return Dictionary__Uno_UX_FileSource__iOS_UIKit_UIImage__get_Item(this, key); }
    void Rehash() { Dictionary__Uno_UX_FileSource__iOS_UIKit_UIImage__Rehash(this); }
    void Item(::app::Uno::UX::FileSource* key, ::app::iOS::UIKit::UIImage* value) { Dictionary__Uno_UX_FileSource__iOS_UIKit_UIImage__set_Item(this, key, value); }
};

}}}


#endif
