// ============================================================
// CCMenuItemAtlasFont.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCMenuItemAtlasFont.h"

namespace cocos2d {

CCMenuItemAtlasFont::~CCMenuItemAtlasFont() {
    // 0xaf50b8
    this->cleanup();
}

CCMenuItemAtlasFont::~CCMenuItemAtlasFont() {
    // 0xaf509c
    this->cleanup();
}

CCMenuItemAtlasFont::~CCMenuItemAtlasFont() {
    // 0xaf509c
    this->cleanup();
}

void CCMenuItemAtlasFont::initWithString(char const*, char const*, int, int, char, cocos2d::CCObject*, void (cocos2d::CCObject::*)(cocos2d::CCObject*)) {
    // 0xaf58f8
    // TODO: Implement
}

void CCMenuItemAtlasFont::create(char const*, char const*, int, int, char) {
    // 0xaf5acc
    CCMenuItemAtlasFont* ret = new CCMenuItemAtlasFont();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCMenuItemAtlasFont::create(char const*, char const*, int, int, char, cocos2d::CCObject*, void (cocos2d::CCObject::*)(cocos2d::CCObject*)) {
    // 0xaf59f0
    CCMenuItemAtlasFont* ret = new CCMenuItemAtlasFont();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

} // namespace cocos2d
