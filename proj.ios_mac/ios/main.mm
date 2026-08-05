// main.cpp - iOS / Mac entry point for the Cocos2d-x 2.2.3 build.
// Reconstructed from the standard cocos2d-x 2.2.3 proj.ios_mac template.

#include "AppDelegate.h"
#include "platform/ios/CCEGLView_ios.h"

USING_NS_CC;

int main(int argc, char *argv[]) {
    NSAutoreleasePool *pool = [NSAutoreleasePool new];
    AppDelegate *pAppDelegate = new AppDelegate();
    CCEGLView *eglView = CCEGLView::sharedOpenGLView();
    eglView->setFrameSize(1024, 768);
    int ret = CCApplication::sharedApplication()->run();
    [pool release];
    return ret;
}
