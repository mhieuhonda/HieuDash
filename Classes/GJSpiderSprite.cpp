// ============================================================
// GJSpiderSprite.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "GJSpiderSprite.h"

GJSpiderSprite::~GJSpiderSprite() {
    // 0x8e2a2c
    this->cleanup();
}

GJSpiderSprite::~GJSpiderSprite() {
    // 0x8e29e4
    this->cleanup();
}

GJSpiderSprite::~GJSpiderSprite() {
    // 0x8e29e4
    this->cleanup();
}

void GJSpiderSprite::init(int) {
    // 0x8e3df8
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void GJSpiderSprite::create(int) {
    // 0x8e3f08
    GJSpiderSprite* ret = new GJSpiderSprite();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

