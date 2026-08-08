// ============================================================
// CCEaseElasticInOut.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCEaseElasticInOut.h"

namespace cocos2d {

CCEaseElasticInOut::~CCEaseElasticInOut() {
    // 0xab66c8
    this->cleanup();
}

CCEaseElasticInOut::~CCEaseElasticInOut() {
    // 0xab66b4
    this->cleanup();
}

CCEaseElasticInOut::~CCEaseElasticInOut() {
    // 0xab66b4
    this->cleanup();
}

void CCEaseElasticInOut::copyWithZone(cocos2d::CCZone*) {
    // 0xab8b4c
    // TODO: Implement
}

void CCEaseElasticInOut::create(cocos2d::CCActionInterval*) {
    // 0xab8e98
    CCEaseElasticInOut* ret = new CCEaseElasticInOut();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCEaseElasticInOut::create(cocos2d::CCActionInterval*, float) {
    // 0xab8df4
    CCEaseElasticInOut* ret = new CCEaseElasticInOut();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCEaseElasticInOut::update(float) {
    // 0xab6e08
    // Game update loop — called every frame
    // TODO: Implement game logic update
}

void CCEaseElasticInOut::reverse() {
    // 0xab8ea4
    // TODO: Implement
}

} // namespace cocos2d
