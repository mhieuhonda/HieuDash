// ============================================================
// AnimatedShopKeeper.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "AnimatedShopKeeper.h"

AnimatedShopKeeper::~AnimatedShopKeeper() {
    // 0x92a6fc
    this->cleanup();
}

AnimatedShopKeeper::~AnimatedShopKeeper() {
    // 0x92a6d8
    this->cleanup();
}

AnimatedShopKeeper::~AnimatedShopKeeper() {
    // 0x92a6d8
    this->cleanup();
}

void AnimatedShopKeeper::startAnimating() {
    // 0x92a720
    // TODO: Implement
}

void AnimatedShopKeeper::animationFinished(char const*) {
    // 0x92b60c
    // TODO: Implement
}

void AnimatedShopKeeper::playReactAnimation() {
    // 0x92f6b0
    // TODO: Implement
}

void AnimatedShopKeeper::init(ShopType) {
    // 0x92db8c
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void AnimatedShopKeeper::create(ShopType) {
    // 0x92dc80
    AnimatedShopKeeper* ret = new AnimatedShopKeeper();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

