// ============================================================
// CCCallFuncN.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCCallFuncN.h"

namespace cocos2d {

CCCallFuncN::~CCCallFuncN() {
    // 0xabd4f4
    this->cleanup();
}

CCCallFuncN::~CCCallFuncN() {
    // 0xabd4d8
    this->cleanup();
}

CCCallFuncN::~CCCallFuncN() {
    // 0xabd4d8
    this->cleanup();
}

void CCCallFuncN::copyWithZone(cocos2d::CCZone*) {
    // 0xabdbfc
    // TODO: Implement
}

void CCCallFuncN::initWithTarget(cocos2d::CCObject*, void (cocos2d::CCObject::*)(cocos2d::CCNode*)) {
    // 0xabd0bc
    // TODO: Implement
}

void CCCallFuncN::getClassTypeInfo() {
    // 0xabd7e4
    // TODO: Implement
}

void CCCallFuncN::create(cocos2d::CCObject*, void (cocos2d::CCObject::*)(cocos2d::CCNode*)) {
    // 0xabe4c4
    CCCallFuncN* ret = new CCCallFuncN();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCCallFuncN::create(int) {
    // 0xabe568
    CCCallFuncN* ret = new CCCallFuncN();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCCallFuncN::execute() {
    // 0xabd604
    // TODO: Implement
}

} // namespace cocos2d
