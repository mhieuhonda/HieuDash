// ============================================================
// CCParticleMeteor.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCParticleMeteor.h"

namespace cocos2d {

CCParticleMeteor::~CCParticleMeteor() {
    // 0xafc330
    this->cleanup();
}

CCParticleMeteor::~CCParticleMeteor() {
    // 0xafc314
    this->cleanup();
}

CCParticleMeteor::~CCParticleMeteor() {
    // 0xafc314
    this->cleanup();
}

void CCParticleMeteor::initWithTotalParticles(unsigned int) {
    // 0xafb32c
    // TODO: Implement
}

void CCParticleMeteor::createWithTotalParticles(unsigned int) {
    // 0xafcaf8
    // TODO: Implement
}

void CCParticleMeteor::init() {
    // 0xafa700
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void CCParticleMeteor::create() {
    // 0xafca74
    CCParticleMeteor* ret = new CCParticleMeteor();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

} // namespace cocos2d
