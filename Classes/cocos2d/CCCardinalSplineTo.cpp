// ============================================================
// CCCardinalSplineTo.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCCardinalSplineTo.h"

namespace cocos2d {

CCCardinalSplineTo::CCCardinalSplineTo() {
    // 0xab54f0
}

CCCardinalSplineTo::CCCardinalSplineTo() {
    // 0xab54f0
}

CCCardinalSplineTo::~CCCardinalSplineTo() {
    // 0xab4c40
    this->cleanup();
}

CCCardinalSplineTo::~CCCardinalSplineTo() {
    // 0xab4bf0
    this->cleanup();
}

CCCardinalSplineTo::~CCCardinalSplineTo() {
    // 0xab4bf0
    this->cleanup();
}

void CCCardinalSplineTo::copyWithZone(cocos2d::CCZone*) {
    // 0xab55b8
    // TODO: Implement
}

void CCCardinalSplineTo::updatePosition(cocos2d::CCPoint&) {
    // 0xab4d3c
    // TODO: Implement
}

void CCCardinalSplineTo::startWithTarget(cocos2d::CCNode*) {
    // 0xab5084
    // TODO: Implement
}

void CCCardinalSplineTo::initWithDuration(float, cocos2d::CCPointArray*, float) {
    // 0xab545c
    // TODO: Implement
}

void CCCardinalSplineTo::create(float, cocos2d::CCPointArray*, float) {
    // 0xab5540
    CCCardinalSplineTo* ret = new CCCardinalSplineTo();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCCardinalSplineTo::update(float) {
    // 0xab52ac
    // Game update loop — called every frame
    // TODO: Implement game logic update
}

void CCCardinalSplineTo::reverse() {
    // 0xab5fa4
    // TODO: Implement
}

} // namespace cocos2d
