// ============================================================
// FLAlertLayer.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "FLAlertLayer.h"

FLAlertLayer::~FLAlertLayer() {
    // 0x57dd9c
    this->cleanup();
}

FLAlertLayer::~FLAlertLayer() {
    // 0x57dd0c
    this->cleanup();
}

FLAlertLayer::~FLAlertLayer() {
    // 0x57dd0c
    this->cleanup();
}

void FLAlertLayer::ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // 0x57df8c
    // TODO: Implement
}

void FLAlertLayer::ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // 0x57e054
    // TODO: Implement
}

void FLAlertLayer::ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // 0x57e144
    // TODO: Implement
}

void FLAlertLayer::keyBackClicked() {
    // 0x57dca0
    // TODO: Implement
}

void FLAlertLayer::ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // 0x57e0dc
    // TODO: Implement
}

void FLAlertLayer::incrementForcePrio() {
    // 0x57e1ac
    // TODO: Implement
}

void FLAlertLayer::registerWithTouchDispatcher() {
    // 0x57df54
    // TODO: Implement
}

void FLAlertLayer::init(FLAlertLayerProtocol*, char const*, std::string, char const*, char const*, float, bool, float, float) {
    // 0x57e2e0
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void FLAlertLayer::init(int) {
    // 0x57e1f4
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void FLAlertLayer::show() {
    // 0x57ddc8
    // TODO: Implement
}

void FLAlertLayer::create(FLAlertLayerProtocol*, char const*, std::string, char const*, char const*) {
    // 0x57efe8
    FLAlertLayer* ret = new FLAlertLayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void FLAlertLayer::create(FLAlertLayerProtocol*, char const*, std::string, char const*, char const*, float) {
    // 0x57f10c
    FLAlertLayer* ret = new FLAlertLayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void FLAlertLayer::create(FLAlertLayerProtocol*, char const*, std::string, char const*, char const*, float, bool, float, float) {
    // 0x57edbc
    FLAlertLayer* ret = new FLAlertLayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void FLAlertLayer::onBtn1(cocos2d::CCObject*) {
    // 0x57dbd8
    // TODO: Implement
}

void FLAlertLayer::onBtn2(cocos2d::CCObject*) {
    // 0x57dc3c
    // TODO: Implement
}

void FLAlertLayer::keyDown(cocos2d::enumKeyCodes, double) {
    // 0x57f230
    // TODO: Implement
}

void FLAlertLayer::onEnter() {
    // 0x57f260
    // TODO: Implement
}

