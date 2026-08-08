
#include "SetupItemCompareTriggerPopup.h"

SetupItemCompareTriggerPopup::~SetupItemCompareTriggerPopup() {
    this->cleanup();
}

SetupItemCompareTriggerPopup::~SetupItemCompareTriggerPopup() {
    this->cleanup();
}

SetupItemCompareTriggerPopup::~SetupItemCompareTriggerPopup() {
    this->cleanup();
}

void SetupItemCompareTriggerPopup::onOpButton(cocos2d::CCObject*) {
    // TODO: Implement
}

void SetupItemCompareTriggerPopup::updateOpButton(CCMenuItemSpriteExtra*, int, int) {
    // TODO: Implement
}

void SetupItemCompareTriggerPopup::valueDidChange(int, float) {
    // TODO: Implement
}

void SetupItemCompareTriggerPopup::updateFormulaLabel() {
    // TODO: Implement
}

void SetupItemCompareTriggerPopup::onCustomToggleTriggerValue(cocos2d::CCObject*) {
    // TODO: Implement
}

void SetupItemCompareTriggerPopup::init(ItemTriggerGameObject*, cocos2d::CCArray*) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupItemCompareTriggerPopup::create(ItemTriggerGameObject*, cocos2d::CCArray*) {
    SetupItemCompareTriggerPopup* ret = new SetupItemCompareTriggerPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

