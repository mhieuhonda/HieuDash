
#include "SetupSequenceTriggerPopup.h"

SetupSequenceTriggerPopup::~SetupSequenceTriggerPopup() {
    this->cleanup();
}

SetupSequenceTriggerPopup::~SetupSequenceTriggerPopup() {
    this->cleanup();
}

SetupSequenceTriggerPopup::~SetupSequenceTriggerPopup() {
    this->cleanup();
}

void SetupSequenceTriggerPopup::onAddChance(cocos2d::CCObject*) {
    // TODO: Implement
}

void SetupSequenceTriggerPopup::onChangeOrder(cocos2d::CCObject*) {
    // TODO: Implement
}

void SetupSequenceTriggerPopup::onDeleteSelected(cocos2d::CCObject*) {
    // TODO: Implement
}

void SetupSequenceTriggerPopup::updateGroupIDButtons() {
    // TODO: Implement
}

void SetupSequenceTriggerPopup::onCustomToggleTriggerValue(cocos2d::CCObject*) {
    // TODO: Implement
}

void SetupSequenceTriggerPopup::init(SequenceTriggerGameObject*) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupSequenceTriggerPopup::create(SequenceTriggerGameObject*) {
    SetupSequenceTriggerPopup* ret = new SetupSequenceTriggerPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void SetupSequenceTriggerPopup::onSelect(cocos2d::CCObject*) {
    // TODO: Implement
}

