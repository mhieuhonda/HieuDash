
#include "SetupItemEditTriggerPopup.h"

SetupItemEditTriggerPopup::~SetupItemEditTriggerPopup() {
    this->cleanup();
}

SetupItemEditTriggerPopup::~SetupItemEditTriggerPopup() {
    this->cleanup();
}

SetupItemEditTriggerPopup::~SetupItemEditTriggerPopup() {
    this->cleanup();
}

void SetupItemEditTriggerPopup::onOpButton(cocos2d::CCObject*) {
    // TODO: Implement
}

void SetupItemEditTriggerPopup::updateOpButton(CCMenuItemSpriteExtra*, int, int) {
    // TODO: Implement
}

void SetupItemEditTriggerPopup::valueDidChange(int, float) {
    // TODO: Implement
}

void SetupItemEditTriggerPopup::updateFormulaLabel() {
    // TODO: Implement
}

void SetupItemEditTriggerPopup::onCustomToggleTriggerValue(cocos2d::CCObject*) {
    // TODO: Implement
}

void SetupItemEditTriggerPopup::init(ItemTriggerGameObject*, cocos2d::CCArray*) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupItemEditTriggerPopup::create(ItemTriggerGameObject*, cocos2d::CCArray*) {
    SetupItemEditTriggerPopup* ret = new SetupItemEditTriggerPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

