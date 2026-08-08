
#include "ColorActionSprite.h"

ColorActionSprite::~ColorActionSprite() {
    this->cleanup();
}

bool ColorActionSprite::init() {
    bool ret = cocos2d::CCSprite::init();
    if (!ret) return false;
    // Initialize members and UI - stub
    return true;
}

void ColorActionSprite::create() {
    ColorActionSprite* ret = new ColorActionSprite();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

