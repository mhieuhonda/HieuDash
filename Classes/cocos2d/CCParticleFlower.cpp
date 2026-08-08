// ============================================================
// CCParticleFlower.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCParticleFlower.h"

namespace cocos2d {

CCParticleFlower::~CCParticleFlower() {
    // 0xafc388
    this->cleanup();
}

CCParticleFlower::~CCParticleFlower() {
    // 0xafc36c
    this->cleanup();
}

CCParticleFlower::~CCParticleFlower() {
    // 0xafc36c
    this->cleanup();
}

void CCParticleFlower::initWithTotalParticles(unsigned int) {
    // 0xafb0d0
    // TODO: Implement
}

void CCParticleFlower::createWithTotalParticles(unsigned int) {
    // 0xafc9e8
    // TODO: Implement
}

void CCParticleFlower::init() {
    // 0xafa6e0
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void CCParticleFlower::create() {
    // 0xafc964
    CCParticleFlower* ret = new CCParticleFlower();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

} // namespace cocos2d
