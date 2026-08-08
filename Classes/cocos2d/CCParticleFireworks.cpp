// ============================================================
// CCParticleFireworks.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCParticleFireworks.h"

namespace cocos2d {

CCParticleFireworks::~CCParticleFireworks() {
    // 0xafc490
    this->cleanup();
}

CCParticleFireworks::~CCParticleFireworks() {
    // 0xafc474
    this->cleanup();
}

CCParticleFireworks::~CCParticleFireworks() {
    // 0xafc474
    this->cleanup();
}

void CCParticleFireworks::initWithTotalParticles(unsigned int) {
    // 0xafaa68
    // TODO: Implement
}

void CCParticleFireworks::createWithTotalParticles(unsigned int) {
    // 0xafc6b8
    // TODO: Implement
}

void CCParticleFireworks::init() {
    // 0xafa680
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void CCParticleFireworks::create() {
    // 0xafc634
    CCParticleFireworks* ret = new CCParticleFireworks();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

} // namespace cocos2d
