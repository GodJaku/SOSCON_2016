#include <app/Fuse.Controls.Internal.DefaultTextRenderer.h>
#include <app/Fuse.Controls.Internal.DefaultTextRenderer_FontKey.h>
#include <app/Fuse.Drawing.PolygonFiller.h>
#include <app/Fuse.Drawing.Stroke.h>
#include <app/Fuse.Font.h>
#include <app/Fuse.Gestures.Internal.EdgeSwiper.h>
#include <app/Fuse.IFlush.h>
#include <app/Fuse.Input.Capturer.h>
#include <app/Fuse.Input.Pointer_PointerRecord.h>
#include <app/Fuse.Navigation.NavigationEdge.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.Scripting.Callback.h>
#include <app/iOS.Foundation.INSCopying.h>
#include <app/iOS.UIKit.UIControl.h>
#include <app/iOS.UIKit.UIImage.h>
#include <app/ObjC.ID.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Char.h>
#include <app/Uno.Collections.Dictionary__char__float.h>
#include <app/Uno.Collections.Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo.h>
#include <app/Uno.Collections.Dictionary__char__Uno_Content_Fonts_RenderedGlyph.h>
#include <app/Uno.Collections.Dictionary__framebuffer__bool.h>
#include <app/Uno.Collections.Dictionary__framebuffer__int.h>
#include <app/Uno.Collections.Dictionary__Fuse_Controls_Internal_DefaultTextR-3d467ba.h>
#include <app/Uno.Collections.Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_P-f183901b.h>
#include <app/Uno.Collections.Dictionary__Fuse_Font__Fuse_Controls_Internal_D-893d2c20.h>
#include <app/Uno.Collections.Dictionary__Fuse_IFlush__bool.h>
#include <app/Uno.Collections.Dictionary__Fuse_Navigation_NavigationEdge__Fus-e569bafb.h>
#include <app/Uno.Collections.Dictionary__Fuse_Node__bool.h>
#include <app/Uno.Collections.Dictionary__int__Fuse_Input_Capturer.h>
#include <app/Uno.Collections.Dictionary__int__Fuse_Input_Pointer_PointerRecord.h>
#include <app/Uno.Collections.Dictionary__int__Fuse_Scripting_Callback.h>
#include <app/Uno.Collections.Dictionary__int__string.h>
#include <app/Uno.Collections.Dictionary__int__Uno_Collections_IList_Fuse_Inp-f7378373.h>
#include <app/Uno.Collections.Dictionary__int__Uno_Collections_List_Fuse_Inpu-25f6ef8b.h>
#include <app/Uno.Collections.Dictionary__iOS_Foundation_INSCopying__ObjC_ID.h>
#include <app/Uno.Collections.Dictionary__iOS_UIKit_UIControl__Fuse_Node.h>
#include <app/Uno.Collections.Dictionary__object__object.h>
#include <app/Uno.Collections.Dictionary__object__string.h>
#include <app/Uno.Collections.Dictionary__string__int.h>
#include <app/Uno.Collections.Dictionary__string__object.h>
#include <app/Uno.Collections.Dictionary__string__string.h>
#include <app/Uno.Collections.Dictionary__string__Uno_Collections_List_Fuse_S-3c8f0cc7.h>
#include <app/Uno.Collections.Dictionary__string__Uno_Collections_List_object_.h>
#include <app/Uno.Collections.Dictionary__string__Uno_Collections_List_Uno_Action_.h>
#include <app/Uno.Collections.Dictionary__string__Uno_Runtime_Implementation_-a3893734.h>
#include <app/Uno.Collections.Dictionary__string__Uno_WeakReference_Fuse_Reso-25b46c3c.h>
#include <app/Uno.Collections.Dictionary__Uno_Content_Fonts_BitmapFont_CharPair__float.h>
#include <app/Uno.Collections.Dictionary__Uno_Type__object.h>
#include <app/Uno.Collections.Dictionary__Uno_UX_FileSource__iOS_UIKit_UIImage.h>
#include <app/Uno.Collections.Dictionary__Uno_UX_FileSource__Uno_Content_Font-8f7af919.h>
#include <app/Uno.Collections.Dictionary__Uno_UX_FileSource__Uno_WeakReferenc-f005e285.h>
#include <app/Uno.Collections.Dictionary2_BucketState.h>
#include <app/Uno.Collections.Dictionary2_KeyCollection__string__string.h>
#include <app/Uno.Collections.Dictionary2_ValueCollection__Fuse_Drawing_Strok-bbc0c8c7.h>
#include <app/Uno.Collections.Dictionary2_ValueCollection__string__Uno_Collec-a1b9f09b.h>
#include <app/Uno.Collections.Dictionary2_ValueCollection__string__Uno_Collec-b33a30de.h>
#include <app/Uno.Collections.IList__Fuse_Input_Capturer.h>
#include <app/Uno.Collections.List__Fuse_Input_Pointer_PELHolder.h>
#include <app/Uno.Collections.List__Fuse_Scripting_INameListener.h>
#include <app/Uno.Collections.List__object.h>
#include <app/Uno.Collections.List__Uno_Action.h>
#include <app/Uno.Content.Fonts.BitmapFont.h>
#include <app/Uno.Content.Fonts.FontFace.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Float.h>
#include <app/Uno.Generic.h>
#include <app/Uno.Graphics.Framebuffer.h>
#include <app/Uno.Int.h>
#include <app/Uno.Math.h>
#include <app/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLCompiledProgram.h>
#include <app/Uno.String.h>
#include <app/Uno.Type.h>
#include <app/Uno.UX.FileSource.h>
#include <app/Uno.WeakReference__Fuse_Resources_FileImageSourceImpl.h>
#include <app/Uno.WeakReference__Fuse_Resources_HttpImageSourceImpl.h>

namespace app {
namespace Uno {
namespace Collections {

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.13.2/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary__char__float__uType* Dictionary__char__float__typeof()
{
    static ::uStaticStrong<Dictionary__char__float__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary__char__float__uType*)::uAllocClassType(sizeof(Dictionary__char__float__uType), "Uno.Collections.Dictionary<char,float>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_buckets", offsetof(Dictionary__char__float, _buckets));

    return type;
}

void Dictionary__char__float___ObjInit_1(Dictionary__char__float* __this)
{
    __this->_buckets = ::uNewArray(::app::Uno::Collections::Dictionary2_Bucket__char__float__typeof(), 8);
    __this->_count = 0;
    __this->_dummies = 0;
}

void Dictionary__char__float__Add(Dictionary__char__float* __this, ::uChar key, float value)
{
    if ((__this->_count + __this->_dummies) > (::uPtr< ::uArray*>(__this->_buckets)->Length() / 2))
    {
        __this->Rehash();
    }

    int x = ::app::Uno::Math__Abs_2(NULL, ::app::Uno::Object::GetHashCode(::uBox< ::uChar>(::app::Uno::Char__typeof(), key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__char__float>(x).State == 0)
        {
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__char__float>(x).State = 1;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__char__float>(x).Value = value;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__char__float>(x).Key = key;
            __this->_count++;
            __this->_version++;
            return;
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__char__float>(x).State == 2)
        {
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__char__float>(x).State = 1;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__char__float>(x).Value = value;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__char__float>(x).Key = key;
            __this->_count++;
            __this->_dummies--;
            __this->_version++;
            return;
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__char__float>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__char(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__char__float>(x).Key, key))
            {
                U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Dictionary already contains the given key")));
            }
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

Dictionary__char__float* Dictionary__char__float__New_1(::uStatic* __this)
{
    Dictionary__char__float* inst = (Dictionary__char__float*)::uAllocObject(sizeof(Dictionary__char__float), Dictionary__char__float__typeof());
    inst->_ObjInit_1();
    return inst;
}

void Dictionary__char__float__Rehash(Dictionary__char__float* __this)
{
    ::uArray* oldBuckets = __this->_buckets;
    __this->_buckets = ::uNewArray(::app::Uno::Collections::Dictionary2_Bucket__char__float__typeof(), ::uPtr< ::uArray*>(oldBuckets)->Length() * 2);
    __this->_count = 0;
    __this->_dummies = 0;

    for (int i = 0; i < oldBuckets->Length(); i++)
    {
        if (oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__char__float>(i).State == 1)
        {
            __this->Add(oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__char__float>(i).Key, oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__char__float>(i).Value);
        }
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.13.2/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__uType* Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__typeof()
{
    static ::uStaticStrong<Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__uType*)::uAllocClassType(sizeof(Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__uType), "Uno.Collections.Dictionary<char,Uno.Content.Fonts.BitmapFont_GlyphInfo>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_buckets", offsetof(Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo, _buckets));

    return type;
}

void Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo___ObjInit_1(Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo* __this)
{
    __this->_buckets = ::uNewArray(::app::Uno::Collections::Dictionary2_Bucket__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__typeof(), 8);
    __this->_count = 0;
    __this->_dummies = 0;
}

void Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__Add(Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo* __this, ::uChar key, ::app::Uno::Content::Fonts::BitmapFont_GlyphInfo value)
{
    if ((__this->_count + __this->_dummies) > (::uPtr< ::uArray*>(__this->_buckets)->Length() / 2))
    {
        __this->Rehash();
    }

    int x = ::app::Uno::Math__Abs_2(NULL, ::app::Uno::Object::GetHashCode(::uBox< ::uChar>(::app::Uno::Char__typeof(), key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__char__Uno_Content_Fonts_BitmapFont_GlyphInfo>(x).State == 0)
        {
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__char__Uno_Content_Fonts_BitmapFont_GlyphInfo>(x).State = 1;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__char__Uno_Content_Fonts_BitmapFont_GlyphInfo>(x).Value = value;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__char__Uno_Content_Fonts_BitmapFont_GlyphInfo>(x).Key = key;
            __this->_count++;
            __this->_version++;
            return;
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__char__Uno_Content_Fonts_BitmapFont_GlyphInfo>(x).State == 2)
        {
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__char__Uno_Content_Fonts_BitmapFont_GlyphInfo>(x).State = 1;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__char__Uno_Content_Fonts_BitmapFont_GlyphInfo>(x).Value = value;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__char__Uno_Content_Fonts_BitmapFont_GlyphInfo>(x).Key = key;
            __this->_count++;
            __this->_dummies--;
            __this->_version++;
            return;
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__char__Uno_Content_Fonts_BitmapFont_GlyphInfo>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__char(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__char__Uno_Content_Fonts_BitmapFont_GlyphInfo>(x).Key, key))
            {
                U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Dictionary already contains the given key")));
            }
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo* Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__New_1(::uStatic* __this)
{
    Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo* inst = (Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo*)::uAllocObject(sizeof(Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo), Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__typeof());
    inst->_ObjInit_1();
    return inst;
}

void Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__Rehash(Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo* __this)
{
    ::uArray* oldBuckets = __this->_buckets;
    __this->_buckets = ::uNewArray(::app::Uno::Collections::Dictionary2_Bucket__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__typeof(), ::uPtr< ::uArray*>(oldBuckets)->Length() * 2);
    __this->_count = 0;
    __this->_dummies = 0;

    for (int i = 0; i < oldBuckets->Length(); i++)
    {
        if (oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__char__Uno_Content_Fonts_BitmapFont_GlyphInfo>(i).State == 1)
        {
            __this->Add(oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__char__Uno_Content_Fonts_BitmapFont_GlyphInfo>(i).Key, oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__char__Uno_Content_Fonts_BitmapFont_GlyphInfo>(i).Value);
        }
    }
}

bool Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__TryGetValue(Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo* __this, ::uChar key, ::app::Uno::Content::Fonts::BitmapFont_GlyphInfo* value)
{
    int x = ::app::Uno::Math__Abs_2(NULL, ::app::Uno::Object::GetHashCode(::uBox< ::uChar>(::app::Uno::Char__typeof(), key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__char__Uno_Content_Fonts_BitmapFont_GlyphInfo>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__char(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__char__Uno_Content_Fonts_BitmapFont_GlyphInfo>(x).Key, key))
            {
                *value = ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__char__Uno_Content_Fonts_BitmapFont_GlyphInfo>(x).Value;
                return true;
            }
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__char__Uno_Content_Fonts_BitmapFont_GlyphInfo>(x).State == 0)
        {
            *value = ::uDefault< ::app::Uno::Content::Fonts::BitmapFont_GlyphInfo>();
            return false;
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.13.2/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary__char__Uno_Content_Fonts_RenderedGlyph__uType* Dictionary__char__Uno_Content_Fonts_RenderedGlyph__typeof()
{
    static ::uStaticStrong<Dictionary__char__Uno_Content_Fonts_RenderedGlyph__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary__char__Uno_Content_Fonts_RenderedGlyph__uType*)::uAllocClassType(sizeof(Dictionary__char__Uno_Content_Fonts_RenderedGlyph__uType), "Uno.Collections.Dictionary<char,Uno.Content.Fonts.RenderedGlyph>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_buckets", offsetof(Dictionary__char__Uno_Content_Fonts_RenderedGlyph, _buckets));

    return type;
}

void Dictionary__char__Uno_Content_Fonts_RenderedGlyph___ObjInit_1(Dictionary__char__Uno_Content_Fonts_RenderedGlyph* __this)
{
    __this->_buckets = ::uNewArray(::app::Uno::Collections::Dictionary2_Bucket__char__Uno_Content_Fonts_RenderedGlyph__typeof(), 8);
    __this->_count = 0;
    __this->_dummies = 0;
}

void Dictionary__char__Uno_Content_Fonts_RenderedGlyph__Add(Dictionary__char__Uno_Content_Fonts_RenderedGlyph* __this, ::uChar key, ::app::Uno::Content::Fonts::RenderedGlyph value)
{
    if ((__this->_count + __this->_dummies) > (::uPtr< ::uArray*>(__this->_buckets)->Length() / 2))
    {
        __this->Rehash();
    }

    int x = ::app::Uno::Math__Abs_2(NULL, ::app::Uno::Object::GetHashCode(::uBox< ::uChar>(::app::Uno::Char__typeof(), key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__char__Uno_Content_Fonts_RenderedGlyph>(x).State == 0)
        {
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__char__Uno_Content_Fonts_RenderedGlyph>(x).State = 1;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__char__Uno_Content_Fonts_RenderedGlyph>(x).Value = value;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__char__Uno_Content_Fonts_RenderedGlyph>(x).Key = key;
            __this->_count++;
            __this->_version++;
            return;
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__char__Uno_Content_Fonts_RenderedGlyph>(x).State == 2)
        {
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__char__Uno_Content_Fonts_RenderedGlyph>(x).State = 1;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__char__Uno_Content_Fonts_RenderedGlyph>(x).Value = value;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__char__Uno_Content_Fonts_RenderedGlyph>(x).Key = key;
            __this->_count++;
            __this->_dummies--;
            __this->_version++;
            return;
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__char__Uno_Content_Fonts_RenderedGlyph>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__char(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__char__Uno_Content_Fonts_RenderedGlyph>(x).Key, key))
            {
                U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Dictionary already contains the given key")));
            }
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

bool Dictionary__char__Uno_Content_Fonts_RenderedGlyph__ContainsKey(Dictionary__char__Uno_Content_Fonts_RenderedGlyph* __this, ::uChar key)
{
    int x = ::app::Uno::Math__Abs_2(NULL, ::app::Uno::Object::GetHashCode(::uBox< ::uChar>(::app::Uno::Char__typeof(), key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__char__Uno_Content_Fonts_RenderedGlyph>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__char(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__char__Uno_Content_Fonts_RenderedGlyph>(x).Key, key))
            {
                return true;
            }
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__char__Uno_Content_Fonts_RenderedGlyph>(x).State == 0)
        {
            return false;
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

int Dictionary__char__Uno_Content_Fonts_RenderedGlyph__get_Count(Dictionary__char__Uno_Content_Fonts_RenderedGlyph* __this)
{
    return __this->_count;
}

::app::Uno::Collections::Dictionary2_Enumerator__char__Uno_Content_Fonts_RenderedGlyph Dictionary__char__Uno_Content_Fonts_RenderedGlyph__GetEnumerator(Dictionary__char__Uno_Content_Fonts_RenderedGlyph* __this)
{
    return ::app::Uno::Collections::Dictionary2_Enumerator__char__Uno_Content_Fonts_RenderedGlyph__New_1(NULL, __this);
}

Dictionary__char__Uno_Content_Fonts_RenderedGlyph* Dictionary__char__Uno_Content_Fonts_RenderedGlyph__New_1(::uStatic* __this)
{
    Dictionary__char__Uno_Content_Fonts_RenderedGlyph* inst = (Dictionary__char__Uno_Content_Fonts_RenderedGlyph*)::uAllocObject(sizeof(Dictionary__char__Uno_Content_Fonts_RenderedGlyph), Dictionary__char__Uno_Content_Fonts_RenderedGlyph__typeof());
    inst->_ObjInit_1();
    return inst;
}

void Dictionary__char__Uno_Content_Fonts_RenderedGlyph__Rehash(Dictionary__char__Uno_Content_Fonts_RenderedGlyph* __this)
{
    ::uArray* oldBuckets = __this->_buckets;
    __this->_buckets = ::uNewArray(::app::Uno::Collections::Dictionary2_Bucket__char__Uno_Content_Fonts_RenderedGlyph__typeof(), ::uPtr< ::uArray*>(oldBuckets)->Length() * 2);
    __this->_count = 0;
    __this->_dummies = 0;

    for (int i = 0; i < oldBuckets->Length(); i++)
    {
        if (oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__char__Uno_Content_Fonts_RenderedGlyph>(i).State == 1)
        {
            __this->Add(oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__char__Uno_Content_Fonts_RenderedGlyph>(i).Key, oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__char__Uno_Content_Fonts_RenderedGlyph>(i).Value);
        }
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.13.2/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary__framebuffer__bool__uType* Dictionary__framebuffer__bool__typeof()
{
    static ::uStaticStrong<Dictionary__framebuffer__bool__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary__framebuffer__bool__uType*)::uAllocClassType(sizeof(Dictionary__framebuffer__bool__uType), "Uno.Collections.Dictionary<framebuffer,bool>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_buckets", offsetof(Dictionary__framebuffer__bool, _buckets));

    return type;
}

void Dictionary__framebuffer__bool___ObjInit_1(Dictionary__framebuffer__bool* __this)
{
    __this->_buckets = ::uNewArray(::app::Uno::Collections::Dictionary2_Bucket__framebuffer__bool__typeof(), 8);
    __this->_count = 0;
    __this->_dummies = 0;
}

void Dictionary__framebuffer__bool__Add(Dictionary__framebuffer__bool* __this, ::app::Uno::Graphics::Framebuffer* key, bool value)
{
    if ((__this->_count + __this->_dummies) > (::uPtr< ::uArray*>(__this->_buckets)->Length() / 2))
    {
        __this->Rehash();
    }

    int x = ::app::Uno::Math__Abs_2(NULL, ::app::Uno::Object::GetHashCode(::uPtr< ::app::Uno::Graphics::Framebuffer*>(key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__framebuffer__bool>(x).State == 0)
        {
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__framebuffer__bool>(x).State = 1;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__framebuffer__bool>(x).Value = value;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__framebuffer__bool>(x).Key = key;
            __this->_count++;
            __this->_version++;
            return;
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__framebuffer__bool>(x).State == 2)
        {
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__framebuffer__bool>(x).State = 1;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__framebuffer__bool>(x).Value = value;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__framebuffer__bool>(x).Key = key;
            __this->_count++;
            __this->_dummies--;
            __this->_version++;
            return;
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__framebuffer__bool>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__framebuffer(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__framebuffer__bool>(x).Key, key))
            {
                U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Dictionary already contains the given key")));
            }
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

bool Dictionary__framebuffer__bool__ContainsKey(Dictionary__framebuffer__bool* __this, ::app::Uno::Graphics::Framebuffer* key)
{
    int x = ::app::Uno::Math__Abs_2(NULL, ::app::Uno::Object::GetHashCode(::uPtr< ::app::Uno::Graphics::Framebuffer*>(key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__framebuffer__bool>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__framebuffer(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__framebuffer__bool>(x).Key, key))
            {
                return true;
            }
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__framebuffer__bool>(x).State == 0)
        {
            return false;
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

bool Dictionary__framebuffer__bool__get_Item(Dictionary__framebuffer__bool* __this, ::app::Uno::Graphics::Framebuffer* key)
{
    int x = ::app::Uno::Math__Abs_2(NULL, ::app::Uno::Object::GetHashCode(::uPtr< ::app::Uno::Graphics::Framebuffer*>(key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__framebuffer__bool>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__framebuffer(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__framebuffer__bool>(x).Key, key))
            {
                return ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__framebuffer__bool>(x).Value;
            }
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__framebuffer__bool>(x).State == 0)
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Dictionary did not contain the given key")));
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

Dictionary__framebuffer__bool* Dictionary__framebuffer__bool__New_1(::uStatic* __this)
{
    Dictionary__framebuffer__bool* inst = (Dictionary__framebuffer__bool*)::uAllocObject(sizeof(Dictionary__framebuffer__bool), Dictionary__framebuffer__bool__typeof());
    inst->_ObjInit_1();
    return inst;
}

void Dictionary__framebuffer__bool__Rehash(Dictionary__framebuffer__bool* __this)
{
    ::uArray* oldBuckets = __this->_buckets;
    __this->_buckets = ::uNewArray(::app::Uno::Collections::Dictionary2_Bucket__framebuffer__bool__typeof(), ::uPtr< ::uArray*>(oldBuckets)->Length() * 2);
    __this->_count = 0;
    __this->_dummies = 0;

    for (int i = 0; i < oldBuckets->Length(); i++)
    {
        if (oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__framebuffer__bool>(i).State == 1)
        {
            __this->Add(oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__framebuffer__bool>(i).Key, oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__framebuffer__bool>(i).Value);
        }
    }
}

bool Dictionary__framebuffer__bool__Remove(Dictionary__framebuffer__bool* __this, ::app::Uno::Graphics::Framebuffer* key)
{
    int x = ::app::Uno::Math__Abs_2(NULL, ::app::Uno::Object::GetHashCode(::uPtr< ::app::Uno::Graphics::Framebuffer*>(key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__framebuffer__bool>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__framebuffer(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__framebuffer__bool>(x).Key, key))
            {
                ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__framebuffer__bool>(x).State = 2;
                ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__framebuffer__bool>(x).Value = 0;
                ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__framebuffer__bool>(x).Key = NULL;
                __this->_count--;
                __this->_dummies++;
                __this->_version++;
                return true;
            }
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__framebuffer__bool>(x).State == 0)
        {
            return false;
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

void Dictionary__framebuffer__bool__set_Item(Dictionary__framebuffer__bool* __this, ::app::Uno::Graphics::Framebuffer* key, bool value)
{
    int x = ::app::Uno::Math__Abs_2(NULL, ::app::Uno::Object::GetHashCode(::uPtr< ::app::Uno::Graphics::Framebuffer*>(key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__framebuffer__bool>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__framebuffer(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__framebuffer__bool>(x).Key, key))
            {
                ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__framebuffer__bool>(x).Value = value;
                __this->_version++;
                return;
            }
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__framebuffer__bool>(x).State == 0)
        {
            __this->Add(key, value);
            return;
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.13.2/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary__framebuffer__int__uType* Dictionary__framebuffer__int__typeof()
{
    static ::uStaticStrong<Dictionary__framebuffer__int__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary__framebuffer__int__uType*)::uAllocClassType(sizeof(Dictionary__framebuffer__int__uType), "Uno.Collections.Dictionary<framebuffer,int>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_buckets", offsetof(Dictionary__framebuffer__int, _buckets));

    return type;
}

void Dictionary__framebuffer__int___ObjInit_1(Dictionary__framebuffer__int* __this)
{
    __this->_buckets = ::uNewArray(::app::Uno::Collections::Dictionary2_Bucket__framebuffer__int__typeof(), 8);
    __this->_count = 0;
    __this->_dummies = 0;
}

void Dictionary__framebuffer__int__Add(Dictionary__framebuffer__int* __this, ::app::Uno::Graphics::Framebuffer* key, int value)
{
    if ((__this->_count + __this->_dummies) > (::uPtr< ::uArray*>(__this->_buckets)->Length() / 2))
    {
        __this->Rehash();
    }

    int x = ::app::Uno::Math__Abs_2(NULL, ::app::Uno::Object::GetHashCode(::uPtr< ::app::Uno::Graphics::Framebuffer*>(key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__framebuffer__int>(x).State == 0)
        {
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__framebuffer__int>(x).State = 1;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__framebuffer__int>(x).Value = value;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__framebuffer__int>(x).Key = key;
            __this->_count++;
            __this->_version++;
            return;
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__framebuffer__int>(x).State == 2)
        {
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__framebuffer__int>(x).State = 1;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__framebuffer__int>(x).Value = value;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__framebuffer__int>(x).Key = key;
            __this->_count++;
            __this->_dummies--;
            __this->_version++;
            return;
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__framebuffer__int>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__framebuffer(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__framebuffer__int>(x).Key, key))
            {
                U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Dictionary already contains the given key")));
            }
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

int Dictionary__framebuffer__int__get_Item(Dictionary__framebuffer__int* __this, ::app::Uno::Graphics::Framebuffer* key)
{
    int x = ::app::Uno::Math__Abs_2(NULL, ::app::Uno::Object::GetHashCode(::uPtr< ::app::Uno::Graphics::Framebuffer*>(key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__framebuffer__int>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__framebuffer(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__framebuffer__int>(x).Key, key))
            {
                return ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__framebuffer__int>(x).Value;
            }
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__framebuffer__int>(x).State == 0)
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Dictionary did not contain the given key")));
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

Dictionary__framebuffer__int* Dictionary__framebuffer__int__New_1(::uStatic* __this)
{
    Dictionary__framebuffer__int* inst = (Dictionary__framebuffer__int*)::uAllocObject(sizeof(Dictionary__framebuffer__int), Dictionary__framebuffer__int__typeof());
    inst->_ObjInit_1();
    return inst;
}

void Dictionary__framebuffer__int__Rehash(Dictionary__framebuffer__int* __this)
{
    ::uArray* oldBuckets = __this->_buckets;
    __this->_buckets = ::uNewArray(::app::Uno::Collections::Dictionary2_Bucket__framebuffer__int__typeof(), ::uPtr< ::uArray*>(oldBuckets)->Length() * 2);
    __this->_count = 0;
    __this->_dummies = 0;

    for (int i = 0; i < oldBuckets->Length(); i++)
    {
        if (oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__framebuffer__int>(i).State == 1)
        {
            __this->Add(oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__framebuffer__int>(i).Key, oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__framebuffer__int>(i).Value);
        }
    }
}

bool Dictionary__framebuffer__int__Remove(Dictionary__framebuffer__int* __this, ::app::Uno::Graphics::Framebuffer* key)
{
    int x = ::app::Uno::Math__Abs_2(NULL, ::app::Uno::Object::GetHashCode(::uPtr< ::app::Uno::Graphics::Framebuffer*>(key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__framebuffer__int>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__framebuffer(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__framebuffer__int>(x).Key, key))
            {
                ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__framebuffer__int>(x).State = 2;
                ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__framebuffer__int>(x).Value = 0;
                ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__framebuffer__int>(x).Key = NULL;
                __this->_count--;
                __this->_dummies++;
                __this->_version++;
                return true;
            }
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__framebuffer__int>(x).State == 0)
        {
            return false;
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

void Dictionary__framebuffer__int__set_Item(Dictionary__framebuffer__int* __this, ::app::Uno::Graphics::Framebuffer* key, int value)
{
    int x = ::app::Uno::Math__Abs_2(NULL, ::app::Uno::Object::GetHashCode(::uPtr< ::app::Uno::Graphics::Framebuffer*>(key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__framebuffer__int>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__framebuffer(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__framebuffer__int>(x).Key, key))
            {
                ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__framebuffer__int>(x).Value = value;
                __this->_version++;
                return;
            }
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__framebuffer__int>(x).State == 0)
        {
            __this->Add(key, value);
            return;
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

bool Dictionary__framebuffer__int__TryGetValue(Dictionary__framebuffer__int* __this, ::app::Uno::Graphics::Framebuffer* key, int* value)
{
    int x = ::app::Uno::Math__Abs_2(NULL, ::app::Uno::Object::GetHashCode(::uPtr< ::app::Uno::Graphics::Framebuffer*>(key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__framebuffer__int>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__framebuffer(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__framebuffer__int>(x).Key, key))
            {
                *value = ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__framebuffer__int>(x).Value;
                return true;
            }
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__framebuffer__int>(x).State == 0)
        {
            *value = 0;
            return false;
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.13.2/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont__uType* Dictionary__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont__typeof()
{
    static ::uStaticStrong<Dictionary__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont__uType*)::uAllocClassType(sizeof(Dictionary__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont__uType), "Uno.Collections.Dictionary<Fuse.Controls.Internal.DefaultTextRenderer_FontKey,Uno.Content.Fonts.BitmapFont>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_buckets", offsetof(Dictionary__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont, _buckets));

    return type;
}

void Dictionary__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont___ObjInit_1(Dictionary__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont* __this)
{
    __this->_buckets = ::uNewArray(::app::Uno::Collections::Dictionary2_Bucket__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont__typeof(), 8);
    __this->_count = 0;
    __this->_dummies = 0;
}

void Dictionary__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont__Add(Dictionary__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont* __this, ::app::Fuse::Controls::Internal::DefaultTextRenderer_FontKey* key, ::app::Uno::Content::Fonts::BitmapFont* value)
{
    if ((__this->_count + __this->_dummies) > (::uPtr< ::uArray*>(__this->_buckets)->Length() / 2))
    {
        __this->Rehash();
    }

    int x = ::app::Uno::Math__Abs_2(NULL, ::app::Uno::Object::GetHashCode(::uPtr< ::app::Fuse::Controls::Internal::DefaultTextRenderer_FontKey*>(key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont>(x).State == 0)
        {
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont>(x).State = 1;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont>(x).Value = value;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont>(x).Key = key;
            __this->_count++;
            __this->_version++;
            return;
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont>(x).State == 2)
        {
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont>(x).State = 1;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont>(x).Value = value;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont>(x).Key = key;
            __this->_count++;
            __this->_dummies--;
            __this->_version++;
            return;
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__Fuse_Controls_Internal_DefaultTextRenderer_FontKey(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont>(x).Key, key))
            {
                U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Dictionary already contains the given key")));
            }
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

Dictionary__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont* Dictionary__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont__New_1(::uStatic* __this)
{
    Dictionary__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont* inst = (Dictionary__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont*)::uAllocObject(sizeof(Dictionary__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont), Dictionary__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont__typeof());
    inst->_ObjInit_1();
    return inst;
}

void Dictionary__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont__Rehash(Dictionary__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont* __this)
{
    ::uArray* oldBuckets = __this->_buckets;
    __this->_buckets = ::uNewArray(::app::Uno::Collections::Dictionary2_Bucket__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont__typeof(), ::uPtr< ::uArray*>(oldBuckets)->Length() * 2);
    __this->_count = 0;
    __this->_dummies = 0;

    for (int i = 0; i < oldBuckets->Length(); i++)
    {
        if (oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont>(i).State == 1)
        {
            __this->Add(oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont>(i).Key, oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont>(i).Value);
        }
    }
}

bool Dictionary__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont__TryGetValue(Dictionary__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont* __this, ::app::Fuse::Controls::Internal::DefaultTextRenderer_FontKey* key, ::app::Uno::Content::Fonts::BitmapFont** value)
{
    int x = ::app::Uno::Math__Abs_2(NULL, ::app::Uno::Object::GetHashCode(::uPtr< ::app::Fuse::Controls::Internal::DefaultTextRenderer_FontKey*>(key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__Fuse_Controls_Internal_DefaultTextRenderer_FontKey(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont>(x).Key, key))
            {
                *value = ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont>(x).Value;
                return true;
            }
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont>(x).State == 0)
        {
            *value = NULL;
            return false;
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.13.2/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__uType* Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__typeof()
{
    static ::uStaticStrong<Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__uType*)::uAllocClassType(sizeof(Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__uType), "Uno.Collections.Dictionary<Fuse.Drawing.Stroke,Fuse.Drawing.PolygonFiller>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_buckets", offsetof(Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller, _buckets));

    return type;
}

void Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller___ObjInit_1(Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* __this)
{
    __this->_buckets = ::uNewArray(::app::Uno::Collections::Dictionary2_Bucket__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__typeof(), 8);
    __this->_count = 0;
    __this->_dummies = 0;
}

void Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__Add(Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* __this, ::app::Fuse::Drawing::Stroke* key, ::app::Fuse::Drawing::PolygonFiller* value)
{
    if ((__this->_count + __this->_dummies) > (::uPtr< ::uArray*>(__this->_buckets)->Length() / 2))
    {
        __this->Rehash();
    }

    int x = ::app::Uno::Math__Abs_2(NULL, ::app::Uno::Object::GetHashCode(::uPtr< ::app::Fuse::Drawing::Stroke*>(key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller>(x).State == 0)
        {
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller>(x).State = 1;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller>(x).Value = value;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller>(x).Key = key;
            __this->_count++;
            __this->_version++;
            return;
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller>(x).State == 2)
        {
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller>(x).State = 1;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller>(x).Value = value;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller>(x).Key = key;
            __this->_count++;
            __this->_dummies--;
            __this->_version++;
            return;
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__Fuse_Drawing_Stroke(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller>(x).Key, key))
            {
                U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Dictionary already contains the given key")));
            }
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

void Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__Clear(Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* __this)
{
    for (int i = 0; i < ::uPtr< ::uArray*>(__this->_buckets)->Length(); i++)
    {
        ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller>(i).State = 0;
        ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller>(i).Value = NULL;
        ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller>(i).Key = NULL;
    }

    __this->_count = 0;
    __this->_dummies = 0;
    __this->_version++;
}

::app::Fuse::Drawing::PolygonFiller* Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__get_Item(Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* __this, ::app::Fuse::Drawing::Stroke* key)
{
    int x = ::app::Uno::Math__Abs_2(NULL, ::app::Uno::Object::GetHashCode(::uPtr< ::app::Fuse::Drawing::Stroke*>(key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__Fuse_Drawing_Stroke(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller>(x).Key, key))
            {
                return ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller>(x).Value;
            }
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller>(x).State == 0)
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Dictionary did not contain the given key")));
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

::app::Uno::Collections::Dictionary2_ValueCollection__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__get_Values(Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* __this)
{
    return ::app::Uno::Collections::Dictionary2_ValueCollection__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__New_1(NULL, __this);
}

::app::Uno::Collections::Dictionary2_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__GetEnumerator(Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* __this)
{
    return ::app::Uno::Collections::Dictionary2_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__New_1(NULL, __this);
}

Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__New_1(::uStatic* __this)
{
    Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* inst = (Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller*)::uAllocObject(sizeof(Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller), Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__typeof());
    inst->_ObjInit_1();
    return inst;
}

void Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__Rehash(Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* __this)
{
    ::uArray* oldBuckets = __this->_buckets;
    __this->_buckets = ::uNewArray(::app::Uno::Collections::Dictionary2_Bucket__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__typeof(), ::uPtr< ::uArray*>(oldBuckets)->Length() * 2);
    __this->_count = 0;
    __this->_dummies = 0;

    for (int i = 0; i < oldBuckets->Length(); i++)
    {
        if (oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller>(i).State == 1)
        {
            __this->Add(oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller>(i).Key, oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller>(i).Value);
        }
    }
}

bool Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__Remove(Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* __this, ::app::Fuse::Drawing::Stroke* key)
{
    int x = ::app::Uno::Math__Abs_2(NULL, ::app::Uno::Object::GetHashCode(::uPtr< ::app::Fuse::Drawing::Stroke*>(key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__Fuse_Drawing_Stroke(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller>(x).Key, key))
            {
                ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller>(x).State = 2;
                ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller>(x).Value = NULL;
                ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller>(x).Key = NULL;
                __this->_count--;
                __this->_dummies++;
                __this->_version++;
                return true;
            }
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller>(x).State == 0)
        {
            return false;
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

void Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__set_Item(Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* __this, ::app::Fuse::Drawing::Stroke* key, ::app::Fuse::Drawing::PolygonFiller* value)
{
    int x = ::app::Uno::Math__Abs_2(NULL, ::app::Uno::Object::GetHashCode(::uPtr< ::app::Fuse::Drawing::Stroke*>(key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__Fuse_Drawing_Stroke(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller>(x).Key, key))
            {
                ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller>(x).Value = value;
                __this->_version++;
                return;
            }
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller>(x).State == 0)
        {
            __this->Add(key, value);
            return;
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

bool Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__TryGetValue(Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* __this, ::app::Fuse::Drawing::Stroke* key, ::app::Fuse::Drawing::PolygonFiller** value)
{
    int x = ::app::Uno::Math__Abs_2(NULL, ::app::Uno::Object::GetHashCode(::uPtr< ::app::Fuse::Drawing::Stroke*>(key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__Fuse_Drawing_Stroke(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller>(x).Key, key))
            {
                *value = ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller>(x).Value;
                return true;
            }
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller>(x).State == 0)
        {
            *value = NULL;
            return false;
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.13.2/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__uType* Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__typeof()
{
    static ::uStaticStrong<Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__uType*)::uAllocClassType(sizeof(Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__uType), "Uno.Collections.Dictionary<Fuse.Font,Fuse.Controls.Internal.DefaultTextRenderer>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_buckets", offsetof(Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer, _buckets));

    return type;
}

void Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer___ObjInit_1(Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer* __this)
{
    __this->_buckets = ::uNewArray(::app::Uno::Collections::Dictionary2_Bucket__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__typeof(), 8);
    __this->_count = 0;
    __this->_dummies = 0;
}

void Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__Add(Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer* __this, ::app::Fuse::Font* key, ::app::Fuse::Controls::Internal::DefaultTextRenderer* value)
{
    if ((__this->_count + __this->_dummies) > (::uPtr< ::uArray*>(__this->_buckets)->Length() / 2))
    {
        __this->Rehash();
    }

    int x = ::app::Uno::Math__Abs_2(NULL, ::app::Uno::Object::GetHashCode(::uPtr< ::app::Fuse::Font*>(key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer>(x).State == 0)
        {
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer>(x).State = 1;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer>(x).Value = value;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer>(x).Key = key;
            __this->_count++;
            __this->_version++;
            return;
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer>(x).State == 2)
        {
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer>(x).State = 1;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer>(x).Value = value;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer>(x).Key = key;
            __this->_count++;
            __this->_dummies--;
            __this->_version++;
            return;
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__Fuse_Font(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer>(x).Key, key))
            {
                U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Dictionary already contains the given key")));
            }
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer* Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__New_1(::uStatic* __this)
{
    Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer* inst = (Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer*)::uAllocObject(sizeof(Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer), Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__typeof());
    inst->_ObjInit_1();
    return inst;
}

void Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__Rehash(Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer* __this)
{
    ::uArray* oldBuckets = __this->_buckets;
    __this->_buckets = ::uNewArray(::app::Uno::Collections::Dictionary2_Bucket__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__typeof(), ::uPtr< ::uArray*>(oldBuckets)->Length() * 2);
    __this->_count = 0;
    __this->_dummies = 0;

    for (int i = 0; i < oldBuckets->Length(); i++)
    {
        if (oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer>(i).State == 1)
        {
            __this->Add(oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer>(i).Key, oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer>(i).Value);
        }
    }
}

bool Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__TryGetValue(Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer* __this, ::app::Fuse::Font* key, ::app::Fuse::Controls::Internal::DefaultTextRenderer** value)
{
    int x = ::app::Uno::Math__Abs_2(NULL, ::app::Uno::Object::GetHashCode(::uPtr< ::app::Fuse::Font*>(key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__Fuse_Font(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer>(x).Key, key))
            {
                *value = ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer>(x).Value;
                return true;
            }
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer>(x).State == 0)
        {
            *value = NULL;
            return false;
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.13.2/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary__Fuse_IFlush__bool__uType* Dictionary__Fuse_IFlush__bool__typeof()
{
    static ::uStaticStrong<Dictionary__Fuse_IFlush__bool__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary__Fuse_IFlush__bool__uType*)::uAllocClassType(sizeof(Dictionary__Fuse_IFlush__bool__uType), "Uno.Collections.Dictionary<Fuse.IFlush,bool>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_buckets", offsetof(Dictionary__Fuse_IFlush__bool, _buckets));

    return type;
}

void Dictionary__Fuse_IFlush__bool__Clear(Dictionary__Fuse_IFlush__bool* __this)
{
    for (int i = 0; i < ::uPtr< ::uArray*>(__this->_buckets)->Length(); i++)
    {
        ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_IFlush__bool>(i).State = 0;
        ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_IFlush__bool>(i).Value = 0;
        ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_IFlush__bool>(i).Key = NULL;
    }

    __this->_count = 0;
    __this->_dummies = 0;
    __this->_version++;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.13.2/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__uType* Dictionary__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__typeof()
{
    static ::uStaticStrong<Dictionary__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__uType*)::uAllocClassType(sizeof(Dictionary__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__uType), "Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge,Fuse.Gestures.Internal.EdgeSwiper>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_buckets", offsetof(Dictionary__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper, _buckets));

    return type;
}

void Dictionary__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper___ObjInit_1(Dictionary__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper* __this)
{
    __this->_buckets = ::uNewArray(::app::Uno::Collections::Dictionary2_Bucket__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__typeof(), 8);
    __this->_count = 0;
    __this->_dummies = 0;
}

void Dictionary__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__Add(Dictionary__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper* __this, int key, ::app::Fuse::Gestures::Internal::EdgeSwiper* value)
{
    if ((__this->_count + __this->_dummies) > (::uPtr< ::uArray*>(__this->_buckets)->Length() / 2))
    {
        __this->Rehash();
    }

    int x = ::app::Uno::Math__Abs_2(NULL, ::app::Uno::Object::GetHashCode(::uBox< int>(::app::Fuse::Navigation::NavigationEdge__typeof(), key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper>(x).State == 0)
        {
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper>(x).State = 1;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper>(x).Value = value;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper>(x).Key = key;
            __this->_count++;
            __this->_version++;
            return;
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper>(x).State == 2)
        {
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper>(x).State = 1;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper>(x).Value = value;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper>(x).Key = key;
            __this->_count++;
            __this->_dummies--;
            __this->_version++;
            return;
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__Fuse_Navigation_NavigationEdge(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper>(x).Key, key))
            {
                U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Dictionary already contains the given key")));
            }
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

void Dictionary__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__Clear(Dictionary__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper* __this)
{
    for (int i = 0; i < ::uPtr< ::uArray*>(__this->_buckets)->Length(); i++)
    {
        ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper>(i).State = 0;
        ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper>(i).Value = NULL;
        ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper>(i).Key = 0;
    }

    __this->_count = 0;
    __this->_dummies = 0;
    __this->_version++;
}

::app::Fuse::Gestures::Internal::EdgeSwiper* Dictionary__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__get_Item(Dictionary__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper* __this, int key)
{
    int x = ::app::Uno::Math__Abs_2(NULL, ::app::Uno::Object::GetHashCode(::uBox< int>(::app::Fuse::Navigation::NavigationEdge__typeof(), key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__Fuse_Navigation_NavigationEdge(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper>(x).Key, key))
            {
                return ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper>(x).Value;
            }
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper>(x).State == 0)
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Dictionary did not contain the given key")));
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

::app::Uno::Collections::Dictionary2_Enumerator__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper Dictionary__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__GetEnumerator(Dictionary__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper* __this)
{
    return ::app::Uno::Collections::Dictionary2_Enumerator__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__New_1(NULL, __this);
}

Dictionary__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper* Dictionary__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__New_1(::uStatic* __this)
{
    Dictionary__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper* inst = (Dictionary__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper*)::uAllocObject(sizeof(Dictionary__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper), Dictionary__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__typeof());
    inst->_ObjInit_1();
    return inst;
}

void Dictionary__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__Rehash(Dictionary__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper* __this)
{
    ::uArray* oldBuckets = __this->_buckets;
    __this->_buckets = ::uNewArray(::app::Uno::Collections::Dictionary2_Bucket__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__typeof(), ::uPtr< ::uArray*>(oldBuckets)->Length() * 2);
    __this->_count = 0;
    __this->_dummies = 0;

    for (int i = 0; i < oldBuckets->Length(); i++)
    {
        if (oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper>(i).State == 1)
        {
            __this->Add(oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper>(i).Key, oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper>(i).Value);
        }
    }
}

void Dictionary__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__set_Item(Dictionary__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper* __this, int key, ::app::Fuse::Gestures::Internal::EdgeSwiper* value)
{
    int x = ::app::Uno::Math__Abs_2(NULL, ::app::Uno::Object::GetHashCode(::uBox< int>(::app::Fuse::Navigation::NavigationEdge__typeof(), key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__Fuse_Navigation_NavigationEdge(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper>(x).Key, key))
            {
                ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper>(x).Value = value;
                __this->_version++;
                return;
            }
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper>(x).State == 0)
        {
            __this->Add(key, value);
            return;
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.13.2/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary__Fuse_Node__bool__uType* Dictionary__Fuse_Node__bool__typeof()
{
    static ::uStaticStrong<Dictionary__Fuse_Node__bool__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary__Fuse_Node__bool__uType*)::uAllocClassType(sizeof(Dictionary__Fuse_Node__bool__uType), "Uno.Collections.Dictionary<Fuse.Node,bool>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_buckets", offsetof(Dictionary__Fuse_Node__bool, _buckets));

    return type;
}

void Dictionary__Fuse_Node__bool___ObjInit_1(Dictionary__Fuse_Node__bool* __this)
{
    __this->_buckets = ::uNewArray(::app::Uno::Collections::Dictionary2_Bucket__Fuse_Node__bool__typeof(), 8);
    __this->_count = 0;
    __this->_dummies = 0;
}

void Dictionary__Fuse_Node__bool__Add(Dictionary__Fuse_Node__bool* __this, ::app::Fuse::Node* key, bool value)
{
    if ((__this->_count + __this->_dummies) > (::uPtr< ::uArray*>(__this->_buckets)->Length() / 2))
    {
        __this->Rehash();
    }

    int x = ::app::Uno::Math__Abs_2(NULL, ::app::Uno::Object::GetHashCode(::uPtr< ::app::Fuse::Node*>(key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Node__bool>(x).State == 0)
        {
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Node__bool>(x).State = 1;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Node__bool>(x).Value = value;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Node__bool>(x).Key = key;
            __this->_count++;
            __this->_version++;
            return;
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Node__bool>(x).State == 2)
        {
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Node__bool>(x).State = 1;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Node__bool>(x).Value = value;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Node__bool>(x).Key = key;
            __this->_count++;
            __this->_dummies--;
            __this->_version++;
            return;
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Node__bool>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__Fuse_Node(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Node__bool>(x).Key, key))
            {
                U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Dictionary already contains the given key")));
            }
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

bool Dictionary__Fuse_Node__bool__ContainsKey(Dictionary__Fuse_Node__bool* __this, ::app::Fuse::Node* key)
{
    int x = ::app::Uno::Math__Abs_2(NULL, ::app::Uno::Object::GetHashCode(::uPtr< ::app::Fuse::Node*>(key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Node__bool>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__Fuse_Node(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Node__bool>(x).Key, key))
            {
                return true;
            }
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Node__bool>(x).State == 0)
        {
            return false;
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

bool Dictionary__Fuse_Node__bool__get_Item(Dictionary__Fuse_Node__bool* __this, ::app::Fuse::Node* key)
{
    int x = ::app::Uno::Math__Abs_2(NULL, ::app::Uno::Object::GetHashCode(::uPtr< ::app::Fuse::Node*>(key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Node__bool>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__Fuse_Node(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Node__bool>(x).Key, key))
            {
                return ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Node__bool>(x).Value;
            }
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Node__bool>(x).State == 0)
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Dictionary did not contain the given key")));
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

Dictionary__Fuse_Node__bool* Dictionary__Fuse_Node__bool__New_1(::uStatic* __this)
{
    Dictionary__Fuse_Node__bool* inst = (Dictionary__Fuse_Node__bool*)::uAllocObject(sizeof(Dictionary__Fuse_Node__bool), Dictionary__Fuse_Node__bool__typeof());
    inst->_ObjInit_1();
    return inst;
}

void Dictionary__Fuse_Node__bool__Rehash(Dictionary__Fuse_Node__bool* __this)
{
    ::uArray* oldBuckets = __this->_buckets;
    __this->_buckets = ::uNewArray(::app::Uno::Collections::Dictionary2_Bucket__Fuse_Node__bool__typeof(), ::uPtr< ::uArray*>(oldBuckets)->Length() * 2);
    __this->_count = 0;
    __this->_dummies = 0;

    for (int i = 0; i < oldBuckets->Length(); i++)
    {
        if (oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Node__bool>(i).State == 1)
        {
            __this->Add(oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Node__bool>(i).Key, oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Node__bool>(i).Value);
        }
    }
}

void Dictionary__Fuse_Node__bool__set_Item(Dictionary__Fuse_Node__bool* __this, ::app::Fuse::Node* key, bool value)
{
    int x = ::app::Uno::Math__Abs_2(NULL, ::app::Uno::Object::GetHashCode(::uPtr< ::app::Fuse::Node*>(key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Node__bool>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__Fuse_Node(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Node__bool>(x).Key, key))
            {
                ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Node__bool>(x).Value = value;
                __this->_version++;
                return;
            }
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Node__bool>(x).State == 0)
        {
            __this->Add(key, value);
            return;
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.13.2/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary__int__Fuse_Input_Capturer__uType* Dictionary__int__Fuse_Input_Capturer__typeof()
{
    static ::uStaticStrong<Dictionary__int__Fuse_Input_Capturer__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary__int__Fuse_Input_Capturer__uType*)::uAllocClassType(sizeof(Dictionary__int__Fuse_Input_Capturer__uType), "Uno.Collections.Dictionary<int,Fuse.Input.Capturer>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_buckets", offsetof(Dictionary__int__Fuse_Input_Capturer, _buckets));

    return type;
}

void Dictionary__int__Fuse_Input_Capturer___ObjInit_1(Dictionary__int__Fuse_Input_Capturer* __this)
{
    __this->_buckets = ::uNewArray(::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Input_Capturer__typeof(), 8);
    __this->_count = 0;
    __this->_dummies = 0;
}

void Dictionary__int__Fuse_Input_Capturer__Add(Dictionary__int__Fuse_Input_Capturer* __this, int key, ::app::Fuse::Input::Capturer* value)
{
    if ((__this->_count + __this->_dummies) > (::uPtr< ::uArray*>(__this->_buckets)->Length() / 2))
    {
        __this->Rehash();
    }

    int x = ::app::Uno::Math__Abs_2(NULL, ::app::Uno::Object::GetHashCode(::uBox< int>(::app::Uno::Int__typeof(), key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Input_Capturer>(x).State == 0)
        {
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Input_Capturer>(x).State = 1;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Input_Capturer>(x).Value = value;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Input_Capturer>(x).Key = key;
            __this->_count++;
            __this->_version++;
            return;
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Input_Capturer>(x).State == 2)
        {
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Input_Capturer>(x).State = 1;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Input_Capturer>(x).Value = value;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Input_Capturer>(x).Key = key;
            __this->_count++;
            __this->_dummies--;
            __this->_version++;
            return;
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Input_Capturer>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__int(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Input_Capturer>(x).Key, key))
            {
                U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Dictionary already contains the given key")));
            }
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

bool Dictionary__int__Fuse_Input_Capturer__ContainsKey(Dictionary__int__Fuse_Input_Capturer* __this, int key)
{
    int x = ::app::Uno::Math__Abs_2(NULL, ::app::Uno::Object::GetHashCode(::uBox< int>(::app::Uno::Int__typeof(), key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Input_Capturer>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__int(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Input_Capturer>(x).Key, key))
            {
                return true;
            }
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Input_Capturer>(x).State == 0)
        {
            return false;
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

::app::Fuse::Input::Capturer* Dictionary__int__Fuse_Input_Capturer__get_Item(Dictionary__int__Fuse_Input_Capturer* __this, int key)
{
    int x = ::app::Uno::Math__Abs_2(NULL, ::app::Uno::Object::GetHashCode(::uBox< int>(::app::Uno::Int__typeof(), key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Input_Capturer>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__int(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Input_Capturer>(x).Key, key))
            {
                return ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Input_Capturer>(x).Value;
            }
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Input_Capturer>(x).State == 0)
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Dictionary did not contain the given key")));
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

::app::Uno::Collections::Dictionary2_Enumerator__int__Fuse_Input_Capturer Dictionary__int__Fuse_Input_Capturer__GetEnumerator(Dictionary__int__Fuse_Input_Capturer* __this)
{
    return ::app::Uno::Collections::Dictionary2_Enumerator__int__Fuse_Input_Capturer__New_1(NULL, __this);
}

Dictionary__int__Fuse_Input_Capturer* Dictionary__int__Fuse_Input_Capturer__New_1(::uStatic* __this)
{
    Dictionary__int__Fuse_Input_Capturer* inst = (Dictionary__int__Fuse_Input_Capturer*)::uAllocObject(sizeof(Dictionary__int__Fuse_Input_Capturer), Dictionary__int__Fuse_Input_Capturer__typeof());
    inst->_ObjInit_1();
    return inst;
}

void Dictionary__int__Fuse_Input_Capturer__Rehash(Dictionary__int__Fuse_Input_Capturer* __this)
{
    ::uArray* oldBuckets = __this->_buckets;
    __this->_buckets = ::uNewArray(::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Input_Capturer__typeof(), ::uPtr< ::uArray*>(oldBuckets)->Length() * 2);
    __this->_count = 0;
    __this->_dummies = 0;

    for (int i = 0; i < oldBuckets->Length(); i++)
    {
        if (oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Input_Capturer>(i).State == 1)
        {
            __this->Add(oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Input_Capturer>(i).Key, oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Input_Capturer>(i).Value);
        }
    }
}

bool Dictionary__int__Fuse_Input_Capturer__Remove(Dictionary__int__Fuse_Input_Capturer* __this, int key)
{
    int x = ::app::Uno::Math__Abs_2(NULL, ::app::Uno::Object::GetHashCode(::uBox< int>(::app::Uno::Int__typeof(), key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Input_Capturer>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__int(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Input_Capturer>(x).Key, key))
            {
                ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Input_Capturer>(x).State = 2;
                ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Input_Capturer>(x).Value = NULL;
                ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Input_Capturer>(x).Key = 0;
                __this->_count--;
                __this->_dummies++;
                __this->_version++;
                return true;
            }
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Input_Capturer>(x).State == 0)
        {
            return false;
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

void Dictionary__int__Fuse_Input_Capturer__set_Item(Dictionary__int__Fuse_Input_Capturer* __this, int key, ::app::Fuse::Input::Capturer* value)
{
    int x = ::app::Uno::Math__Abs_2(NULL, ::app::Uno::Object::GetHashCode(::uBox< int>(::app::Uno::Int__typeof(), key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Input_Capturer>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__int(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Input_Capturer>(x).Key, key))
            {
                ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Input_Capturer>(x).Value = value;
                __this->_version++;
                return;
            }
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Input_Capturer>(x).State == 0)
        {
            __this->Add(key, value);
            return;
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.13.2/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary__int__Fuse_Input_Pointer_PointerRecord__uType* Dictionary__int__Fuse_Input_Pointer_PointerRecord__typeof()
{
    static ::uStaticStrong<Dictionary__int__Fuse_Input_Pointer_PointerRecord__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary__int__Fuse_Input_Pointer_PointerRecord__uType*)::uAllocClassType(sizeof(Dictionary__int__Fuse_Input_Pointer_PointerRecord__uType), "Uno.Collections.Dictionary<int,Fuse.Input.Pointer_PointerRecord>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_buckets", offsetof(Dictionary__int__Fuse_Input_Pointer_PointerRecord, _buckets));

    return type;
}

void Dictionary__int__Fuse_Input_Pointer_PointerRecord___ObjInit_1(Dictionary__int__Fuse_Input_Pointer_PointerRecord* __this)
{
    __this->_buckets = ::uNewArray(::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Input_Pointer_PointerRecord__typeof(), 8);
    __this->_count = 0;
    __this->_dummies = 0;
}

void Dictionary__int__Fuse_Input_Pointer_PointerRecord__Add(Dictionary__int__Fuse_Input_Pointer_PointerRecord* __this, int key, ::app::Fuse::Input::Pointer_PointerRecord* value)
{
    if ((__this->_count + __this->_dummies) > (::uPtr< ::uArray*>(__this->_buckets)->Length() / 2))
    {
        __this->Rehash();
    }

    int x = ::app::Uno::Math__Abs_2(NULL, ::app::Uno::Object::GetHashCode(::uBox< int>(::app::Uno::Int__typeof(), key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Input_Pointer_PointerRecord>(x).State == 0)
        {
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Input_Pointer_PointerRecord>(x).State = 1;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Input_Pointer_PointerRecord>(x).Value = value;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Input_Pointer_PointerRecord>(x).Key = key;
            __this->_count++;
            __this->_version++;
            return;
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Input_Pointer_PointerRecord>(x).State == 2)
        {
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Input_Pointer_PointerRecord>(x).State = 1;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Input_Pointer_PointerRecord>(x).Value = value;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Input_Pointer_PointerRecord>(x).Key = key;
            __this->_count++;
            __this->_dummies--;
            __this->_version++;
            return;
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Input_Pointer_PointerRecord>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__int(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Input_Pointer_PointerRecord>(x).Key, key))
            {
                U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Dictionary already contains the given key")));
            }
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

bool Dictionary__int__Fuse_Input_Pointer_PointerRecord__ContainsKey(Dictionary__int__Fuse_Input_Pointer_PointerRecord* __this, int key)
{
    int x = ::app::Uno::Math__Abs_2(NULL, ::app::Uno::Object::GetHashCode(::uBox< int>(::app::Uno::Int__typeof(), key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Input_Pointer_PointerRecord>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__int(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Input_Pointer_PointerRecord>(x).Key, key))
            {
                return true;
            }
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Input_Pointer_PointerRecord>(x).State == 0)
        {
            return false;
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

::app::Fuse::Input::Pointer_PointerRecord* Dictionary__int__Fuse_Input_Pointer_PointerRecord__get_Item(Dictionary__int__Fuse_Input_Pointer_PointerRecord* __this, int key)
{
    int x = ::app::Uno::Math__Abs_2(NULL, ::app::Uno::Object::GetHashCode(::uBox< int>(::app::Uno::Int__typeof(), key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Input_Pointer_PointerRecord>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__int(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Input_Pointer_PointerRecord>(x).Key, key))
            {
                return ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Input_Pointer_PointerRecord>(x).Value;
            }
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Input_Pointer_PointerRecord>(x).State == 0)
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Dictionary did not contain the given key")));
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

::app::Uno::Collections::Dictionary2_Enumerator__int__Fuse_Input_Pointer_PointerRecord Dictionary__int__Fuse_Input_Pointer_PointerRecord__GetEnumerator(Dictionary__int__Fuse_Input_Pointer_PointerRecord* __this)
{
    return ::app::Uno::Collections::Dictionary2_Enumerator__int__Fuse_Input_Pointer_PointerRecord__New_1(NULL, __this);
}

Dictionary__int__Fuse_Input_Pointer_PointerRecord* Dictionary__int__Fuse_Input_Pointer_PointerRecord__New_1(::uStatic* __this)
{
    Dictionary__int__Fuse_Input_Pointer_PointerRecord* inst = (Dictionary__int__Fuse_Input_Pointer_PointerRecord*)::uAllocObject(sizeof(Dictionary__int__Fuse_Input_Pointer_PointerRecord), Dictionary__int__Fuse_Input_Pointer_PointerRecord__typeof());
    inst->_ObjInit_1();
    return inst;
}

void Dictionary__int__Fuse_Input_Pointer_PointerRecord__Rehash(Dictionary__int__Fuse_Input_Pointer_PointerRecord* __this)
{
    ::uArray* oldBuckets = __this->_buckets;
    __this->_buckets = ::uNewArray(::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Input_Pointer_PointerRecord__typeof(), ::uPtr< ::uArray*>(oldBuckets)->Length() * 2);
    __this->_count = 0;
    __this->_dummies = 0;

    for (int i = 0; i < oldBuckets->Length(); i++)
    {
        if (oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Input_Pointer_PointerRecord>(i).State == 1)
        {
            __this->Add(oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Input_Pointer_PointerRecord>(i).Key, oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Input_Pointer_PointerRecord>(i).Value);
        }
    }
}

bool Dictionary__int__Fuse_Input_Pointer_PointerRecord__Remove(Dictionary__int__Fuse_Input_Pointer_PointerRecord* __this, int key)
{
    int x = ::app::Uno::Math__Abs_2(NULL, ::app::Uno::Object::GetHashCode(::uBox< int>(::app::Uno::Int__typeof(), key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Input_Pointer_PointerRecord>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__int(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Input_Pointer_PointerRecord>(x).Key, key))
            {
                ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Input_Pointer_PointerRecord>(x).State = 2;
                ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Input_Pointer_PointerRecord>(x).Value = NULL;
                ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Input_Pointer_PointerRecord>(x).Key = 0;
                __this->_count--;
                __this->_dummies++;
                __this->_version++;
                return true;
            }
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Input_Pointer_PointerRecord>(x).State == 0)
        {
            return false;
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

void Dictionary__int__Fuse_Input_Pointer_PointerRecord__set_Item(Dictionary__int__Fuse_Input_Pointer_PointerRecord* __this, int key, ::app::Fuse::Input::Pointer_PointerRecord* value)
{
    int x = ::app::Uno::Math__Abs_2(NULL, ::app::Uno::Object::GetHashCode(::uBox< int>(::app::Uno::Int__typeof(), key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Input_Pointer_PointerRecord>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__int(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Input_Pointer_PointerRecord>(x).Key, key))
            {
                ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Input_Pointer_PointerRecord>(x).Value = value;
                __this->_version++;
                return;
            }
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Input_Pointer_PointerRecord>(x).State == 0)
        {
            __this->Add(key, value);
            return;
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.13.2/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary__int__Fuse_Scripting_Callback__uType* Dictionary__int__Fuse_Scripting_Callback__typeof()
{
    static ::uStaticStrong<Dictionary__int__Fuse_Scripting_Callback__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary__int__Fuse_Scripting_Callback__uType*)::uAllocClassType(sizeof(Dictionary__int__Fuse_Scripting_Callback__uType), "Uno.Collections.Dictionary<int,Fuse.Scripting.Callback>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_buckets", offsetof(Dictionary__int__Fuse_Scripting_Callback, _buckets));

    return type;
}

void Dictionary__int__Fuse_Scripting_Callback___ObjInit_1(Dictionary__int__Fuse_Scripting_Callback* __this)
{
    __this->_buckets = ::uNewArray(::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Scripting_Callback__typeof(), 8);
    __this->_count = 0;
    __this->_dummies = 0;
}

void Dictionary__int__Fuse_Scripting_Callback__Add(Dictionary__int__Fuse_Scripting_Callback* __this, int key, ::uDelegate* value)
{
    if ((__this->_count + __this->_dummies) > (::uPtr< ::uArray*>(__this->_buckets)->Length() / 2))
    {
        __this->Rehash();
    }

    int x = ::app::Uno::Math__Abs_2(NULL, ::app::Uno::Object::GetHashCode(::uBox< int>(::app::Uno::Int__typeof(), key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Scripting_Callback>(x).State == 0)
        {
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Scripting_Callback>(x).State = 1;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Scripting_Callback>(x).Value = value;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Scripting_Callback>(x).Key = key;
            __this->_count++;
            __this->_version++;
            return;
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Scripting_Callback>(x).State == 2)
        {
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Scripting_Callback>(x).State = 1;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Scripting_Callback>(x).Value = value;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Scripting_Callback>(x).Key = key;
            __this->_count++;
            __this->_dummies--;
            __this->_version++;
            return;
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Scripting_Callback>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__int(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Scripting_Callback>(x).Key, key))
            {
                U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Dictionary already contains the given key")));
            }
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

::uDelegate* Dictionary__int__Fuse_Scripting_Callback__get_Item(Dictionary__int__Fuse_Scripting_Callback* __this, int key)
{
    int x = ::app::Uno::Math__Abs_2(NULL, ::app::Uno::Object::GetHashCode(::uBox< int>(::app::Uno::Int__typeof(), key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Scripting_Callback>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__int(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Scripting_Callback>(x).Key, key))
            {
                return ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Scripting_Callback>(x).Value;
            }
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Scripting_Callback>(x).State == 0)
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Dictionary did not contain the given key")));
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

Dictionary__int__Fuse_Scripting_Callback* Dictionary__int__Fuse_Scripting_Callback__New_1(::uStatic* __this)
{
    Dictionary__int__Fuse_Scripting_Callback* inst = (Dictionary__int__Fuse_Scripting_Callback*)::uAllocObject(sizeof(Dictionary__int__Fuse_Scripting_Callback), Dictionary__int__Fuse_Scripting_Callback__typeof());
    inst->_ObjInit_1();
    return inst;
}

void Dictionary__int__Fuse_Scripting_Callback__Rehash(Dictionary__int__Fuse_Scripting_Callback* __this)
{
    ::uArray* oldBuckets = __this->_buckets;
    __this->_buckets = ::uNewArray(::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Scripting_Callback__typeof(), ::uPtr< ::uArray*>(oldBuckets)->Length() * 2);
    __this->_count = 0;
    __this->_dummies = 0;

    for (int i = 0; i < oldBuckets->Length(); i++)
    {
        if (oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Scripting_Callback>(i).State == 1)
        {
            __this->Add(oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Scripting_Callback>(i).Key, oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Scripting_Callback>(i).Value);
        }
    }
}

void Dictionary__int__Fuse_Scripting_Callback__set_Item(Dictionary__int__Fuse_Scripting_Callback* __this, int key, ::uDelegate* value)
{
    int x = ::app::Uno::Math__Abs_2(NULL, ::app::Uno::Object::GetHashCode(::uBox< int>(::app::Uno::Int__typeof(), key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Scripting_Callback>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__int(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Scripting_Callback>(x).Key, key))
            {
                ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Scripting_Callback>(x).Value = value;
                __this->_version++;
                return;
            }
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Scripting_Callback>(x).State == 0)
        {
            __this->Add(key, value);
            return;
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.13.2/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary__int__string__uType* Dictionary__int__string__typeof()
{
    static ::uStaticStrong<Dictionary__int__string__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary__int__string__uType*)::uAllocClassType(sizeof(Dictionary__int__string__uType), "Uno.Collections.Dictionary<int,string>", false, 1, 1, 0);

    type->SetInterfaces(
        ::app::Uno::Collections::IDictionary__int__string__typeof(), offsetof(Dictionary__int__string__uType, __interface_0));

    type->SetStrongRefs(
        "_buckets", offsetof(Dictionary__int__string, _buckets));

    return type;
}

void Dictionary__int__string___ObjInit_1(Dictionary__int__string* __this)
{
    __this->_buckets = ::uNewArray(::app::Uno::Collections::Dictionary2_Bucket__int__string__typeof(), 8);
    __this->_count = 0;
    __this->_dummies = 0;
}

void Dictionary__int__string__Add(Dictionary__int__string* __this, int key, ::uString* value)
{
    if ((__this->_count + __this->_dummies) > (::uPtr< ::uArray*>(__this->_buckets)->Length() / 2))
    {
        __this->Rehash();
    }

    int x = ::app::Uno::Math__Abs_2(NULL, ::app::Uno::Object::GetHashCode(::uBox< int>(::app::Uno::Int__typeof(), key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__string>(x).State == 0)
        {
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__string>(x).State = 1;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__string>(x).Value = value;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__string>(x).Key = key;
            __this->_count++;
            __this->_version++;
            return;
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__string>(x).State == 2)
        {
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__string>(x).State = 1;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__string>(x).Value = value;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__string>(x).Key = key;
            __this->_count++;
            __this->_dummies--;
            __this->_version++;
            return;
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__string>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__int(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__string>(x).Key, key))
            {
                U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Dictionary already contains the given key")));
            }
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

Dictionary__int__string* Dictionary__int__string__New_1(::uStatic* __this)
{
    Dictionary__int__string* inst = (Dictionary__int__string*)::uAllocObject(sizeof(Dictionary__int__string), Dictionary__int__string__typeof());
    inst->_ObjInit_1();
    return inst;
}

void Dictionary__int__string__Rehash(Dictionary__int__string* __this)
{
    ::uArray* oldBuckets = __this->_buckets;
    __this->_buckets = ::uNewArray(::app::Uno::Collections::Dictionary2_Bucket__int__string__typeof(), ::uPtr< ::uArray*>(oldBuckets)->Length() * 2);
    __this->_count = 0;
    __this->_dummies = 0;

    for (int i = 0; i < oldBuckets->Length(); i++)
    {
        if (oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__string>(i).State == 1)
        {
            __this->Add(oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__string>(i).Key, oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__string>(i).Value);
        }
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.13.2/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer___uType* Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer___typeof()
{
    static ::uStaticStrong<Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer___uType*> type;
    if (type != NULL) return type;

    type = (Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer___uType*)::uAllocClassType(sizeof(Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer___uType), "Uno.Collections.Dictionary<int,Uno.Collections.IList<Fuse.Input.Capturer>>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_buckets", offsetof(Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_, _buckets));

    return type;
}

void Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer____ObjInit_1(Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_* __this)
{
    __this->_buckets = ::uNewArray(::app::Uno::Collections::Dictionary2_Bucket__int__Uno_Collections_IList_Fuse_Input_Capturer___typeof(), 8);
    __this->_count = 0;
    __this->_dummies = 0;
}

void Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer___Add(Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_* __this, int key, ::uObject* value)
{
    if ((__this->_count + __this->_dummies) > (::uPtr< ::uArray*>(__this->_buckets)->Length() / 2))
    {
        __this->Rehash();
    }

    int x = ::app::Uno::Math__Abs_2(NULL, ::app::Uno::Object::GetHashCode(::uBox< int>(::app::Uno::Int__typeof(), key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Uno_Collections_IList_Fuse_Input_Capturer_>(x).State == 0)
        {
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Uno_Collections_IList_Fuse_Input_Capturer_>(x).State = 1;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Uno_Collections_IList_Fuse_Input_Capturer_>(x).Value = value;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Uno_Collections_IList_Fuse_Input_Capturer_>(x).Key = key;
            __this->_count++;
            __this->_version++;
            return;
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Uno_Collections_IList_Fuse_Input_Capturer_>(x).State == 2)
        {
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Uno_Collections_IList_Fuse_Input_Capturer_>(x).State = 1;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Uno_Collections_IList_Fuse_Input_Capturer_>(x).Value = value;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Uno_Collections_IList_Fuse_Input_Capturer_>(x).Key = key;
            __this->_count++;
            __this->_dummies--;
            __this->_version++;
            return;
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Uno_Collections_IList_Fuse_Input_Capturer_>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__int(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Uno_Collections_IList_Fuse_Input_Capturer_>(x).Key, key))
            {
                U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Dictionary already contains the given key")));
            }
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

bool Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer___ContainsKey(Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_* __this, int key)
{
    int x = ::app::Uno::Math__Abs_2(NULL, ::app::Uno::Object::GetHashCode(::uBox< int>(::app::Uno::Int__typeof(), key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Uno_Collections_IList_Fuse_Input_Capturer_>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__int(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Uno_Collections_IList_Fuse_Input_Capturer_>(x).Key, key))
            {
                return true;
            }
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Uno_Collections_IList_Fuse_Input_Capturer_>(x).State == 0)
        {
            return false;
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

::uObject* Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer___get_Item(Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_* __this, int key)
{
    int x = ::app::Uno::Math__Abs_2(NULL, ::app::Uno::Object::GetHashCode(::uBox< int>(::app::Uno::Int__typeof(), key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Uno_Collections_IList_Fuse_Input_Capturer_>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__int(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Uno_Collections_IList_Fuse_Input_Capturer_>(x).Key, key))
            {
                return ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Uno_Collections_IList_Fuse_Input_Capturer_>(x).Value;
            }
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Uno_Collections_IList_Fuse_Input_Capturer_>(x).State == 0)
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Dictionary did not contain the given key")));
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

::app::Uno::Collections::Dictionary2_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer_ Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer___GetEnumerator(Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_* __this)
{
    return ::app::Uno::Collections::Dictionary2_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer___New_1(NULL, __this);
}

Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_* Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer___New_1(::uStatic* __this)
{
    Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_* inst = (Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_*)::uAllocObject(sizeof(Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_), Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer___typeof());
    inst->_ObjInit_1();
    return inst;
}

void Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer___Rehash(Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_* __this)
{
    ::uArray* oldBuckets = __this->_buckets;
    __this->_buckets = ::uNewArray(::app::Uno::Collections::Dictionary2_Bucket__int__Uno_Collections_IList_Fuse_Input_Capturer___typeof(), ::uPtr< ::uArray*>(oldBuckets)->Length() * 2);
    __this->_count = 0;
    __this->_dummies = 0;

    for (int i = 0; i < oldBuckets->Length(); i++)
    {
        if (oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Uno_Collections_IList_Fuse_Input_Capturer_>(i).State == 1)
        {
            __this->Add(oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Uno_Collections_IList_Fuse_Input_Capturer_>(i).Key, oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Uno_Collections_IList_Fuse_Input_Capturer_>(i).Value);
        }
    }
}

void Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer___set_Item(Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_* __this, int key, ::uObject* value)
{
    int x = ::app::Uno::Math__Abs_2(NULL, ::app::Uno::Object::GetHashCode(::uBox< int>(::app::Uno::Int__typeof(), key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Uno_Collections_IList_Fuse_Input_Capturer_>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__int(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Uno_Collections_IList_Fuse_Input_Capturer_>(x).Key, key))
            {
                ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Uno_Collections_IList_Fuse_Input_Capturer_>(x).Value = value;
                __this->_version++;
                return;
            }
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Uno_Collections_IList_Fuse_Input_Capturer_>(x).State == 0)
        {
            __this->Add(key, value);
            return;
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.13.2/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder___uType* Dictionary__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder___typeof()
{
    static ::uStaticStrong<Dictionary__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder___uType*> type;
    if (type != NULL) return type;

    type = (Dictionary__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder___uType*)::uAllocClassType(sizeof(Dictionary__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder___uType), "Uno.Collections.Dictionary<int,Uno.Collections.List<Fuse.Input.Pointer_PELHolder>>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_buckets", offsetof(Dictionary__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_, _buckets));

    return type;
}

void Dictionary__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder____ObjInit_1(Dictionary__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_* __this)
{
    __this->_buckets = ::uNewArray(::app::Uno::Collections::Dictionary2_Bucket__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder___typeof(), 8);
    __this->_count = 0;
    __this->_dummies = 0;
}

void Dictionary__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder___Add(Dictionary__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_* __this, int key, ::app::Uno::Collections::List__Fuse_Input_Pointer_PELHolder* value)
{
    if ((__this->_count + __this->_dummies) > (::uPtr< ::uArray*>(__this->_buckets)->Length() / 2))
    {
        __this->Rehash();
    }

    int x = ::app::Uno::Math__Abs_2(NULL, ::app::Uno::Object::GetHashCode(::uBox< int>(::app::Uno::Int__typeof(), key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_>(x).State == 0)
        {
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_>(x).State = 1;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_>(x).Value = value;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_>(x).Key = key;
            __this->_count++;
            __this->_version++;
            return;
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_>(x).State == 2)
        {
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_>(x).State = 1;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_>(x).Value = value;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_>(x).Key = key;
            __this->_count++;
            __this->_dummies--;
            __this->_version++;
            return;
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__int(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_>(x).Key, key))
            {
                U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Dictionary already contains the given key")));
            }
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

Dictionary__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_* Dictionary__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder___New_1(::uStatic* __this)
{
    Dictionary__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_* inst = (Dictionary__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_*)::uAllocObject(sizeof(Dictionary__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_), Dictionary__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder___typeof());
    inst->_ObjInit_1();
    return inst;
}

void Dictionary__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder___Rehash(Dictionary__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_* __this)
{
    ::uArray* oldBuckets = __this->_buckets;
    __this->_buckets = ::uNewArray(::app::Uno::Collections::Dictionary2_Bucket__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder___typeof(), ::uPtr< ::uArray*>(oldBuckets)->Length() * 2);
    __this->_count = 0;
    __this->_dummies = 0;

    for (int i = 0; i < oldBuckets->Length(); i++)
    {
        if (oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_>(i).State == 1)
        {
            __this->Add(oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_>(i).Key, oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_>(i).Value);
        }
    }
}

bool Dictionary__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder___TryGetValue(Dictionary__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_* __this, int key, ::app::Uno::Collections::List__Fuse_Input_Pointer_PELHolder** value)
{
    int x = ::app::Uno::Math__Abs_2(NULL, ::app::Uno::Object::GetHashCode(::uBox< int>(::app::Uno::Int__typeof(), key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__int(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_>(x).Key, key))
            {
                *value = ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_>(x).Value;
                return true;
            }
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_>(x).State == 0)
        {
            *value = NULL;
            return false;
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.13.2/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary__iOS_Foundation_INSCopying__ObjC_ID__uType* Dictionary__iOS_Foundation_INSCopying__ObjC_ID__typeof()
{
    static ::uStaticStrong<Dictionary__iOS_Foundation_INSCopying__ObjC_ID__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary__iOS_Foundation_INSCopying__ObjC_ID__uType*)::uAllocClassType(sizeof(Dictionary__iOS_Foundation_INSCopying__ObjC_ID__uType), "Uno.Collections.Dictionary<iOS.Foundation.INSCopying,ObjC.ID>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_buckets", offsetof(Dictionary__iOS_Foundation_INSCopying__ObjC_ID, _buckets));

    return type;
}

void Dictionary__iOS_Foundation_INSCopying__ObjC_ID___ObjInit_1(Dictionary__iOS_Foundation_INSCopying__ObjC_ID* __this)
{
    __this->_buckets = ::uNewArray(::app::Uno::Collections::Dictionary2_Bucket__iOS_Foundation_INSCopying__ObjC_ID__typeof(), 8);
    __this->_count = 0;
    __this->_dummies = 0;
}

void Dictionary__iOS_Foundation_INSCopying__ObjC_ID__Add(Dictionary__iOS_Foundation_INSCopying__ObjC_ID* __this, ::uObject* key, ::id value)
{
    if ((__this->_count + __this->_dummies) > (::uPtr< ::uArray*>(__this->_buckets)->Length() / 2))
    {
        __this->Rehash();
    }

    int x = ::app::Uno::Math__Abs_2(NULL, ::app::Uno::Object::GetHashCode(::uPtr< ::uObject*>(key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__iOS_Foundation_INSCopying__ObjC_ID>(x).State == 0)
        {
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__iOS_Foundation_INSCopying__ObjC_ID>(x).State = 1;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__iOS_Foundation_INSCopying__ObjC_ID>(x).Value = value;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__iOS_Foundation_INSCopying__ObjC_ID>(x).Key = key;
            __this->_count++;
            __this->_version++;
            return;
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__iOS_Foundation_INSCopying__ObjC_ID>(x).State == 2)
        {
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__iOS_Foundation_INSCopying__ObjC_ID>(x).State = 1;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__iOS_Foundation_INSCopying__ObjC_ID>(x).Value = value;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__iOS_Foundation_INSCopying__ObjC_ID>(x).Key = key;
            __this->_count++;
            __this->_dummies--;
            __this->_version++;
            return;
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__iOS_Foundation_INSCopying__ObjC_ID>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__iOS_Foundation_INSCopying(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__iOS_Foundation_INSCopying__ObjC_ID>(x).Key, key))
            {
                U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Dictionary already contains the given key")));
            }
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

int Dictionary__iOS_Foundation_INSCopying__ObjC_ID__get_Count(Dictionary__iOS_Foundation_INSCopying__ObjC_ID* __this)
{
    return __this->_count;
}

::app::Uno::Collections::Dictionary2_Enumerator__iOS_Foundation_INSCopying__ObjC_ID Dictionary__iOS_Foundation_INSCopying__ObjC_ID__GetEnumerator(Dictionary__iOS_Foundation_INSCopying__ObjC_ID* __this)
{
    return ::app::Uno::Collections::Dictionary2_Enumerator__iOS_Foundation_INSCopying__ObjC_ID__New_1(NULL, __this);
}

Dictionary__iOS_Foundation_INSCopying__ObjC_ID* Dictionary__iOS_Foundation_INSCopying__ObjC_ID__New_1(::uStatic* __this)
{
    Dictionary__iOS_Foundation_INSCopying__ObjC_ID* inst = (Dictionary__iOS_Foundation_INSCopying__ObjC_ID*)::uAllocObject(sizeof(Dictionary__iOS_Foundation_INSCopying__ObjC_ID), Dictionary__iOS_Foundation_INSCopying__ObjC_ID__typeof());
    inst->_ObjInit_1();
    return inst;
}

void Dictionary__iOS_Foundation_INSCopying__ObjC_ID__Rehash(Dictionary__iOS_Foundation_INSCopying__ObjC_ID* __this)
{
    ::uArray* oldBuckets = __this->_buckets;
    __this->_buckets = ::uNewArray(::app::Uno::Collections::Dictionary2_Bucket__iOS_Foundation_INSCopying__ObjC_ID__typeof(), ::uPtr< ::uArray*>(oldBuckets)->Length() * 2);
    __this->_count = 0;
    __this->_dummies = 0;

    for (int i = 0; i < oldBuckets->Length(); i++)
    {
        if (oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__iOS_Foundation_INSCopying__ObjC_ID>(i).State == 1)
        {
            __this->Add(oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__iOS_Foundation_INSCopying__ObjC_ID>(i).Key, oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__iOS_Foundation_INSCopying__ObjC_ID>(i).Value);
        }
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.13.2/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary__iOS_UIKit_UIControl__Fuse_Node__uType* Dictionary__iOS_UIKit_UIControl__Fuse_Node__typeof()
{
    static ::uStaticStrong<Dictionary__iOS_UIKit_UIControl__Fuse_Node__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary__iOS_UIKit_UIControl__Fuse_Node__uType*)::uAllocClassType(sizeof(Dictionary__iOS_UIKit_UIControl__Fuse_Node__uType), "Uno.Collections.Dictionary<iOS.UIKit.UIControl,Fuse.Node>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_buckets", offsetof(Dictionary__iOS_UIKit_UIControl__Fuse_Node, _buckets));

    return type;
}

void Dictionary__iOS_UIKit_UIControl__Fuse_Node___ObjInit_1(Dictionary__iOS_UIKit_UIControl__Fuse_Node* __this)
{
    __this->_buckets = ::uNewArray(::app::Uno::Collections::Dictionary2_Bucket__iOS_UIKit_UIControl__Fuse_Node__typeof(), 8);
    __this->_count = 0;
    __this->_dummies = 0;
}

void Dictionary__iOS_UIKit_UIControl__Fuse_Node__Add(Dictionary__iOS_UIKit_UIControl__Fuse_Node* __this, ::app::iOS::UIKit::UIControl* key, ::app::Fuse::Node* value)
{
    if ((__this->_count + __this->_dummies) > (::uPtr< ::uArray*>(__this->_buckets)->Length() / 2))
    {
        __this->Rehash();
    }

    int x = ::app::Uno::Math__Abs_2(NULL, ::app::Uno::Object::GetHashCode(::uPtr< ::app::iOS::UIKit::UIControl*>(key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__iOS_UIKit_UIControl__Fuse_Node>(x).State == 0)
        {
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__iOS_UIKit_UIControl__Fuse_Node>(x).State = 1;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__iOS_UIKit_UIControl__Fuse_Node>(x).Value = value;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__iOS_UIKit_UIControl__Fuse_Node>(x).Key = key;
            __this->_count++;
            __this->_version++;
            return;
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__iOS_UIKit_UIControl__Fuse_Node>(x).State == 2)
        {
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__iOS_UIKit_UIControl__Fuse_Node>(x).State = 1;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__iOS_UIKit_UIControl__Fuse_Node>(x).Value = value;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__iOS_UIKit_UIControl__Fuse_Node>(x).Key = key;
            __this->_count++;
            __this->_dummies--;
            __this->_version++;
            return;
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__iOS_UIKit_UIControl__Fuse_Node>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__iOS_UIKit_UIControl(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__iOS_UIKit_UIControl__Fuse_Node>(x).Key, key))
            {
                U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Dictionary already contains the given key")));
            }
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

bool Dictionary__iOS_UIKit_UIControl__Fuse_Node__ContainsKey(Dictionary__iOS_UIKit_UIControl__Fuse_Node* __this, ::app::iOS::UIKit::UIControl* key)
{
    int x = ::app::Uno::Math__Abs_2(NULL, ::app::Uno::Object::GetHashCode(::uPtr< ::app::iOS::UIKit::UIControl*>(key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__iOS_UIKit_UIControl__Fuse_Node>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__iOS_UIKit_UIControl(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__iOS_UIKit_UIControl__Fuse_Node>(x).Key, key))
            {
                return true;
            }
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__iOS_UIKit_UIControl__Fuse_Node>(x).State == 0)
        {
            return false;
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

::app::Fuse::Node* Dictionary__iOS_UIKit_UIControl__Fuse_Node__get_Item(Dictionary__iOS_UIKit_UIControl__Fuse_Node* __this, ::app::iOS::UIKit::UIControl* key)
{
    int x = ::app::Uno::Math__Abs_2(NULL, ::app::Uno::Object::GetHashCode(::uPtr< ::app::iOS::UIKit::UIControl*>(key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__iOS_UIKit_UIControl__Fuse_Node>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__iOS_UIKit_UIControl(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__iOS_UIKit_UIControl__Fuse_Node>(x).Key, key))
            {
                return ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__iOS_UIKit_UIControl__Fuse_Node>(x).Value;
            }
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__iOS_UIKit_UIControl__Fuse_Node>(x).State == 0)
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Dictionary did not contain the given key")));
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

Dictionary__iOS_UIKit_UIControl__Fuse_Node* Dictionary__iOS_UIKit_UIControl__Fuse_Node__New_1(::uStatic* __this)
{
    Dictionary__iOS_UIKit_UIControl__Fuse_Node* inst = (Dictionary__iOS_UIKit_UIControl__Fuse_Node*)::uAllocObject(sizeof(Dictionary__iOS_UIKit_UIControl__Fuse_Node), Dictionary__iOS_UIKit_UIControl__Fuse_Node__typeof());
    inst->_ObjInit_1();
    return inst;
}

void Dictionary__iOS_UIKit_UIControl__Fuse_Node__Rehash(Dictionary__iOS_UIKit_UIControl__Fuse_Node* __this)
{
    ::uArray* oldBuckets = __this->_buckets;
    __this->_buckets = ::uNewArray(::app::Uno::Collections::Dictionary2_Bucket__iOS_UIKit_UIControl__Fuse_Node__typeof(), ::uPtr< ::uArray*>(oldBuckets)->Length() * 2);
    __this->_count = 0;
    __this->_dummies = 0;

    for (int i = 0; i < oldBuckets->Length(); i++)
    {
        if (oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__iOS_UIKit_UIControl__Fuse_Node>(i).State == 1)
        {
            __this->Add(oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__iOS_UIKit_UIControl__Fuse_Node>(i).Key, oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__iOS_UIKit_UIControl__Fuse_Node>(i).Value);
        }
    }
}

bool Dictionary__iOS_UIKit_UIControl__Fuse_Node__Remove(Dictionary__iOS_UIKit_UIControl__Fuse_Node* __this, ::app::iOS::UIKit::UIControl* key)
{
    int x = ::app::Uno::Math__Abs_2(NULL, ::app::Uno::Object::GetHashCode(::uPtr< ::app::iOS::UIKit::UIControl*>(key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__iOS_UIKit_UIControl__Fuse_Node>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__iOS_UIKit_UIControl(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__iOS_UIKit_UIControl__Fuse_Node>(x).Key, key))
            {
                ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__iOS_UIKit_UIControl__Fuse_Node>(x).State = 2;
                ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__iOS_UIKit_UIControl__Fuse_Node>(x).Value = NULL;
                ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__iOS_UIKit_UIControl__Fuse_Node>(x).Key = NULL;
                __this->_count--;
                __this->_dummies++;
                __this->_version++;
                return true;
            }
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__iOS_UIKit_UIControl__Fuse_Node>(x).State == 0)
        {
            return false;
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

void Dictionary__iOS_UIKit_UIControl__Fuse_Node__set_Item(Dictionary__iOS_UIKit_UIControl__Fuse_Node* __this, ::app::iOS::UIKit::UIControl* key, ::app::Fuse::Node* value)
{
    int x = ::app::Uno::Math__Abs_2(NULL, ::app::Uno::Object::GetHashCode(::uPtr< ::app::iOS::UIKit::UIControl*>(key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__iOS_UIKit_UIControl__Fuse_Node>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__iOS_UIKit_UIControl(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__iOS_UIKit_UIControl__Fuse_Node>(x).Key, key))
            {
                ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__iOS_UIKit_UIControl__Fuse_Node>(x).Value = value;
                __this->_version++;
                return;
            }
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__iOS_UIKit_UIControl__Fuse_Node>(x).State == 0)
        {
            __this->Add(key, value);
            return;
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.13.2/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary__object__object__uType* Dictionary__object__object__typeof()
{
    static ::uStaticStrong<Dictionary__object__object__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary__object__object__uType*)::uAllocClassType(sizeof(Dictionary__object__object__uType), "Uno.Collections.Dictionary<object,object>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_buckets", offsetof(Dictionary__object__object, _buckets));

    return type;
}

void Dictionary__object__object___ObjInit_1(Dictionary__object__object* __this)
{
    __this->_buckets = ::uNewArray(::app::Uno::Collections::Dictionary2_Bucket__object__object__typeof(), 8);
    __this->_count = 0;
    __this->_dummies = 0;
}

void Dictionary__object__object__Add(Dictionary__object__object* __this, ::uObject* key, ::uObject* value)
{
    if ((__this->_count + __this->_dummies) > (::uPtr< ::uArray*>(__this->_buckets)->Length() / 2))
    {
        __this->Rehash();
    }

    int x = ::app::Uno::Math__Abs_2(NULL, ::app::Uno::Object::GetHashCode(::uPtr< ::uObject*>(key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__object__object>(x).State == 0)
        {
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__object__object>(x).State = 1;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__object__object>(x).Value = value;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__object__object>(x).Key = key;
            __this->_count++;
            __this->_version++;
            return;
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__object__object>(x).State == 2)
        {
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__object__object>(x).State = 1;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__object__object>(x).Value = value;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__object__object>(x).Key = key;
            __this->_count++;
            __this->_dummies--;
            __this->_version++;
            return;
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__object__object>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__object(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__object__object>(x).Key, key))
            {
                U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Dictionary already contains the given key")));
            }
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

Dictionary__object__object* Dictionary__object__object__New_1(::uStatic* __this)
{
    Dictionary__object__object* inst = (Dictionary__object__object*)::uAllocObject(sizeof(Dictionary__object__object), Dictionary__object__object__typeof());
    inst->_ObjInit_1();
    return inst;
}

void Dictionary__object__object__Rehash(Dictionary__object__object* __this)
{
    ::uArray* oldBuckets = __this->_buckets;
    __this->_buckets = ::uNewArray(::app::Uno::Collections::Dictionary2_Bucket__object__object__typeof(), ::uPtr< ::uArray*>(oldBuckets)->Length() * 2);
    __this->_count = 0;
    __this->_dummies = 0;

    for (int i = 0; i < oldBuckets->Length(); i++)
    {
        if (oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__object__object>(i).State == 1)
        {
            __this->Add(oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__object__object>(i).Key, oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__object__object>(i).Value);
        }
    }
}

bool Dictionary__object__object__Remove(Dictionary__object__object* __this, ::uObject* key)
{
    int x = ::app::Uno::Math__Abs_2(NULL, ::app::Uno::Object::GetHashCode(::uPtr< ::uObject*>(key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__object__object>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__object(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__object__object>(x).Key, key))
            {
                ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__object__object>(x).State = 2;
                ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__object__object>(x).Value = NULL;
                ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__object__object>(x).Key = NULL;
                __this->_count--;
                __this->_dummies++;
                __this->_version++;
                return true;
            }
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__object__object>(x).State == 0)
        {
            return false;
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

bool Dictionary__object__object__TryGetValue(Dictionary__object__object* __this, ::uObject* key, ::uObject** value)
{
    int x = ::app::Uno::Math__Abs_2(NULL, ::app::Uno::Object::GetHashCode(::uPtr< ::uObject*>(key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__object__object>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__object(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__object__object>(x).Key, key))
            {
                *value = ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__object__object>(x).Value;
                return true;
            }
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__object__object>(x).State == 0)
        {
            *value = NULL;
            return false;
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.13.2/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary__object__string__uType* Dictionary__object__string__typeof()
{
    static ::uStaticStrong<Dictionary__object__string__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary__object__string__uType*)::uAllocClassType(sizeof(Dictionary__object__string__uType), "Uno.Collections.Dictionary<object,string>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_buckets", offsetof(Dictionary__object__string, _buckets));

    return type;
}

void Dictionary__object__string___ObjInit_1(Dictionary__object__string* __this)
{
    __this->_buckets = ::uNewArray(::app::Uno::Collections::Dictionary2_Bucket__object__string__typeof(), 8);
    __this->_count = 0;
    __this->_dummies = 0;
}

void Dictionary__object__string__Add(Dictionary__object__string* __this, ::uObject* key, ::uString* value)
{
    if ((__this->_count + __this->_dummies) > (::uPtr< ::uArray*>(__this->_buckets)->Length() / 2))
    {
        __this->Rehash();
    }

    int x = ::app::Uno::Math__Abs_2(NULL, ::app::Uno::Object::GetHashCode(::uPtr< ::uObject*>(key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__object__string>(x).State == 0)
        {
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__object__string>(x).State = 1;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__object__string>(x).Value = value;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__object__string>(x).Key = key;
            __this->_count++;
            __this->_version++;
            return;
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__object__string>(x).State == 2)
        {
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__object__string>(x).State = 1;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__object__string>(x).Value = value;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__object__string>(x).Key = key;
            __this->_count++;
            __this->_dummies--;
            __this->_version++;
            return;
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__object__string>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__object(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__object__string>(x).Key, key))
            {
                U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Dictionary already contains the given key")));
            }
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

bool Dictionary__object__string__ContainsKey(Dictionary__object__string* __this, ::uObject* key)
{
    int x = ::app::Uno::Math__Abs_2(NULL, ::app::Uno::Object::GetHashCode(::uPtr< ::uObject*>(key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__object__string>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__object(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__object__string>(x).Key, key))
            {
                return true;
            }
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__object__string>(x).State == 0)
        {
            return false;
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

::uString* Dictionary__object__string__get_Item(Dictionary__object__string* __this, ::uObject* key)
{
    int x = ::app::Uno::Math__Abs_2(NULL, ::app::Uno::Object::GetHashCode(::uPtr< ::uObject*>(key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__object__string>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__object(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__object__string>(x).Key, key))
            {
                return ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__object__string>(x).Value;
            }
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__object__string>(x).State == 0)
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Dictionary did not contain the given key")));
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

Dictionary__object__string* Dictionary__object__string__New_1(::uStatic* __this)
{
    Dictionary__object__string* inst = (Dictionary__object__string*)::uAllocObject(sizeof(Dictionary__object__string), Dictionary__object__string__typeof());
    inst->_ObjInit_1();
    return inst;
}

void Dictionary__object__string__Rehash(Dictionary__object__string* __this)
{
    ::uArray* oldBuckets = __this->_buckets;
    __this->_buckets = ::uNewArray(::app::Uno::Collections::Dictionary2_Bucket__object__string__typeof(), ::uPtr< ::uArray*>(oldBuckets)->Length() * 2);
    __this->_count = 0;
    __this->_dummies = 0;

    for (int i = 0; i < oldBuckets->Length(); i++)
    {
        if (oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__object__string>(i).State == 1)
        {
            __this->Add(oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__object__string>(i).Key, oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__object__string>(i).Value);
        }
    }
}

bool Dictionary__object__string__Remove(Dictionary__object__string* __this, ::uObject* key)
{
    int x = ::app::Uno::Math__Abs_2(NULL, ::app::Uno::Object::GetHashCode(::uPtr< ::uObject*>(key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__object__string>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__object(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__object__string>(x).Key, key))
            {
                ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__object__string>(x).State = 2;
                ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__object__string>(x).Value = NULL;
                ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__object__string>(x).Key = NULL;
                __this->_count--;
                __this->_dummies++;
                __this->_version++;
                return true;
            }
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__object__string>(x).State == 0)
        {
            return false;
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

void Dictionary__object__string__set_Item(Dictionary__object__string* __this, ::uObject* key, ::uString* value)
{
    int x = ::app::Uno::Math__Abs_2(NULL, ::app::Uno::Object::GetHashCode(::uPtr< ::uObject*>(key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__object__string>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__object(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__object__string>(x).Key, key))
            {
                ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__object__string>(x).Value = value;
                __this->_version++;
                return;
            }
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__object__string>(x).State == 0)
        {
            __this->Add(key, value);
            return;
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.13.2/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary__string__int__uType* Dictionary__string__int__typeof()
{
    static ::uStaticStrong<Dictionary__string__int__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary__string__int__uType*)::uAllocClassType(sizeof(Dictionary__string__int__uType), "Uno.Collections.Dictionary<string,int>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_buckets", offsetof(Dictionary__string__int, _buckets));

    return type;
}

void Dictionary__string__int___ObjInit_1(Dictionary__string__int* __this)
{
    __this->_buckets = ::uNewArray(::app::Uno::Collections::Dictionary2_Bucket__string__int__typeof(), 8);
    __this->_count = 0;
    __this->_dummies = 0;
}

void Dictionary__string__int__Add(Dictionary__string__int* __this, ::uString* key, int value)
{
    if ((__this->_count + __this->_dummies) > (::uPtr< ::uArray*>(__this->_buckets)->Length() / 2))
    {
        __this->Rehash();
    }

    int x = ::app::Uno::Math__Abs_2(NULL, ::app::Uno::Object::GetHashCode(::uPtr< ::uString*>(key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__int>(x).State == 0)
        {
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__int>(x).State = 1;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__int>(x).Value = value;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__int>(x).Key = key;
            __this->_count++;
            __this->_version++;
            return;
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__int>(x).State == 2)
        {
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__int>(x).State = 1;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__int>(x).Value = value;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__int>(x).Key = key;
            __this->_count++;
            __this->_dummies--;
            __this->_version++;
            return;
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__int>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__string(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__int>(x).Key, key))
            {
                U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Dictionary already contains the given key")));
            }
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

int Dictionary__string__int__get_Item(Dictionary__string__int* __this, ::uString* key)
{
    int x = ::app::Uno::Math__Abs_2(NULL, ::app::Uno::Object::GetHashCode(::uPtr< ::uString*>(key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__int>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__string(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__int>(x).Key, key))
            {
                return ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__int>(x).Value;
            }
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__int>(x).State == 0)
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Dictionary did not contain the given key")));
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

Dictionary__string__int* Dictionary__string__int__New_1(::uStatic* __this)
{
    Dictionary__string__int* inst = (Dictionary__string__int*)::uAllocObject(sizeof(Dictionary__string__int), Dictionary__string__int__typeof());
    inst->_ObjInit_1();
    return inst;
}

void Dictionary__string__int__Rehash(Dictionary__string__int* __this)
{
    ::uArray* oldBuckets = __this->_buckets;
    __this->_buckets = ::uNewArray(::app::Uno::Collections::Dictionary2_Bucket__string__int__typeof(), ::uPtr< ::uArray*>(oldBuckets)->Length() * 2);
    __this->_count = 0;
    __this->_dummies = 0;

    for (int i = 0; i < oldBuckets->Length(); i++)
    {
        if (oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__int>(i).State == 1)
        {
            __this->Add(oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__int>(i).Key, oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__int>(i).Value);
        }
    }
}

void Dictionary__string__int__set_Item(Dictionary__string__int* __this, ::uString* key, int value)
{
    int x = ::app::Uno::Math__Abs_2(NULL, ::app::Uno::Object::GetHashCode(::uPtr< ::uString*>(key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__int>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__string(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__int>(x).Key, key))
            {
                ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__int>(x).Value = value;
                __this->_version++;
                return;
            }
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__int>(x).State == 0)
        {
            __this->Add(key, value);
            return;
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.13.2/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary__string__object__uType* Dictionary__string__object__typeof()
{
    static ::uStaticStrong<Dictionary__string__object__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary__string__object__uType*)::uAllocClassType(sizeof(Dictionary__string__object__uType), "Uno.Collections.Dictionary<string,object>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_buckets", offsetof(Dictionary__string__object, _buckets));

    return type;
}

void Dictionary__string__object___ObjInit_1(Dictionary__string__object* __this)
{
    __this->_buckets = ::uNewArray(::app::Uno::Collections::Dictionary2_Bucket__string__object__typeof(), 8);
    __this->_count = 0;
    __this->_dummies = 0;
}

void Dictionary__string__object__Add(Dictionary__string__object* __this, ::uString* key, ::uObject* value)
{
    if ((__this->_count + __this->_dummies) > (::uPtr< ::uArray*>(__this->_buckets)->Length() / 2))
    {
        __this->Rehash();
    }

    int x = ::app::Uno::Math__Abs_2(NULL, ::app::Uno::Object::GetHashCode(::uPtr< ::uString*>(key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__object>(x).State == 0)
        {
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__object>(x).State = 1;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__object>(x).Value = value;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__object>(x).Key = key;
            __this->_count++;
            __this->_version++;
            return;
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__object>(x).State == 2)
        {
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__object>(x).State = 1;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__object>(x).Value = value;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__object>(x).Key = key;
            __this->_count++;
            __this->_dummies--;
            __this->_version++;
            return;
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__object>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__string(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__object>(x).Key, key))
            {
                U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Dictionary already contains the given key")));
            }
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

Dictionary__string__object* Dictionary__string__object__New_1(::uStatic* __this)
{
    Dictionary__string__object* inst = (Dictionary__string__object*)::uAllocObject(sizeof(Dictionary__string__object), Dictionary__string__object__typeof());
    inst->_ObjInit_1();
    return inst;
}

void Dictionary__string__object__Rehash(Dictionary__string__object* __this)
{
    ::uArray* oldBuckets = __this->_buckets;
    __this->_buckets = ::uNewArray(::app::Uno::Collections::Dictionary2_Bucket__string__object__typeof(), ::uPtr< ::uArray*>(oldBuckets)->Length() * 2);
    __this->_count = 0;
    __this->_dummies = 0;

    for (int i = 0; i < oldBuckets->Length(); i++)
    {
        if (oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__object>(i).State == 1)
        {
            __this->Add(oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__object>(i).Key, oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__object>(i).Value);
        }
    }
}

bool Dictionary__string__object__Remove(Dictionary__string__object* __this, ::uString* key)
{
    int x = ::app::Uno::Math__Abs_2(NULL, ::app::Uno::Object::GetHashCode(::uPtr< ::uString*>(key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__object>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__string(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__object>(x).Key, key))
            {
                ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__object>(x).State = 2;
                ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__object>(x).Value = NULL;
                ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__object>(x).Key = NULL;
                __this->_count--;
                __this->_dummies++;
                __this->_version++;
                return true;
            }
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__object>(x).State == 0)
        {
            return false;
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

bool Dictionary__string__object__TryGetValue(Dictionary__string__object* __this, ::uString* key, ::uObject** value)
{
    int x = ::app::Uno::Math__Abs_2(NULL, ::app::Uno::Object::GetHashCode(::uPtr< ::uString*>(key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__object>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__string(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__object>(x).Key, key))
            {
                *value = ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__object>(x).Value;
                return true;
            }
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__object>(x).State == 0)
        {
            *value = NULL;
            return false;
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.13.2/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary__string__string__uType* Dictionary__string__string__typeof()
{
    static ::uStaticStrong<Dictionary__string__string__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary__string__string__uType*)::uAllocClassType(sizeof(Dictionary__string__string__uType), "Uno.Collections.Dictionary<string,string>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_buckets", offsetof(Dictionary__string__string, _buckets));

    return type;
}

void Dictionary__string__string___ObjInit_1(Dictionary__string__string* __this)
{
    __this->_buckets = ::uNewArray(::app::Uno::Collections::Dictionary2_Bucket__string__string__typeof(), 8);
    __this->_count = 0;
    __this->_dummies = 0;
}

void Dictionary__string__string__Add(Dictionary__string__string* __this, ::uString* key, ::uString* value)
{
    if ((__this->_count + __this->_dummies) > (::uPtr< ::uArray*>(__this->_buckets)->Length() / 2))
    {
        __this->Rehash();
    }

    int x = ::app::Uno::Math__Abs_2(NULL, ::app::Uno::Object::GetHashCode(::uPtr< ::uString*>(key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__string>(x).State == 0)
        {
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__string>(x).State = 1;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__string>(x).Value = value;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__string>(x).Key = key;
            __this->_count++;
            __this->_version++;
            return;
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__string>(x).State == 2)
        {
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__string>(x).State = 1;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__string>(x).Value = value;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__string>(x).Key = key;
            __this->_count++;
            __this->_dummies--;
            __this->_version++;
            return;
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__string>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__string(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__string>(x).Key, key))
            {
                U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Dictionary already contains the given key")));
            }
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

bool Dictionary__string__string__ContainsKey(Dictionary__string__string* __this, ::uString* key)
{
    int x = ::app::Uno::Math__Abs_2(NULL, ::app::Uno::Object::GetHashCode(::uPtr< ::uString*>(key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__string>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__string(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__string>(x).Key, key))
            {
                return true;
            }
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__string>(x).State == 0)
        {
            return false;
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

int Dictionary__string__string__get_Count(Dictionary__string__string* __this)
{
    return __this->_count;
}

::uString* Dictionary__string__string__get_Item(Dictionary__string__string* __this, ::uString* key)
{
    int x = ::app::Uno::Math__Abs_2(NULL, ::app::Uno::Object::GetHashCode(::uPtr< ::uString*>(key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__string>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__string(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__string>(x).Key, key))
            {
                return ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__string>(x).Value;
            }
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__string>(x).State == 0)
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Dictionary did not contain the given key")));
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

::app::Uno::Collections::Dictionary2_KeyCollection__string__string* Dictionary__string__string__get_Keys(Dictionary__string__string* __this)
{
    return ::app::Uno::Collections::Dictionary2_KeyCollection__string__string__New_1(NULL, __this);
}

::app::Uno::Collections::Dictionary2_Enumerator__string__string Dictionary__string__string__GetEnumerator(Dictionary__string__string* __this)
{
    return ::app::Uno::Collections::Dictionary2_Enumerator__string__string__New_1(NULL, __this);
}

Dictionary__string__string* Dictionary__string__string__New_1(::uStatic* __this)
{
    Dictionary__string__string* inst = (Dictionary__string__string*)::uAllocObject(sizeof(Dictionary__string__string), Dictionary__string__string__typeof());
    inst->_ObjInit_1();
    return inst;
}

void Dictionary__string__string__Rehash(Dictionary__string__string* __this)
{
    ::uArray* oldBuckets = __this->_buckets;
    __this->_buckets = ::uNewArray(::app::Uno::Collections::Dictionary2_Bucket__string__string__typeof(), ::uPtr< ::uArray*>(oldBuckets)->Length() * 2);
    __this->_count = 0;
    __this->_dummies = 0;

    for (int i = 0; i < oldBuckets->Length(); i++)
    {
        if (oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__string>(i).State == 1)
        {
            __this->Add(oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__string>(i).Key, oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__string>(i).Value);
        }
    }
}

void Dictionary__string__string__set_Item(Dictionary__string__string* __this, ::uString* key, ::uString* value)
{
    int x = ::app::Uno::Math__Abs_2(NULL, ::app::Uno::Object::GetHashCode(::uPtr< ::uString*>(key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__string>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__string(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__string>(x).Key, key))
            {
                ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__string>(x).Value = value;
                __this->_version++;
                return;
            }
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__string>(x).State == 0)
        {
            __this->Add(key, value);
            return;
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

bool Dictionary__string__string__TryGetValue(Dictionary__string__string* __this, ::uString* key, ::uString** value)
{
    int x = ::app::Uno::Math__Abs_2(NULL, ::app::Uno::Object::GetHashCode(::uPtr< ::uString*>(key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__string>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__string(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__string>(x).Key, key))
            {
                *value = ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__string>(x).Value;
                return true;
            }
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__string>(x).State == 0)
        {
            *value = NULL;
            return false;
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.13.2/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary__string__Uno_Collections_List_Fuse_Scripting_INameListener___uType* Dictionary__string__Uno_Collections_List_Fuse_Scripting_INameListener___typeof()
{
    static ::uStaticStrong<Dictionary__string__Uno_Collections_List_Fuse_Scripting_INameListener___uType*> type;
    if (type != NULL) return type;

    type = (Dictionary__string__Uno_Collections_List_Fuse_Scripting_INameListener___uType*)::uAllocClassType(sizeof(Dictionary__string__Uno_Collections_List_Fuse_Scripting_INameListener___uType), "Uno.Collections.Dictionary<string,Uno.Collections.List<Fuse.Scripting.INameListener>>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_buckets", offsetof(Dictionary__string__Uno_Collections_List_Fuse_Scripting_INameListener_, _buckets));

    return type;
}

void Dictionary__string__Uno_Collections_List_Fuse_Scripting_INameListener____ObjInit_1(Dictionary__string__Uno_Collections_List_Fuse_Scripting_INameListener_* __this)
{
    __this->_buckets = ::uNewArray(::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Collections_List_Fuse_Scripting_INameListener___typeof(), 8);
    __this->_count = 0;
    __this->_dummies = 0;
}

void Dictionary__string__Uno_Collections_List_Fuse_Scripting_INameListener___Add(Dictionary__string__Uno_Collections_List_Fuse_Scripting_INameListener_* __this, ::uString* key, ::app::Uno::Collections::List__Fuse_Scripting_INameListener* value)
{
    if ((__this->_count + __this->_dummies) > (::uPtr< ::uArray*>(__this->_buckets)->Length() / 2))
    {
        __this->Rehash();
    }

    int x = ::app::Uno::Math__Abs_2(NULL, ::app::Uno::Object::GetHashCode(::uPtr< ::uString*>(key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Collections_List_Fuse_Scripting_INameListener_>(x).State == 0)
        {
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Collections_List_Fuse_Scripting_INameListener_>(x).State = 1;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Collections_List_Fuse_Scripting_INameListener_>(x).Value = value;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Collections_List_Fuse_Scripting_INameListener_>(x).Key = key;
            __this->_count++;
            __this->_version++;
            return;
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Collections_List_Fuse_Scripting_INameListener_>(x).State == 2)
        {
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Collections_List_Fuse_Scripting_INameListener_>(x).State = 1;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Collections_List_Fuse_Scripting_INameListener_>(x).Value = value;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Collections_List_Fuse_Scripting_INameListener_>(x).Key = key;
            __this->_count++;
            __this->_dummies--;
            __this->_version++;
            return;
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Collections_List_Fuse_Scripting_INameListener_>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__string(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Collections_List_Fuse_Scripting_INameListener_>(x).Key, key))
            {
                U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Dictionary already contains the given key")));
            }
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

bool Dictionary__string__Uno_Collections_List_Fuse_Scripting_INameListener___ContainsKey(Dictionary__string__Uno_Collections_List_Fuse_Scripting_INameListener_* __this, ::uString* key)
{
    int x = ::app::Uno::Math__Abs_2(NULL, ::app::Uno::Object::GetHashCode(::uPtr< ::uString*>(key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Collections_List_Fuse_Scripting_INameListener_>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__string(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Collections_List_Fuse_Scripting_INameListener_>(x).Key, key))
            {
                return true;
            }
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Collections_List_Fuse_Scripting_INameListener_>(x).State == 0)
        {
            return false;
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

::app::Uno::Collections::List__Fuse_Scripting_INameListener* Dictionary__string__Uno_Collections_List_Fuse_Scripting_INameListener___get_Item(Dictionary__string__Uno_Collections_List_Fuse_Scripting_INameListener_* __this, ::uString* key)
{
    int x = ::app::Uno::Math__Abs_2(NULL, ::app::Uno::Object::GetHashCode(::uPtr< ::uString*>(key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Collections_List_Fuse_Scripting_INameListener_>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__string(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Collections_List_Fuse_Scripting_INameListener_>(x).Key, key))
            {
                return ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Collections_List_Fuse_Scripting_INameListener_>(x).Value;
            }
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Collections_List_Fuse_Scripting_INameListener_>(x).State == 0)
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Dictionary did not contain the given key")));
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

::app::Uno::Collections::Dictionary2_ValueCollection__string__Uno_Collections_List_Fuse_Scripting_INameListener_* Dictionary__string__Uno_Collections_List_Fuse_Scripting_INameListener___get_Values(Dictionary__string__Uno_Collections_List_Fuse_Scripting_INameListener_* __this)
{
    return ::app::Uno::Collections::Dictionary2_ValueCollection__string__Uno_Collections_List_Fuse_Scripting_INameListener___New_1(NULL, __this);
}

Dictionary__string__Uno_Collections_List_Fuse_Scripting_INameListener_* Dictionary__string__Uno_Collections_List_Fuse_Scripting_INameListener___New_1(::uStatic* __this)
{
    Dictionary__string__Uno_Collections_List_Fuse_Scripting_INameListener_* inst = (Dictionary__string__Uno_Collections_List_Fuse_Scripting_INameListener_*)::uAllocObject(sizeof(Dictionary__string__Uno_Collections_List_Fuse_Scripting_INameListener_), Dictionary__string__Uno_Collections_List_Fuse_Scripting_INameListener___typeof());
    inst->_ObjInit_1();
    return inst;
}

void Dictionary__string__Uno_Collections_List_Fuse_Scripting_INameListener___Rehash(Dictionary__string__Uno_Collections_List_Fuse_Scripting_INameListener_* __this)
{
    ::uArray* oldBuckets = __this->_buckets;
    __this->_buckets = ::uNewArray(::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Collections_List_Fuse_Scripting_INameListener___typeof(), ::uPtr< ::uArray*>(oldBuckets)->Length() * 2);
    __this->_count = 0;
    __this->_dummies = 0;

    for (int i = 0; i < oldBuckets->Length(); i++)
    {
        if (oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Collections_List_Fuse_Scripting_INameListener_>(i).State == 1)
        {
            __this->Add(oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Collections_List_Fuse_Scripting_INameListener_>(i).Key, oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Collections_List_Fuse_Scripting_INameListener_>(i).Value);
        }
    }
}

void Dictionary__string__Uno_Collections_List_Fuse_Scripting_INameListener___set_Item(Dictionary__string__Uno_Collections_List_Fuse_Scripting_INameListener_* __this, ::uString* key, ::app::Uno::Collections::List__Fuse_Scripting_INameListener* value)
{
    int x = ::app::Uno::Math__Abs_2(NULL, ::app::Uno::Object::GetHashCode(::uPtr< ::uString*>(key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Collections_List_Fuse_Scripting_INameListener_>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__string(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Collections_List_Fuse_Scripting_INameListener_>(x).Key, key))
            {
                ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Collections_List_Fuse_Scripting_INameListener_>(x).Value = value;
                __this->_version++;
                return;
            }
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Collections_List_Fuse_Scripting_INameListener_>(x).State == 0)
        {
            __this->Add(key, value);
            return;
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.13.2/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary__string__Uno_Collections_List_object___uType* Dictionary__string__Uno_Collections_List_object___typeof()
{
    static ::uStaticStrong<Dictionary__string__Uno_Collections_List_object___uType*> type;
    if (type != NULL) return type;

    type = (Dictionary__string__Uno_Collections_List_object___uType*)::uAllocClassType(sizeof(Dictionary__string__Uno_Collections_List_object___uType), "Uno.Collections.Dictionary<string,Uno.Collections.List<object>>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_buckets", offsetof(Dictionary__string__Uno_Collections_List_object_, _buckets));

    return type;
}

void Dictionary__string__Uno_Collections_List_object____ObjInit_1(Dictionary__string__Uno_Collections_List_object_* __this)
{
    __this->_buckets = ::uNewArray(::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Collections_List_object___typeof(), 8);
    __this->_count = 0;
    __this->_dummies = 0;
}

void Dictionary__string__Uno_Collections_List_object___Add(Dictionary__string__Uno_Collections_List_object_* __this, ::uString* key, ::app::Uno::Collections::List__object* value)
{
    if ((__this->_count + __this->_dummies) > (::uPtr< ::uArray*>(__this->_buckets)->Length() / 2))
    {
        __this->Rehash();
    }

    int x = ::app::Uno::Math__Abs_2(NULL, ::app::Uno::Object::GetHashCode(::uPtr< ::uString*>(key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Collections_List_object_>(x).State == 0)
        {
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Collections_List_object_>(x).State = 1;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Collections_List_object_>(x).Value = value;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Collections_List_object_>(x).Key = key;
            __this->_count++;
            __this->_version++;
            return;
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Collections_List_object_>(x).State == 2)
        {
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Collections_List_object_>(x).State = 1;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Collections_List_object_>(x).Value = value;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Collections_List_object_>(x).Key = key;
            __this->_count++;
            __this->_dummies--;
            __this->_version++;
            return;
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Collections_List_object_>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__string(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Collections_List_object_>(x).Key, key))
            {
                U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Dictionary already contains the given key")));
            }
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

bool Dictionary__string__Uno_Collections_List_object___ContainsKey(Dictionary__string__Uno_Collections_List_object_* __this, ::uString* key)
{
    int x = ::app::Uno::Math__Abs_2(NULL, ::app::Uno::Object::GetHashCode(::uPtr< ::uString*>(key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Collections_List_object_>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__string(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Collections_List_object_>(x).Key, key))
            {
                return true;
            }
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Collections_List_object_>(x).State == 0)
        {
            return false;
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

::app::Uno::Collections::List__object* Dictionary__string__Uno_Collections_List_object___get_Item(Dictionary__string__Uno_Collections_List_object_* __this, ::uString* key)
{
    int x = ::app::Uno::Math__Abs_2(NULL, ::app::Uno::Object::GetHashCode(::uPtr< ::uString*>(key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Collections_List_object_>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__string(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Collections_List_object_>(x).Key, key))
            {
                return ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Collections_List_object_>(x).Value;
            }
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Collections_List_object_>(x).State == 0)
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Dictionary did not contain the given key")));
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

::app::Uno::Collections::Dictionary2_ValueCollection__string__Uno_Collections_List_object_* Dictionary__string__Uno_Collections_List_object___get_Values(Dictionary__string__Uno_Collections_List_object_* __this)
{
    return ::app::Uno::Collections::Dictionary2_ValueCollection__string__Uno_Collections_List_object___New_1(NULL, __this);
}

::app::Uno::Collections::Dictionary2_Enumerator__string__Uno_Collections_List_object_ Dictionary__string__Uno_Collections_List_object___GetEnumerator(Dictionary__string__Uno_Collections_List_object_* __this)
{
    return ::app::Uno::Collections::Dictionary2_Enumerator__string__Uno_Collections_List_object___New_1(NULL, __this);
}

Dictionary__string__Uno_Collections_List_object_* Dictionary__string__Uno_Collections_List_object___New_1(::uStatic* __this)
{
    Dictionary__string__Uno_Collections_List_object_* inst = (Dictionary__string__Uno_Collections_List_object_*)::uAllocObject(sizeof(Dictionary__string__Uno_Collections_List_object_), Dictionary__string__Uno_Collections_List_object___typeof());
    inst->_ObjInit_1();
    return inst;
}

void Dictionary__string__Uno_Collections_List_object___Rehash(Dictionary__string__Uno_Collections_List_object_* __this)
{
    ::uArray* oldBuckets = __this->_buckets;
    __this->_buckets = ::uNewArray(::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Collections_List_object___typeof(), ::uPtr< ::uArray*>(oldBuckets)->Length() * 2);
    __this->_count = 0;
    __this->_dummies = 0;

    for (int i = 0; i < oldBuckets->Length(); i++)
    {
        if (oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Collections_List_object_>(i).State == 1)
        {
            __this->Add(oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Collections_List_object_>(i).Key, oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Collections_List_object_>(i).Value);
        }
    }
}

void Dictionary__string__Uno_Collections_List_object___set_Item(Dictionary__string__Uno_Collections_List_object_* __this, ::uString* key, ::app::Uno::Collections::List__object* value)
{
    int x = ::app::Uno::Math__Abs_2(NULL, ::app::Uno::Object::GetHashCode(::uPtr< ::uString*>(key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Collections_List_object_>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__string(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Collections_List_object_>(x).Key, key))
            {
                ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Collections_List_object_>(x).Value = value;
                __this->_version++;
                return;
            }
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Collections_List_object_>(x).State == 0)
        {
            __this->Add(key, value);
            return;
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

bool Dictionary__string__Uno_Collections_List_object___TryGetValue(Dictionary__string__Uno_Collections_List_object_* __this, ::uString* key, ::app::Uno::Collections::List__object** value)
{
    int x = ::app::Uno::Math__Abs_2(NULL, ::app::Uno::Object::GetHashCode(::uPtr< ::uString*>(key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Collections_List_object_>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__string(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Collections_List_object_>(x).Key, key))
            {
                *value = ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Collections_List_object_>(x).Value;
                return true;
            }
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Collections_List_object_>(x).State == 0)
        {
            *value = NULL;
            return false;
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.13.2/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary__string__Uno_Collections_List_Uno_Action___uType* Dictionary__string__Uno_Collections_List_Uno_Action___typeof()
{
    static ::uStaticStrong<Dictionary__string__Uno_Collections_List_Uno_Action___uType*> type;
    if (type != NULL) return type;

    type = (Dictionary__string__Uno_Collections_List_Uno_Action___uType*)::uAllocClassType(sizeof(Dictionary__string__Uno_Collections_List_Uno_Action___uType), "Uno.Collections.Dictionary<string,Uno.Collections.List<Uno.Action>>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_buckets", offsetof(Dictionary__string__Uno_Collections_List_Uno_Action_, _buckets));

    return type;
}

void Dictionary__string__Uno_Collections_List_Uno_Action____ObjInit_1(Dictionary__string__Uno_Collections_List_Uno_Action_* __this)
{
    __this->_buckets = ::uNewArray(::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Collections_List_Uno_Action___typeof(), 8);
    __this->_count = 0;
    __this->_dummies = 0;
}

void Dictionary__string__Uno_Collections_List_Uno_Action___Add(Dictionary__string__Uno_Collections_List_Uno_Action_* __this, ::uString* key, ::app::Uno::Collections::List__Uno_Action* value)
{
    if ((__this->_count + __this->_dummies) > (::uPtr< ::uArray*>(__this->_buckets)->Length() / 2))
    {
        __this->Rehash();
    }

    int x = ::app::Uno::Math__Abs_2(NULL, ::app::Uno::Object::GetHashCode(::uPtr< ::uString*>(key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Collections_List_Uno_Action_>(x).State == 0)
        {
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Collections_List_Uno_Action_>(x).State = 1;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Collections_List_Uno_Action_>(x).Value = value;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Collections_List_Uno_Action_>(x).Key = key;
            __this->_count++;
            __this->_version++;
            return;
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Collections_List_Uno_Action_>(x).State == 2)
        {
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Collections_List_Uno_Action_>(x).State = 1;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Collections_List_Uno_Action_>(x).Value = value;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Collections_List_Uno_Action_>(x).Key = key;
            __this->_count++;
            __this->_dummies--;
            __this->_version++;
            return;
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Collections_List_Uno_Action_>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__string(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Collections_List_Uno_Action_>(x).Key, key))
            {
                U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Dictionary already contains the given key")));
            }
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

bool Dictionary__string__Uno_Collections_List_Uno_Action___ContainsKey(Dictionary__string__Uno_Collections_List_Uno_Action_* __this, ::uString* key)
{
    int x = ::app::Uno::Math__Abs_2(NULL, ::app::Uno::Object::GetHashCode(::uPtr< ::uString*>(key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Collections_List_Uno_Action_>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__string(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Collections_List_Uno_Action_>(x).Key, key))
            {
                return true;
            }
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Collections_List_Uno_Action_>(x).State == 0)
        {
            return false;
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

::app::Uno::Collections::List__Uno_Action* Dictionary__string__Uno_Collections_List_Uno_Action___get_Item(Dictionary__string__Uno_Collections_List_Uno_Action_* __this, ::uString* key)
{
    int x = ::app::Uno::Math__Abs_2(NULL, ::app::Uno::Object::GetHashCode(::uPtr< ::uString*>(key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Collections_List_Uno_Action_>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__string(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Collections_List_Uno_Action_>(x).Key, key))
            {
                return ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Collections_List_Uno_Action_>(x).Value;
            }
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Collections_List_Uno_Action_>(x).State == 0)
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Dictionary did not contain the given key")));
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

Dictionary__string__Uno_Collections_List_Uno_Action_* Dictionary__string__Uno_Collections_List_Uno_Action___New_1(::uStatic* __this)
{
    Dictionary__string__Uno_Collections_List_Uno_Action_* inst = (Dictionary__string__Uno_Collections_List_Uno_Action_*)::uAllocObject(sizeof(Dictionary__string__Uno_Collections_List_Uno_Action_), Dictionary__string__Uno_Collections_List_Uno_Action___typeof());
    inst->_ObjInit_1();
    return inst;
}

void Dictionary__string__Uno_Collections_List_Uno_Action___Rehash(Dictionary__string__Uno_Collections_List_Uno_Action_* __this)
{
    ::uArray* oldBuckets = __this->_buckets;
    __this->_buckets = ::uNewArray(::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Collections_List_Uno_Action___typeof(), ::uPtr< ::uArray*>(oldBuckets)->Length() * 2);
    __this->_count = 0;
    __this->_dummies = 0;

    for (int i = 0; i < oldBuckets->Length(); i++)
    {
        if (oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Collections_List_Uno_Action_>(i).State == 1)
        {
            __this->Add(oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Collections_List_Uno_Action_>(i).Key, oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Collections_List_Uno_Action_>(i).Value);
        }
    }
}

void Dictionary__string__Uno_Collections_List_Uno_Action___set_Item(Dictionary__string__Uno_Collections_List_Uno_Action_* __this, ::uString* key, ::app::Uno::Collections::List__Uno_Action* value)
{
    int x = ::app::Uno::Math__Abs_2(NULL, ::app::Uno::Object::GetHashCode(::uPtr< ::uString*>(key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Collections_List_Uno_Action_>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__string(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Collections_List_Uno_Action_>(x).Key, key))
            {
                ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Collections_List_Uno_Action_>(x).Value = value;
                __this->_version++;
                return;
            }
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Collections_List_Uno_Action_>(x).State == 0)
        {
            __this->Add(key, value);
            return;
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

bool Dictionary__string__Uno_Collections_List_Uno_Action___TryGetValue(Dictionary__string__Uno_Collections_List_Uno_Action_* __this, ::uString* key, ::app::Uno::Collections::List__Uno_Action** value)
{
    int x = ::app::Uno::Math__Abs_2(NULL, ::app::Uno::Object::GetHashCode(::uPtr< ::uString*>(key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Collections_List_Uno_Action_>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__string(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Collections_List_Uno_Action_>(x).Key, key))
            {
                *value = ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Collections_List_Uno_Action_>(x).Value;
                return true;
            }
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Collections_List_Uno_Action_>(x).State == 0)
        {
            *value = NULL;
            return false;
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.13.2/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram__uType* Dictionary__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram__typeof()
{
    static ::uStaticStrong<Dictionary__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram__uType*)::uAllocClassType(sizeof(Dictionary__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram__uType), "Uno.Collections.Dictionary<string,Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLCompiledProgram>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_buckets", offsetof(Dictionary__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram, _buckets));

    return type;
}

void Dictionary__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram___ObjInit_1(Dictionary__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram* __this)
{
    __this->_buckets = ::uNewArray(::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram__typeof(), 8);
    __this->_count = 0;
    __this->_dummies = 0;
}

void Dictionary__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram__Add(Dictionary__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram* __this, ::uString* key, ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLCompiledProgram* value)
{
    if ((__this->_count + __this->_dummies) > (::uPtr< ::uArray*>(__this->_buckets)->Length() / 2))
    {
        __this->Rehash();
    }

    int x = ::app::Uno::Math__Abs_2(NULL, ::app::Uno::Object::GetHashCode(::uPtr< ::uString*>(key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram>(x).State == 0)
        {
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram>(x).State = 1;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram>(x).Value = value;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram>(x).Key = key;
            __this->_count++;
            __this->_version++;
            return;
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram>(x).State == 2)
        {
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram>(x).State = 1;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram>(x).Value = value;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram>(x).Key = key;
            __this->_count++;
            __this->_dummies--;
            __this->_version++;
            return;
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__string(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram>(x).Key, key))
            {
                U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Dictionary already contains the given key")));
            }
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

Dictionary__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram* Dictionary__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram__New_1(::uStatic* __this)
{
    Dictionary__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram* inst = (Dictionary__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram*)::uAllocObject(sizeof(Dictionary__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram), Dictionary__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram__typeof());
    inst->_ObjInit_1();
    return inst;
}

void Dictionary__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram__Rehash(Dictionary__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram* __this)
{
    ::uArray* oldBuckets = __this->_buckets;
    __this->_buckets = ::uNewArray(::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram__typeof(), ::uPtr< ::uArray*>(oldBuckets)->Length() * 2);
    __this->_count = 0;
    __this->_dummies = 0;

    for (int i = 0; i < oldBuckets->Length(); i++)
    {
        if (oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram>(i).State == 1)
        {
            __this->Add(oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram>(i).Key, oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram>(i).Value);
        }
    }
}

bool Dictionary__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram__TryGetValue(Dictionary__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram* __this, ::uString* key, ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLCompiledProgram** value)
{
    int x = ::app::Uno::Math__Abs_2(NULL, ::app::Uno::Object::GetHashCode(::uPtr< ::uString*>(key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__string(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram>(x).Key, key))
            {
                *value = ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram>(x).Value;
                return true;
            }
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram>(x).State == 0)
        {
            *value = NULL;
            return false;
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.13.2/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___uType* Dictionary__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___typeof()
{
    static ::uStaticStrong<Dictionary__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___uType*> type;
    if (type != NULL) return type;

    type = (Dictionary__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___uType*)::uAllocClassType(sizeof(Dictionary__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___uType), "Uno.Collections.Dictionary<string,Uno.WeakReference<Fuse.Resources.HttpImageSourceImpl>>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_buckets", offsetof(Dictionary__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_, _buckets));

    return type;
}

void Dictionary__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl____ObjInit_1(Dictionary__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_* __this)
{
    __this->_buckets = ::uNewArray(::app::Uno::Collections::Dictionary2_Bucket__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___typeof(), 8);
    __this->_count = 0;
    __this->_dummies = 0;
}

void Dictionary__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___Add(Dictionary__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_* __this, ::uString* key, ::app::Uno::WeakReference__Fuse_Resources_HttpImageSourceImpl* value)
{
    if ((__this->_count + __this->_dummies) > (::uPtr< ::uArray*>(__this->_buckets)->Length() / 2))
    {
        __this->Rehash();
    }

    int x = ::app::Uno::Math__Abs_2(NULL, ::app::Uno::Object::GetHashCode(::uPtr< ::uString*>(key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_>(x).State == 0)
        {
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_>(x).State = 1;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_>(x).Value = value;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_>(x).Key = key;
            __this->_count++;
            __this->_version++;
            return;
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_>(x).State == 2)
        {
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_>(x).State = 1;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_>(x).Value = value;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_>(x).Key = key;
            __this->_count++;
            __this->_dummies--;
            __this->_version++;
            return;
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__string(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_>(x).Key, key))
            {
                U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Dictionary already contains the given key")));
            }
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

Dictionary__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_* Dictionary__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___New_1(::uStatic* __this)
{
    Dictionary__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_* inst = (Dictionary__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_*)::uAllocObject(sizeof(Dictionary__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_), Dictionary__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___typeof());
    inst->_ObjInit_1();
    return inst;
}

void Dictionary__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___Rehash(Dictionary__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_* __this)
{
    ::uArray* oldBuckets = __this->_buckets;
    __this->_buckets = ::uNewArray(::app::Uno::Collections::Dictionary2_Bucket__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___typeof(), ::uPtr< ::uArray*>(oldBuckets)->Length() * 2);
    __this->_count = 0;
    __this->_dummies = 0;

    for (int i = 0; i < oldBuckets->Length(); i++)
    {
        if (oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_>(i).State == 1)
        {
            __this->Add(oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_>(i).Key, oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_>(i).Value);
        }
    }
}

bool Dictionary__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___Remove(Dictionary__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_* __this, ::uString* key)
{
    int x = ::app::Uno::Math__Abs_2(NULL, ::app::Uno::Object::GetHashCode(::uPtr< ::uString*>(key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__string(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_>(x).Key, key))
            {
                ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_>(x).State = 2;
                ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_>(x).Value = NULL;
                ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_>(x).Key = NULL;
                __this->_count--;
                __this->_dummies++;
                __this->_version++;
                return true;
            }
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_>(x).State == 0)
        {
            return false;
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

bool Dictionary__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___TryGetValue(Dictionary__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_* __this, ::uString* key, ::app::Uno::WeakReference__Fuse_Resources_HttpImageSourceImpl** value)
{
    int x = ::app::Uno::Math__Abs_2(NULL, ::app::Uno::Object::GetHashCode(::uPtr< ::uString*>(key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__string(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_>(x).Key, key))
            {
                *value = ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_>(x).Value;
                return true;
            }
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_>(x).State == 0)
        {
            *value = NULL;
            return false;
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.13.2/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary__Uno_Content_Fonts_BitmapFont_CharPair__float__uType* Dictionary__Uno_Content_Fonts_BitmapFont_CharPair__float__typeof()
{
    static ::uStaticStrong<Dictionary__Uno_Content_Fonts_BitmapFont_CharPair__float__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary__Uno_Content_Fonts_BitmapFont_CharPair__float__uType*)::uAllocClassType(sizeof(Dictionary__Uno_Content_Fonts_BitmapFont_CharPair__float__uType), "Uno.Collections.Dictionary<Uno.Content.Fonts.BitmapFont_CharPair,float>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_buckets", offsetof(Dictionary__Uno_Content_Fonts_BitmapFont_CharPair__float, _buckets));

    return type;
}

void Dictionary__Uno_Content_Fonts_BitmapFont_CharPair__float___ObjInit_1(Dictionary__Uno_Content_Fonts_BitmapFont_CharPair__float* __this)
{
    __this->_buckets = ::uNewArray(::app::Uno::Collections::Dictionary2_Bucket__Uno_Content_Fonts_BitmapFont_CharPair__float__typeof(), 8);
    __this->_count = 0;
    __this->_dummies = 0;
}

void Dictionary__Uno_Content_Fonts_BitmapFont_CharPair__float__Add(Dictionary__Uno_Content_Fonts_BitmapFont_CharPair__float* __this, ::app::Uno::Content::Fonts::BitmapFont_CharPair key, float value)
{
    if ((__this->_count + __this->_dummies) > (::uPtr< ::uArray*>(__this->_buckets)->Length() / 2))
    {
        __this->Rehash();
    }

    int x = ::app::Uno::Math__Abs_2(NULL, ::app::Uno::Object::GetHashCode(::uBox(::app::Uno::Content::Fonts::BitmapFont_CharPair__typeof(), key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_Content_Fonts_BitmapFont_CharPair__float>(x).State == 0)
        {
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_Content_Fonts_BitmapFont_CharPair__float>(x).State = 1;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_Content_Fonts_BitmapFont_CharPair__float>(x).Value = value;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_Content_Fonts_BitmapFont_CharPair__float>(x).Key = key;
            __this->_count++;
            __this->_version++;
            return;
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_Content_Fonts_BitmapFont_CharPair__float>(x).State == 2)
        {
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_Content_Fonts_BitmapFont_CharPair__float>(x).State = 1;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_Content_Fonts_BitmapFont_CharPair__float>(x).Value = value;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_Content_Fonts_BitmapFont_CharPair__float>(x).Key = key;
            __this->_count++;
            __this->_dummies--;
            __this->_version++;
            return;
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_Content_Fonts_BitmapFont_CharPair__float>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__Uno_Content_Fonts_BitmapFont_CharPair(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_Content_Fonts_BitmapFont_CharPair__float>(x).Key, key))
            {
                U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Dictionary already contains the given key")));
            }
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

float Dictionary__Uno_Content_Fonts_BitmapFont_CharPair__float__get_Item(Dictionary__Uno_Content_Fonts_BitmapFont_CharPair__float* __this, ::app::Uno::Content::Fonts::BitmapFont_CharPair key)
{
    int x = ::app::Uno::Math__Abs_2(NULL, ::app::Uno::Object::GetHashCode(::uBox(::app::Uno::Content::Fonts::BitmapFont_CharPair__typeof(), key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_Content_Fonts_BitmapFont_CharPair__float>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__Uno_Content_Fonts_BitmapFont_CharPair(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_Content_Fonts_BitmapFont_CharPair__float>(x).Key, key))
            {
                return ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_Content_Fonts_BitmapFont_CharPair__float>(x).Value;
            }
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_Content_Fonts_BitmapFont_CharPair__float>(x).State == 0)
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Dictionary did not contain the given key")));
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

Dictionary__Uno_Content_Fonts_BitmapFont_CharPair__float* Dictionary__Uno_Content_Fonts_BitmapFont_CharPair__float__New_1(::uStatic* __this)
{
    Dictionary__Uno_Content_Fonts_BitmapFont_CharPair__float* inst = (Dictionary__Uno_Content_Fonts_BitmapFont_CharPair__float*)::uAllocObject(sizeof(Dictionary__Uno_Content_Fonts_BitmapFont_CharPair__float), Dictionary__Uno_Content_Fonts_BitmapFont_CharPair__float__typeof());
    inst->_ObjInit_1();
    return inst;
}

void Dictionary__Uno_Content_Fonts_BitmapFont_CharPair__float__Rehash(Dictionary__Uno_Content_Fonts_BitmapFont_CharPair__float* __this)
{
    ::uArray* oldBuckets = __this->_buckets;
    __this->_buckets = ::uNewArray(::app::Uno::Collections::Dictionary2_Bucket__Uno_Content_Fonts_BitmapFont_CharPair__float__typeof(), ::uPtr< ::uArray*>(oldBuckets)->Length() * 2);
    __this->_count = 0;
    __this->_dummies = 0;

    for (int i = 0; i < oldBuckets->Length(); i++)
    {
        if (oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_Content_Fonts_BitmapFont_CharPair__float>(i).State == 1)
        {
            __this->Add(oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_Content_Fonts_BitmapFont_CharPair__float>(i).Key, oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_Content_Fonts_BitmapFont_CharPair__float>(i).Value);
        }
    }
}

void Dictionary__Uno_Content_Fonts_BitmapFont_CharPair__float__set_Item(Dictionary__Uno_Content_Fonts_BitmapFont_CharPair__float* __this, ::app::Uno::Content::Fonts::BitmapFont_CharPair key, float value)
{
    int x = ::app::Uno::Math__Abs_2(NULL, ::app::Uno::Object::GetHashCode(::uBox(::app::Uno::Content::Fonts::BitmapFont_CharPair__typeof(), key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_Content_Fonts_BitmapFont_CharPair__float>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__Uno_Content_Fonts_BitmapFont_CharPair(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_Content_Fonts_BitmapFont_CharPair__float>(x).Key, key))
            {
                ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_Content_Fonts_BitmapFont_CharPair__float>(x).Value = value;
                __this->_version++;
                return;
            }
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_Content_Fonts_BitmapFont_CharPair__float>(x).State == 0)
        {
            __this->Add(key, value);
            return;
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

bool Dictionary__Uno_Content_Fonts_BitmapFont_CharPair__float__TryGetValue(Dictionary__Uno_Content_Fonts_BitmapFont_CharPair__float* __this, ::app::Uno::Content::Fonts::BitmapFont_CharPair key, float* value)
{
    int x = ::app::Uno::Math__Abs_2(NULL, ::app::Uno::Object::GetHashCode(::uBox(::app::Uno::Content::Fonts::BitmapFont_CharPair__typeof(), key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_Content_Fonts_BitmapFont_CharPair__float>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__Uno_Content_Fonts_BitmapFont_CharPair(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_Content_Fonts_BitmapFont_CharPair__float>(x).Key, key))
            {
                *value = ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_Content_Fonts_BitmapFont_CharPair__float>(x).Value;
                return true;
            }
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_Content_Fonts_BitmapFont_CharPair__float>(x).State == 0)
        {
            *value = 0;
            return false;
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.13.2/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary__Uno_Type__object__uType* Dictionary__Uno_Type__object__typeof()
{
    static ::uStaticStrong<Dictionary__Uno_Type__object__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary__Uno_Type__object__uType*)::uAllocClassType(sizeof(Dictionary__Uno_Type__object__uType), "Uno.Collections.Dictionary<Uno.Type,object>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_buckets", offsetof(Dictionary__Uno_Type__object, _buckets));

    return type;
}

void Dictionary__Uno_Type__object___ObjInit_1(Dictionary__Uno_Type__object* __this)
{
    __this->_buckets = ::uNewArray(::app::Uno::Collections::Dictionary2_Bucket__Uno_Type__object__typeof(), 8);
    __this->_count = 0;
    __this->_dummies = 0;
}

void Dictionary__Uno_Type__object__Add(Dictionary__Uno_Type__object* __this, ::uType* key, ::uObject* value)
{
    if ((__this->_count + __this->_dummies) > (::uPtr< ::uArray*>(__this->_buckets)->Length() / 2))
    {
        __this->Rehash();
    }

    int x = ::app::Uno::Math__Abs_2(NULL, ::app::Uno::Object::GetHashCode(::uPtr< ::uType*>(key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_Type__object>(x).State == 0)
        {
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_Type__object>(x).State = 1;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_Type__object>(x).Value = value;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_Type__object>(x).Key = key;
            __this->_count++;
            __this->_version++;
            return;
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_Type__object>(x).State == 2)
        {
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_Type__object>(x).State = 1;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_Type__object>(x).Value = value;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_Type__object>(x).Key = key;
            __this->_count++;
            __this->_dummies--;
            __this->_version++;
            return;
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_Type__object>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__Uno_Type(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_Type__object>(x).Key, key))
            {
                U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Dictionary already contains the given key")));
            }
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

Dictionary__Uno_Type__object* Dictionary__Uno_Type__object__New_1(::uStatic* __this)
{
    Dictionary__Uno_Type__object* inst = (Dictionary__Uno_Type__object*)::uAllocObject(sizeof(Dictionary__Uno_Type__object), Dictionary__Uno_Type__object__typeof());
    inst->_ObjInit_1();
    return inst;
}

void Dictionary__Uno_Type__object__Rehash(Dictionary__Uno_Type__object* __this)
{
    ::uArray* oldBuckets = __this->_buckets;
    __this->_buckets = ::uNewArray(::app::Uno::Collections::Dictionary2_Bucket__Uno_Type__object__typeof(), ::uPtr< ::uArray*>(oldBuckets)->Length() * 2);
    __this->_count = 0;
    __this->_dummies = 0;

    for (int i = 0; i < oldBuckets->Length(); i++)
    {
        if (oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_Type__object>(i).State == 1)
        {
            __this->Add(oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_Type__object>(i).Key, oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_Type__object>(i).Value);
        }
    }
}

bool Dictionary__Uno_Type__object__TryGetValue(Dictionary__Uno_Type__object* __this, ::uType* key, ::uObject** value)
{
    int x = ::app::Uno::Math__Abs_2(NULL, ::app::Uno::Object::GetHashCode(::uPtr< ::uType*>(key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_Type__object>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__Uno_Type(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_Type__object>(x).Key, key))
            {
                *value = ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_Type__object>(x).Value;
                return true;
            }
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_Type__object>(x).State == 0)
        {
            *value = NULL;
            return false;
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.13.2/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary__Uno_UX_FileSource__iOS_UIKit_UIImage__uType* Dictionary__Uno_UX_FileSource__iOS_UIKit_UIImage__typeof()
{
    static ::uStaticStrong<Dictionary__Uno_UX_FileSource__iOS_UIKit_UIImage__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary__Uno_UX_FileSource__iOS_UIKit_UIImage__uType*)::uAllocClassType(sizeof(Dictionary__Uno_UX_FileSource__iOS_UIKit_UIImage__uType), "Uno.Collections.Dictionary<Uno.UX.FileSource,iOS.UIKit.UIImage>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_buckets", offsetof(Dictionary__Uno_UX_FileSource__iOS_UIKit_UIImage, _buckets));

    return type;
}

void Dictionary__Uno_UX_FileSource__iOS_UIKit_UIImage___ObjInit_1(Dictionary__Uno_UX_FileSource__iOS_UIKit_UIImage* __this)
{
    __this->_buckets = ::uNewArray(::app::Uno::Collections::Dictionary2_Bucket__Uno_UX_FileSource__iOS_UIKit_UIImage__typeof(), 8);
    __this->_count = 0;
    __this->_dummies = 0;
}

void Dictionary__Uno_UX_FileSource__iOS_UIKit_UIImage__Add(Dictionary__Uno_UX_FileSource__iOS_UIKit_UIImage* __this, ::app::Uno::UX::FileSource* key, ::app::iOS::UIKit::UIImage* value)
{
    if ((__this->_count + __this->_dummies) > (::uPtr< ::uArray*>(__this->_buckets)->Length() / 2))
    {
        __this->Rehash();
    }

    int x = ::app::Uno::Math__Abs_2(NULL, ::app::Uno::Object::GetHashCode(::uPtr< ::app::Uno::UX::FileSource*>(key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_UX_FileSource__iOS_UIKit_UIImage>(x).State == 0)
        {
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_UX_FileSource__iOS_UIKit_UIImage>(x).State = 1;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_UX_FileSource__iOS_UIKit_UIImage>(x).Value = value;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_UX_FileSource__iOS_UIKit_UIImage>(x).Key = key;
            __this->_count++;
            __this->_version++;
            return;
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_UX_FileSource__iOS_UIKit_UIImage>(x).State == 2)
        {
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_UX_FileSource__iOS_UIKit_UIImage>(x).State = 1;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_UX_FileSource__iOS_UIKit_UIImage>(x).Value = value;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_UX_FileSource__iOS_UIKit_UIImage>(x).Key = key;
            __this->_count++;
            __this->_dummies--;
            __this->_version++;
            return;
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_UX_FileSource__iOS_UIKit_UIImage>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__Uno_UX_FileSource(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_UX_FileSource__iOS_UIKit_UIImage>(x).Key, key))
            {
                U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Dictionary already contains the given key")));
            }
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

bool Dictionary__Uno_UX_FileSource__iOS_UIKit_UIImage__ContainsKey(Dictionary__Uno_UX_FileSource__iOS_UIKit_UIImage* __this, ::app::Uno::UX::FileSource* key)
{
    int x = ::app::Uno::Math__Abs_2(NULL, ::app::Uno::Object::GetHashCode(::uPtr< ::app::Uno::UX::FileSource*>(key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_UX_FileSource__iOS_UIKit_UIImage>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__Uno_UX_FileSource(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_UX_FileSource__iOS_UIKit_UIImage>(x).Key, key))
            {
                return true;
            }
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_UX_FileSource__iOS_UIKit_UIImage>(x).State == 0)
        {
            return false;
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

::app::iOS::UIKit::UIImage* Dictionary__Uno_UX_FileSource__iOS_UIKit_UIImage__get_Item(Dictionary__Uno_UX_FileSource__iOS_UIKit_UIImage* __this, ::app::Uno::UX::FileSource* key)
{
    int x = ::app::Uno::Math__Abs_2(NULL, ::app::Uno::Object::GetHashCode(::uPtr< ::app::Uno::UX::FileSource*>(key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_UX_FileSource__iOS_UIKit_UIImage>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__Uno_UX_FileSource(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_UX_FileSource__iOS_UIKit_UIImage>(x).Key, key))
            {
                return ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_UX_FileSource__iOS_UIKit_UIImage>(x).Value;
            }
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_UX_FileSource__iOS_UIKit_UIImage>(x).State == 0)
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Dictionary did not contain the given key")));
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

Dictionary__Uno_UX_FileSource__iOS_UIKit_UIImage* Dictionary__Uno_UX_FileSource__iOS_UIKit_UIImage__New_1(::uStatic* __this)
{
    Dictionary__Uno_UX_FileSource__iOS_UIKit_UIImage* inst = (Dictionary__Uno_UX_FileSource__iOS_UIKit_UIImage*)::uAllocObject(sizeof(Dictionary__Uno_UX_FileSource__iOS_UIKit_UIImage), Dictionary__Uno_UX_FileSource__iOS_UIKit_UIImage__typeof());
    inst->_ObjInit_1();
    return inst;
}

void Dictionary__Uno_UX_FileSource__iOS_UIKit_UIImage__Rehash(Dictionary__Uno_UX_FileSource__iOS_UIKit_UIImage* __this)
{
    ::uArray* oldBuckets = __this->_buckets;
    __this->_buckets = ::uNewArray(::app::Uno::Collections::Dictionary2_Bucket__Uno_UX_FileSource__iOS_UIKit_UIImage__typeof(), ::uPtr< ::uArray*>(oldBuckets)->Length() * 2);
    __this->_count = 0;
    __this->_dummies = 0;

    for (int i = 0; i < oldBuckets->Length(); i++)
    {
        if (oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_UX_FileSource__iOS_UIKit_UIImage>(i).State == 1)
        {
            __this->Add(oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_UX_FileSource__iOS_UIKit_UIImage>(i).Key, oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_UX_FileSource__iOS_UIKit_UIImage>(i).Value);
        }
    }
}

void Dictionary__Uno_UX_FileSource__iOS_UIKit_UIImage__set_Item(Dictionary__Uno_UX_FileSource__iOS_UIKit_UIImage* __this, ::app::Uno::UX::FileSource* key, ::app::iOS::UIKit::UIImage* value)
{
    int x = ::app::Uno::Math__Abs_2(NULL, ::app::Uno::Object::GetHashCode(::uPtr< ::app::Uno::UX::FileSource*>(key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_UX_FileSource__iOS_UIKit_UIImage>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__Uno_UX_FileSource(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_UX_FileSource__iOS_UIKit_UIImage>(x).Key, key))
            {
                ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_UX_FileSource__iOS_UIKit_UIImage>(x).Value = value;
                __this->_version++;
                return;
            }
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_UX_FileSource__iOS_UIKit_UIImage>(x).State == 0)
        {
            __this->Add(key, value);
            return;
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.13.2/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__uType* Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__typeof()
{
    static ::uStaticStrong<Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__uType*)::uAllocClassType(sizeof(Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__uType), "Uno.Collections.Dictionary<Uno.UX.FileSource,Uno.Content.Fonts.FontFace>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_buckets", offsetof(Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace, _buckets));

    return type;
}

void Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace___ObjInit_1(Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace* __this)
{
    __this->_buckets = ::uNewArray(::app::Uno::Collections::Dictionary2_Bucket__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__typeof(), 8);
    __this->_count = 0;
    __this->_dummies = 0;
}

void Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__Add(Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace* __this, ::app::Uno::UX::FileSource* key, ::app::Uno::Content::Fonts::FontFace* value)
{
    if ((__this->_count + __this->_dummies) > (::uPtr< ::uArray*>(__this->_buckets)->Length() / 2))
    {
        __this->Rehash();
    }

    int x = ::app::Uno::Math__Abs_2(NULL, ::app::Uno::Object::GetHashCode(::uPtr< ::app::Uno::UX::FileSource*>(key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_UX_FileSource__Uno_Content_Fonts_FontFace>(x).State == 0)
        {
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_UX_FileSource__Uno_Content_Fonts_FontFace>(x).State = 1;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_UX_FileSource__Uno_Content_Fonts_FontFace>(x).Value = value;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_UX_FileSource__Uno_Content_Fonts_FontFace>(x).Key = key;
            __this->_count++;
            __this->_version++;
            return;
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_UX_FileSource__Uno_Content_Fonts_FontFace>(x).State == 2)
        {
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_UX_FileSource__Uno_Content_Fonts_FontFace>(x).State = 1;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_UX_FileSource__Uno_Content_Fonts_FontFace>(x).Value = value;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_UX_FileSource__Uno_Content_Fonts_FontFace>(x).Key = key;
            __this->_count++;
            __this->_dummies--;
            __this->_version++;
            return;
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_UX_FileSource__Uno_Content_Fonts_FontFace>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__Uno_UX_FileSource(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_UX_FileSource__Uno_Content_Fonts_FontFace>(x).Key, key))
            {
                U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Dictionary already contains the given key")));
            }
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace* Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__New_1(::uStatic* __this)
{
    Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace* inst = (Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace*)::uAllocObject(sizeof(Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace), Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__typeof());
    inst->_ObjInit_1();
    return inst;
}

void Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__Rehash(Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace* __this)
{
    ::uArray* oldBuckets = __this->_buckets;
    __this->_buckets = ::uNewArray(::app::Uno::Collections::Dictionary2_Bucket__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__typeof(), ::uPtr< ::uArray*>(oldBuckets)->Length() * 2);
    __this->_count = 0;
    __this->_dummies = 0;

    for (int i = 0; i < oldBuckets->Length(); i++)
    {
        if (oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_UX_FileSource__Uno_Content_Fonts_FontFace>(i).State == 1)
        {
            __this->Add(oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_UX_FileSource__Uno_Content_Fonts_FontFace>(i).Key, oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_UX_FileSource__Uno_Content_Fonts_FontFace>(i).Value);
        }
    }
}

bool Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__TryGetValue(Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace* __this, ::app::Uno::UX::FileSource* key, ::app::Uno::Content::Fonts::FontFace** value)
{
    int x = ::app::Uno::Math__Abs_2(NULL, ::app::Uno::Object::GetHashCode(::uPtr< ::app::Uno::UX::FileSource*>(key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_UX_FileSource__Uno_Content_Fonts_FontFace>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__Uno_UX_FileSource(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_UX_FileSource__Uno_Content_Fonts_FontFace>(x).Key, key))
            {
                *value = ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_UX_FileSource__Uno_Content_Fonts_FontFace>(x).Value;
                return true;
            }
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_UX_FileSource__Uno_Content_Fonts_FontFace>(x).State == 0)
        {
            *value = NULL;
            return false;
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.13.2/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl___uType* Dictionary__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl___typeof()
{
    static ::uStaticStrong<Dictionary__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl___uType*> type;
    if (type != NULL) return type;

    type = (Dictionary__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl___uType*)::uAllocClassType(sizeof(Dictionary__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl___uType), "Uno.Collections.Dictionary<Uno.UX.FileSource,Uno.WeakReference<Fuse.Resources.FileImageSourceImpl>>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_buckets", offsetof(Dictionary__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_, _buckets));

    return type;
}

void Dictionary__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl____ObjInit_1(Dictionary__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_* __this)
{
    __this->_buckets = ::uNewArray(::app::Uno::Collections::Dictionary2_Bucket__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl___typeof(), 8);
    __this->_count = 0;
    __this->_dummies = 0;
}

void Dictionary__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl___Add(Dictionary__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_* __this, ::app::Uno::UX::FileSource* key, ::app::Uno::WeakReference__Fuse_Resources_FileImageSourceImpl* value)
{
    if ((__this->_count + __this->_dummies) > (::uPtr< ::uArray*>(__this->_buckets)->Length() / 2))
    {
        __this->Rehash();
    }

    int x = ::app::Uno::Math__Abs_2(NULL, ::app::Uno::Object::GetHashCode(::uPtr< ::app::Uno::UX::FileSource*>(key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_>(x).State == 0)
        {
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_>(x).State = 1;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_>(x).Value = value;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_>(x).Key = key;
            __this->_count++;
            __this->_version++;
            return;
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_>(x).State == 2)
        {
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_>(x).State = 1;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_>(x).Value = value;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_>(x).Key = key;
            __this->_count++;
            __this->_dummies--;
            __this->_version++;
            return;
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__Uno_UX_FileSource(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_>(x).Key, key))
            {
                U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Dictionary already contains the given key")));
            }
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

Dictionary__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_* Dictionary__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl___New_1(::uStatic* __this)
{
    Dictionary__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_* inst = (Dictionary__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_*)::uAllocObject(sizeof(Dictionary__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_), Dictionary__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl___typeof());
    inst->_ObjInit_1();
    return inst;
}

void Dictionary__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl___Rehash(Dictionary__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_* __this)
{
    ::uArray* oldBuckets = __this->_buckets;
    __this->_buckets = ::uNewArray(::app::Uno::Collections::Dictionary2_Bucket__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl___typeof(), ::uPtr< ::uArray*>(oldBuckets)->Length() * 2);
    __this->_count = 0;
    __this->_dummies = 0;

    for (int i = 0; i < oldBuckets->Length(); i++)
    {
        if (oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_>(i).State == 1)
        {
            __this->Add(oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_>(i).Key, oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_>(i).Value);
        }
    }
}

bool Dictionary__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl___Remove(Dictionary__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_* __this, ::app::Uno::UX::FileSource* key)
{
    int x = ::app::Uno::Math__Abs_2(NULL, ::app::Uno::Object::GetHashCode(::uPtr< ::app::Uno::UX::FileSource*>(key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__Uno_UX_FileSource(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_>(x).Key, key))
            {
                ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_>(x).State = 2;
                ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_>(x).Value = NULL;
                ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_>(x).Key = NULL;
                __this->_count--;
                __this->_dummies++;
                __this->_version++;
                return true;
            }
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_>(x).State == 0)
        {
            return false;
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

bool Dictionary__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl___TryGetValue(Dictionary__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_* __this, ::app::Uno::UX::FileSource* key, ::app::Uno::WeakReference__Fuse_Resources_FileImageSourceImpl** value)
{
    int x = ::app::Uno::Math__Abs_2(NULL, ::app::Uno::Object::GetHashCode(::uPtr< ::app::Uno::UX::FileSource*>(key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__Uno_UX_FileSource(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_>(x).Key, key))
            {
                *value = ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_>(x).Value;
                return true;
            }
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_>(x).State == 0)
        {
            *value = NULL;
            return false;
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

}}}
