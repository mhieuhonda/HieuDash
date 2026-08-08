// ============================================================
// DailyLevelNode.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "DailyLevelNode.h"

DailyLevelNode::~DailyLevelNode() {
    // 0x9128bc
    this->cleanup();
}

DailyLevelNode::~DailyLevelNode() {
    // 0x912860
    this->cleanup();
}

DailyLevelNode::~DailyLevelNode() {
    // 0x912860
    this->cleanup();
}

void DailyLevelNode::onSkipLevel(cocos2d::CCObject*) {
    // 0x912b30
    // TODO: Implement
}

void DailyLevelNode::onClaimReward(cocos2d::CCObject*) {
    // 0x915804
    // TODO: Implement
}

void DailyLevelNode::showSkipButton() {
    // 0x914524
    // TODO: Implement
}

void DailyLevelNode::FLAlert_Clicked(FLAlertLayer*, bool) {
    // 0x913844
    // TODO: Implement
}

void DailyLevelNode::updateTimeLabel(std::string) {
    // 0x915a14
    // TODO: Implement
}

void DailyLevelNode::init(GJGameLevel*, DailyLevelPage*, bool) {
    // 0x913874
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void DailyLevelNode::create(GJGameLevel*, DailyLevelPage*, bool) {
    // 0x914440
    DailyLevelNode* ret = new DailyLevelNode();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

