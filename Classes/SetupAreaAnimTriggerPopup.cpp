
#include "SetupAreaAnimTriggerPopup.h"

SetupAreaAnimTriggerPopup::~SetupAreaAnimTriggerPopup() {
    this->cleanup();
}

SetupAreaAnimTriggerPopup::~SetupAreaAnimTriggerPopup() {
    this->cleanup();
}

SetupAreaAnimTriggerPopup::~SetupAreaAnimTriggerPopup() {
    this->cleanup();
}

void SetupAreaAnimTriggerPopup::valueDidChange(int, float) {
    // TODO: Implement
}

void SetupAreaAnimTriggerPopup::updateTargetIDLabel() {
    // TODO: Implement
}

void SetupAreaAnimTriggerPopup::onDeactivateAnimValue(cocos2d::CCObject*) {
    // TODO: Implement
}

void SetupAreaAnimTriggerPopup::updateDefaultTriggerValues() {
    // TODO: Implement
}

void SetupAreaAnimTriggerPopup::createValueControlAdvancedAnim(int, std::string, cocos2d::CCPoint, float, bool, InputValueType, int, bool, float, float, int, int, GJInputStyle) {
    // TODO: Implement
}

void SetupAreaAnimTriggerPopup::init(EnterEffectObject*, cocos2d::CCArray*, int) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupAreaAnimTriggerPopup::create(EnterEffectObject*, cocos2d::CCArray*, int) {
    SetupAreaAnimTriggerPopup* ret = new SetupAreaAnimTriggerPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

