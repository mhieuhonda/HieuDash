
#include "SetupAdvFollowRetargetPopup.h"

SetupAdvFollowRetargetPopup::~SetupAdvFollowRetargetPopup() {
    this->cleanup();
}

SetupAdvFollowRetargetPopup::~SetupAdvFollowRetargetPopup() {
    this->cleanup();
}

SetupAdvFollowRetargetPopup::~SetupAdvFollowRetargetPopup() {
    this->cleanup();
}

void SetupAdvFollowRetargetPopup::valueDidChange(int, float) {
    // TODO: Implement
}

void SetupAdvFollowRetargetPopup::updateDefaultTriggerValues() {
    // TODO: Implement
}

void SetupAdvFollowRetargetPopup::init(AdvancedFollowEditObject*, cocos2d::CCArray*) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupAdvFollowRetargetPopup::create(AdvancedFollowEditObject*, cocos2d::CCArray*) {
    SetupAdvFollowRetargetPopup* ret = new SetupAdvFollowRetargetPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

