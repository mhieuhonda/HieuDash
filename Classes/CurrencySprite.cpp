
#include "CurrencySprite.h"

CurrencySprite::~CurrencySprite() {
    this->cleanup();
}

CurrencySprite::~CurrencySprite() {
    this->cleanup();
}

CurrencySprite::~CurrencySprite() {
    this->cleanup();
}

void CurrencySprite::initWithSprite(cocos2d::CCSprite*) {
    // TODO: Implement
}

void CurrencySprite::createWithSprite(cocos2d::CCSprite*) {
    // TODO: Implement
}

void CurrencySprite::spriteTypeToStat(CurrencySpriteType) {
    // TODO: Implement
}

void CurrencySprite::rewardToSpriteType(int) {
    // TODO: Implement
}

void CurrencySprite::init(CurrencySpriteType, bool) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void CurrencySprite::create(CurrencySpriteType, bool) {
    CurrencySprite* ret = new CurrencySprite();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

