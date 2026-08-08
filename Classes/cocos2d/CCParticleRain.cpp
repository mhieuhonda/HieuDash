// ============================================================
// CCParticleRain.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCParticleRain.h"

namespace cocos2d {

CCParticleRain::~CCParticleRain() {
    // 0xafc178
    this->cleanup();
}

CCParticleRain::~CCParticleRain() {
    // 0xafc15c
    this->cleanup();
}

CCParticleRain::~CCParticleRain() {
    // 0xafc15c
    this->cleanup();
}

void CCParticleRain::initWithTotalParticles(unsigned int) {
    // 0xafbef8
    // TODO: Implement
}

void CCParticleRain::createWithTotalParticles(unsigned int) {
    // 0xafd048
    // TODO: Implement
}

void CCParticleRain::init() {
    // 0xafa7a0
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void CCParticleRain::create() {
    // 0xafcfc4
    CCParticleRain* ret = new CCParticleRain();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

} // namespace cocos2d
