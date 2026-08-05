// main.cpp - Mac entry point for the Cocos2d-x 2.2.3 build.
// Reconstructed from the standard cocos2d-x 2.2.3 proj.ios_mac template.

#include "AppDelegate.h"
#include "platform/mac/CCEGLView_mac.h"

USING_NS_CC;

int main(int argc, char *argv[]) {
    AppDelegate *pAppDelegate = new AppDelegate();
    CCEGLView *eglView = CCEGLView::sharedOpenGLView();
    eglView->setFrameSize(1024, 768);
    return CCApplication::sharedApplication()->run();
}
