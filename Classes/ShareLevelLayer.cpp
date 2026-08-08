
#include "ShareLevelLayer.h"

ShareLevelLayer::~ShareLevelLayer() {
    this->cleanup();
}

ShareLevelLayer::~ShareLevelLayer() {
    this->cleanup();
}

ShareLevelLayer::~ShareLevelLayer() {
    this->cleanup();
}

void ShareLevelLayer::onSettings(cocos2d::CCObject*) {
    // TODO: Implement
}

void ShareLevelLayer::setupStars() {
    // TODO: Implement
}

void ShareLevelLayer::selectRating(cocos2d::CCObject*) {
    // TODO: Implement
}

void ShareLevelLayer::getStarsButton(int, void (cocos2d::CCObject::*)(cocos2d::CCObject*), cocos2d::CCMenu*, float) {
    // TODO: Implement
}

void ShareLevelLayer::keyBackClicked() {
    // TODO: Implement
}

void ShareLevelLayer::init(GJGameLevel*) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void ShareLevelLayer::create(GJGameLevel*) {
    ShareLevelLayer* ret = new ShareLevelLayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void ShareLevelLayer::onClose(cocos2d::CCObject*) {
    // TODO: Implement
}

void ShareLevelLayer::onShare(cocos2d::CCObject*) {
    // TODO: Implement
}

