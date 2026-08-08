// ============================================================
// CCSpriteFrame.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCSpriteFrame.h"

namespace cocos2d {

CCSpriteFrame::~CCSpriteFrame() {
    // 0xb189d8
    this->cleanup();
}

CCSpriteFrame::~CCSpriteFrame() {
    // 0xb188b4
    this->cleanup();
}

CCSpriteFrame::~CCSpriteFrame() {
    // 0xb188b4
    this->cleanup();
}

void CCSpriteFrame::getTexture() {
    // 0xb19668
    // TODO: Implement
}

void CCSpriteFrame::setTexture(cocos2d::CCTexture2D*) {
    // 0xb1954c
    // TODO: Implement
}

void CCSpriteFrame::copyWithZone(cocos2d::CCZone*) {
    // 0xb19594
    // TODO: Implement
}

void CCSpriteFrame::initWithTexture(cocos2d::CCTexture2D*, cocos2d::CCRect const&) {
    // 0xb18b90
    // TODO: Implement
}

void CCSpriteFrame::initWithTexture(cocos2d::CCTexture2D*, cocos2d::CCRect const&, bool, cocos2d::CCPoint const&, cocos2d::CCSize const&) {
    // 0xb189fc
    // TODO: Implement
}

void CCSpriteFrame::setRectInPixels(cocos2d::CCRect const&) {
    // 0xb19338
    // TODO: Implement
}

void CCSpriteFrame::createWithTexture(cocos2d::CCTexture2D*, cocos2d::CCRect const&) {
    // 0xb18c74
    // TODO: Implement
}

void CCSpriteFrame::createWithTexture(cocos2d::CCTexture2D*, cocos2d::CCRect const&, bool, cocos2d::CCPoint const&, cocos2d::CCSize const&) {
    // 0xb18d3c
    // TODO: Implement
}

void CCSpriteFrame::getOffsetInPixels() {
    // 0xb194ac
    // TODO: Implement
}

void CCSpriteFrame::setOffsetInPixels(cocos2d::CCPoint const&) {
    // 0xb194b4
    // TODO: Implement
}

void CCSpriteFrame::initWithTextureFilename(char const*, cocos2d::CCRect const&) {
    // 0xb18fcc
    // TODO: Implement
}

void CCSpriteFrame::initWithTextureFilename(char const*, cocos2d::CCRect const&, bool, cocos2d::CCPoint const&, cocos2d::CCSize const&) {
    // 0xb18e2c
    // TODO: Implement
}

void CCSpriteFrame::create(char const*, cocos2d::CCRect const&) {
    // 0xb190b0
    CCSpriteFrame* ret = new CCSpriteFrame();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCSpriteFrame::create(char const*, cocos2d::CCRect const&, bool, cocos2d::CCPoint const&, cocos2d::CCSize const&) {
    // 0xb19178
    CCSpriteFrame* ret = new CCSpriteFrame();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCSpriteFrame::setRect(cocos2d::CCRect const&) {
    // 0xb19268
    // TODO: Implement
}

void CCSpriteFrame::getOffset() {
    // 0xb1940c
    // TODO: Implement
}

void CCSpriteFrame::setOffset(cocos2d::CCPoint const&) {
    // 0xb19414
    // TODO: Implement
}

} // namespace cocos2d
