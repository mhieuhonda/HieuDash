
#include "ColorChannelSprite.h"

ColorChannelSprite::~ColorChannelSprite() {
    this->cleanup();
}

ColorChannelSprite::~ColorChannelSprite() {
    this->cleanup();
}

ColorChannelSprite::~ColorChannelSprite() {
    this->cleanup();
}

void ColorChannelSprite::updateValues(ColorAction*) {
    // TODO: Implement
}

void ColorChannelSprite::updateOpacity(float) {
    // TODO: Implement
}

void ColorChannelSprite::updateBlending(bool) {
    // TODO: Implement
}

void ColorChannelSprite::updateCopyLabel(int, bool) {
    // TODO: Implement
}

void ColorChannelSprite::init() {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
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

