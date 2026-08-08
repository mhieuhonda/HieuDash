// ============================================================
// AchievementNotifier.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "AchievementNotifier.h"

AchievementNotifier* AchievementNotifier::create() {
    AchievementNotifier* ret = new AchievementNotifier();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

AchievementNotifier::~AchievementNotifier() {
    // 0x4edba0
    this->cleanup();
}

AchievementNotifier::~AchievementNotifier() {
    // 0x4edb30
    this->cleanup();
}

AchievementNotifier::~AchievementNotifier() {
    // 0x4edb30
    this->cleanup();
}

void AchievementNotifier::sharedState() {
    // 0x4edbc4
    // TODO: Implement
}

void AchievementNotifier::notifyAchievement(char const*, char const*, char const*, bool) {
    // 0x4ede18
    // TODO: Implement
}

void AchievementNotifier::willSwitchToScene(cocos2d::CCScene*) {
    // 0x4edeb0
    // TODO: Implement
}

void AchievementNotifier::showNextAchievement() {
    // 0x4edc44
    // TODO: Implement
}

void AchievementNotifier::achievementDisplayFinished() {
    // 0x4ede6c
    // TODO: Implement
}

void AchievementNotifier::init() {
    // 0x4edb04
    bool ret = cocos2d::CCNode::init() if "cocos2d::CCNode" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

