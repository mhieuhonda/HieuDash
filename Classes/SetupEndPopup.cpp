
#include "SetupEndPopup.h"

SetupEndPopup::~SetupEndPopup() {
    this->cleanup();
}

SetupEndPopup::~SetupEndPopup() {
    this->cleanup();
}

SetupEndPopup::~SetupEndPopup() {
    this->cleanup();
}

void SetupEndPopup::onReversed(cocos2d::CCObject*) {
    // TODO: Implement
}

void SetupEndPopup::textChanged(CCTextInputNode*) {
    // TODO: Implement
}

void SetupEndPopup::updateTargetID() {
    // TODO: Implement
}

void SetupEndPopup::onMultiActivate(cocos2d::CCObject*) {
    // TODO: Implement
}

void SetupEndPopup::onTargetIDArrow(cocos2d::CCObject*) {
    // TODO: Implement
}

void SetupEndPopup::textInputClosed(CCTextInputNode*) {
    // TODO: Implement
}

void SetupEndPopup::determineStartValues() {
    // TODO: Implement
}

void SetupEndPopup::updateTextInputLabel() {
    // TODO: Implement
}

void SetupEndPopup::init(EffectGameObject*, cocos2d::CCArray*) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupEndPopup::create(EffectGameObject*, cocos2d::CCArray*) {
    SetupEndPopup* ret = new SetupEndPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void SetupEndPopup::onClose(cocos2d::CCObject*) {
    // TODO: Implement
}

void SetupEndPopup::onLockY(cocos2d::CCObject*) {
    // TODO: Implement
}

