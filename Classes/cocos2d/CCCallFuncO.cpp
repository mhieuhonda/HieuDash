// ============================================================
// CCCallFuncO.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCCallFuncO.h"

namespace cocos2d {

CCCallFuncO::CCCallFuncO() {
    // 0xabe6a4
}

CCCallFuncO::CCCallFuncO() {
    // 0xabe6a4
}

CCCallFuncO::~CCCallFuncO() {
    // 0xabd4b4
    this->cleanup();
}

CCCallFuncO::~CCCallFuncO() {
    // 0xabd470
    this->cleanup();
}

CCCallFuncO::~CCCallFuncO() {
    // 0xabd470
    this->cleanup();
}

void CCCallFuncO::copyWithZone(cocos2d::CCZone*) {
    // 0xabe6f0
    // TODO: Implement
}

void CCCallFuncO::initWithTarget(cocos2d::CCObject*, void (cocos2d::CCObject::*)(cocos2d::CCObject*), cocos2d::CCObject*) {
    // 0xabd138
    // TODO: Implement
}

void CCCallFuncO::getClassTypeInfo() {
    // 0xabd734
    // TODO: Implement
}

void CCCallFuncO::create(cocos2d::CCObject*, void (cocos2d::CCObject::*)(cocos2d::CCObject*), cocos2d::CCObject*) {
    // 0xabe7b4
    CCCallFuncO* ret = new CCCallFuncO();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCCallFuncO::execute() {
    // 0xabcff8
    // TODO: Implement
}

} // namespace cocos2d
