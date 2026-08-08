// ============================================================
// GJAccountSettingsLayer.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "GJAccountSettingsLayer.h"

GJAccountSettingsLayer::~GJAccountSettingsLayer() {
    // 0x8daa4c
    this->cleanup();
}

GJAccountSettingsLayer::~GJAccountSettingsLayer() {
    // 0x8da8c4
    this->cleanup();
}

GJAccountSettingsLayer::~GJAccountSettingsLayer() {
    // 0x8da8c4
    this->cleanup();
}

void GJAccountSettingsLayer::keyBackClicked() {
    // 0x8dc820
    // TODO: Implement
}

void GJAccountSettingsLayer::textInputReturn(CCTextInputNode*) {
    // 0x8c2d30
    // TODO: Implement
}

void GJAccountSettingsLayer::onCommentSetting(cocos2d::CCObject*) {
    // 0x8c27c4
    // TODO: Implement
}

void GJAccountSettingsLayer::onFriendRequests(cocos2d::CCObject*) {
    // 0x8c2724
    // TODO: Implement
}

void GJAccountSettingsLayer::onMessageSetting(cocos2d::CCObject*) {
    // 0x8c2684
    // TODO: Implement
}

void GJAccountSettingsLayer::updateScoreValues() {
    // 0x8dd58c
    // TODO: Implement
}

void GJAccountSettingsLayer::closeAccInputNodes(cocos2d::CCArray*) {
    // 0x8dc514
    // TODO: Implement
}

void GJAccountSettingsLayer::createToggleButton(std::string, void (cocos2d::CCObject::*)(cocos2d::CCObject*), bool, cocos2d::CCMenu*, cocos2d::CCPoint, float, float) {
    // 0x8c9ef8
    // TODO: Implement
}

void GJAccountSettingsLayer::textInputShouldOffset(CCTextInputNode*, float) {
    // 0x8c2ca0
    // TODO: Implement
}

void GJAccountSettingsLayer::init(int) {
    // 0x8de218
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void GJAccountSettingsLayer::create(int) {
    // 0x8e05c0
    GJAccountSettingsLayer* ret = new GJAccountSettingsLayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void GJAccountSettingsLayer::onClose(cocos2d::CCObject*) {
    // 0x8dc7d4
    // TODO: Implement
}

void GJAccountSettingsLayer::onUpdate(cocos2d::CCObject*) {
    // 0x8dc830
    // TODO: Implement
}

