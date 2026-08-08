
#include "AnimatedShopKeeper.h"

AnimatedShopKeeper::~AnimatedShopKeeper() {
    this->cleanup();
}

AnimatedShopKeeper::~AnimatedShopKeeper() {
    this->cleanup();
}

AnimatedShopKeeper::~AnimatedShopKeeper() {
    this->cleanup();
}

void AnimatedShopKeeper::startAnimating() {
    // TODO: Implement
}

void AnimatedShopKeeper::animationFinished(char const*) {
    // TODO: Implement
}

void AnimatedShopKeeper::playReactAnimation() {
    // TODO: Implement
}

void AnimatedShopKeeper::init(ShopType) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void AnimatedShopKeeper::create(ShopType) {
    AnimatedShopKeeper* ret = new AnimatedShopKeeper();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

