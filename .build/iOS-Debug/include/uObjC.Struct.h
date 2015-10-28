#pragma once

#include <app/iOS.CoreGraphics.CGAffineTransform.h>
#include <app/iOS.CoreGraphics.CGPoint.h>
#include <app/iOS.CoreGraphics.CGRect.h>
#include <app/iOS.CoreGraphics.CGSize.h>
#include <app/iOS.Foundation._NSRange.h>
#include <app/iOS.QuartzCore.CATransform3D.h>
#include <app/iOS.UIKit.UIEdgeInsets.h>

namespace uObjC { namespace Struct {

template <class Source, class Destination>
inline Destination ConvertEnum(Source src, Destination dst = Destination())
{
    return dst = Destination(src);
}


// Struct conversion functions -- Declarations
template <class Destination>
inline Destination FromUno__NSRange(::app::iOS::Foundation::_NSRange const &, Destination = Destination());
template <class Source>
inline ::app::iOS::Foundation::_NSRange ToUno__NSRange(Source const &, ::app::iOS::Foundation::_NSRange = ::app::iOS::Foundation::_NSRange());
template <class Destination>
inline Destination FromUno_CATransform3D(::app::iOS::QuartzCore::CATransform3D const &, Destination = Destination());
template <class Source>
inline ::app::iOS::QuartzCore::CATransform3D ToUno_CATransform3D(Source const &, ::app::iOS::QuartzCore::CATransform3D = ::app::iOS::QuartzCore::CATransform3D());
template <class Destination>
inline Destination FromUno_CGAffineTransform(::app::iOS::CoreGraphics::CGAffineTransform const &, Destination = Destination());
template <class Source>
inline ::app::iOS::CoreGraphics::CGAffineTransform ToUno_CGAffineTransform(Source const &, ::app::iOS::CoreGraphics::CGAffineTransform = ::app::iOS::CoreGraphics::CGAffineTransform());
template <class Destination>
inline Destination FromUno_CGPoint(::app::iOS::CoreGraphics::CGPoint const &, Destination = Destination());
template <class Source>
inline ::app::iOS::CoreGraphics::CGPoint ToUno_CGPoint(Source const &, ::app::iOS::CoreGraphics::CGPoint = ::app::iOS::CoreGraphics::CGPoint());
template <class Destination>
inline Destination FromUno_CGRect(::app::iOS::CoreGraphics::CGRect const &, Destination = Destination());
template <class Source>
inline ::app::iOS::CoreGraphics::CGRect ToUno_CGRect(Source const &, ::app::iOS::CoreGraphics::CGRect = ::app::iOS::CoreGraphics::CGRect());
template <class Destination>
inline Destination FromUno_CGSize(::app::iOS::CoreGraphics::CGSize const &, Destination = Destination());
template <class Source>
inline ::app::iOS::CoreGraphics::CGSize ToUno_CGSize(Source const &, ::app::iOS::CoreGraphics::CGSize = ::app::iOS::CoreGraphics::CGSize());
template <class Destination>
inline Destination FromUno_UIEdgeInsets(::app::iOS::UIKit::UIEdgeInsets const &, Destination = Destination());
template <class Source>
inline ::app::iOS::UIKit::UIEdgeInsets ToUno_UIEdgeInsets(Source const &, ::app::iOS::UIKit::UIEdgeInsets = ::app::iOS::UIKit::UIEdgeInsets());


// Struct conversion functions -- Definitions
// Converters for iOS.CoreGraphics.CGAffineTransform
template <class Destination>
inline Destination FromUno_CGAffineTransform(::app::iOS::CoreGraphics::CGAffineTransform const &src, Destination dst)
{
    dst.a = src.A;
    dst.b = src.B;
    dst.c = src.C;
    dst.d = src.D;
    dst.tx = src.Tx;
    dst.ty = src.Ty;

    return dst;
}
template <class Source>
inline ::app::iOS::CoreGraphics::CGAffineTransform ToUno_CGAffineTransform(Source const &src, ::app::iOS::CoreGraphics::CGAffineTransform dst)
{
    dst.A = src.a;
    dst.B = src.b;
    dst.C = src.c;
    dst.D = src.d;
    dst.Tx = src.tx;
    dst.Ty = src.ty;

    return dst;
}
// Converters for iOS.CoreGraphics.CGPoint
template <class Destination>
inline Destination FromUno_CGPoint(::app::iOS::CoreGraphics::CGPoint const &src, Destination dst)
{
    dst.x = src.X;
    dst.y = src.Y;

    return dst;
}
template <class Source>
inline ::app::iOS::CoreGraphics::CGPoint ToUno_CGPoint(Source const &src, ::app::iOS::CoreGraphics::CGPoint dst)
{
    dst.X = src.x;
    dst.Y = src.y;

    return dst;
}
// Converters for iOS.CoreGraphics.CGRect
template <class Destination>
inline Destination FromUno_CGRect(::app::iOS::CoreGraphics::CGRect const &src, Destination dst)
{
    dst.origin = FromUno_CGPoint(src.Origin, dst.origin);
    dst.size = FromUno_CGSize(src.Size, dst.size);

    return dst;
}
template <class Source>
inline ::app::iOS::CoreGraphics::CGRect ToUno_CGRect(Source const &src, ::app::iOS::CoreGraphics::CGRect dst)
{
    dst.Origin = ToUno_CGPoint(src.origin, dst.Origin);
    dst.Size = ToUno_CGSize(src.size, dst.Size);

    return dst;
}
// Converters for iOS.CoreGraphics.CGSize
template <class Destination>
inline Destination FromUno_CGSize(::app::iOS::CoreGraphics::CGSize const &src, Destination dst)
{
    dst.width = src.Width;
    dst.height = src.Height;

    return dst;
}
template <class Source>
inline ::app::iOS::CoreGraphics::CGSize ToUno_CGSize(Source const &src, ::app::iOS::CoreGraphics::CGSize dst)
{
    dst.Width = src.width;
    dst.Height = src.height;

    return dst;
}
// Converters for iOS.Foundation._NSRange
template <class Destination>
inline Destination FromUno__NSRange(::app::iOS::Foundation::_NSRange const &src, Destination dst)
{
    dst.location = src.Location;
    dst.length = src.Length;

    return dst;
}
template <class Source>
inline ::app::iOS::Foundation::_NSRange ToUno__NSRange(Source const &src, ::app::iOS::Foundation::_NSRange dst)
{
    dst.Location = src.location;
    dst.Length = src.length;

    return dst;
}
// Converters for iOS.QuartzCore.CATransform3D
template <class Destination>
inline Destination FromUno_CATransform3D(::app::iOS::QuartzCore::CATransform3D const &src, Destination dst)
{
    dst.m11 = src.M11;
    dst.m12 = src.M12;
    dst.m13 = src.M13;
    dst.m14 = src.M14;
    dst.m21 = src.M21;
    dst.m22 = src.M22;
    dst.m23 = src.M23;
    dst.m24 = src.M24;
    dst.m31 = src.M31;
    dst.m32 = src.M32;
    dst.m33 = src.M33;
    dst.m34 = src.M34;
    dst.m41 = src.M41;
    dst.m42 = src.M42;
    dst.m43 = src.M43;
    dst.m44 = src.M44;

    return dst;
}
template <class Source>
inline ::app::iOS::QuartzCore::CATransform3D ToUno_CATransform3D(Source const &src, ::app::iOS::QuartzCore::CATransform3D dst)
{
    dst.M11 = src.m11;
    dst.M12 = src.m12;
    dst.M13 = src.m13;
    dst.M14 = src.m14;
    dst.M21 = src.m21;
    dst.M22 = src.m22;
    dst.M23 = src.m23;
    dst.M24 = src.m24;
    dst.M31 = src.m31;
    dst.M32 = src.m32;
    dst.M33 = src.m33;
    dst.M34 = src.m34;
    dst.M41 = src.m41;
    dst.M42 = src.m42;
    dst.M43 = src.m43;
    dst.M44 = src.m44;

    return dst;
}
// Converters for iOS.UIKit.UIEdgeInsets
template <class Destination>
inline Destination FromUno_UIEdgeInsets(::app::iOS::UIKit::UIEdgeInsets const &src, Destination dst)
{
    dst.top = src.Top;
    dst.left = src.Left;
    dst.bottom = src.Bottom;
    dst.right = src.Right;

    return dst;
}
template <class Source>
inline ::app::iOS::UIKit::UIEdgeInsets ToUno_UIEdgeInsets(Source const &src, ::app::iOS::UIKit::UIEdgeInsets dst)
{
    dst.Top = src.top;
    dst.Left = src.left;
    dst.Bottom = src.bottom;
    dst.Right = src.right;

    return dst;
}

}} // namespace uObjC::Struct
