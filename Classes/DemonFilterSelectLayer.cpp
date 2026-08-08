
#include "DemonFilterSelectLayer.h"

DemonFilterSelectLayer::~DemonFilterSelectLayer() {
    this->cleanup();
}

DemonFilterSelectLayer::~DemonFilterSelectLayer() {
    this->cleanup();
}

DemonFilterSelectLayer::~DemonFilterSelectLayer() {
    this->cleanup();
}

void DemonFilterSelectLayer::selectRating(cocos2d::CCObject*) {
    // TODO: Implement
}

void DemonFilterSelectLayer::keyBackClicked() {
    // TODO: Implement
}

void DemonFilterSelectLayer::init() {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void DemonFilterSelectLayer::create() {
    DemonFilterSelectLayer* ret = new DemonFilterSelectLayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void DemonFilterSelectLayer::onClose(cocos2d::CCObject*) {
    // TODO: Implement
}

