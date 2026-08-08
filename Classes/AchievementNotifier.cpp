
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
    this->cleanup();
}

AchievementNotifier::~AchievementNotifier() {
    this->cleanup();
}

AchievementNotifier::~AchievementNotifier() {
    this->cleanup();
}

void AchievementNotifier::sharedState() {
    // TODO: Implement
}

void AchievementNotifier::notifyAchievement(char const*, char const*, char const*, bool) {
    // TODO: Implement
}

void AchievementNotifier::willSwitchToScene(cocos2d::CCScene*) {
    // TODO: Implement
}

void AchievementNotifier::showNextAchievement() {
    // TODO: Implement
}

void AchievementNotifier::achievementDisplayFinished() {
    // TODO: Implement
}

void AchievementNotifier::init() {
    bool ret = cocos2d::CCNode::init();
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

