
#include "LikeItemLayer.h"

LikeItemLayer::~LikeItemLayer() {
    this->cleanup();
}

LikeItemLayer::~LikeItemLayer() {
    this->cleanup();
}

LikeItemLayer::~LikeItemLayer() {
    this->cleanup();
}

void LikeItemLayer::triggerLike(bool) {
    // TODO: Implement
}

void LikeItemLayer::keyBackClicked() {
    // TODO: Implement
}

void LikeItemLayer::init(LikeItemType, int, int) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void LikeItemLayer::create(LikeItemType, int, int) {
    LikeItemLayer* ret = new LikeItemLayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void LikeItemLayer::onLike(cocos2d::CCObject*) {
    // TODO: Implement
}

void LikeItemLayer::onClose(cocos2d::CCObject*) {
    // TODO: Implement
}

void LikeItemLayer::onDislike(cocos2d::CCObject*) {
    // TODO: Implement
}

