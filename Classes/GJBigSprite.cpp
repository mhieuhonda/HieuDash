
#include "GJBigSprite.h"

GJBigSprite::~GJBigSprite() {
    this->cleanup();
}

void GJBigSprite::unloadSprite(std::string, int) {
    // Load/decode operation - stub
}

void GJBigSprite::loadSpriteAsync(std::string, int) {
    // Load/decode operation - stub
}

void GJBigSprite::updateSpriteVisibility() {
    // Update/refresh operation - stub
}

void GJBigSprite::finishedLoadingSpriteAsync(cocos2d::CCObject*) {
    // Load/decode operation - stub
}

bool GJBigSprite::init() {
    bool ret = cocos2d::CCSprite::init();
    if (!ret) return false;
    // Initialize members and UI - stub
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
    // Load/decode operation - stub
}

