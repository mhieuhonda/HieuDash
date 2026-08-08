
#include "ColorActionSprite.h"

ColorActionSprite::~ColorActionSprite() {
    this->cleanup();
}

ColorActionSprite::~ColorActionSprite() {
    this->cleanup();
}

ColorActionSprite::~ColorActionSprite() {
    this->cleanup();
}

void ColorActionSprite::init() {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
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

