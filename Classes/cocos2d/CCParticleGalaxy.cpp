// ============================================================
// CCParticleGalaxy.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCParticleGalaxy.h"

namespace cocos2d {

CCParticleGalaxy::~CCParticleGalaxy() {
    // 0xafc3e0
    this->cleanup();
}

CCParticleGalaxy::~CCParticleGalaxy() {
    // 0xafc3c4
    this->cleanup();
}

CCParticleGalaxy::~CCParticleGalaxy() {
    // 0xafc3c4
    this->cleanup();
}

void CCParticleGalaxy::initWithTotalParticles(unsigned int) {
    // 0xafae64
    // TODO: Implement
}

void CCParticleGalaxy::createWithTotalParticles(unsigned int) {
    // 0xafc8d8
    // TODO: Implement
}

void CCParticleGalaxy::init() {
    // 0xafa6c0
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void CCParticleGalaxy::create() {
    // 0xafc854
    CCParticleGalaxy* ret = new CCParticleGalaxy();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

} // namespace cocos2d
