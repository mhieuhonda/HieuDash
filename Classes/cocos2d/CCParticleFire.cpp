// ============================================================
// CCParticleFire.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCParticleFire.h"

namespace cocos2d {

CCParticleFire::~CCParticleFire() {
    // 0xafc4e8
    this->cleanup();
}

CCParticleFire::~CCParticleFire() {
    // 0xafc4cc
    this->cleanup();
}

CCParticleFire::~CCParticleFire() {
    // 0xafc4cc
    this->cleanup();
}

void CCParticleFire::initWithTotalParticles(unsigned int) {
    // 0xafa874
    // TODO: Implement
}

void CCParticleFire::createWithTotalParticles(unsigned int) {
    // 0xafc5a8
    // TODO: Implement
}

void CCParticleFire::init() {
    // 0xafa660
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void CCParticleFire::create() {
    // 0xafc524
    CCParticleFire* ret = new CCParticleFire();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

} // namespace cocos2d
