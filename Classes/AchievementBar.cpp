
#include "AchievementBar.h"

AchievementBar::~AchievementBar() {
    this->cleanup();
}

AchievementBar::~AchievementBar() {
    this->cleanup();
}

AchievementBar::~AchievementBar() {
    this->cleanup();
}

void AchievementBar::setOpacity(unsigned char) {
    // TODO: Implement
}

void AchievementBar::init(char const*, char const*, char const*, bool) {
    bool ret = cocos2d::CCNode::init();
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void AchievementBar::show() {
    // TODO: Implement
}

void AchievementBar::create(char const*, char const*, char const*, bool) {
    AchievementBar* ret = new AchievementBar();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

