// ============================================================
// CCSpritePart.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCSpritePart.h"

CCSpritePart::~CCSpritePart() {
    // 0x576ee4
    this->cleanup();
}

CCSpritePart::~CCSpritePart() {
    // 0x576e1c
    this->cleanup();
}

CCSpritePart::~CCSpritePart() {
    // 0x576e1c
    this->cleanup();
}

void CCSpritePart::setVisible(bool) {
    // 0x576e08
    // TODO: Set m_visible
}

void CCSpritePart::frameChanged(std::string) {
    // 0x577604
    // TODO: Implement
}

void CCSpritePart::getBeingUsed() {
    // 0x5775c8
    // TODO: Implement
}

void CCSpritePart::hideInactive() {
    // 0x5775a0
    // TODO: Implement
}

void CCSpritePart::setBeingUsed(bool) {
    // 0x5775d0
    // TODO: Implement
}

void CCSpritePart::resetTextureRect() {
    // 0x5775e0
    // TODO: Implement
}

void CCSpritePart::markAsNotBeingUsed() {
    // 0x5775d8
    // TODO: Implement
}

void CCSpritePart::updateDisplayFrame(std::string) {
    // 0x577f18
    // TODO: Implement
}

void CCSpritePart::createWithSpriteFrameName(char const*) {
    // 0x577334
    // TODO: Implement
}

void CCSpritePart::create(cocos2d::CCTexture2D*) {
    // 0x5774d4
    CCSpritePart* ret = new CCSpritePart();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

