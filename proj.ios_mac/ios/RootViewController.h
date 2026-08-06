// RootViewController.h - iOS view controller for the EAGLView.
//
// Mirrors the standard cocos2d-x 2.2.3 proj.ios_mac template. Hosts the
// OpenGL ES view and forces landscape orientation.

#import <UIKit/UIKit.h>

@interface RootViewController : UIViewController {
    BOOL landscape;
}

- (void)setLandscape:(BOOL)flag;
- (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)toInterfaceOrientation;

@end
