
#include "SetupTeleportPopup.h"

SetupTeleportPopup::~SetupTeleportPopup() {
    this->cleanup();
}

SetupTeleportPopup::~SetupTeleportPopup() {
    this->cleanup();
}

SetupTeleportPopup::~SetupTeleportPopup() {
    this->cleanup();
}

void SetupTeleportPopup::valueDidChange(int, float) {
    // TODO: Implement
}

void SetupTeleportPopup::onTeleportGravity(cocos2d::CCObject*) {
    // TODO: Implement
}

void SetupTeleportPopup::determineStartValues() {
    // TODO: Implement
}

void SetupTeleportPopup::updateDefaultTriggerValues() {
    // TODO: Implement
}

void SetupTeleportPopup::updateTeleportGravityState(int) {
    // TODO: Implement
}

void SetupTeleportPopup::init(TeleportPortalObject*, cocos2d::CCArray*, int, bool) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupTeleportPopup::create(TeleportPortalObject*, cocos2d::CCArray*, int, bool) {
    SetupTeleportPopup* ret = new SetupTeleportPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

