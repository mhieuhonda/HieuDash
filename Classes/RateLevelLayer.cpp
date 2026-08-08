// ============================================================
// RateLevelLayer.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "RateLevelLayer.h"

RateLevelLayer::~RateLevelLayer() {
    // 0x79a9d4
    this->cleanup();
}

RateLevelLayer::~RateLevelLayer() {
    // 0x79a958
    this->cleanup();
}

RateLevelLayer::~RateLevelLayer() {
    // 0x79a958
    this->cleanup();
}

void RateLevelLayer::selectRating(cocos2d::CCObject*) {
    // 0x79aa00
    // TODO: Implement
}

void RateLevelLayer::keyBackClicked() {
    // 0x79a948
    // TODO: Implement
}

void RateLevelLayer::init(int) {
    // 0x79ab3c
    bool ret = cocos2d::CCLayer::init() if "cocos2d::CCLayer" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void RateLevelLayer::create(int) {
    // 0x79af2c
    RateLevelLayer* ret = new RateLevelLayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void RateLevelLayer::onRate(cocos2d::CCObject*) {
    // 0x79a930
    // TODO: Implement
}

void RateLevelLayer::onClose(cocos2d::CCObject*) {
    // 0x79a8dc
    // TODO: Implement
}

