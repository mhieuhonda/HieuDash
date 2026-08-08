// ============================================================
// CCGridBase.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCGridBase.h"

namespace cocos2d {

CCGridBase::~CCGridBase() {
    // 0xadb42c
    this->cleanup();
}

CCGridBase::~CCGridBase() {
    // 0xadb304
    this->cleanup();
}

CCGridBase::~CCGridBase() {
    // 0xadb304
    this->cleanup();
}

void CCGridBase::beforeDraw() {
    // 0xadc304
    // Render/draw logic
    // TODO: Implement rendering
}

void CCGridBase::initWithSize(cocos2d::CCSize const&) {
    // 0xadc03c
    // TODO: Implement
}

void CCGridBase::initWithSize(cocos2d::CCSize const&, cocos2d::CCTexture2D*, bool) {
    // 0xadbe78
    // TODO: Implement
}

void CCGridBase::set2DProjection() {
    // 0xadc258
    // TODO: Implement
}

void CCGridBase::setTextureFlipped(bool) {
    // 0xadc228
    // TODO: Implement
}

void CCGridBase::calculateVertexPoints() {
    // 0xadb300
    // TODO: Implement
}

void CCGridBase::blit() {
    // 0xadb2f8
    // TODO: Implement
}

void CCGridBase::reuse() {
    // 0xadb2fc
    // TODO: Implement
}

void CCGridBase::create(cocos2d::CCSize const&) {
    // 0xadc154
    CCGridBase* ret = new CCGridBase();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCGridBase::create(cocos2d::CCSize const&, cocos2d::CCTexture2D*, bool) {
    // 0xadbf78
    CCGridBase* ret = new CCGridBase();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCGridBase::afterDraw(cocos2d::CCNode*) {
    // 0xadc33c
    // Render/draw logic
    // TODO: Implement rendering
}

void CCGridBase::setActive(bool) {
    // 0xadc1fc
    // TODO: Set m_active
}

} // namespace cocos2d
