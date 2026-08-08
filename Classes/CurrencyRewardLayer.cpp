// ============================================================
// CurrencyRewardLayer.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CurrencyRewardLayer.h"

CurrencyRewardLayer::~CurrencyRewardLayer() {
    // 0x90da1c
    this->cleanup();
}

CurrencyRewardLayer::~CurrencyRewardLayer() {
    // 0x90d9b0
    this->cleanup();
}

CurrencyRewardLayer::~CurrencyRewardLayer() {
    // 0x90d9b0
    this->cleanup();
}

void CurrencyRewardLayer::pulseSprite(cocos2d::CCSprite*) {
    // 0x90dad0
    // TODO: Implement
}

void CurrencyRewardLayer::createObjects(CurrencySpriteType, int, cocos2d::CCPoint, float) {
    // 0x910650
    // TODO: Implement
}

void CurrencyRewardLayer::incrementCount(int) {
    // 0x90e0b8
    // TODO: Implement
}

void CurrencyRewardLayer::createObjectsFull(CurrencySpriteType, int, cocos2d::CCSprite*, cocos2d::CCPoint, float) {
    // 0x90f9b4
    // TODO: Implement
}

void CurrencyRewardLayer::createUnlockObject(cocos2d::CCSprite*, cocos2d::CCPoint, float) {
    // 0x9105d8
    // TODO: Implement
}

void CurrencyRewardLayer::incrementMoonsCount(int) {
    // 0x90e318
    // TODO: Implement
}

void CurrencyRewardLayer::incrementStarsCount(int) {
    // 0x90e1e8
    // TODO: Implement
}

void CurrencyRewardLayer::incrementDiamondsCount(int) {
    // 0x90e448
    // TODO: Implement
}

void CurrencyRewardLayer::incrementSpecialCount1(int) {
    // 0x90e578
    // TODO: Implement
}

void CurrencyRewardLayer::incrementSpecialCount2(int) {
    // 0x90e6a8
    // TODO: Implement
}

void CurrencyRewardLayer::init(int, int, int, int, CurrencySpriteType, int, CurrencySpriteType, int, cocos2d::CCPoint, CurrencyRewardType, float, float) {
    // 0x9106d4
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void CurrencyRewardLayer::create(int, int, int, int, CurrencySpriteType, int, CurrencySpriteType, int, cocos2d::CCPoint, CurrencyRewardType, float, float) {
    // 0x9123f8
    CurrencyRewardLayer* ret = new CurrencyRewardLayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CurrencyRewardLayer::update(float) {
    // 0x90e7d8
    // Game update loop — called every frame
    // TODO: Implement game logic update
}

