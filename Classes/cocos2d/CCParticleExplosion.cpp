// ============================================================
// CCParticleExplosion.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCParticleExplosion.h"

namespace cocos2d {

CCParticleExplosion::~CCParticleExplosion() {
    // 0xafc280
    this->cleanup();
}

CCParticleExplosion::~CCParticleExplosion() {
    // 0xafc264
    this->cleanup();
}

CCParticleExplosion::~CCParticleExplosion() {
    // 0xafc264
    this->cleanup();
}

void CCParticleExplosion::initWithTotalParticles(unsigned int) {
    // 0xafb7f0
    // TODO: Implement
}

void CCParticleExplosion::createWithTotalParticles(unsigned int) {
    // 0xafcd18
    // TODO: Implement
}

void CCParticleExplosion::init() {
    // 0xafa740
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void CCParticleExplosion::create() {
    // 0xafcc94
    CCParticleExplosion* ret = new CCParticleExplosion();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

} // namespace cocos2d
