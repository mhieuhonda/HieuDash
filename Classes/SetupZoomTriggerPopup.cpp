
#include "SetupZoomTriggerPopup.h"

SetupZoomTriggerPopup::~SetupZoomTriggerPopup() {
    this->cleanup();
}

SetupZoomTriggerPopup::~SetupZoomTriggerPopup() {
    this->cleanup();
}

SetupZoomTriggerPopup::~SetupZoomTriggerPopup() {
    this->cleanup();
}

void SetupZoomTriggerPopup::determineStartValues() {
    // TODO: Implement
}

void SetupZoomTriggerPopup::init(EffectGameObject*, cocos2d::CCArray*) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupZoomTriggerPopup::create(EffectGameObject*, cocos2d::CCArray*) {
    SetupZoomTriggerPopup* ret = new SetupZoomTriggerPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void SetupZoomTriggerPopup::onClose(cocos2d::CCObject*) {
    // TODO: Implement
}

