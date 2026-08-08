
#include "RateLevelLayer.h"

RateLevelLayer::~RateLevelLayer() {
    this->cleanup();
}

RateLevelLayer::~RateLevelLayer() {
    this->cleanup();
}

RateLevelLayer::~RateLevelLayer() {
    this->cleanup();
}

void RateLevelLayer::selectRating(cocos2d::CCObject*) {
    // TODO: Implement
}

void RateLevelLayer::keyBackClicked() {
    // TODO: Implement
}

void RateLevelLayer::init(int) {
    bool ret = cocos2d::CCLayer::init();
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void RateLevelLayer::create(int) {
    RateLevelLayer* ret = new RateLevelLayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void RateLevelLayer::onRate(cocos2d::CCObject*) {
    // TODO: Implement
}

void RateLevelLayer::onClose(cocos2d::CCObject*) {
    // TODO: Implement
}

