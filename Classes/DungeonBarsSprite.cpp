// ============================================================
// DungeonBarsSprite.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "DungeonBarsSprite.h"

DungeonBarsSprite::~DungeonBarsSprite() {
    // 0x93ab44
    this->cleanup();
}

DungeonBarsSprite::~DungeonBarsSprite() {
    // 0x93ab30
    this->cleanup();
}

DungeonBarsSprite::~DungeonBarsSprite() {
    // 0x93ab30
    this->cleanup();
}

void DungeonBarsSprite::animateOutBars() {
    // 0x94202c
    // TODO: Implement
}

void DungeonBarsSprite::init() {
    // 0x944b00
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void DungeonBarsSprite::visit() {
    // 0x93a98c
    // TODO: Implement
}

void DungeonBarsSprite::create() {
    // 0x944bb4
    DungeonBarsSprite* ret = new DungeonBarsSprite();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

