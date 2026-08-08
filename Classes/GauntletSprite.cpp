
#include "GauntletSprite.h"

GauntletSprite::~GauntletSprite() {
    this->cleanup();
}

GauntletSprite::~GauntletSprite() {
    this->cleanup();
}

GauntletSprite::~GauntletSprite() {
    this->cleanup();
}

void GauntletSprite::colorForType(GauntletType) {
    // TODO: Implement
}

void GauntletSprite::addLockedSprite() {
    // TODO: Implement
}

void GauntletSprite::addNormalSprite() {
    // TODO: Implement
}

void GauntletSprite::luminanceForType(GauntletType) {
    // TODO: Implement
}

void GauntletSprite::toggleLockedSprite(bool) {
    // TODO: Implement
}

void GauntletSprite::init(GauntletType, bool) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void GauntletSprite::create(GauntletType, bool) {
    GauntletSprite* ret = new GauntletSprite();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

