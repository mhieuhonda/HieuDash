// ============================================================
// CCTransitionFade.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCTransitionFade.h"

namespace cocos2d {

CCTransitionFade::CCTransitionFade() {
    // 0xaee968
}

CCTransitionFade::CCTransitionFade() {
    // 0xaee968
}

CCTransitionFade::~CCTransitionFade() {
    // 0xaed088
    this->cleanup();
}

CCTransitionFade::~CCTransitionFade() {
    // 0xaeccf0
    this->cleanup();
}

CCTransitionFade::~CCTransitionFade() {
    // 0xaeccf0
    this->cleanup();
}

void CCTransitionFade::initWithDuration(float, cocos2d::CCScene*) {
    // 0xaecaa4
    // TODO: Implement
}

void CCTransitionFade::initWithDuration(float, cocos2d::CCScene*, cocos2d::_ccColor3B const&) {
    // 0xaedca0
    // TODO: Implement
}

void CCTransitionFade::create(float, cocos2d::CCScene*) {
    // 0xaee9f4
    CCTransitionFade* ret = new CCTransitionFade();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCTransitionFade::create(float, cocos2d::CCScene*, cocos2d::_ccColor3B const&) {
    // 0xaee998
    CCTransitionFade* ret = new CCTransitionFade();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCTransitionFade::onExit() {
    // 0xaf07c0
    // TODO: Implement
}

void CCTransitionFade::onEnter() {
    // 0xaf001c
    // TODO: Implement
}

} // namespace cocos2d
