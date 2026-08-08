// ============================================================
// GJRobotSprite.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "GJRobotSprite.h"

GJRobotSprite::~GJRobotSprite() {
    // 0x8e2a08
    this->cleanup();
}

GJRobotSprite::~GJRobotSprite() {
    // 0x8e2980
    this->cleanup();
}

GJRobotSprite::~GJRobotSprite() {
    // 0x8e2980
    this->cleanup();
}

void GJRobotSprite::setOpacity(unsigned char) {
    // 0x8e2abc
    // TODO: Implement
}

void GJRobotSprite::updateFrame(int) {
    // 0x8e2f50
    // TODO: Implement
}

void GJRobotSprite::updateColors() {
    // 0x8e2c6c
    // TODO: Implement
}

void GJRobotSprite::hideSecondary() {
    // 0x8e2a50
    // TODO: Implement
}

void GJRobotSprite::updateColor01(cocos2d::_ccColor3B) {
    // 0x8e2f1c
    // TODO: Implement
}

void GJRobotSprite::updateColor02(cocos2d::_ccColor3B) {
    // 0x8e2f38
    // TODO: Implement
}

void GJRobotSprite::updateGlowColor(cocos2d::_ccColor3B, bool) {
    // 0x8e2bf4
    // TODO: Implement
}

void GJRobotSprite::init(int) {
    // 0x8e3bdc
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void GJRobotSprite::init(int, std::string) {
    // 0x8e3604
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void GJRobotSprite::create(int) {
    // 0x8e3cec
    GJRobotSprite* ret = new GJRobotSprite();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void GJRobotSprite::hideGlow() {
    // 0x8e2bcc
    // TODO: Implement
}

void GJRobotSprite::showGlow() {
    // 0x8e2ba4
    // TODO: Implement
}

