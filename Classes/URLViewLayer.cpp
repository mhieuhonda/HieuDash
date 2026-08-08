// ============================================================
// URLViewLayer.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "URLViewLayer.h"

URLViewLayer::~URLViewLayer() {
    // 0x8c39cc
    this->cleanup();
}

URLViewLayer::~URLViewLayer() {
    // 0x8c3950
    this->cleanup();
}

URLViewLayer::~URLViewLayer() {
    // 0x8c3950
    this->cleanup();
}

void URLViewLayer::init(std::string, cocos2d::CCArray*) {
    // 0x8d9574
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void URLViewLayer::create(std::string, cocos2d::CCArray*) {
    // 0x8d9654
    URLViewLayer* ret = new URLViewLayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

