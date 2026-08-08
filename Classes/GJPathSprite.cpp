
#include "GJPathSprite.h"

GJPathSprite::~GJPathSprite() {
    this->cleanup();
}

GJPathSprite::~GJPathSprite() {
    this->cleanup();
}

GJPathSprite::~GJPathSprite() {
    this->cleanup();
}

void GJPathSprite::updateState() {
    // TODO: Implement
}

void GJPathSprite::addRankLabel(int) {
    // TODO: Implement
}

void GJPathSprite::addShardSprite() {
    // TODO: Implement
}

void GJPathSprite::changeToLockedArt() {
    // TODO: Implement
}

void GJPathSprite::init(int) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void GJPathSprite::create(int) {
    GJPathSprite* ret = new GJPathSprite();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

