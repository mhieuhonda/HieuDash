// ============================================================
// GJBigSprite.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "GJBigSprite.h"

GJBigSprite::~GJBigSprite() {
    // 0x97d18c
    this->cleanup();
}

GJBigSprite::~GJBigSprite() {
    // 0x97d144
    this->cleanup();
}

GJBigSprite::~GJBigSprite() {
    // 0x97d144
    this->cleanup();
}

void GJBigSprite::unloadSprite(std::string, int) {
    // 0x97f42c
    // Load from file/storage
    // TODO: Implement loading
}

void GJBigSprite::loadSpriteAsync(std::string, int) {
    // 0x97f3ac
    // Load from file/storage
    // TODO: Implement loading
}

void GJBigSprite::updateSpriteVisibility() {
    // 0x97f7b8
    // TODO: Implement
}

void GJBigSprite::finishedLoadingSpriteAsync(cocos2d::CCObject*) {
    // 0x97f5f0
    // Load from file/storage
    // TODO: Implement loading
}

void GJBigSprite::init() {
    // 0x980000
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void GJBigSprite::create() {
    // 0x9803e8
    GJBigSprite* ret = new GJBigSprite();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void GJBigSprite::unloadAll() {
    // 0x97f488
    // Load from file/storage
    // TODO: Implement loading
}

