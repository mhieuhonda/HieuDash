
#include "SetupCameraRotatePopup2.h"

SetupCameraRotatePopup2::~SetupCameraRotatePopup2() {
    this->cleanup();
}

void SetupCameraRotatePopup2::init(EffectGameObject*, cocos2d::CCArray*) {
    bool ret = true;
    if (!ret) return false;
    // Initialize members and UI - stub
    return true;
}

void SetupCameraRotatePopup2::create(EffectGameObject*, cocos2d::CCArray*) {
    SetupCameraRotatePopup2* ret = new SetupCameraRotatePopup2();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

