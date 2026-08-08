
#include "FollowRewardPage.h"

FollowRewardPage::~FollowRewardPage() {
    this->cleanup();
}

FollowRewardPage::~FollowRewardPage() {
    this->cleanup();
}

FollowRewardPage::~FollowRewardPage() {
    this->cleanup();
}

void FollowRewardPage::updateRate() {
    // TODO: Implement
}

void FollowRewardPage::onSpecialItem(cocos2d::CCObject*) {
    // TODO: Implement
}

void FollowRewardPage::keyBackClicked() {
    // TODO: Implement
}

void FollowRewardPage::FLAlert_Clicked(FLAlertLayer*, bool) {
    // TODO: Implement
}

void FollowRewardPage::onRewardedVideo(cocos2d::CCObject*) {
    // TODO: Implement
}

void FollowRewardPage::switchToOpenedState(CCMenuItemSpriteExtra*) {
    // TODO: Implement
}

void FollowRewardPage::rewardedVideoFinished() {
    // TODO: Implement
}

void FollowRewardPage::registerWithTouchDispatcher() {
    // TODO: Implement
}

void FollowRewardPage::init() {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void FollowRewardPage::show() {
    // TODO: Implement
}

void FollowRewardPage::create() {
    FollowRewardPage* ret = new FollowRewardPage();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void FollowRewardPage::onClose(cocos2d::CCObject*) {
    // TODO: Implement
}

