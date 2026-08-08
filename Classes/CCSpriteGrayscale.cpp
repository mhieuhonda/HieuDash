// ============================================================
// CCSpriteGrayscale.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCSpriteGrayscale.h"

CCSpriteGrayscale::~CCSpriteGrayscale() {
    // 0x5bc21c
    this->cleanup();
}

CCSpriteGrayscale::~CCSpriteGrayscale() {
    // 0x5bc1f8
    this->cleanup();
}

CCSpriteGrayscale::~CCSpriteGrayscale() {
    // 0x5bc1f8
    this->cleanup();
}

void CCSpriteGrayscale::shaderBody() {
    // 0x5bbfc0
    // TODO: Implement
}

void CCSpriteGrayscale::getShaderName() {
    // 0x5bc028
    // TODO: Implement
}

void CCSpriteGrayscale::createWithTexture(cocos2d::CCTexture2D*) {
    // 0x5bd1f8
    // TODO: Implement
}

void CCSpriteGrayscale::createWithTexture(cocos2d::CCTexture2D*, cocos2d::CCRect const&, bool) {
    // 0x5bd2c4
    // TODO: Implement
}

void CCSpriteGrayscale::createWithSpriteFrame(cocos2d::CCSpriteFrame*) {
    // 0x5bd3ac
    // TODO: Implement
}

void CCSpriteGrayscale::createWithSpriteFrameName(std::string const&) {
    // 0x5bd494
    // TODO: Implement
}

void CCSpriteGrayscale::create(std::string const&) {
    // 0x5bd058
    CCSpriteGrayscale* ret = new CCSpriteGrayscale();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCSpriteGrayscale::create(std::string const&, cocos2d::CCRect const&) {
    // 0x5bd124
    CCSpriteGrayscale* ret = new CCSpriteGrayscale();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

