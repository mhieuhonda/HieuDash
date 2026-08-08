// ============================================================
// CCGrid3D.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCGrid3D.h"

namespace cocos2d {

CCGrid3D::CCGrid3D() {
    // 0xadc43c
}

CCGrid3D::CCGrid3D() {
    // 0xadc43c
}

CCGrid3D::~CCGrid3D() {
    // 0xadb450
    this->cleanup();
}

CCGrid3D::~CCGrid3D() {
    // 0xadb34c
    this->cleanup();
}

CCGrid3D::~CCGrid3D() {
    // 0xadb34c
    this->cleanup();
}

void CCGrid3D::originalVertex(cocos2d::CCPoint const&) {
    // 0xadc5dc
    // TODO: Implement
}

void CCGrid3D::calculateVertexPoints() {
    // 0xadb854
    // TODO: Implement
}

void CCGrid3D::blit() {
    // 0xadb498
    // TODO: Implement
}

void CCGrid3D::reuse() {
    // 0xadbdb8
    // TODO: Implement
}

void CCGrid3D::create(cocos2d::CCSize const&) {
    // 0xadc528
    CCGrid3D* ret = new CCGrid3D();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCGrid3D::create(cocos2d::CCSize const&, cocos2d::CCTexture2D*, bool) {
    // 0xadc49c
    CCGrid3D* ret = new CCGrid3D();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCGrid3D::vertex(cocos2d::CCPoint const&) {
    // 0xadc598
    // TODO: Implement
}

void CCGrid3D::setVertex(cocos2d::CCPoint const&, cocos2d::_ccVertex3F const&) {
    // 0xadc620
    // TODO: Implement
}

} // namespace cocos2d
