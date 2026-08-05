// main.cpp - JNI entry point for the Cocos2d-x 2.2.3 Android app.
// Reconstructed from the standard cocos2d-x 2.2.3 template (the
// original libgame.so has the same JNI_OnLoad + Java binding shape).

#include "AppDelegate.h"
#include "cocos2d.h"
#include "platform/android/jni/JniHelper.h"

USING_NS_CC;

extern "C" {

jint JNI_OnLoad(JavaVM *vm, void *reserved) {
    JniHelper::setJavaVM(vm);
    return JNI_VERSION_1_4;
}

extern int cocos_main();

void Java_org_cocos2dx_lib_Cocos2dxRenderer_nativeInit(JNIEnv *env, jobject thiz, jint w, jint h) {
    if (!CCDirector::sharedDirector()->getIsRunning()) {
        cocos_main();
    } else {
        CCSize size;
        size.width = w;
        size.height = h;
        CCLOG("ignore resize event (%.2f, %.2f)", size.width, size.height);
    }
}

}  // extern "C"

int cocos_main() {
    AppDelegate *pAppDelegate = new AppDelegate();
    CCEGLView *eglView = CCEGLView::sharedOpenGLView();
    eglView->setFrameSize(800, 480);
    return CCApplication::sharedApplication()->run();
}
