// ============================================================
// NumberInputLayer.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "NumberInputLayer.h"

NumberInputLayer::~NumberInputLayer() {
    // 0x823840
    this->cleanup();
}

NumberInputLayer::~NumberInputLayer() {
    // 0x823748
    this->cleanup();
}

NumberInputLayer::~NumberInputLayer() {
    // 0x823748
    this->cleanup();
}

void NumberInputLayer::deleteLast() {
    // 0x824064
    // TODO: Implement
}

void NumberInputLayer::inputNumber(int) {
    // 0x823ff8
    // TODO: Implement
}

void NumberInputLayer::keyBackClicked() {
    // 0x823700
    // TODO: Implement
}

void NumberInputLayer::updateNumberState() {
    // 0x82386c
    // TODO: Implement
}

void NumberInputLayer::registerWithTouchDispatcher() {
    // 0x823710
    // TODO: Implement
}

void NumberInputLayer::init() {
    // 0x823928
    bool ret = cocos2d::CCLayer::init() if "cocos2d::CCLayer" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void NumberInputLayer::create() {
    // 0x823ed0
    NumberInputLayer* ret = new NumberInputLayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void NumberInputLayer::onDone(cocos2d::CCObject*) {
    // 0x8241b4
    // TODO: Implement
}

void NumberInputLayer::onClose(cocos2d::CCObject*) {
    // 0x8236c0
    // TODO: Implement
}

void NumberInputLayer::onNumber(cocos2d::CCObject*) {
    // 0x8241f0
    // TODO: Implement
}

