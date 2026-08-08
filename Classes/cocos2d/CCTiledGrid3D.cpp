// ============================================================
// CCTiledGrid3D.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCTiledGrid3D.h"

namespace cocos2d {

CCTiledGrid3D::CCTiledGrid3D() {
    // 0xadc668
}

CCTiledGrid3D::CCTiledGrid3D() {
    // 0xadc668
}

CCTiledGrid3D::~CCTiledGrid3D() {
    // 0xadb474
    this->cleanup();
}

CCTiledGrid3D::~CCTiledGrid3D() {
    // 0xadb3bc
    this->cleanup();
}

CCTiledGrid3D::~CCTiledGrid3D() {
    // 0xadb3bc
    this->cleanup();
}

void CCTiledGrid3D::originalTile(cocos2d::CCPoint const&) {
    // 0xadc80c
    // TODO: Implement
}

void CCTiledGrid3D::calculateVertexPoints() {
    // 0xadb5e8
    // TODO: Implement
}

void CCTiledGrid3D::blit() {
    // 0xadb540
    // TODO: Implement
}

void CCTiledGrid3D::tile(cocos2d::CCPoint const&) {
    // 0xadc85c
    // TODO: Implement
}

void CCTiledGrid3D::reuse() {
    // 0xadbe1c
    // TODO: Implement
}

void CCTiledGrid3D::create(cocos2d::CCSize const&) {
    // 0xadc754
    CCTiledGrid3D* ret = new CCTiledGrid3D();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCTiledGrid3D::create(cocos2d::CCSize const&, cocos2d::CCTexture2D*, bool) {
    // 0xadc6c8
    CCTiledGrid3D* ret = new CCTiledGrid3D();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCTiledGrid3D::setTile(cocos2d::CCPoint const&, cocos2d::_ccQuad3 const&) {
    // 0xadc7c4
    // TODO: Implement
}

} // namespace cocos2d
