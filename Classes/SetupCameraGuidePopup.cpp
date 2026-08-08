
#include "SetupCameraGuidePopup.h"

SetupCameraGuidePopup::~SetupCameraGuidePopup() {
    this->cleanup();
}

SetupCameraGuidePopup::~SetupCameraGuidePopup() {
    this->cleanup();
}

SetupCameraGuidePopup::~SetupCameraGuidePopup() {
    this->cleanup();
}

void SetupCameraGuidePopup::init(CameraTriggerGameObject*, cocos2d::CCArray*) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupCameraGuidePopup::create(CameraTriggerGameObject*, cocos2d::CCArray*) {
    SetupCameraGuidePopup* ret = new SetupCameraGuidePopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

