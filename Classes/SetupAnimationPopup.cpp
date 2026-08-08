
#include "SetupAnimationPopup.h"

SetupAnimationPopup::~SetupAnimationPopup() {
    this->cleanup();
}

SetupAnimationPopup::~SetupAnimationPopup() {
    this->cleanup();
}

SetupAnimationPopup::~SetupAnimationPopup() {
    this->cleanup();
}

void SetupAnimationPopup::textChanged(CCTextInputNode*) {
    // TODO: Implement
}

void SetupAnimationPopup::updateTargetID() {
    // TODO: Implement
}

void SetupAnimationPopup::onTargetIDArrow(cocos2d::CCObject*) {
    // TODO: Implement
}

void SetupAnimationPopup::updateAnimationID() {
    // TODO: Implement
}

void SetupAnimationPopup::onAnimationIDArrow(cocos2d::CCObject*) {
    // TODO: Implement
}

void SetupAnimationPopup::determineStartValues() {
    // TODO: Implement
}

void SetupAnimationPopup::updateTextInputLabel() {
    // TODO: Implement
}

void SetupAnimationPopup::updateAnimationTextInputLabel() {
    // TODO: Implement
}

void SetupAnimationPopup::init(EffectGameObject*, cocos2d::CCArray*) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupAnimationPopup::create(EffectGameObject*, cocos2d::CCArray*) {
    SetupAnimationPopup* ret = new SetupAnimationPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void SetupAnimationPopup::onClose(cocos2d::CCObject*) {
    // TODO: Implement
}

