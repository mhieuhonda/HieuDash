// ============================================================
// SongsLayer.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "SongsLayer.h"

SongsLayer::~SongsLayer() {
    // 0x7e0dc4
    this->cleanup();
}

SongsLayer::~SongsLayer() {
    // 0x7e0d70
    this->cleanup();
}

SongsLayer::~SongsLayer() {
    // 0x7e0d70
    this->cleanup();
}

void SongsLayer::customSetup() {
    // 0x7e0df0
    // TODO: Implement
}

void SongsLayer::create() {
    // 0x7e1024
    SongsLayer* ret = new SongsLayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

