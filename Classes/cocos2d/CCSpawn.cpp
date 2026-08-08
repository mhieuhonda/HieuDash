// ============================================================
// CCSpawn.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCSpawn.h"

namespace cocos2d {

CCSpawn::~CCSpawn() {
    // 0xabf3ec
    this->cleanup();
}

CCSpawn::~CCSpawn() {
    // 0xabf394
    this->cleanup();
}

CCSpawn::~CCSpawn() {
    // 0xabf394
    this->cleanup();
}

void CCSpawn::copyWithZone(cocos2d::CCZone*) {
    // 0xac42c4
    // TODO: Implement
}

void CCSpawn::startWithTarget(cocos2d::CCNode*) {
    // 0xabeef8
    // TODO: Implement
}

void CCSpawn::initWithTwoActions(cocos2d::CCFiniteTimeAction*, cocos2d::CCFiniteTimeAction*) {
    // 0xac3ee8
    // TODO: Implement
}

void CCSpawn::createWithTwoActions(cocos2d::CCFiniteTimeAction*, cocos2d::CCFiniteTimeAction*) {
    // 0xac3fb0
    // TODO: Implement
}

void CCSpawn::createWithVariableList(cocos2d::CCFiniteTimeAction*, std::__va_list) {
    // 0xac4030
    // TODO: Implement
}

void CCSpawn::stop() {
    // 0xabfbb0
    // TODO: Implement
}

void CCSpawn::create(cocos2d::CCFiniteTimeAction*, ...) {
    // 0xac4104
    CCSpawn* ret = new CCSpawn();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCSpawn::create(cocos2d::CCArray*) {
    // 0xac41bc
    CCSpawn* ret = new CCSpawn();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCSpawn::update(float) {
    // 0xabeb7c
    // Game update loop — called every frame
    // TODO: Implement game logic update
}

void CCSpawn::reverse() {
    // 0xac4274
    // TODO: Implement
}

} // namespace cocos2d
