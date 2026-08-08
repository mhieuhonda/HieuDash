
#include "MultiplayerLayer.h"

MultiplayerLayer::~MultiplayerLayer() {
    this->cleanup();
}

MultiplayerLayer::~MultiplayerLayer() {
    this->cleanup();
}

MultiplayerLayer::~MultiplayerLayer() {
    this->cleanup();
}

void MultiplayerLayer::keyBackClicked() {
    // TODO: Implement
}

void MultiplayerLayer::init() {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void MultiplayerLayer::scene() {
    // TODO: Implement
}

void MultiplayerLayer::create() {
    MultiplayerLayer* ret = new MultiplayerLayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void MultiplayerLayer::onBack(cocos2d::CCObject*) {
    // TODO: Implement
}

void MultiplayerLayer::onBtn1(cocos2d::CCObject*) {
    // TODO: Implement
}

void MultiplayerLayer::onBtn2(cocos2d::CCObject*) {
    // TODO: Implement
}

