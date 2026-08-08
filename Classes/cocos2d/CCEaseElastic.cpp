// ============================================================
// CCEaseElastic.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCEaseElastic.h"

namespace cocos2d {

CCEaseElastic::~CCEaseElastic() {
    // 0xab6680
    this->cleanup();
}

CCEaseElastic::~CCEaseElastic() {
    // 0xab666c
    this->cleanup();
}

CCEaseElastic::~CCEaseElastic() {
    // 0xab666c
    this->cleanup();
}

void CCEaseElastic::copyWithZone(cocos2d::CCZone*) {
    // 0xab88ac
    // TODO: Implement
}

void CCEaseElastic::initWithAction(cocos2d::CCActionInterval*, float) {
    // 0xab87c8
    // TODO: Implement
}

void CCEaseElastic::create(cocos2d::CCActionInterval*) {
    // 0xab88a0
    CCEaseElastic* ret = new CCEaseElastic();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCEaseElastic::create(cocos2d::CCActionInterval*, float) {
    // 0xab87fc
    CCEaseElastic* ret = new CCEaseElastic();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCEaseElastic::reverse() {
    // 0xab61cc
    // TODO: Implement
}

} // namespace cocos2d
