// ============================================================
// StatsLayer.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "StatsLayer.h"

StatsLayer::~StatsLayer() {
    // 0x7d9f70
    this->cleanup();
}

StatsLayer::~StatsLayer() {
    // 0x7d9f1c
    this->cleanup();
}

StatsLayer::~StatsLayer() {
    // 0x7d9f1c
    this->cleanup();
}

void StatsLayer::customSetup() {
    // 0x7d9f9c
    // TODO: Implement
}

void StatsLayer::create() {
    // 0x7da3b4
    StatsLayer* ret = new StatsLayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

