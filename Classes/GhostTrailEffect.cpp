// ============================================================
// GhostTrailEffect.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "GhostTrailEffect.h"

GhostTrailEffect::~GhostTrailEffect() {
    // 0x5a58c0
    this->cleanup();
}

GhostTrailEffect::~GhostTrailEffect() {
    // 0x5a58ac
    this->cleanup();
}

GhostTrailEffect::~GhostTrailEffect() {
    // 0x5a58ac
    this->cleanup();
}

void GhostTrailEffect::runWithTarget(cocos2d::CCSprite*, float, float, float, float, bool) {
    // 0x5a5e94
    // TODO: Implement
}

void GhostTrailEffect::trailSnapshot(float) {
    // 0x5a58e4
    // TODO: Implement
}

void GhostTrailEffect::doBlendAdditive() {
    // 0x5a5f44
    // TODO: Implement
}

void GhostTrailEffect::draw() {
    // 0x5a58a8
    // Render/draw logic
    // TODO: Implement rendering
}

void GhostTrailEffect::init() {
    // 0x5a5848
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void GhostTrailEffect::create() {
    // 0x5a5db8
    GhostTrailEffect* ret = new GhostTrailEffect();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void GhostTrailEffect::stopTrail() {
    // 0x5a5d64
    // TODO: Implement
}

