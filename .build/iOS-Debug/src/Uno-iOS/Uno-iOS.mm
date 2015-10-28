#include <Uno/Uno.h>

#include <libkern/OSByteOrder.h>
#include <objc/runtime.h>

#include <Foundation/Foundation.h>
#include <CoreGraphics/CoreGraphics.h>

#include <Uno-iOS/AppDelegate.h>
#include <Uno-iOS/Uno-iOS.h>

@implementation uObjCStrongReference

@synthesize unoObject = _unoObject;

- (id)initWithUnoObject:(uObject *)object
{
    self = [super init];

    if (self) {
        uRetainObject(object);
        _unoObject = object;
    }

    return self;
}

- (instancetype)copyWithZone:(NSZone *)zone
{
    uObjCStrongReference *newRef = [[[self class] allocWithZone:zone] init];

    uRetainObject(_unoObject);
    newRef->_unoObject = _unoObject;
    return newRef;
}

- (uObject *)unoObject
{
    // Auto-released

    uRetainObject(_unoObject);
    uAutoReleaseObject(_unoObject);

    return _unoObject;
}

- (void)setUnoObject:(uObject *)object
{
    uRetainObject(object);
    uAutoReleaseObject(_unoObject);

    _unoObject = object;
}

- (void)dealloc
{
    uReleaseObject(_unoObject);
    _unoObject = NULL;

    [super dealloc];
}
@end


@implementation uObjCWeakReference
{
    @protected
    uWeakObject *_weakObject;
}

@synthesize unoObject = _unoObject;

- (id)initWithUnoObject:(uObject *)object
{
    self = [super init];
    if (self) {
        _weakObject = NULL;
        uStoreWeakObject(&_weakObject, object);
    }
    return self;
}

- (instancetype)copyWithZone:(NSZone *)zone
{
    uObjCWeakReference *newRef = [[[self class] allocWithZone:zone] init];

    newRef->_weakObject = NULL;

    uObject *object = uLoadWeakObject(_weakObject);
    uStoreWeakObject(&newRef->_weakObject, object);

    return newRef;
}

- (uObject *)unoObject
{
    // Auto-released
    return uLoadWeakObject(_weakObject);
}

- (void)setUnoObject:(uObject *)object
{
    uStoreWeakObject(&_weakObject, object);
}

- (void)dealloc
{
    uStoreWeakObject(&_weakObject, NULL);
    [super dealloc];
}
@end


@implementation uObjCUnsafeReference

@synthesize unoObject = _unoObject;

- (id)initWithUnoObject:(uObject *)object
{
    self = [super init];
    if (self)
        _unoObject = object;
    return self;
}

- (instancetype)copyWithZone:(NSZone *)zone
{
    uObjCUnsafeReference *newRef = [[[self class] allocWithZone:zone] init];
    newRef->_unoObject = _unoObject;
    return newRef;
}
@end


namespace uPlatform2 { namespace iOS {

    static const char UnoObjectAssociationKey = 0;

    void AssociateUnoObjectWeak(id nativeObject, uObject *unoObject)
    {
        id value = [[uObjCWeakReference alloc] initWithUnoObject:unoObject];

        objc_setAssociatedObject(
            nativeObject, &UnoObjectAssociationKey, value,
            OBJC_ASSOCIATION_RETAIN);

        [value release];
    }

    uObject *GetAssociatedUnoObject(id nativeObject)
    {
        uObject *result = NULL;

        id<uObjCReference> value = (id<uObjCReference>)
            objc_getAssociatedObject(nativeObject, &UnoObjectAssociationKey);

        if (value)
            result = value.unoObject;

        return result;
    }

#if __BIG_ENDIAN__
    enum { NativeUTF16Encoding = NSUTF16BigEndianStringEncoding };
#else
    enum { NativeUTF16Encoding = NSUTF16LittleEndianStringEncoding };
#endif

    uString *ToUno(NSString *str)
    {
        if (!str)
            return NULL;

        NSUInteger bytes = [str
            lengthOfBytesUsingEncoding:NativeUTF16Encoding];

        uString *result = uAllocString(int(bytes / sizeof(uChar)));

        NSUInteger usedBytes = 0;
        if ([str
                getBytes:result->_ptr
                maxLength:bytes
                usedLength:&usedBytes
                encoding:NativeUTF16Encoding
                options:0
                range:NSMakeRange(0, [str length])
                remainingRange:NULL])
        {
            if (usedBytes != bytes) {
                result->_len = int(usedBytes / sizeof(uChar));
                result->_ptr[result->_len] = 0;
            }
            return result;
        }

        return NULL;
    }

    NSString *FromUno(uString *str)
    {
        if (!str)
            return nil;

        return [[[NSString alloc]
                initWithBytes:str->Ptr()
                length:str->Length() * sizeof(uChar)
                encoding:NativeUTF16Encoding]
            autorelease];
    }

    ::app::Uno::Int2 CGPointToUnoInt2(CGPoint point, float scale)
    {
        ::app::Uno::Int2 unoPoint;
        unoPoint.X = point.x * scale;
        unoPoint.Y = point.y * scale;
        return unoPoint;
    }

    CGPoint CGPointFromUnoInt2(::app::Uno::Int2 unoPoint, float scale)
    {
        CGPoint point;
        point.x = unoPoint.X / scale;
        point.y = unoPoint.Y / scale;
        return point;
    }

    ::app::Uno::Float2 CGPointToUnoFloat2(CGPoint point, float scale)
    {
        ::app::Uno::Float2 unoPoint;
        unoPoint.X = point.x * scale;
        unoPoint.Y = point.y * scale;
        return unoPoint;
    }

    CGPoint CGPointFromUnoFloat2(::app::Uno::Float2 unoPoint, float scale)
    {
        CGPoint point;
        point.x = unoPoint.X / scale;
        point.y = unoPoint.Y / scale;
        return point;
    }

    ::app::Uno::Rect CGRectToUnoRect(CGRect rect, float scale)
    {
        ::app::Uno::Float2 origin = CGPointToUnoFloat2(rect.origin, scale);
        ::app::Uno::Float2 size = CGSizeToUnoFloat2(rect.size, scale);
        return ::app::Uno::Rect__New_2(NULL, origin, size);
    }

    CGRect CGRectFromUnoRect(::app::Uno::Rect unoRect, float scale)
    {
        CGRect rect;
        rect.origin.x = unoRect.Left / scale;
        rect.origin.y = unoRect.Top / scale;
        rect.size.width = (unoRect.Right - unoRect.Left) / scale;
        rect.size.height = (unoRect.Bottom - unoRect.Top) / scale;
        return rect;
    }

    ::app::Uno::Recti CGRectToUnoRecti(CGRect rect, float scale)
    {
        ::app::Uno::Int2 origin = CGPointToUnoInt2(rect.origin, scale);
        ::app::Uno::Int2 size = CGSizeToUnoInt2(rect.size, scale);
        return ::app::Uno::Recti__New_2(NULL, origin, size);
    }

    CGRect CGRectFromUnoRecti(::app::Uno::Recti unoRect, float scale)
    {
        CGRect rect;
        rect.origin.x = unoRect.Left / scale;
        rect.origin.y = unoRect.Top / scale;
        rect.size.width = (unoRect.Right - unoRect.Left) / scale;
        rect.size.height = (unoRect.Bottom - unoRect.Top) / scale;
        return rect;
    }

    ::app::Uno::Int2 CGSizeToUnoInt2(CGSize size, float scale)
    {
        ::app::Uno::Int2 unoSize;
        unoSize.X = size.width * scale;
        unoSize.Y = size.height * scale;
        return unoSize;
    }

    CGSize CGSizeFromUnoInt2(::app::Uno::Int2 unoSize, float scale)
    {
        CGSize size;
        size.width = unoSize.X / scale;
        size.height = unoSize.Y / scale;
        return size;
    }

    ::app::Uno::Float2 CGSizeToUnoFloat2(CGSize size, float scale)
    {
        ::app::Uno::Float2 unoSize;
        unoSize.X = size.width * scale;
        unoSize.Y = size.height * scale;
        return unoSize;
    }

    CGSize CGSizeFromUnoFloat2(::app::Uno::Float2 unoSize, float scale)
    {
        CGSize size;
        size.width = unoSize.X / scale;
        size.height = unoSize.Y / scale;
        return size;
    }

    namespace {

        static uAppDelegate *_appDelegate()
        {
            return (uAppDelegate *) [UIApplication sharedApplication].delegate;
        }

        static bool _isDeviceOrientationLandscape()
        {
            return UIInterfaceOrientationIsLandscape(
                [UIApplication sharedApplication].statusBarOrientation);
        }

        static bool _isRootView(UIView *view)
        {
            return view == _appDelegate().view;
        }

    } // <anonymous> namespace

    CGSize Pre_iOS8_HandleDeviceOrientation(CGSize size, UIView *view)
    {
        if (NSFoundationVersionNumber <= NSFoundationVersionNumber_iOS_7_1
            && _isDeviceOrientationLandscape()
            && (!view || _isRootView(view)))
        {
            // Transpose dimensions
            return CGSizeMake(size.height, size.width);
        }

        return size;
    }

    CGRect Pre_iOS8_HandleDeviceOrientation(CGRect rect, UIView *view)
    {
        if (NSFoundationVersionNumber <= NSFoundationVersionNumber_iOS_7_1
            && _isDeviceOrientationLandscape()
            && (!view || _isRootView(view)))
        {
            // Transpose rect
            return CGRectMake(
                rect.origin.y, rect.origin.x,
                rect.size.height, rect.size.width);
        }

        return rect;
    }

    ::app::Uno::Int2 CGImageGetSize(CGImageRef image, ImageOrientation orientation)
    {
        int width = (int) CGImageGetWidth(image);
        int height = (int) CGImageGetHeight(image);

        if (int(orientation) & 0x2)
            return ::app::Uno::Int2__New_2(NULL, height, width);

        return ::app::Uno::Int2__New_2(NULL, width, height);
    }

    ::uArray* CGImageToRGBA8888(
        CGImageRef image, ImageOrientation orientation)
    {
        CGRect imageRect
            = CGRectMake(0, 0, CGImageGetWidth(image), CGImageGetHeight(image));

        int bitmapWidth = imageRect.size.width;
        int bitmapHeight = imageRect.size.height;

        if (int(orientation) & 0x2)
        {
            // Transpose for Left* and Right* orientations
            bitmapWidth = imageRect.size.height;
            bitmapHeight = imageRect.size.width;
        }

        uArray *bitmap
            = uNewArray(::app::Uno::Byte__typeof(), bitmapWidth * bitmapHeight * 4);

        CGColorSpaceRef colorSpace = CGColorSpaceCreateDeviceRGB();
        CGContextRef context = CGBitmapContextCreate(bitmap->Ptr(),
            bitmapWidth, bitmapHeight, 8, 4 * bitmapWidth, colorSpace,
            kCGImageAlphaPremultipliedLast | kCGBitmapByteOrder32Big);

        switch (orientation)
        {
            // Right side up
            case ImageOrientationUp:
                break;
            case ImageOrientationUpMirrored:
                CGContextTranslateCTM(context, imageRect.size.width, 0);
                CGContextScaleCTM(context, -1., 1.);
                break;

            // Upside down
            case ImageOrientationDown:
                CGContextRotateCTM(context, M_PI);
                CGContextTranslateCTM(
                    context, -imageRect.size.width, -imageRect.size.height);
                break;
            case ImageOrientationDownMirrored:
                CGContextRotateCTM(context, M_PI);
                CGContextTranslateCTM(context, 0, -imageRect.size.height);
                CGContextScaleCTM(context, -1., 1.);
                break;

            // Left
            case ImageOrientationLeft:
                CGContextRotateCTM(context, M_PI_2);
                CGContextTranslateCTM(context, 0, -imageRect.size.height);
                break;
            case ImageOrientationLeftMirrored:
                CGContextRotateCTM(context, M_PI_2);
                CGContextTranslateCTM(
                    context, imageRect.size.width, -imageRect.size.height);
                CGContextScaleCTM(context, -1., 1.);
                break;

            // Right
            case ImageOrientationRight:
                CGContextRotateCTM(context, -M_PI_2);
                CGContextTranslateCTM(context, -imageRect.size.width, 0);
                break;
            case ImageOrientationRightMirrored:
                CGContextRotateCTM(context, -M_PI_2);
                CGContextScaleCTM(context, -1., 1.);
                break;
        }

        CGContextDrawImage(context, imageRect, image);

        CGContextRelease(context);
        CGColorSpaceRelease(colorSpace);

        return bitmap;
    }

    ::app::Uno::Int2 UIImageGetSize(UIImage *image)
    {
        CGSize imageSize = image.size;

        int width = (int) imageSize.width;
        int height = (int) imageSize.height;

        return ::app::Uno::Int2__New_2(NULL, width, height);
    }

    ::uArray* UIImageToRGBA8888(UIImage *_image)
    {
        CGImageRef image = [_image CGImage];
        if (image == NULL)
            return NULL;

        return CGImageToRGBA8888(
            image, ImageOrientation(_image.imageOrientation));
    }

}} // namespace uPlatform2::iOS
