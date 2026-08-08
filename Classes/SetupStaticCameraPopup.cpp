
#include "SetupStaticCameraPopup.h"

SetupStaticCameraPopup::~SetupStaticCameraPopup() {
    this->cleanup();
}

SetupStaticCameraPopup::~SetupStaticCameraPopup() {
    this->cleanup();
}

SetupStaticCameraPopup::~SetupStaticCameraPopup() {
    this->cleanup();
}

void SetupStaticCameraPopup::updateState() {
    // TODO: Implement
}

void SetupStaticCameraPopup::valueDidChange(int, float) {
    // TODO: Implement
}

void SetupStaticCameraPopup::onCustomToggleTriggerValue(cocos2d::CCObject*) {
    // TODO: Implement
}

void SetupStaticCameraPopup::init(CameraTriggerGameObject*, cocos2d::CCArray*) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupStaticCameraPopup::create(CameraTriggerGameObject*, cocos2d::CCArray*) {
    SetupStaticCameraPopup* ret = new SetupStaticCameraPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

