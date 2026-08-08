// ============================================================
// GJListLayer.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "GJListLayer.h"

GJListLayer::~GJListLayer() {
    // 0x7a0774
    this->cleanup();
}

GJListLayer::~GJListLayer() {
    // 0x7a06f8
    this->cleanup();
}

GJListLayer::~GJListLayer() {
    // 0x7a06f8
    this->cleanup();
}

void GJListLayer::init(BoomListView*, char const*, cocos2d::_ccColor4B, float, float, int) {
    // 0x7a07a0
    bool ret = ListLayer::init() if "ListLayer" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void GJListLayer::create(BoomListView*, char const*, cocos2d::_ccColor4B, float, float, int) {
    // 0x7a0dc0
    GJListLayer* ret = new GJListLayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

