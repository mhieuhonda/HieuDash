// ============================================================
// RewardsPage.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "RewardsPage.h"

RewardsPage::~RewardsPage() {
    // 0x934720
    this->cleanup();
}

RewardsPage::~RewardsPage() {
    // 0x934674
    this->cleanup();
}

RewardsPage::~RewardsPage() {
    // 0x934674
    this->cleanup();
}

void RewardsPage::onFreeStuff(cocos2d::CCObject*) {
    // 0x934764
    // TODO: Implement
}

void RewardsPage::updateTimers(float) {
    // 0x934ef8
    // TODO: Implement
}

void RewardsPage::tryGetRewards() {
    // 0x93474c
    // TODO: Implement
}

void RewardsPage::getRewardFrame(int, int) {
    // 0x934ed0
    // TODO: Implement
}

void RewardsPage::keyBackClicked() {
    // 0x934624
    // TODO: Implement
}

void RewardsPage::FLAlert_Clicked(FLAlertLayer*, bool) {
    // 0x9345d8
    // TODO: Implement
}

void RewardsPage::unlockLayerClosed(RewardUnlockLayer*) {
    // 0x936460
    // TODO: Implement
}

void RewardsPage::rewardsStatusFailed() {
    // 0x934a04
    // TODO: Implement
}

void RewardsPage::rewardsStatusFinished(int) {
    // 0x93a2fc
    // TODO: Implement
}

void RewardsPage::registerWithTouchDispatcher() {
    // 0x934794
    // TODO: Implement
}

void RewardsPage::init() {
    // 0x935350
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void RewardsPage::show() {
    // 0x934a7c
    // TODO: Implement
}

void RewardsPage::create() {
    // 0x936330
    RewardsPage* ret = new RewardsPage();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void RewardsPage::onClose(cocos2d::CCObject*) {
    // 0x9345e4
    // TODO: Implement
}

void RewardsPage::onReward(cocos2d::CCObject*) {
    // 0x938bf4
    // TODO: Implement
}

