// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/struct/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_I_O_S_QUARTZ_CORE_C_A_TRANSFORM3_D_H__
#define __APP_I_O_S_QUARTZ_CORE_C_A_TRANSFORM3_D_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace iOS {
namespace QuartzCore {

struct CATransform3D;

struct CATransform3D__uType : ::uStructType
{
};

CATransform3D__uType* CATransform3D__typeof();

void CATransform3D___ObjInit(CATransform3D* __this, double M11, double M12, double M13, double M14, double M21, double M22, double M23, double M24, double M31, double M32, double M33, double M34, double M41, double M42, double M43, double M44);
CATransform3D CATransform3D__New_1(::uStatic* __this, double M11, double M12, double M13, double M14, double M21, double M22, double M23, double M24, double M31, double M32, double M33, double M34, double M41, double M42, double M43, double M44);

struct CATransform3D
{
    double M11;
    double M12;
    double M13;
    double M14;
    double M21;
    double M22;
    double M23;
    double M24;
    double M31;
    double M32;
    double M33;
    double M34;
    double M41;
    double M42;
    double M43;
    double M44;

    void _ObjInit(double M11, double M12, double M13, double M14, double M21, double M22, double M23, double M24, double M31, double M32, double M33, double M34, double M41, double M42, double M43, double M44) { CATransform3D___ObjInit(this, M11, M12, M13, M14, M21, M22, M23, M24, M31, M32, M33, M34, M41, M42, M43, M44); }
};

}}}


#endif
