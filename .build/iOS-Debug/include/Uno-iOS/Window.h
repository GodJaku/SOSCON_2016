#pragma once

#include <UIKit/UIKit.h>

namespace app { namespace Uno { namespace Platform2 { struct Display; } } }

@interface uWindow : UIWindow
@property (nonatomic, setter=uSetDisplay:) ::app::Uno::Platform2::Display* uDisplay;
@end


@interface UIWindow (uPlatform2)
- (void)uSetDisplay:(::app::Uno::Platform2::Display*)unoDisplay;
@end
