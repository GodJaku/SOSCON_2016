#include <Uno-iOS/AppDelegate.h>
#include <Uno-iOS/Window.h>
#include <Uno-iOS/Uno-iOS.h>

#include <app/Uno.Platform2.Application.h>
#include <app/Uno.Platform2.Display.h>

@implementation uAppDelegate
- (id)init
{
    if ((self = [super init]))
    {
        isStatusBarVisible = true;
        statusBarStyle = UIStatusBarStyleDefault;
        statusBarAnimation = UIStatusBarAnimationFade;

        _context = [[EAGLContext alloc] initWithAPI:kEAGLRenderingAPIOpenGLES2];


        uEnableKeyboardResizeNotifications(self);

    }
    return self;
}


- (void)dealloc
{
    uDisableKeyboardResizeNotifications(self);
    [super dealloc];
}


- (void)setView:(UIView *)view
{
    [super setView:view];
    [self.window makeKeyAndVisible];
}

- (BOOL)application:(UIApplication *)application willFinishLaunchingWithOptions:(NSDictionary *)launchOptions
{
    [EAGLContext setCurrentContext:self.context];

    {
        CGRect screenBounds = [UIScreen mainScreen].bounds;
        uWindow *window = [[uWindow alloc] initWithFrame:screenBounds];
        window.rootViewController = self;

        self.window = window;
        [window release];
    }

    ::uAutoReleasePool pool;
    ::app::Uno::Platform2::Application__Start(NULL);
    return YES;
}

-(BOOL)application:(UIApplication *)application openURL:(NSURL *)url sourceApplication:(NSString *)sourceApplication annotation:(id)annotation {
    uAutoReleasePool pool;
    ::uString* unoUri = uPlatform2::iOS::ToUno([url absoluteString]);
    ::app::Uno::Platform2::Application__OnReceivedURI(NULL, unoUri);
    return YES;
}

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
{
    ::uAutoReleasePool pool;
    ::app::Uno::Platform2::Application__EnterForeground(NULL);
    return YES;
}

- (void)applicationWillEnterForeground:(UIApplication *)application
{
    ::uAutoReleasePool pool;
    ::app::Uno::Platform2::Application__EnterForeground(NULL);
}

- (void)applicationDidBecomeActive:(UIApplication *)application
{
    ::uAutoReleasePool pool;
    ::app::Uno::Platform2::Application__EnterInteractive(NULL);
}

- (void)applicationWillResignActive:(UIApplication *)application
{
    ::uAutoReleasePool pool;
    ::app::Uno::Platform2::Application__ExitInteractive(NULL);
}

- (void)applicationDidEnterBackground:(UIApplication *)application
{
    ::uAutoReleasePool pool;
    ::app::Uno::Platform2::Application__EnterBackground(NULL);
}

- (void)applicationWillTerminate:(UIApplication *)application
{
    ::uAutoReleasePool pool;
    ::app::Uno::Platform2::Application__Terminate(NULL);
}

- (void)applicationDidReceiveMemoryWarning:(UIApplication *)application
{
    ::uAutoReleasePool pool;
    ::app::Uno::Platform2::Application__OnReceivedLowMemoryWarning(NULL);
}
@end
