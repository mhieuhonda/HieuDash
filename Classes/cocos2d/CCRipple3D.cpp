// ============================================================
// CCRipple3D.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCRipple3D.h"

namespace cocos2d {

CCRipple3D::~CCRipple3D() {
    // 0xabb85c
    this->cleanup();
}

CCRipple3D::~CCRipple3D() {
    // 0xabb848
    this->cleanup();
}

CCRipple3D::~CCRipple3D() {
    // 0xabb848
    this->cleanup();
}

void CCRipple3D::setPosition(cocos2d::CCPoint const&) {
    // 0xabc254
    // TODO: Set m_position
}

void CCRipple3D::copyWithZone(cocos2d::CCZone*) {
    // 0xabc3c8
    // TODO: Implement
}

void CCRipple3D::initWithDuration(float, cocos2d::CCSize const&, cocos2d::CCPoint const&, float, unsigned int, float) {
    // 0xabc25c
    // TODO: Implement
}

void CCRipple3D::create(float, cocos2d::CCSize const&, cocos2d::CCPoint const&, float, unsigned int, float) {
    // 0xabc2d0
    CCRipple3D* ret = new CCRipple3D();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCRipple3D::update(float) {
    // 0xabb190
    // Game update loop — called every frame
    // TODO: Implement game logic update
}

} // namespace cocos2d
