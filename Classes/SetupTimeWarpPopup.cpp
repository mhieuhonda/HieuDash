
#include "SetupTimeWarpPopup.h"

SetupTimeWarpPopup::~SetupTimeWarpPopup() {
    this->cleanup();
}

SetupTimeWarpPopup::~SetupTimeWarpPopup() {
    this->cleanup();
}

SetupTimeWarpPopup::~SetupTimeWarpPopup() {
    this->cleanup();
}

void SetupTimeWarpPopup::sliderChanged(cocos2d::CCObject*) {
    // TODO: Implement
}

void SetupTimeWarpPopup::updateTimeWarp() {
    // TODO: Implement
}

void SetupTimeWarpPopup::updateTimeWarpLabel() {
    // TODO: Implement
}

void SetupTimeWarpPopup::determineStartValues() {
    // TODO: Implement
}

void SetupTimeWarpPopup::init(EffectGameObject*, cocos2d::CCArray*) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupTimeWarpPopup::create(EffectGameObject*, cocos2d::CCArray*) {
    SetupTimeWarpPopup* ret = new SetupTimeWarpPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void SetupTimeWarpPopup::onClose(cocos2d::CCObject*) {
    // TODO: Implement
}

