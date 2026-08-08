// ============================================================
// ExplodeItemSprite.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "ExplodeItemSprite.h"

ExplodeItemSprite::~ExplodeItemSprite() {
    // 0xa26a00
    this->cleanup();
}

ExplodeItemSprite::~ExplodeItemSprite() {
    // 0xa269dc
    this->cleanup();
}

ExplodeItemSprite::~ExplodeItemSprite() {
    // 0xa269dc
    this->cleanup();
}

void ExplodeItemSprite::init() {
    // 0xa27030
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void ExplodeItemSprite::create() {
    // 0xa27034
    ExplodeItemSprite* ret = new ExplodeItemSprite();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

