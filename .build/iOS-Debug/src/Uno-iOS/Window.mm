#include <Uno/Uno.h>
#include <Uno-iOS/Uno-iOS.h>
#include <Uno-iOS/Window.h>

#include <app/Uno.Platform2.Display.h>

@implementation uWindow
- (void)setFrame:(CGRect)frame
{
    [super setFrame:frame];

    if (self.uDisplay)
    {
        ::uAutoReleasePool pool;
        self.uDisplay->_private.ResetGeometry(self.uDisplay);
    }
}
@end


@implementation UIWindow (uPlatform2)
- (void)uSetDisplay:(::app::Uno::Platform2::Display*)unoDisplay
{
}
@end
