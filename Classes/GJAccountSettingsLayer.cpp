
#include "GJAccountSettingsLayer.h"

GJAccountSettingsLayer::~GJAccountSettingsLayer() {
    this->cleanup();
}

GJAccountSettingsLayer::~GJAccountSettingsLayer() {
    this->cleanup();
}

GJAccountSettingsLayer::~GJAccountSettingsLayer() {
    this->cleanup();
}

void GJAccountSettingsLayer::keyBackClicked() {
    // TODO: Implement
}

void GJAccountSettingsLayer::textInputReturn(CCTextInputNode*) {
    // TODO: Implement
}

void GJAccountSettingsLayer::onCommentSetting(cocos2d::CCObject*) {
    // TODO: Implement
}

void GJAccountSettingsLayer::onFriendRequests(cocos2d::CCObject*) {
    // TODO: Implement
}

void GJAccountSettingsLayer::onMessageSetting(cocos2d::CCObject*) {
    // TODO: Implement
}

void GJAccountSettingsLayer::updateScoreValues() {
    // TODO: Implement
}

void GJAccountSettingsLayer::closeAccInputNodes(cocos2d::CCArray*) {
    // TODO: Implement
}

void GJAccountSettingsLayer::createToggleButton(std::string, void (cocos2d::CCObject::*)(cocos2d::CCObject*), bool, cocos2d::CCMenu*, cocos2d::CCPoint, float, float) {
    // TODO: Implement
}

void GJAccountSettingsLayer::textInputShouldOffset(CCTextInputNode*, float) {
    // TODO: Implement
}

void GJAccountSettingsLayer::init(int) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void GJAccountSettingsLayer::create(int) {
    GJAccountSettingsLayer* ret = new GJAccountSettingsLayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void GJAccountSettingsLayer::onClose(cocos2d::CCObject*) {
    // TODO: Implement
}

void GJAccountSettingsLayer::onUpdate(cocos2d::CCObject*) {
    // TODO: Implement
}

