// ============================================================
// CCWaves3D.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCWaves3D.h"

namespace cocos2d {

CCWaves3D::~CCWaves3D() {
    // 0xabb97c
    this->cleanup();
}

CCWaves3D::~CCWaves3D() {
    // 0xabb968
    this->cleanup();
}

CCWaves3D::~CCWaves3D() {
    // 0xabb968
    this->cleanup();
}

void CCWaves3D::copyWithZone(cocos2d::CCZone*) {
    // 0xabbcf8
    // TODO: Implement
}

void CCWaves3D::initWithDuration(float, cocos2d::CCSize const&, unsigned int, float) {
    // 0xabbbe0
    // TODO: Implement
}

void CCWaves3D::create(float, cocos2d::CCSize const&, unsigned int, float) {
    // 0xabbc28
    CCWaves3D* ret = new CCWaves3D();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCWaves3D::update(float) {
    // 0xaba6a4
    // Game update loop — called every frame
    // TODO: Implement game logic update
}

} // namespace cocos2d
