// ============================================================
// SetupSpawnParticlePopup.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "SetupSpawnParticlePopup.h"

SetupSpawnParticlePopup::~SetupSpawnParticlePopup() {
    // 0xa434e0
    this->cleanup();
}

SetupSpawnParticlePopup::~SetupSpawnParticlePopup() {
    // 0xa42db8
    this->cleanup();
}

SetupSpawnParticlePopup::~SetupSpawnParticlePopup() {
    // 0xa42db8
    this->cleanup();
}

void SetupSpawnParticlePopup::init(EffectGameObject*, cocos2d::CCArray*) {
    // 0xa455d8
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupSpawnParticlePopup::create(EffectGameObject*, cocos2d::CCArray*) {
    // 0xa46344
    SetupSpawnParticlePopup* ret = new SetupSpawnParticlePopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

