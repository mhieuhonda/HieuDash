// ============================================================
// GJFlyGroundLayer.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "GJFlyGroundLayer.h"

GJFlyGroundLayer::~GJFlyGroundLayer() {
    // 0x7eb698
    this->cleanup();
}

GJFlyGroundLayer::~GJFlyGroundLayer() {
    // 0x7eb580
    this->cleanup();
}

GJFlyGroundLayer::~GJFlyGroundLayer() {
    // 0x7eb580
    this->cleanup();
}

void GJFlyGroundLayer::init() {
    // 0x7eb6fc
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void GJFlyGroundLayer::create() {
    // 0x7ec8cc
    GJFlyGroundLayer* ret = new GJFlyGroundLayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

