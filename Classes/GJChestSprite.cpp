
#include "GJChestSprite.h"

GJChestSprite::~GJChestSprite() {
    this->cleanup();
}

GJChestSprite::~GJChestSprite() {
    this->cleanup();
}

GJChestSprite::~GJChestSprite() {
    this->cleanup();
}

void GJChestSprite::setOpacity(unsigned char) {
    // TODO: Implement
}

void GJChestSprite::switchToState(ChestSpriteState, bool) {
    // TODO: Implement
}

void GJChestSprite::init(int) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void GJChestSprite::create(int) {
    GJChestSprite* ret = new GJChestSprite();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void GJChestSprite::setColor(cocos2d::_ccColor3B const&) {
    // TODO: Set m_color
}

