
#include "SetupAdvFollowEditPhysicsPopup.h"

SetupAdvFollowEditPhysicsPopup::~SetupAdvFollowEditPhysicsPopup() {
    this->cleanup();
}

SetupAdvFollowEditPhysicsPopup::~SetupAdvFollowEditPhysicsPopup() {
    this->cleanup();
}

SetupAdvFollowEditPhysicsPopup::~SetupAdvFollowEditPhysicsPopup() {
    this->cleanup();
}

void SetupAdvFollowEditPhysicsPopup::valueDidChange(int, float) {
    // TODO: Implement
}

void SetupAdvFollowEditPhysicsPopup::init(AdvancedFollowEditObject*, cocos2d::CCArray*) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupAdvFollowEditPhysicsPopup::create(AdvancedFollowEditObject*, cocos2d::CCArray*) {
    SetupAdvFollowEditPhysicsPopup* ret = new SetupAdvFollowEditPhysicsPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

