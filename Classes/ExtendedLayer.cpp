// ============================================================
// ExtendedLayer.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "ExtendedLayer.h"

ExtendedLayer::~ExtendedLayer() {
    // 0x56cf70
    this->cleanup();
}

ExtendedLayer::~ExtendedLayer() {
    // 0x56cf2c
    this->cleanup();
}

ExtendedLayer::~ExtendedLayer() {
    // 0x56cf2c
    this->cleanup();
}

void ExtendedLayer::setPosition(cocos2d::CCPoint const&) {
    // 0x56d14c
    // TODO: Set m_position
}

void ExtendedLayer::init() {
    // 0x56cfd4
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void ExtendedLayer::create() {
    // 0x56e8e4
    ExtendedLayer* ret = new ExtendedLayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

