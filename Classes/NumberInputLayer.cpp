
#include "NumberInputLayer.h"

NumberInputLayer::~NumberInputLayer() {
    this->cleanup();
}

NumberInputLayer::~NumberInputLayer() {
    this->cleanup();
}

NumberInputLayer::~NumberInputLayer() {
    this->cleanup();
}

void NumberInputLayer::deleteLast() {
    // TODO: Implement
}

void NumberInputLayer::inputNumber(int) {
    // TODO: Implement
}

void NumberInputLayer::keyBackClicked() {
    // TODO: Implement
}

void NumberInputLayer::updateNumberState() {
    // TODO: Implement
}

void NumberInputLayer::registerWithTouchDispatcher() {
    // TODO: Implement
}

void NumberInputLayer::init() {
    bool ret = cocos2d::CCLayer::init();
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void NumberInputLayer::create() {
    NumberInputLayer* ret = new NumberInputLayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void NumberInputLayer::onDone(cocos2d::CCObject*) {
    // TODO: Implement
}

void NumberInputLayer::onClose(cocos2d::CCObject*) {
    // TODO: Implement
}

void NumberInputLayer::onNumber(cocos2d::CCObject*) {
    // TODO: Implement
}

