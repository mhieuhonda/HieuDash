// main.cpp - Linux entry point for the Cocos2d-x 2.2.3 build.
// Reconstructed from the standard cocos2d-x 2.2.3 proj.linux template.

#include "AppDelegate.h"
#include "cocos2d.h"
#include "platform/linux/CCEGLView_linux.h"

USING_NS_CC;

int main(int argc, char **argv) {
    AppDelegate *pAppDelegate = new AppDelegate();
    CCEGLView *eglView = CCEGLView::sharedOpenGLView();
    eglView->setFrameSize(1024, 768);
    eglView->setViewName("Hieu Dash");
    return CCApplication::sharedApplication()->run();
}
