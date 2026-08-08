// ============================================================
// CurrencySprite.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CurrencySprite.h"

CurrencySprite::~CurrencySprite() {
    // 0x90da94
    this->cleanup();
}

CurrencySprite::~CurrencySprite() {
    // 0x90da48
    this->cleanup();
}

CurrencySprite::~CurrencySprite() {
    // 0x90da48
    this->cleanup();
}

void CurrencySprite::initWithSprite(cocos2d::CCSprite*) {
    // 0x90dba0
    // TODO: Implement
}

void CurrencySprite::createWithSprite(cocos2d::CCSprite*) {
    // 0x90dd9c
    // TODO: Implement
}

void CurrencySprite::spriteTypeToStat(CurrencySpriteType) {
    // 0x90deb4
    // TODO: Implement
}

void CurrencySprite::rewardToSpriteType(int) {
    // 0x90de94
    // TODO: Implement
}

void CurrencySprite::init(CurrencySpriteType, bool) {
    // 0x90ee20
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void CurrencySprite::create(CurrencySpriteType, bool) {
    // 0x90f8a8
    CurrencySprite* ret = new CurrencySprite();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

