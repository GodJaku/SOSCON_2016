#pragma once

#include <Uno/Uno.h>

#include <app/Uno.Byte.h>
#include <app/Uno.Int2.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Rect.h>
#include <app/Uno.Recti.h>

#include <objc/objc.h>
#include <CoreGraphics/CoreGraphics.h>

#if __OBJC__
#define U_FORWARD_DECLARE_OBJC_CLASS @class
#else
#define U_FORWARD_DECLARE_OBJC_CLASS struct
#endif

U_FORWARD_DECLARE_OBJC_CLASS NSString;
U_FORWARD_DECLARE_OBJC_CLASS UIImage;
U_FORWARD_DECLARE_OBJC_CLASS UIView;

#if __OBJC__
@protocol uObjCReference
@property (nonatomic) uObject *unoObject;
- (id)initWithUnoObject:(uObject *)object;
@end


/// Holds a strong reference to a Uno object, it's released on dealloc.
@interface uObjCStrongReference : NSObject <uObjCReference, NSCopying>
- (id)initWithUnoObject:(uObject *)object NS_DESIGNATED_INITIALIZER;
@end


/// Holds a (nullable) weak reference to a Uno object.
@interface uObjCWeakReference : NSObject <uObjCReference, NSCopying>
- (id)initWithUnoObject:(uObject *)object NS_DESIGNATED_INITIALIZER;
@end


/// Holds a naked pointer to a Uno object.
@interface uObjCUnsafeReference : NSObject <uObjCReference, NSCopying>
- (id)initWithUnoObject:(uObject *)object NS_DESIGNATED_INITIALIZER;
@end
#endif


namespace uPlatform2 { namespace iOS {

    void AssociateUnoObjectWeak(id nativeObject, uObject *unoObject);
    uObject *GetAssociatedUnoObject(id nativeObject);

    uString *ToUno(NSString *);
    NSString *FromUno(uString *);

    ::app::Uno::Int2 CGPointToUnoInt2(CGPoint point, float scale = 1.f);
    CGPoint CGPointFromUnoInt2(::app::Uno::Int2 point, float scale = 1.f);

    ::app::Uno::Float2 CGPointToUnoFloat2(CGPoint point, float scale = 1.f);
    CGPoint CGPointFromUnoFloat2(::app::Uno::Float2 point, float scale = 1.f);

    ::app::Uno::Rect CGRectToUnoRect(CGRect rect, float scale = 1.f);
    CGRect CGRectFromUnoRect(::app::Uno::Rect rect, float scale = 1.f);

    ::app::Uno::Recti CGRectToUnoRecti(CGRect rect, float scale = 1.f);
    CGRect CGRectFromUnoRecti(::app::Uno::Recti rect, float scale = 1.f);

    ::app::Uno::Int2 CGSizeToUnoInt2(CGSize size, float scale = 1.f);
    CGSize CGSizeFromUnoInt2(::app::Uno::Int2 size, float scale = 1.f);

    ::app::Uno::Float2 CGSizeToUnoFloat2(CGSize size, float scale = 1.f);
    CGSize CGSizeFromUnoFloat2(::app::Uno::Float2 size, float scale = 1.f);

    CGSize Pre_iOS8_HandleDeviceOrientation(CGSize size, UIView *view);
    CGRect Pre_iOS8_HandleDeviceOrientation(CGRect rect, UIView *view);

    // Clone UIImageOrientation to avoid an UIKit #include -- this is meant to
    // hide Objective C headers from Uno's C++.
    enum ImageOrientation
    {
        ImageOrientationUp,
        ImageOrientationDown,
        ImageOrientationLeft,
        ImageOrientationRight,

        ImageOrientationUpMirrored,
        ImageOrientationDownMirrored,
        ImageOrientationLeftMirrored,
        ImageOrientationRightMirrored
    };

    ::app::Uno::Int2 CGImageGetSize(
        CGImageRef image, ImageOrientation orientation = ImageOrientationUp);
    ::uArray* CGImageToRGBA8888(
        CGImageRef image, ImageOrientation orientation = ImageOrientationUp);

    ::app::Uno::Int2 UIImageGetSize(UIImage *image);
    ::uArray* UIImageToRGBA8888(UIImage *image);

}}
