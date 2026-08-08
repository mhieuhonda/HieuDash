
#include "SetupShakePopup.h"

SetupShakePopup::~SetupShakePopup() {
    this->cleanup();
}

SetupShakePopup::~SetupShakePopup() {
    this->cleanup();
}

SetupShakePopup::~SetupShakePopup() {
    this->cleanup();
}

void SetupShakePopup::textChanged(CCTextInputNode*) {
    // TODO: Implement
}

void SetupShakePopup::updateShake() {
    // TODO: Implement
}

void SetupShakePopup::sliderChanged(cocos2d::CCObject*) {
    // TODO: Implement
}

void SetupShakePopup::updateDurLabel(bool) {
    // TODO: Implement
}

void SetupShakePopup::updateDuration() {
    // TODO: Implement
}

void SetupShakePopup::updateInterval() {
    // TODO: Implement
}

void SetupShakePopup::updateShakeLabel(bool) {
    // TODO: Implement
}

void SetupShakePopup::updateIntervalLabel(bool) {
    // TODO: Implement
}

void SetupShakePopup::determineStartValues() {
    // TODO: Implement
}

void SetupShakePopup::init(EffectGameObject*, cocos2d::CCArray*) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupShakePopup::create(EffectGameObject*, cocos2d::CCArray*) {
    SetupShakePopup* ret = new SetupShakePopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void SetupShakePopup::onClose(cocos2d::CCObject*) {
    // TODO: Implement
}

