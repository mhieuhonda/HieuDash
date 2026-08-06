// RootViewController.mm - iOS view controller implementation for the EAGLView.
//
// cocos2d-x 2.2.3 ships this almost verbatim in proj.ios_mac/ios/. We
// force landscape orientation because Hieu Dash is a landscape-only game
// (see UISupportedInterfaceOrientations in Info.plist).

#import "RootViewController.h"

@implementation RootViewController

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil {
    if ((self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil])) {
        landscape = YES;
    }
    return self;
}

- (void)setLandscape:(BOOL)flag {
    landscape = flag;
}

// iOS 5 and earlier - Hieu Dash supports iOS 11+, but cocos2d-x 2.2.3's
// EAGLView still calls this method to ask which orientation to use.
- (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)toInterfaceOrientation {
    if (landscape) {
        return (toInterfaceOrientation == UIInterfaceOrientationLandscapeLeft
             || toInterfaceOrientation == UIInterfaceOrientationLandscapeRight);
    }
    return (toInterfaceOrientation == UIInterfaceOrientationPortrait
         || toInterfaceOrientation == UIInterfaceOrientationPortraitUpsideDown);
}

// iOS 6+ autorotation support.
- (BOOL)shouldAutorotate {
    return YES;
}

- (UIInterfaceOrientationMask)supportedInterfaceOrientations {
    if (landscape) {
        return (UIInterfaceOrientationMaskLandscapeLeft
              | UIInterfaceOrientationMaskLandscapeRight);
    }
    return (UIInterfaceOrientationMaskPortrait
          | UIInterfaceOrientationMaskPortraitUpsideDown);
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
}

- (void)viewDidUnload {
    [super viewDidUnload];
}

- (void)dealloc {
    [super dealloc];
}

@end
