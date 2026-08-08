// ============================================================
// BoomListLayer.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "BoomListLayer.h"

BoomListLayer::~BoomListLayer() {
    // 0x594b9c
    this->cleanup();
}

BoomListLayer::~BoomListLayer() {
    // 0x594b48
    this->cleanup();
}

BoomListLayer::~BoomListLayer() {
    // 0x594b48
    this->cleanup();
}

void BoomListLayer::init(BoomListView*, char const*) {
    // 0x594bc8
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void BoomListLayer::create(BoomListView*, char const*) {
    // 0x594f5c
    BoomListLayer* ret = new BoomListLayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

