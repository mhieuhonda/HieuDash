// ============================================================
// CCParticleSun.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCParticleSun.h"

namespace cocos2d {

CCParticleSun::~CCParticleSun() {
    // 0xafc438
    this->cleanup();
}

CCParticleSun::~CCParticleSun() {
    // 0xafc41c
    this->cleanup();
}

CCParticleSun::~CCParticleSun() {
    // 0xafc41c
    this->cleanup();
}

void CCParticleSun::initWithTotalParticles(unsigned int) {
    // 0xafac38
    // TODO: Implement
}

void CCParticleSun::createWithTotalParticles(unsigned int) {
    // 0xafc7c8
    // TODO: Implement
}

void CCParticleSun::init() {
    // 0xafa6a0
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void CCParticleSun::create() {
    // 0xafc744
    CCParticleSun* ret = new CCParticleSun();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

} // namespace cocos2d
