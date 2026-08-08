// ============================================================
// CCShatteredTiles3D.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCShatteredTiles3D.h"

namespace cocos2d {

CCShatteredTiles3D::~CCShatteredTiles3D() {
    // 0xac794c
    this->cleanup();
}

CCShatteredTiles3D::~CCShatteredTiles3D() {
    // 0xac7938
    this->cleanup();
}

CCShatteredTiles3D::~CCShatteredTiles3D() {
    // 0xac7938
    this->cleanup();
}

void CCShatteredTiles3D::copyWithZone(cocos2d::CCZone*) {
    // 0xac6a64
    // TODO: Implement
}

void CCShatteredTiles3D::initWithDuration(float, cocos2d::CCSize const&, int, bool) {
    // 0xac6858
    // TODO: Implement
}

void CCShatteredTiles3D::create(float, cocos2d::CCSize const&, int, bool) {
    // 0xac8708
    CCShatteredTiles3D* ret = new CCShatteredTiles3D();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCShatteredTiles3D::update(float) {
    // 0xac833c
    // Game update loop — called every frame
    // TODO: Implement game logic update
}

} // namespace cocos2d
