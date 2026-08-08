
#include "RateDemonLayer.h"

RateDemonLayer::~RateDemonLayer() {
    this->cleanup();
}

RateDemonLayer::~RateDemonLayer() {
    this->cleanup();
}

RateDemonLayer::~RateDemonLayer() {
    this->cleanup();
}

void RateDemonLayer::onClosePopup(UploadActionPopup*) {
    // TODO: Implement
}

void RateDemonLayer::selectRating(cocos2d::CCObject*) {
    // TODO: Implement
}

void RateDemonLayer::keyBackClicked() {
    // TODO: Implement
}

void RateDemonLayer::uploadActionFailed(int, int) {
    // Load from file/storage
    // TODO: Implement loading
}

void RateDemonLayer::uploadActionFinished(int, int) {
    // Load from file/storage
    // TODO: Implement loading
}

void RateDemonLayer::init(int) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void RateDemonLayer::create(int) {
    RateDemonLayer* ret = new RateDemonLayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void RateDemonLayer::onRate(cocos2d::CCObject*) {
    // TODO: Implement
}

void RateDemonLayer::onClose(cocos2d::CCObject*) {
    // TODO: Implement
}

