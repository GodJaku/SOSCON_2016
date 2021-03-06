#include <app/Fuse.DrawContext.h>
#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.Elements.Internal.ElementDraw.h>
#include <app/Fuse.Elements.Internal.Scale9Rectangle.h>
#include <app/Fuse.IViewport.h>
#include <app/Fuse.Node.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Buffer.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float3.h>
#include <app/Uno.Float4x4.h>
#include <app/Uno.Graphics.BlendOperand.h>
#include <app/Uno.Graphics.BufferUsage.h>
#include <app/Uno.Graphics.IndexBuffer.h>
#include <app/Uno.Graphics.IndexType.h>
#include <app/Uno.Graphics.PolygonFace.h>
#include <app/Uno.Graphics.Texture2D.h>
#include <app/Uno.Graphics.VertexAttributeType.h>
#include <app/Uno.Graphics.VertexBuffer.h>
#include <app/Uno.Int.h>
#include <app/Uno.Matrix.h>
#include <app/Uno.Runtime.Implementation.Internal.BufferConverters.h>
#include <app/Uno.Runtime.Implementation.Internal.BundleRegistry.h>
#include <app/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h>
#include <app/Uno.UShort.h>

namespace app {
namespace Fuse {
namespace Elements {
namespace Internal {

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Elements/0.11.3/Drawing/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ElementDraw*> ElementDraw__Impl;

ElementDraw__uType* ElementDraw__typeof()
{
    static ::uStaticStrong<ElementDraw__uType*> type;
    if (type != NULL) return type;

    type = (ElementDraw__uType*)::uAllocClassType(sizeof(ElementDraw__uType), "Fuse.Elements.Internal.ElementDraw", false, 0, 4, 0);

    type->SetStrongRefs(
        "_draw_b1f11b73._compiledProgram", offsetof(ElementDraw, _draw_b1f11b73._compiledProgram),
        "_draw_b1f11b73._constValues", offsetof(ElementDraw, _draw_b1f11b73._constValues),
        "_draw_b1f11b73._Program", offsetof(ElementDraw, _draw_b1f11b73._Program),
        "Rectangle_VertexData_b1f11b73_6_2_1", offsetof(ElementDraw, Rectangle_VertexData_b1f11b73_6_2_1));

    return type;
}

void ElementDraw___ObjInit(ElementDraw* __this)
{
    __this->init_DrawCalls();
}

void ElementDraw___TypeInit(::uStatic* __this)
{
    ElementDraw__Impl = ElementDraw__New_1(NULL);
}

void ElementDraw__init_DrawCalls(ElementDraw* __this)
{
    ::uArray* array_123;
    __this->Rectangle_VertexData_b1f11b73_6_2_1 = ::app::Uno::Graphics::VertexBuffer__New_3(NULL, ::app::Uno::Runtime::Implementation::Internal::BufferConverters__ToBuffer_8(NULL, (array_123 = ::uNewArray(::app::Uno::Float2__typeof(), 6), ::uPtr< ::uArray*>(array_123)->Item< ::app::Uno::Float2>(0) = ::app::Uno::Float2__New_2(NULL, 0.0f, 0.0f), ::uPtr< ::uArray*>(array_123)->Item< ::app::Uno::Float2>(1) = ::app::Uno::Float2__New_2(NULL, 0.0f, 1.0f), ::uPtr< ::uArray*>(array_123)->Item< ::app::Uno::Float2>(2) = ::app::Uno::Float2__New_2(NULL, 1.0f, 1.0f), ::uPtr< ::uArray*>(array_123)->Item< ::app::Uno::Float2>(3) = ::app::Uno::Float2__New_2(NULL, 0.0f, 0.0f), ::uPtr< ::uArray*>(array_123)->Item< ::app::Uno::Float2>(4) = ::app::Uno::Float2__New_2(NULL, 1.0f, 1.0f), ::uPtr< ::uArray*>(array_123)->Item< ::app::Uno::Float2>(5) = ::app::Uno::Float2__New_2(NULL, 1.0f, 0.0f), array_123)), 0);
    __this->Rectangle_LocalTransform_b1f11b73_3_8_2 = ::app::Uno::Matrix__Translation(NULL, -::app::Uno::Float2__New_1(NULL, 0.0f).X, -::app::Uno::Float2__New_1(NULL, 0.0f).Y, 0.0f);
    __this->Rectangle_LocalTransform_b1f11b73_3_8_3 = ::app::Uno::Matrix__RotationZ(NULL, 0.0f);
    __this->_draw_b1f11b73 = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 43), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
}

ElementDraw* ElementDraw__New_1(::uStatic* __this)
{
    ElementDraw* inst = (ElementDraw*)::uAllocObject(sizeof(ElementDraw), ElementDraw__typeof());
    inst->_ObjInit();
    return inst;
}

void ElementDraw__Rectangle(ElementDraw* __this, ::app::Fuse::DrawContext* dc, ::app::Fuse::Elements::Element* element, ::app::Uno::Float2 offset, ::app::Uno::Float2 size, ::app::Uno::Float4 color)
{
    ::app::Uno::Float4x4 LocalTransform_b1f11b73_3_8_4 = ::app::Uno::Matrix__Mul_3(NULL, __this->Rectangle_LocalTransform_b1f11b73_3_8_2, ::app::Uno::Matrix__Scaling_1(NULL, size.X, size.Y, 1.0f), __this->Rectangle_LocalTransform_b1f11b73_3_8_3, ::app::Uno::Matrix__Translation(NULL, offset.X, offset.Y, 0.0f));
    {
        __this->_draw_b1f11b73.BlendEnabled(true);
        __this->_draw_b1f11b73.BlendSrcRgb(2);
        __this->_draw_b1f11b73.BlendDstRgb(3);
        __this->_draw_b1f11b73.BlendDstAlpha(3);
        __this->_draw_b1f11b73.DepthTestEnabled(false);
        __this->_draw_b1f11b73.CullFace(::uPtr< ::app::Fuse::DrawContext*>(dc)->CullFace());
        __this->_draw_b1f11b73.Use();
        __this->_draw_b1f11b73.Attrib(0, 2, __this->Rectangle_VertexData_b1f11b73_6_2_1, 8, 0);
        __this->_draw_b1f11b73.Uniform_2(1, ::app::Fuse::IViewport::ViewProjectionTransform(::uPtr< ::uObject*>(dc->Viewport())));
        __this->_draw_b1f11b73.Uniform_5(2, color);
        __this->_draw_b1f11b73.Uniform_2(3, ((::app::Fuse::Node*)element != NULL) ? ::app::Uno::Matrix__Mul_10(NULL, LocalTransform_b1f11b73_3_8_4, ::uPtr< ::app::Fuse::Node*>((::app::Fuse::Node*)element)->WorldTransform()) : LocalTransform_b1f11b73_3_8_4);
        __this->_draw_b1f11b73.DrawArrays(6);
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Elements/0.11.3/Drawing/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< Scale9Rectangle*> Scale9Rectangle__Impl;

Scale9Rectangle__uType* Scale9Rectangle__typeof()
{
    static ::uStaticStrong<Scale9Rectangle__uType*> type;
    if (type != NULL) return type;

    type = (Scale9Rectangle__uType*)::uAllocClassType(sizeof(Scale9Rectangle__uType), "Fuse.Elements.Internal.Scale9Rectangle", false, 0, 7, 0);

    type->SetStrongRefs(
        "_draw_d7134d74._compiledProgram", offsetof(Scale9Rectangle, _draw_d7134d74._compiledProgram),
        "_draw_d7134d74._constValues", offsetof(Scale9Rectangle, _draw_d7134d74._constValues),
        "_draw_d7134d74._Program", offsetof(Scale9Rectangle, _draw_d7134d74._Program),
        "Draw_indices_d7134d74_1_2_13", offsetof(Scale9Rectangle, Draw_indices_d7134d74_1_2_13),
        "Draw_xv_d7134d74_1_3_2", offsetof(Scale9Rectangle, Draw_xv_d7134d74_1_3_2),
        "Draw_xv_d7134d74_1_3_3", offsetof(Scale9Rectangle, Draw_xv_d7134d74_1_3_3),
        "Draw_yv_d7134d74_1_4_6", offsetof(Scale9Rectangle, Draw_yv_d7134d74_1_4_6));

    return type;
}

void Scale9Rectangle___ObjInit(Scale9Rectangle* __this)
{
    __this->init_DrawCalls();
}

void Scale9Rectangle___TypeInit(::uStatic* __this)
{
    Scale9Rectangle__Impl = Scale9Rectangle__New_1(NULL);
}

void Scale9Rectangle__Draw(Scale9Rectangle* __this, ::app::Fuse::DrawContext* dc, ::app::Fuse::Node* element, ::app::Uno::Float2 size, ::app::Uno::Float2 scaleTextureSize, ::app::Uno::Graphics::Texture2D* tex, ::app::Uno::Float4 color, ::app::Uno::Float4 margin)
{
    {
        __this->_draw_d7134d74.BlendEnabled(true);
        __this->_draw_d7134d74.BlendSrcRgb(2);
        __this->_draw_d7134d74.BlendDstRgb(3);
        __this->_draw_d7134d74.BlendDstAlpha(3);
        __this->_draw_d7134d74.DepthTestEnabled(false);
        __this->_draw_d7134d74.CullFace(0);
        __this->_draw_d7134d74.Use();
        __this->_draw_d7134d74.Attrib(0, 3, __this->Draw_xv_d7134d74_1_3_3, 12, 0);
        __this->_draw_d7134d74.Attrib(1, 3, __this->Draw_yv_d7134d74_1_4_6, 12, 0);
        __this->_draw_d7134d74.Uniform_8(2, margin.X);
        __this->_draw_d7134d74.Uniform_8(3, size.X - margin.Z);
        __this->_draw_d7134d74.Uniform_8(4, size.X);
        __this->_draw_d7134d74.Uniform_8(5, margin.Y);
        __this->_draw_d7134d74.Uniform_8(6, size.Y - margin.W);
        __this->_draw_d7134d74.Uniform_8(7, size.Y);
        __this->_draw_d7134d74.Uniform_2(8, ::uPtr< ::app::Fuse::Node*>(element)->WorldTransform());
        __this->_draw_d7134d74.Uniform_2(9, ::app::Fuse::IViewport::ViewProjectionTransform(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::DrawContext*>(dc)->Viewport())));
        __this->_draw_d7134d74.Uniform_8(10, scaleTextureSize.X - margin.Z);
        __this->_draw_d7134d74.Uniform_8(11, scaleTextureSize.X);
        __this->_draw_d7134d74.Uniform_8(12, scaleTextureSize.Y - margin.W);
        __this->_draw_d7134d74.Uniform_8(13, scaleTextureSize.Y);
        __this->_draw_d7134d74.Uniform_7(14, scaleTextureSize);
        __this->_draw_d7134d74.Uniform_5(15, color);
        __this->_draw_d7134d74.Sampler_1(16, tex);
        __this->_draw_d7134d74.Draw(::uPtr< ::uArray*>(__this->Draw_indices_d7134d74_1_2_13)->Length(), 2, __this->Draw_xv_d7134d74_1_3_2);
    }
}

void Scale9Rectangle__init_DrawCalls(Scale9Rectangle* __this)
{
    ::uArray* array_123;
    ::uArray* array_124;
    ::uArray* array_125;
    array_123 = ::uNewArray(::app::Uno::UShort__typeof(), 54);
    ::uPtr< ::uArray*>(array_123)->Item< ::uUShort>(0) = 0;
    ::uPtr< ::uArray*>(array_123)->Item< ::uUShort>(1) = 4;
    ::uPtr< ::uArray*>(array_123)->Item< ::uUShort>(2) = 5;
    ::uPtr< ::uArray*>(array_123)->Item< ::uUShort>(3) = 0;
    ::uPtr< ::uArray*>(array_123)->Item< ::uUShort>(4) = 5;
    ::uPtr< ::uArray*>(array_123)->Item< ::uUShort>(5) = 1;
    ::uPtr< ::uArray*>(array_123)->Item< ::uUShort>(6) = 1;
    ::uPtr< ::uArray*>(array_123)->Item< ::uUShort>(7) = 5;
    ::uPtr< ::uArray*>(array_123)->Item< ::uUShort>(8) = 6;
    ::uPtr< ::uArray*>(array_123)->Item< ::uUShort>(9) = 1;
    ::uPtr< ::uArray*>(array_123)->Item< ::uUShort>(10) = 6;
    ::uPtr< ::uArray*>(array_123)->Item< ::uUShort>(11) = 2;
    ::uPtr< ::uArray*>(array_123)->Item< ::uUShort>(12) = 2;
    ::uPtr< ::uArray*>(array_123)->Item< ::uUShort>(13) = 6;
    ::uPtr< ::uArray*>(array_123)->Item< ::uUShort>(14) = 7;
    ::uPtr< ::uArray*>(array_123)->Item< ::uUShort>(15) = 2;
    ::uPtr< ::uArray*>(array_123)->Item< ::uUShort>(16) = 7;
    ::uPtr< ::uArray*>(array_123)->Item< ::uUShort>(17) = 3;
    ::uPtr< ::uArray*>(array_123)->Item< ::uUShort>(18) = 4;
    ::uPtr< ::uArray*>(array_123)->Item< ::uUShort>(19) = 8;
    ::uPtr< ::uArray*>(array_123)->Item< ::uUShort>(20) = 9;
    ::uPtr< ::uArray*>(array_123)->Item< ::uUShort>(21) = 4;
    ::uPtr< ::uArray*>(array_123)->Item< ::uUShort>(22) = 9;
    ::uPtr< ::uArray*>(array_123)->Item< ::uUShort>(23) = 5;
    ::uPtr< ::uArray*>(array_123)->Item< ::uUShort>(24) = 5;
    ::uPtr< ::uArray*>(array_123)->Item< ::uUShort>(25) = 9;
    ::uPtr< ::uArray*>(array_123)->Item< ::uUShort>(26) = 10;
    ::uPtr< ::uArray*>(array_123)->Item< ::uUShort>(27) = 5;
    ::uPtr< ::uArray*>(array_123)->Item< ::uUShort>(28) = 10;
    ::uPtr< ::uArray*>(array_123)->Item< ::uUShort>(29) = 6;
    ::uPtr< ::uArray*>(array_123)->Item< ::uUShort>(30) = 6;
    ::uPtr< ::uArray*>(array_123)->Item< ::uUShort>(31) = 10;
    ::uPtr< ::uArray*>(array_123)->Item< ::uUShort>(32) = 11;
    ::uPtr< ::uArray*>(array_123)->Item< ::uUShort>(33) = 6;
    ::uPtr< ::uArray*>(array_123)->Item< ::uUShort>(34) = 11;
    ::uPtr< ::uArray*>(array_123)->Item< ::uUShort>(35) = 7;
    ::uPtr< ::uArray*>(array_123)->Item< ::uUShort>(36) = 8;
    ::uPtr< ::uArray*>(array_123)->Item< ::uUShort>(37) = 12;
    ::uPtr< ::uArray*>(array_123)->Item< ::uUShort>(38) = 13;
    ::uPtr< ::uArray*>(array_123)->Item< ::uUShort>(39) = 8;
    ::uPtr< ::uArray*>(array_123)->Item< ::uUShort>(40) = 13;
    ::uPtr< ::uArray*>(array_123)->Item< ::uUShort>(41) = 9;
    ::uPtr< ::uArray*>(array_123)->Item< ::uUShort>(42) = 9;
    ::uPtr< ::uArray*>(array_123)->Item< ::uUShort>(43) = 13;
    ::uPtr< ::uArray*>(array_123)->Item< ::uUShort>(44) = 14;
    ::uPtr< ::uArray*>(array_123)->Item< ::uUShort>(45) = 9;
    ::uPtr< ::uArray*>(array_123)->Item< ::uUShort>(46) = 14;
    ::uPtr< ::uArray*>(array_123)->Item< ::uUShort>(47) = 10;
    ::uPtr< ::uArray*>(array_123)->Item< ::uUShort>(48) = 10;
    ::uPtr< ::uArray*>(array_123)->Item< ::uUShort>(49) = 14;
    ::uPtr< ::uArray*>(array_123)->Item< ::uUShort>(50) = 15;
    ::uPtr< ::uArray*>(array_123)->Item< ::uUShort>(51) = 10;
    ::uPtr< ::uArray*>(array_123)->Item< ::uUShort>(52) = 15;
    ::uPtr< ::uArray*>(array_123)->Item< ::uUShort>(53) = 11;
    ::uArray* indices_d7134d74_1_2_1 = array_123;
    __this->Draw_xv_d7134d74_1_3_2 = ::app::Uno::Graphics::IndexBuffer__New_3(NULL, ::app::Uno::Runtime::Implementation::Internal::BufferConverters__ToBuffer_3(NULL, indices_d7134d74_1_2_1), 0);
    __this->Draw_xv_d7134d74_1_3_3 = ::app::Uno::Graphics::VertexBuffer__New_3(NULL, ::app::Uno::Runtime::Implementation::Internal::BufferConverters__ToBuffer_7(NULL, (array_124 = ::uNewArray(::app::Uno::Float3__typeof(), 16), ::uPtr< ::uArray*>(array_124)->Item< ::app::Uno::Float3>(0) = ::app::Uno::Float3__New_2(NULL, 0.0f, 0.0f, 0.0f), ::uPtr< ::uArray*>(array_124)->Item< ::app::Uno::Float3>(1) = ::app::Uno::Float3__New_2(NULL, 1.0f, 0.0f, 0.0f), ::uPtr< ::uArray*>(array_124)->Item< ::app::Uno::Float3>(2) = ::app::Uno::Float3__New_2(NULL, 0.0f, 1.0f, 0.0f), ::uPtr< ::uArray*>(array_124)->Item< ::app::Uno::Float3>(3) = ::app::Uno::Float3__New_2(NULL, 0.0f, 0.0f, 1.0f), ::uPtr< ::uArray*>(array_124)->Item< ::app::Uno::Float3>(4) = ::app::Uno::Float3__New_2(NULL, 0.0f, 0.0f, 0.0f), ::uPtr< ::uArray*>(array_124)->Item< ::app::Uno::Float3>(5) = ::app::Uno::Float3__New_2(NULL, 1.0f, 0.0f, 0.0f), ::uPtr< ::uArray*>(array_124)->Item< ::app::Uno::Float3>(6) = ::app::Uno::Float3__New_2(NULL, 0.0f, 1.0f, 0.0f), ::uPtr< ::uArray*>(array_124)->Item< ::app::Uno::Float3>(7) = ::app::Uno::Float3__New_2(NULL, 0.0f, 0.0f, 1.0f), ::uPtr< ::uArray*>(array_124)->Item< ::app::Uno::Float3>(8) = ::app::Uno::Float3__New_2(NULL, 0.0f, 0.0f, 0.0f), ::uPtr< ::uArray*>(array_124)->Item< ::app::Uno::Float3>(9) = ::app::Uno::Float3__New_2(NULL, 1.0f, 0.0f, 0.0f), ::uPtr< ::uArray*>(array_124)->Item< ::app::Uno::Float3>(10) = ::app::Uno::Float3__New_2(NULL, 0.0f, 1.0f, 0.0f), ::uPtr< ::uArray*>(array_124)->Item< ::app::Uno::Float3>(11) = ::app::Uno::Float3__New_2(NULL, 0.0f, 0.0f, 1.0f), ::uPtr< ::uArray*>(array_124)->Item< ::app::Uno::Float3>(12) = ::app::Uno::Float3__New_2(NULL, 0.0f, 0.0f, 0.0f), ::uPtr< ::uArray*>(array_124)->Item< ::app::Uno::Float3>(13) = ::app::Uno::Float3__New_2(NULL, 1.0f, 0.0f, 0.0f), ::uPtr< ::uArray*>(array_124)->Item< ::app::Uno::Float3>(14) = ::app::Uno::Float3__New_2(NULL, 0.0f, 1.0f, 0.0f), ::uPtr< ::uArray*>(array_124)->Item< ::app::Uno::Float3>(15) = ::app::Uno::Float3__New_2(NULL, 0.0f, 0.0f, 1.0f), array_124)), 0);
    __this->Draw_yv_d7134d74_1_4_6 = ::app::Uno::Graphics::VertexBuffer__New_3(NULL, ::app::Uno::Runtime::Implementation::Internal::BufferConverters__ToBuffer_7(NULL, (array_125 = ::uNewArray(::app::Uno::Float3__typeof(), 16), ::uPtr< ::uArray*>(array_125)->Item< ::app::Uno::Float3>(0) = ::app::Uno::Float3__New_2(NULL, 0.0f, 0.0f, 0.0f), ::uPtr< ::uArray*>(array_125)->Item< ::app::Uno::Float3>(1) = ::app::Uno::Float3__New_2(NULL, 0.0f, 0.0f, 0.0f), ::uPtr< ::uArray*>(array_125)->Item< ::app::Uno::Float3>(2) = ::app::Uno::Float3__New_2(NULL, 0.0f, 0.0f, 0.0f), ::uPtr< ::uArray*>(array_125)->Item< ::app::Uno::Float3>(3) = ::app::Uno::Float3__New_2(NULL, 0.0f, 0.0f, 0.0f), ::uPtr< ::uArray*>(array_125)->Item< ::app::Uno::Float3>(4) = ::app::Uno::Float3__New_2(NULL, 1.0f, 0.0f, 0.0f), ::uPtr< ::uArray*>(array_125)->Item< ::app::Uno::Float3>(5) = ::app::Uno::Float3__New_2(NULL, 1.0f, 0.0f, 0.0f), ::uPtr< ::uArray*>(array_125)->Item< ::app::Uno::Float3>(6) = ::app::Uno::Float3__New_2(NULL, 1.0f, 0.0f, 0.0f), ::uPtr< ::uArray*>(array_125)->Item< ::app::Uno::Float3>(7) = ::app::Uno::Float3__New_2(NULL, 1.0f, 0.0f, 0.0f), ::uPtr< ::uArray*>(array_125)->Item< ::app::Uno::Float3>(8) = ::app::Uno::Float3__New_2(NULL, 0.0f, 1.0f, 0.0f), ::uPtr< ::uArray*>(array_125)->Item< ::app::Uno::Float3>(9) = ::app::Uno::Float3__New_2(NULL, 0.0f, 1.0f, 0.0f), ::uPtr< ::uArray*>(array_125)->Item< ::app::Uno::Float3>(10) = ::app::Uno::Float3__New_2(NULL, 0.0f, 1.0f, 0.0f), ::uPtr< ::uArray*>(array_125)->Item< ::app::Uno::Float3>(11) = ::app::Uno::Float3__New_2(NULL, 0.0f, 1.0f, 0.0f), ::uPtr< ::uArray*>(array_125)->Item< ::app::Uno::Float3>(12) = ::app::Uno::Float3__New_2(NULL, 0.0f, 0.0f, 1.0f), ::uPtr< ::uArray*>(array_125)->Item< ::app::Uno::Float3>(13) = ::app::Uno::Float3__New_2(NULL, 0.0f, 0.0f, 1.0f), ::uPtr< ::uArray*>(array_125)->Item< ::app::Uno::Float3>(14) = ::app::Uno::Float3__New_2(NULL, 0.0f, 0.0f, 1.0f), ::uPtr< ::uArray*>(array_125)->Item< ::app::Uno::Float3>(15) = ::app::Uno::Float3__New_2(NULL, 0.0f, 0.0f, 1.0f), array_125)), 0);
    __this->Draw_indices_d7134d74_1_2_13 = indices_d7134d74_1_2_1;
    __this->_draw_d7134d74 = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 85), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
}

Scale9Rectangle* Scale9Rectangle__New_1(::uStatic* __this)
{
    Scale9Rectangle* inst = (Scale9Rectangle*)::uAllocObject(sizeof(Scale9Rectangle), Scale9Rectangle__typeof());
    inst->_ObjInit();
    return inst;
}

}}}}
