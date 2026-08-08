// ============================================================
// UIPOptionsLayer.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "UIPOptionsLayer.h"

UIPOptionsLayer::~UIPOptionsLayer() {
    // 0x8c2438
    this->cleanup();
}

UIPOptionsLayer::~UIPOptionsLayer() {
    // 0x8c23cc
    this->cleanup();
}

UIPOptionsLayer::~UIPOptionsLayer() {
    // 0x8c23cc
    this->cleanup();
}

void UIPOptionsLayer::ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // 0x8da7c0
    // TODO: Implement
}

void UIPOptionsLayer::ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // 0x8c1b68
    // TODO: Implement
}

void UIPOptionsLayer::ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // 0x8c3860
    // TODO: Implement
}

void UIPOptionsLayer::getTouchRect() {
    // 0x8da728
    // TODO: Implement
}

void UIPOptionsLayer::valueDidChange(int, float) {
    // 0x8c3c74
    // TODO: Implement
}

void UIPOptionsLayer::ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // 0x8c1b90
    // TODO: Implement
}

void UIPOptionsLayer::registerWithTouchDispatcher() {
    // 0x8c30c8
    // TODO: Implement
}

void UIPOptionsLayer::init() {
    // 0x8c5e0c
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void UIPOptionsLayer::create() {
    // 0x8da500
    UIPOptionsLayer* ret = new UIPOptionsLayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void UIPOptionsLayer::onClose(cocos2d::CCObject*) {
    // 0x8c3bdc
    // TODO: Implement
}

void UIPOptionsLayer::onReset(cocos2d::CCObject*) {
    // 0x8c3b04
    // TODO: Implement
}

void UIPOptionsLayer::getValue(int) {
    // 0x8c3c50
    // TODO: Implement
}

