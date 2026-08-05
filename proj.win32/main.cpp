// main.cpp - Win32 entry point for the Cocos2d-x 2.2.3 build.
// Reconstructed from the standard cocos2d-x 2.2.3 proj.win32 template.

#include "AppDelegate.h"
#include "cocos2d.h"
#include "platform/win32/CCEGLView_win32.h"

USING_NS_CC;

int APIENTRY _tWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPTSTR lpCmdLine, int nCmdShow) {
    UNREFERENCED_PARAMETER(hPrevInstance);
    UNREFERENCED_PARAMETER(lpCmdLine);
    AppDelegate *pAppDelegate = new AppDelegate();
    CCEGLView *eglView = CCEGLView::sharedOpenGLView();
    eglView->setFrameSize(1024, 768);
    eglView->setViewName("Hieu Dash");
    return CCApplication::sharedApplication()->run();
}
