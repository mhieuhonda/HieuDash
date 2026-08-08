
#include "GravityEffectSprite.h"

GravityEffectSprite::~GravityEffectSprite() {
    this->cleanup();
}

GravityEffectSprite::~GravityEffectSprite() {
    this->cleanup();
}

GravityEffectSprite::~GravityEffectSprite() {
    this->cleanup();
}

void GravityEffectSprite::updateSpritesColor(cocos2d::_ccColor3B) {
    // TODO: Implement
}

void GravityEffectSprite::draw() {
    // Render/draw logic
    // TODO: Implement rendering
}

void GravityEffectSprite::init() {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void GravityEffectSprite::create() {
    GravityEffectSprite* ret = new GravityEffectSprite();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

