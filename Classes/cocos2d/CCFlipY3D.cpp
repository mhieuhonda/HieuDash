// ============================================================
// CCFlipY3D.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCFlipY3D.h"

namespace cocos2d {

CCFlipY3D::~CCFlipY3D() {
    // 0xabb934
    this->cleanup();
}

CCFlipY3D::~CCFlipY3D() {
    // 0xabb920
    this->cleanup();
}

CCFlipY3D::~CCFlipY3D() {
    // 0xabb920
    this->cleanup();
}

void CCFlipY3D::copyWithZone(cocos2d::CCZone*) {
    // 0xaba5a4
    // TODO: Implement
}

void CCFlipY3D::create(float) {
    // 0xabbeac
    CCFlipY3D* ret = new CCFlipY3D();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCFlipY3D::update(float) {
    // 0xabaeb8
    // Game update loop — called every frame
    // TODO: Implement game logic update
}

} // namespace cocos2d
