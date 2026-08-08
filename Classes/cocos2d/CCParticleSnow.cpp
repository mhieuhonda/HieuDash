// ============================================================
// CCParticleSnow.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCParticleSnow.h"

namespace cocos2d {

CCParticleSnow::~CCParticleSnow() {
    // 0xafc1d0
    this->cleanup();
}

CCParticleSnow::~CCParticleSnow() {
    // 0xafc1b4
    this->cleanup();
}

CCParticleSnow::~CCParticleSnow() {
    // 0xafc1b4
    this->cleanup();
}

void CCParticleSnow::initWithTotalParticles(unsigned int) {
    // 0xafbc9c
    // TODO: Implement
}

void CCParticleSnow::createWithTotalParticles(unsigned int) {
    // 0xafcf38
    // TODO: Implement
}

void CCParticleSnow::init() {
    // 0xafa780
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void CCParticleSnow::create() {
    // 0xafceb4
    CCParticleSnow* ret = new CCParticleSnow();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

} // namespace cocos2d
