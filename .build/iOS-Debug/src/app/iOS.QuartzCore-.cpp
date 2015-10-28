#include <app/iOS.QuartzCore.CATransform3D.h>
#include <app/Uno.Double.h>

namespace app {
namespace iOS {
namespace QuartzCore {

// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/struct/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

CATransform3D__uType* CATransform3D__typeof()
{
    static ::uStaticStrong<CATransform3D__uType*> type;
    if (type != NULL) return type;

    type = (CATransform3D__uType*)::uAllocStructType(sizeof(CATransform3D__uType), "iOS.QuartzCore.CATransform3D", sizeof(CATransform3D), 0, 0, 0);

    return type;
}

void CATransform3D___ObjInit(CATransform3D* __this, double M11, double M12, double M13, double M14, double M21, double M22, double M23, double M24, double M31, double M32, double M33, double M34, double M41, double M42, double M43, double M44)
{
    __this->M11 = M11;
    __this->M12 = M12;
    __this->M13 = M13;
    __this->M14 = M14;
    __this->M21 = M21;
    __this->M22 = M22;
    __this->M23 = M23;
    __this->M24 = M24;
    __this->M31 = M31;
    __this->M32 = M32;
    __this->M33 = M33;
    __this->M34 = M34;
    __this->M41 = M41;
    __this->M42 = M42;
    __this->M43 = M43;
    __this->M44 = M44;
}

CATransform3D CATransform3D__New_1(::uStatic* __this, double M11, double M12, double M13, double M14, double M21, double M22, double M23, double M24, double M31, double M32, double M33, double M34, double M41, double M42, double M43, double M44)
{
    CATransform3D inst = ::uDefault< CATransform3D>();
    inst._ObjInit(M11, M12, M13, M14, M21, M22, M23, M24, M31, M32, M33, M34, M41, M42, M43, M44);
    return inst;
}

}}}
