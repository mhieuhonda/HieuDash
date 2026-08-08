// ============================================================
// LoadingCircleSprite.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "LoadingCircleSprite.h"

LoadingCircleSprite::~LoadingCircleSprite() {
    // 0x588d58
    this->cleanup();
}

LoadingCircleSprite::~LoadingCircleSprite() {
    // 0x588d34
    this->cleanup();
}

LoadingCircleSprite::~LoadingCircleSprite() {
    // 0x588d34
    this->cleanup();
}

void LoadingCircleSprite::hideCircle() {
    // 0x5892dc
    // TODO: Implement
}

void LoadingCircleSprite::fadeInCircle(bool, float, float) {
    // 0x589244
    // TODO: Implement
}

void LoadingCircleSprite::init(float) {
    // 0x589108
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void LoadingCircleSprite::create(float) {
    // 0x589194
    LoadingCircleSprite* ret = new LoadingCircleSprite();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

