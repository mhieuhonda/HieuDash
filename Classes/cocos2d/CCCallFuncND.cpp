// ============================================================
// CCCallFuncND.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCCallFuncND.h"

namespace cocos2d {

CCCallFuncND::~CCCallFuncND() {
    // 0xabd54c
    this->cleanup();
}

CCCallFuncND::~CCCallFuncND() {
    // 0xabd530
    this->cleanup();
}

CCCallFuncND::~CCCallFuncND() {
    // 0xabd530
    this->cleanup();
}

void CCCallFuncND::copyWithZone(cocos2d::CCZone*) {
    // 0xabdce0
    // TODO: Implement
}

void CCCallFuncND::initWithTarget(cocos2d::CCObject*, void (cocos2d::CCObject::*)(cocos2d::CCNode*, void*), void*) {
    // 0xabd0f4
    // TODO: Implement
}

void CCCallFuncND::getClassTypeInfo() {
    // 0xabd684
    // TODO: Implement
}

void CCCallFuncND::create(cocos2d::CCObject*, void (cocos2d::CCObject::*)(cocos2d::CCNode*, void*), void*) {
    // 0xabe5c8
    CCCallFuncND* ret = new CCCallFuncND();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCCallFuncND::execute() {
    // 0xabcfa0
    // TODO: Implement
}

} // namespace cocos2d
