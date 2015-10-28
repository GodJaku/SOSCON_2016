#include <Uno/Uno.h>

#include <app/Uno.Platform2.Application.h>
#include <app/Uno.Platform.SystemUI.h>
#include <app/Uno.Platform.SystemUIWillResizeEventArgs.h>

#include <Uno-iOS/AppDelegate.h>
#include <Uno-iOS/Uno-iOS.h>


namespace {

    static void _statusBarWillChangeFrame(
        CGRect endFrame, NSTimeInterval animationDuration)
    {
        CGRect startFrame = uPlatform2::iOS::Pre_iOS8_HandleDeviceOrientation(
            [UIApplication sharedApplication].statusBarFrame, nil);

        int frameId = 0;
        int reason;

        if (startFrame.size.height == 0)
            reason = 0;
        else if (endFrame.size.height == 0)
            reason = 2;
        else
            reason = 1;

        CGFloat scale = [UIScreen mainScreen].scale;
        ::app::Uno::Rect unoStartFrame
            = uPlatform2::iOS::CGRectToUnoRect(startFrame, scale);
        ::app::Uno::Rect unoEndFrame
            = uPlatform2::iOS::CGRectToUnoRect(endFrame, scale);

        ::uAutoReleasePool pool;

        ::app::Uno::Platform::SystemUIWillResizeEventArgs* args
            = ::app::Uno::Platform::SystemUIWillResizeEventArgs__New_2(NULL, frameId, reason, unoStartFrame, unoEndFrame, animationDuration, 1);

        //Make the call
        ::app::Uno::Platform::SystemUI__OnWillResize(NULL, args);
    }

} // <anonymous> namespace

@implementation uAppDelegate (StatusBar)

// On iOS 8 this is only called when Status Bar changes in response to external
// events
- (void)application:(UIApplication *)application
    willChangeStatusBarFrame:(CGRect)frame
{
    // FIXME: Does this need to handle rotation?
    _statusBarWillChangeFrame(frame, 0);
}

- (BOOL)prefersStatusBarHidden
{
    return !self.uStatusBarVisible;
}

- (UIStatusBarStyle)preferredStatusBarStyle
{
    return self.uStatusBarStyle;
}

- (UIStatusBarAnimation)preferredStatusBarUpdateAnimation
{
    return self.uStatusBarAnimation;
}

- (::app::Uno::Rect)uStatusBarFrame
{
    CGFloat scale = [UIScreen mainScreen].scale;
    CGRect frame = [UIApplication sharedApplication].statusBarFrame;

    return uPlatform2::iOS::CGRectToUnoRect(
        uPlatform2::iOS::Pre_iOS8_HandleDeviceOrientation(frame, nil), scale);
}

- (bool)uStatusBarVisible { return isStatusBarVisible; }
- (void)uSetStatusBarVisible:(bool)isVisible
{
    if (isVisible == isStatusBarVisible)
        return;

    CGRect endFrame = CGRectZero;
    NSTimeInterval animationDuration = 0.5;

    if (!isVisible)
    {
        CGSize screenSize = uPlatform2::iOS::Pre_iOS8_HandleDeviceOrientation(
            [UIScreen mainScreen].bounds.size, nil);

        // Assume standard status bar, here.
        // application:willChangeStatusBarFrame: will handle deviations.

        endFrame = CGRectMake(0., 0., screenSize.width, 20.);
        animationDuration = 0.25;
    }

    if (self.uStatusBarAnimation == UIStatusBarAnimationNone)
        animationDuration = 0;

    _statusBarWillChangeFrame(endFrame, animationDuration);
    isStatusBarVisible = isVisible;

    [UIView animateWithDuration:animationDuration animations:^{
        [self setNeedsStatusBarAppearanceUpdate];
    }];
}

- (UIStatusBarStyle)uStatusBarStyle { return statusBarStyle; }
- (void)uSetStatusBarStyle:(UIStatusBarStyle)style
{
    if (style == statusBarStyle)
        return;

    statusBarStyle = style;

    if (self.uStatusBarAnimation == UIStatusBarAnimationNone)
        [self setNeedsStatusBarAppearanceUpdate];
    else
    {
        [UIView animateWithDuration:0.33 animations:^{
            [self setNeedsStatusBarAppearanceUpdate];
        }];
    }
}

- (UIStatusBarAnimation)uStatusBarAnimation { return statusBarAnimation; }
- (void)uSetStatusBarAnimation:(UIStatusBarAnimation)animation
{
    statusBarAnimation = animation;
}
@end
