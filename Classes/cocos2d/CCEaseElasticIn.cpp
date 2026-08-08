// ============================================================
// CCEaseElasticIn.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCEaseElasticIn.h"

namespace cocos2d {

CCEaseElasticIn::~CCEaseElasticIn() {
    // 0xab6758
    this->cleanup();
}

CCEaseElasticIn::~CCEaseElasticIn() {
    // 0xab6744
    this->cleanup();
}

CCEaseElasticIn::~CCEaseElasticIn() {
    // 0xab6744
    this->cleanup();
}

void CCEaseElasticIn::copyWithZone(cocos2d::CCZone*) {
    // 0xab898c
    // TODO: Implement
}

void CCEaseElasticIn::create(cocos2d::CCActionInterval*) {
    // 0xab8cd0
    CCEaseElasticIn* ret = new CCEaseElasticIn();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCEaseElasticIn::create(cocos2d::CCActionInterval*, float) {
    // 0xab8c2c
    CCEaseElasticIn* ret = new CCEaseElasticIn();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCEaseElasticIn::update(float) {
    // 0xab6cd0
    // Game update loop — called every frame
    // TODO: Implement game logic update
}

void CCEaseElasticIn::reverse() {
    // 0xab8db4
    // TODO: Implement
}

} // namespace cocos2d
