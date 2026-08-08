// ============================================================
// GJGradientLayer.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "GJGradientLayer.h"

GJGradientLayer::~GJGradientLayer() {
    // 0x8558d4
    this->cleanup();
}

GJGradientLayer::~GJGradientLayer() {
    // 0x855880
    this->cleanup();
}

GJGradientLayer::~GJGradientLayer() {
    // 0x855880
    this->cleanup();
}

void GJGradientLayer::init() {
    // 0x8559dc
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void GJGradientLayer::create() {
    // 0x86c014
    GJGradientLayer* ret = new GJGradientLayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

