#import "UIControlCallback.h"
@implementation UIControlCallback
- (void) callback:(id)sender:(UIEvent*) uiEvent { }
- (SEL) callbackSelector {
    return @selector(callback::);
}
@end