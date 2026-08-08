// ============================================================
// CCCircleWave.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCCircleWave.h"

CCCircleWave::~CCCircleWave() {
    // 0x5a602c
    this->cleanup();
}

CCCircleWave::~CCCircleWave() {
    // 0x5a5fa0
    this->cleanup();
}

CCCircleWave::~CCCircleWave() {
    // 0x5a5fa0
    this->cleanup();
}

void CCCircleWave::setPosition(cocos2d::CCPoint const&) {
    // 0x5a60a8
    // TODO: Set m_position
}

void CCCircleWave::followObject(cocos2d::CCNode*, bool) {
    // 0x5a69b0
    // TODO: Implement
}

void CCCircleWave::updatePosition(float) {
    // 0x5a5f58
    // TODO: Implement
}

void CCCircleWave::updateTweenAction(float, char const*) {
    // 0x5a62c4
    // TODO: Implement
}

void CCCircleWave::removeMeAndCleanup() {
    // 0x5a628c
    // TODO: Implement
}

void CCCircleWave::draw() {
    // 0x5a60dc
    // Render/draw logic
    // TODO: Implement rendering
}

void CCCircleWave::init(float, float, float, bool, bool) {
    // 0x5a66dc
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void CCCircleWave::create(float, float, float, bool) {
    // 0x5a69a8
    CCCircleWave* ret = new CCCircleWave();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCCircleWave::create(float, float, float, bool, bool) {
    // 0x5a6890
    CCCircleWave* ret = new CCCircleWave();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCCircleWave::baseSetup(float) {
    // 0x5a6698
    // TODO: Implement
}

