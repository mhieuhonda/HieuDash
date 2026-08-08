
#include "SetupGradientPopup.h"

SetupGradientPopup::~SetupGradientPopup() {
    this->cleanup();
}

SetupGradientPopup::~SetupGradientPopup() {
    this->cleanup();
}

SetupGradientPopup::~SetupGradientPopup() {
    this->cleanup();
}

void SetupGradientPopup::onBlending(cocos2d::CCObject*) {
    // TODO: Implement
}

void SetupGradientPopup::onPlusButton(cocos2d::CCObject*) {
    // TODO: Implement
}

void SetupGradientPopup::sliderChanged(cocos2d::CCObject*) {
    // TODO: Implement
}

void SetupGradientPopup::updateBlending() {
    // TODO: Implement
}

void SetupGradientPopup::valueDidChange(int, float) {
    // TODO: Implement
}

void SetupGradientPopup::updateToggleItem(int, bool) {
    // TODO: Implement
}

void SetupGradientPopup::updateBlendingLabel() {
    // TODO: Implement
}

void SetupGradientPopup::updateZLayerButtons() {
    // TODO: Implement
}

void SetupGradientPopup::determineStartValues() {
    // TODO: Implement
}

void SetupGradientPopup::updateGradientLabels(bool) {
    // TODO: Implement
}

void SetupGradientPopup::init(GradientTriggerObject*, cocos2d::CCArray*) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupGradientPopup::create(GradientTriggerObject*, cocos2d::CCArray*) {
    SetupGradientPopup* ret = new SetupGradientPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void SetupGradientPopup::onZLayer(cocos2d::CCObject*) {
    // TODO: Implement
}

