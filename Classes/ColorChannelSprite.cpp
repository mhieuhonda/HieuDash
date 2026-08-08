
#include "ColorChannelSprite.h"

ColorChannelSprite::~ColorChannelSprite() {
    this->cleanup();
}

void ColorChannelSprite::updateValues(ColorAction*) {
    // Update/refresh operation - stub
}

void ColorChannelSprite::updateOpacity(float) {
    // Update/refresh operation - stub
}

void ColorChannelSprite::updateBlending(bool) {
    // Update/refresh operation - stub
}

void ColorChannelSprite::updateCopyLabel(int, bool) {
    // Update/refresh operation - stub
}

bool ColorChannelSprite::init() {
    bool ret = cocos2d::CCSprite::init();
    if (!ret) return false;
    // Initialize members and UI - stub
    return true;
}

void ColorChannelSprite::create() {
    ColorChannelSprite* ret = new ColorChannelSprite();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

