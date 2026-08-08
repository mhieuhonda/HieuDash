
#include "ShareListLayer.h"

ShareListLayer::~ShareListLayer() {
    this->cleanup();
}

ShareListLayer::~ShareListLayer() {
    this->cleanup();
}

ShareListLayer::~ShareListLayer() {
    this->cleanup();
}

void ShareListLayer::onUnlisted(cocos2d::CCObject*) {
    // TODO: Implement
}

void ShareListLayer::keyBackClicked() {
    // TODO: Implement
}

void ShareListLayer::updateUnlistedF() {
    // TODO: Implement
}

void ShareListLayer::init(GJLevelList*) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void ShareListLayer::create(GJLevelList*) {
    ShareListLayer* ret = new ShareListLayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void ShareListLayer::onInfo(cocos2d::CCObject*) {
    // TODO: Implement
}

void ShareListLayer::onClose(cocos2d::CCObject*) {
    // TODO: Implement
}

void ShareListLayer::onShare(cocos2d::CCObject*) {
    // TODO: Implement
}

