
#include "GJBigSprite.h"

GJBigSprite::~GJBigSprite() {
    this->cleanup();
}

GJBigSprite::~GJBigSprite() {
    this->cleanup();
}

GJBigSprite::~GJBigSprite() {
    this->cleanup();
}

void GJBigSprite::unloadSprite(std::string, int) {
    // Load from file/storage
    // TODO: Implement loading
}

void GJBigSprite::loadSpriteAsync(std::string, int) {
    // Load from file/storage
    // TODO: Implement loading
}

void GJBigSprite::updateSpriteVisibility() {
    // TODO: Implement
}

void GJBigSprite::finishedLoadingSpriteAsync(cocos2d::CCObject*) {
    // Load from file/storage
    // TODO: Implement loading
}

void GJBigSprite::init() {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void GJBigSprite::create() {
    GJBigSprite* ret = new GJBigSprite();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void GJBigSprite::unloadAll() {
    // Load from file/storage
    // TODO: Implement loading
}

