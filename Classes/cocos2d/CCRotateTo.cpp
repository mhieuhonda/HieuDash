// ============================================================
// CCRotateTo.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCRotateTo.h"

namespace cocos2d {

CCRotateTo::~CCRotateTo() {
    // 0xabfa20
    this->cleanup();
}

CCRotateTo::~CCRotateTo() {
    // 0xabfa0c
    this->cleanup();
}

CCRotateTo::~CCRotateTo() {
    // 0xabfa0c
    this->cleanup();
}

void CCRotateTo::copyWithZone(cocos2d::CCZone*) {
    // 0xac117c
    // TODO: Implement
}

void CCRotateTo::startWithTarget(cocos2d::CCNode*) {
    // 0xac00b8
    // TODO: Implement
}

void CCRotateTo::initWithDuration(float, float) {
    // 0xac1df0
    // TODO: Implement
}

void CCRotateTo::initWithDuration(float, float, float) {
    // 0xac148c
    // TODO: Implement
}

void CCRotateTo::create(float, float) {
    // 0xac1e28
    CCRotateTo* ret = new CCRotateTo();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCRotateTo::create(float, float, float) {
    // 0xac1eac
    CCRotateTo* ret = new CCRotateTo();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCRotateTo::update(float) {
    // 0xabebd0
    // Game update loop — called every frame
    // TODO: Implement game logic update
}

} // namespace cocos2d
