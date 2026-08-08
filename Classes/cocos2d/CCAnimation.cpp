// ============================================================
// CCAnimation.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCAnimation.h"

namespace cocos2d {

CCAnimation::CCAnimation() {
    // 0xb13498
}

CCAnimation::CCAnimation() {
    // 0xb13498
}

CCAnimation::~CCAnimation() {
    // 0xb130fc
    this->cleanup();
}

CCAnimation::~CCAnimation() {
    // 0xb1309c
    this->cleanup();
}

CCAnimation::~CCAnimation() {
    // 0xb1309c
    this->cleanup();
}

void CCAnimation::getDuration() {
    // 0xb13044
    // TODO: Implement
}

void CCAnimation::copyWithZone(cocos2d::CCZone*) {
    // 0xb135c4
    // TODO: Implement
}

void CCAnimation::addSpriteFrame(cocos2d::CCSpriteFrame*) {
    // 0xb13670
    // TODO: Implement
}

void CCAnimation::initWithSpriteFrames(cocos2d::CCArray*, float) {
    // 0xb132dc
    // TODO: Implement
}

void CCAnimation::createWithSpriteFrames(cocos2d::CCArray*, float) {
    // 0xb13520
    // TODO: Implement
}

void CCAnimation::initWithAnimationFrames(cocos2d::CCArray*, float, unsigned int) {
    // 0xb133e8
    // TODO: Implement
}

void CCAnimation::addSpriteFrameWithTexture(cocos2d::CCTexture2D*, cocos2d::CCRect const&) {
    // 0xb1379c
    // TODO: Implement
}

void CCAnimation::addSpriteFrameWithFileName(char const*) {
    // 0xb136e0
    // TODO: Implement
}

void CCAnimation::init() {
    // 0xb133dc
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void CCAnimation::create(cocos2d::CCArray*, float, unsigned int) {
    // 0xb1356c
    CCAnimation* ret = new CCAnimation();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCAnimation::create() {
    // 0xb134e4
    CCAnimation* ret = new CCAnimation();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

} // namespace cocos2d
