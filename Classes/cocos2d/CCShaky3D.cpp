// ============================================================
// CCShaky3D.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCShaky3D.h"

namespace cocos2d {

CCShaky3D::~CCShaky3D() {
    // 0xabb814
    this->cleanup();
}

CCShaky3D::~CCShaky3D() {
    // 0xabb800
    this->cleanup();
}

CCShaky3D::~CCShaky3D() {
    // 0xabb800
    this->cleanup();
}

void CCShaky3D::copyWithZone(cocos2d::CCZone*) {
    // 0xabc5f8
    // TODO: Implement
}

void CCShaky3D::initWithDuration(float, cocos2d::CCSize const&, int, bool) {
    // 0xabc4e4
    // TODO: Implement
}

void CCShaky3D::create(float, cocos2d::CCSize const&, int, bool) {
    // 0xabc520
    CCShaky3D* ret = new CCShaky3D();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCShaky3D::update(float) {
    // 0xabb358
    // Game update loop — called every frame
    // TODO: Implement game logic update
}

} // namespace cocos2d
