
#include "SetupRotatePopup.h"

SetupRotatePopup::~SetupRotatePopup() {
    this->cleanup();
}

SetupRotatePopup::~SetupRotatePopup() {
    this->cleanup();
}

SetupRotatePopup::~SetupRotatePopup() {
    this->cleanup();
}

void SetupRotatePopup::onCustomToggleTriggerValue(cocos2d::CCObject*) {
    // TODO: Implement
}

void SetupRotatePopup::init(EnhancedGameObject*, cocos2d::CCArray*) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupRotatePopup::create(EnhancedGameObject*, cocos2d::CCArray*) {
    SetupRotatePopup* ret = new SetupRotatePopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void SetupRotatePopup::onClose(cocos2d::CCObject*) {
    // TODO: Implement
}

