// ============================================================
// CCRemoveSelf.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCRemoveSelf.h"

namespace cocos2d {

CCRemoveSelf::~CCRemoveSelf() {
    // 0xabd2cc
    this->cleanup();
}

CCRemoveSelf::~CCRemoveSelf() {
    // 0xabd2b8
    this->cleanup();
}

CCRemoveSelf::~CCRemoveSelf() {
    // 0xabd2b8
    this->cleanup();
}

void CCRemoveSelf::copyWithZone(cocos2d::CCZone*) {
    // 0xabdf34
    // TODO: Implement
}

void CCRemoveSelf::init(bool) {
    // 0xabdec4
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void CCRemoveSelf::create(bool) {
    // 0xabded0
    CCRemoveSelf* ret = new CCRemoveSelf();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCRemoveSelf::update(float) {
    // 0xabcf34
    // Game update loop — called every frame
    // TODO: Implement game logic update
}

void CCRemoveSelf::reverse() {
    // 0xabdf2c
    // TODO: Implement
}

} // namespace cocos2d
