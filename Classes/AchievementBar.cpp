// ============================================================
// AchievementBar.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "AchievementBar.h"

AchievementBar::~AchievementBar() {
    // 0x7d764c
    this->cleanup();
}

AchievementBar::~AchievementBar() {
    // 0x7d7630
    this->cleanup();
}

AchievementBar::~AchievementBar() {
    // 0x7d7630
    this->cleanup();
}

void AchievementBar::setOpacity(unsigned char) {
    // 0x7d75a8
    // TODO: Implement
}

void AchievementBar::init(char const*, char const*, char const*, bool) {
    // 0x7d76b4
    bool ret = cocos2d::CCNode::init() if "cocos2d::CCNode" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void AchievementBar::show() {
    // 0x7d8f48
    // TODO: Implement
}

void AchievementBar::create(char const*, char const*, char const*, bool) {
    // 0x7d8e6c
    AchievementBar* ret = new AchievementBar();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

