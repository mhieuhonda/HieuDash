
#include "ShareLevelSettingsLayer.h"

ShareLevelSettingsLayer::~ShareLevelSettingsLayer() {
    this->cleanup();
}

ShareLevelSettingsLayer::~ShareLevelSettingsLayer() {
    this->cleanup();
}

ShareLevelSettingsLayer::~ShareLevelSettingsLayer() {
    this->cleanup();
}

void ShareLevelSettingsLayer::onUnlisted(cocos2d::CCObject*) {
    // TODO: Implement
}

void ShareLevelSettingsLayer::keyBackClicked() {
    // TODO: Implement
}

void ShareLevelSettingsLayer::updateSettingsState() {
    // TODO: Implement
}

void ShareLevelSettingsLayer::onUnlistedFriendsOnly(cocos2d::CCObject*) {
    // TODO: Implement
}

void ShareLevelSettingsLayer::init(GJGameLevel*) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void ShareLevelSettingsLayer::create(GJGameLevel*) {
    ShareLevelSettingsLayer* ret = new ShareLevelSettingsLayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void ShareLevelSettingsLayer::onClose(cocos2d::CCObject*) {
    // TODO: Implement
}

