// ============================================================
// GJSmartBlockPreviewSprite.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "GJSmartBlockPreviewSprite.h"

GJSmartBlockPreviewSprite::~GJSmartBlockPreviewSprite() {
    // 0x9d02f0
    this->cleanup();
}

GJSmartBlockPreviewSprite::~GJSmartBlockPreviewSprite() {
    // 0x9d02dc
    this->cleanup();
}

GJSmartBlockPreviewSprite::~GJSmartBlockPreviewSprite() {
    // 0x9d02dc
    this->cleanup();
}

void GJSmartBlockPreviewSprite::init() {
    // 0x9d0314
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void GJSmartBlockPreviewSprite::visit() {
    // 0x9d0318
    // TODO: Implement
}

void GJSmartBlockPreviewSprite::create() {
    // 0x9d66b0
    GJSmartBlockPreviewSprite* ret = new GJSmartBlockPreviewSprite();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

