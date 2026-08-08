
#include "DailyLevelNode.h"

DailyLevelNode::~DailyLevelNode() {
    this->cleanup();
}

DailyLevelNode::~DailyLevelNode() {
    this->cleanup();
}

DailyLevelNode::~DailyLevelNode() {
    this->cleanup();
}

void DailyLevelNode::onSkipLevel(cocos2d::CCObject*) {
    // TODO: Implement
}

void DailyLevelNode::onClaimReward(cocos2d::CCObject*) {
    // TODO: Implement
}

void DailyLevelNode::showSkipButton() {
    // TODO: Implement
}

void DailyLevelNode::FLAlert_Clicked(FLAlertLayer*, bool) {
    // TODO: Implement
}

void DailyLevelNode::updateTimeLabel(std::string) {
    // TODO: Implement
}

void DailyLevelNode::init(GJGameLevel*, DailyLevelPage*, bool) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void DailyLevelNode::create(GJGameLevel*, DailyLevelPage*, bool) {
    DailyLevelNode* ret = new DailyLevelNode();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

