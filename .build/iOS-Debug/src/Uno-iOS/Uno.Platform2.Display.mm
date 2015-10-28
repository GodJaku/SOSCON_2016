#include <UIKit/UIKit.h>

#include <Uno/Uno.h>
#include <Uno/Platform2.h>

#include <Uno-iOS/AppDelegate.h>
#include <Uno-iOS/Uno-iOS.h>
#include <Uno-iOS/Window.h>

#include <app/Uno.Platform2.Display.h>
#include <app/Uno.Platform.TimerEventArgs.h>


@interface uDisplayTickNotifier : NSObject
{
    ::app::Uno::Platform2::Display* display;
}

- (id)initWithDisplay:(::app::Uno::Platform2::Display*)display;
- (void)uOnDisplayTick:(CADisplayLink *)sender;
@end

@implementation uDisplayTickNotifier
- (id)initWithDisplay:(::app::Uno::Platform2::Display*)unoDisplay
{
    if (self = [super init])
        display = unoDisplay;

    return self;
}

- (void)uOnDisplayTick:(CADisplayLink *)sender
{
    double lastTickTimestamp = sender.timestamp;
    double tickDuration = sender.duration * sender.frameInterval;

    // TODO: Common boilerplate, move to a shared implementation
    ::uAutoReleasePool pool;
    ::app::Uno::Platform::TimerEventArgs* args
        = ::app::Uno::Platform::TimerEventArgs__New_2(NULL, lastTickTimestamp, tickDuration);

    display->OnTick(args);
}
@end

namespace uPlatform2
{
    void Display::Initialize(Display::UnoDisplay unoDisplay)
    {
        window = 0;
        displayLink = 0;
    }

    void Display::Destroy(Display::UnoDisplay unoDisplay)
    {
        [displayLink invalidate];
        [displayLink release];

        [window release];
    }

    void Display::InitializeAsMainDisplay(Display::UnoDisplay unoDisplay)
    {
        uAppDelegate *appDelegate
            = (uAppDelegate *) [UIApplication sharedApplication].delegate;

        window = appDelegate.window;

        [window retain];
        [window uSetDisplay:unoDisplay];

        ResetGeometry(unoDisplay);
    }

    void Display::ResetGeometry(Display::UnoDisplay unoDisplay)
    {
        UIScreen *screen = window.screen;

        float density = [screen respondsToSelector:@selector(nativeScale)] ?
            [screen nativeScale] :
            [screen scale];

        ::app::Uno::Rect frame = iOS::CGRectToUnoRect(
            iOS::Pre_iOS8_HandleDeviceOrientation(window.frame,  nil),
            density);

        unoDisplay->Density(density);
        unoDisplay->Frame(frame);
    }

    void Display::SetFramesPerSecond(Display::UnoDisplay unoDisplay, unsigned fps)
    {
        // CADisplayLink: The value for duration is undefined before the
        // target’s selector has been called at least once.
        // FIXME: Can we rely on it being ZERO?
        CFTimeInterval duration = displayLink.duration;
        if (duration == 0)
        {
            // Assume 60 fps
            duration = 1./60.;
        }

        unsigned actualFps;
        NSInteger frameInterval;

        if (fps == 0)
        {
            // Platform default
            actualFps = 0;
            frameInterval = 1;
        }
        else if (duration * fps > 0.5)
        {
            actualFps = 1. / duration;
            frameInterval = 1;
        }
        else
        {
            frameInterval = 1. / (duration * fps);
            actualFps = 1. / (duration * frameInterval);
        }

        displayLink.frameInterval = frameInterval;
        unoDisplay->_framesPerSecond = actualFps;
    }

    void Display::EnableTickNotifications(Display::UnoDisplay unoDisplay)
    {
        if (!displayLink)
        {
            uDisplayTickNotifier *notifier
                = [[uDisplayTickNotifier alloc] initWithDisplay:unoDisplay];

            [notifier autorelease];

            displayLink = [window.screen displayLinkWithTarget:notifier
                selector:@selector(uOnDisplayTick:) ];
            [displayLink addToRunLoop:[NSRunLoop mainRunLoop]
                forMode:NSDefaultRunLoopMode];
            [displayLink addToRunLoop:[NSRunLoop mainRunLoop]
                forMode:UITrackingRunLoopMode];

            SetFramesPerSecond(unoDisplay, unoDisplay->_framesPerSecond);
        }

        displayLink.paused = NO;
    }

    void Display::DisableTickNotifications(Display::UnoDisplay unoDisplay)
    {
        displayLink.paused = YES;
    }
}
