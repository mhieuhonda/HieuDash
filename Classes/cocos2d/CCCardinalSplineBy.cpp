// ============================================================
// CCCardinalSplineBy.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCCardinalSplineBy.h"

namespace cocos2d {

CCCardinalSplineBy::CCCardinalSplineBy() {
    // 0xab5664
}

CCCardinalSplineBy::CCCardinalSplineBy() {
    // 0xab5664
}

CCCardinalSplineBy::~CCCardinalSplineBy() {
    // 0xab4cc0
    this->cleanup();
}

CCCardinalSplineBy::~CCCardinalSplineBy() {
    // 0xab4cac
    this->cleanup();
}

CCCardinalSplineBy::~CCCardinalSplineBy() {
    // 0xab4cac
    this->cleanup();
}

void CCCardinalSplineBy::updatePosition(cocos2d::CCPoint&) {
    // 0xab4d78
    // TODO: Implement
}

void CCCardinalSplineBy::startWithTarget(cocos2d::CCNode*) {
    // 0xab50ec
    // TODO: Implement
}

void CCCardinalSplineBy::create(float, cocos2d::CCPointArray*, float) {
    // 0xab56a0
    CCCardinalSplineBy* ret = new CCCardinalSplineBy();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCCardinalSplineBy::reverse() {
    // 0xab5fd0
    // TODO: Implement
}

} // namespace cocos2d
