// ============================================================
// CCParticleSpiral.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCParticleSpiral.h"

namespace cocos2d {

CCParticleSpiral::~CCParticleSpiral() {
    // 0xafc2d8
    this->cleanup();
}

CCParticleSpiral::~CCParticleSpiral() {
    // 0xafc2bc
    this->cleanup();
}

CCParticleSpiral::~CCParticleSpiral() {
    // 0xafc2bc
    this->cleanup();
}

void CCParticleSpiral::initWithTotalParticles(unsigned int) {
    // 0xafb5a0
    // TODO: Implement
}

void CCParticleSpiral::createWithTotalParticles(unsigned int) {
    // 0xafcc08
    // TODO: Implement
}

void CCParticleSpiral::init() {
    // 0xafa720
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void CCParticleSpiral::create() {
    // 0xafcb84
    CCParticleSpiral* ret = new CCParticleSpiral();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

} // namespace cocos2d
