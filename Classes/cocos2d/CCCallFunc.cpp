// ============================================================
// CCCallFunc.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCCallFunc.h"

namespace cocos2d {

CCCallFunc::~CCCallFunc() {
    // 0xabd44c
    this->cleanup();
}

CCCallFunc::~CCCallFunc() {
    // 0xabd3d8
    this->cleanup();
}

CCCallFunc::~CCCallFunc() {
    // 0xabd3d8
    this->cleanup();
}

void CCCallFunc::copyWithZone(cocos2d::CCZone*) {
    // 0xabdb0c
    // TODO: Implement
}

void CCCallFunc::initWithTarget(cocos2d::CCObject*) {
    // 0xabd07c
    // TODO: Implement
}

void CCCallFunc::create(cocos2d::CCObject*, void (cocos2d::CCObject::*)()) {
    // 0xabe3c4
    CCCallFunc* ret = new CCCallFunc();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCCallFunc::create(int) {
    // 0xabe46c
    CCCallFunc* ret = new CCCallFunc();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCCallFunc::update(float) {
    // 0xabcf84
    // Game update loop — called every frame
    // TODO: Implement game logic update
}

void CCCallFunc::execute() {
    // 0xabd588
    // TODO: Implement
}

} // namespace cocos2d
