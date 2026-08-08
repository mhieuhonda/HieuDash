// ============================================================
// CCMenuItemFont.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCMenuItemFont.h"

namespace cocos2d {

CCMenuItemFont::~CCMenuItemFont() {
    // 0xaf53f8
    this->cleanup();
}

CCMenuItemFont::~CCMenuItemFont() {
    // 0xaf5338
    this->cleanup();
}

CCMenuItemFont::~CCMenuItemFont() {
    // 0xaf5338
    this->cleanup();
}

void CCMenuItemFont::fontNameObj() {
    // 0xaf5e74
    // TODO: Implement
}

void CCMenuItemFont::fontSizeObj() {
    // 0xaf5e30
    // TODO: Implement
}

void CCMenuItemFont::setFontName(char const*) {
    // 0xaf5b04
    // TODO: Set m_fontName
}

void CCMenuItemFont::setFontSize(unsigned int) {
    // 0xaf5aec
    // TODO: Implement
}

void CCMenuItemFont::recreateLabel() {
    // 0xaf5db4
    // TODO: Implement
}

void CCMenuItemFont::initWithString(char const*, cocos2d::CCObject*, void (cocos2d::CCObject::*)(cocos2d::CCObject*)) {
    // 0xaf5b78
    // TODO: Implement
}

void CCMenuItemFont::setFontNameObj(char const*) {
    // 0xaf5e38
    // TODO: Set m_fontNameObj
}

void CCMenuItemFont::setFontSizeObj(unsigned int) {
    // 0xaf5e28
    // TODO: Implement
}

void CCMenuItemFont::create(char const*) {
    // 0xaf5ce0
    CCMenuItemFont* ret = new CCMenuItemFont();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCMenuItemFont::create(char const*, cocos2d::CCObject*, void (cocos2d::CCObject::*)(cocos2d::CCObject*)) {
    // 0xaf5bf8
    CCMenuItemFont* ret = new CCMenuItemFont();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCMenuItemFont::fontName() {
    // 0xaf5b6c
    // TODO: Implement
}

void CCMenuItemFont::fontSize() {
    // 0xaf5af8
    // TODO: Implement
}

} // namespace cocos2d
