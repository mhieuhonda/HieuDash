// main.cpp - Win32 entry point for the Cocos2d-x 2.2.3 build.
// Reconstructed from the standard cocos2d-x 2.2.3 proj.win32 template.

#include "AppDelegate.h"
#include "cocos2d.h"
// v0.7 fix: in cocos2d-x 2.2.3 the Windows EGL view header lives at
// cocos2dx/platform/win32/CCEGLView.h (NOT CCEGLView_win32.h - that
// name was a guess that does not exist in the 2.2.3 source tree).
// ${COCOS2DX_ROOT} is on the include path, so "platform/win32/CCEGLView.h"
// resolves correctly to cocos2d/cocos2dx/platform/win32/CCEGLView.h.
#include "platform/win32/CCEGLView.h"

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
