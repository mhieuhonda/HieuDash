
#include "LoadingCircleSprite.h"

LoadingCircleSprite::~LoadingCircleSprite() {
    this->cleanup();
}

LoadingCircleSprite::~LoadingCircleSprite() {
    this->cleanup();
}

LoadingCircleSprite::~LoadingCircleSprite() {
    this->cleanup();
}

void LoadingCircleSprite::hideCircle() {
    // TODO: Implement
}

void LoadingCircleSprite::fadeInCircle(bool, float, float) {
    // TODO: Implement
}

void LoadingCircleSprite::init(float) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void LoadingCircleSprite::create(float) {
    LoadingCircleSprite* ret = new LoadingCircleSprite();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

