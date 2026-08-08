// ============================================================
// CCEaseElasticOut.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCEaseElasticOut.h"

namespace cocos2d {

CCEaseElasticOut::~CCEaseElasticOut() {
    // 0xab6710
    this->cleanup();
}

CCEaseElasticOut::~CCEaseElasticOut() {
    // 0xab66fc
    this->cleanup();
}

CCEaseElasticOut::~CCEaseElasticOut() {
    // 0xab66fc
    this->cleanup();
}

void CCEaseElasticOut::copyWithZone(cocos2d::CCZone*) {
    // 0xab8a6c
    // TODO: Implement
}

void CCEaseElasticOut::create(cocos2d::CCActionInterval*) {
    // 0xab8de8
    CCEaseElasticOut* ret = new CCEaseElasticOut();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCEaseElasticOut::create(cocos2d::CCActionInterval*, float) {
    // 0xab8d10
    CCEaseElasticOut* ret = new CCEaseElasticOut();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCEaseElasticOut::update(float) {
    // 0xab6d6c
    // Game update loop — called every frame
    // TODO: Implement game logic update
}

void CCEaseElasticOut::reverse() {
    // 0xab8cdc
    // TODO: Implement
}

} // namespace cocos2d
