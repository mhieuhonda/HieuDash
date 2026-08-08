// ============================================================
// CCLabelAtlas.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCLabelAtlas.h"

namespace cocos2d {

CCLabelAtlas::~CCLabelAtlas() {
    // 0xae1a2c
    this->cleanup();
}

CCLabelAtlas::~CCLabelAtlas() {
    // 0xae1944
    this->cleanup();
}

CCLabelAtlas::~CCLabelAtlas() {
    // 0xae1944
    this->cleanup();
}

void CCLabelAtlas::initWithString(char const*, cocos2d::CCTexture2D*, unsigned int, unsigned int, unsigned int) {
    // 0xae1b1c
    // TODO: Implement
}

void CCLabelAtlas::initWithString(char const*, char const*) {
    // 0xae1d04
    // TODO: Implement
}

void CCLabelAtlas::initWithString(char const*, char const*, unsigned int, unsigned int, unsigned int) {
    // 0xae1bac
    // TODO: Implement
}

void CCLabelAtlas::updateAtlasValues() {
    // 0xae15d0
    // TODO: Implement
}

void CCLabelAtlas::create(char const*, char const*) {
    // 0xae2298
    CCLabelAtlas* ret = new CCLabelAtlas();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCLabelAtlas::create(char const*, char const*, unsigned int, unsigned int, unsigned int) {
    // 0xae1c08
    CCLabelAtlas* ret = new CCLabelAtlas();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCLabelAtlas::getString() {
    // 0xae15c0
    // TODO: Implement
}

void CCLabelAtlas::setString(char const*) {
    // 0xae1830
    // TODO: Set m_string
}

} // namespace cocos2d
