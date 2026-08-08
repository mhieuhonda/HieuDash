
#include "SetupAdvFollowPopup.h"

SetupAdvFollowPopup::~SetupAdvFollowPopup() {
    this->cleanup();
}

SetupAdvFollowPopup::~SetupAdvFollowPopup() {
    this->cleanup();
}

SetupAdvFollowPopup::~SetupAdvFollowPopup() {
    this->cleanup();
}

void SetupAdvFollowPopup::updateMode(int) {
    // TODO: Implement
}

void SetupAdvFollowPopup::valueDidChange(int, float) {
    // TODO: Implement
}

void SetupAdvFollowPopup::selectPremadeClosed(SelectPremadeLayer*, int) {
    // TODO: Implement
}

void SetupAdvFollowPopup::onCustomToggleTriggerValue(cocos2d::CCObject*) {
    // TODO: Implement
}

void SetupAdvFollowPopup::updateDefaultTriggerValues() {
    // TODO: Implement
}

void SetupAdvFollowPopup::init(AdvancedFollowTriggerObject*, cocos2d::CCArray*) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupAdvFollowPopup::create(AdvancedFollowTriggerObject*, cocos2d::CCArray*) {
    SetupAdvFollowPopup* ret = new SetupAdvFollowPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void SetupAdvFollowPopup::onMode(cocos2d::CCObject*) {
    // TODO: Implement
}

void SetupAdvFollowPopup::onClose(cocos2d::CCObject*) {
    // TODO: Implement
}

void SetupAdvFollowPopup::onPremade(cocos2d::CCObject*) {
    // TODO: Implement
}

