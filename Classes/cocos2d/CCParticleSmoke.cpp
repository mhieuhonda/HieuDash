// ============================================================
// CCParticleSmoke.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCParticleSmoke.h"

namespace cocos2d {

CCParticleSmoke::~CCParticleSmoke() {
    // 0xafc228
    this->cleanup();
}

CCParticleSmoke::~CCParticleSmoke() {
    // 0xafc20c
    this->cleanup();
}

CCParticleSmoke::~CCParticleSmoke() {
    // 0xafc20c
    this->cleanup();
}

void CCParticleSmoke::initWithTotalParticles(unsigned int) {
    // 0xafba60
    // TODO: Implement
}

void CCParticleSmoke::createWithTotalParticles(unsigned int) {
    // 0xafce28
    // TODO: Implement
}

void CCParticleSmoke::init() {
    // 0xafa760
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void CCParticleSmoke::create() {
    // 0xafcda4
    CCParticleSmoke* ret = new CCParticleSmoke();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

} // namespace cocos2d
