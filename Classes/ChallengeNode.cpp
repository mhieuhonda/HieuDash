// ============================================================
// ChallengeNode.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "ChallengeNode.h"

ChallengeNode::~ChallengeNode() {
    // 0x906b18
    this->cleanup();
}

ChallengeNode::~ChallengeNode() {
    // 0x906adc
    this->cleanup();
}

ChallengeNode::~ChallengeNode() {
    // 0x906adc
    this->cleanup();
}

void ChallengeNode::onClaimReward(cocos2d::CCObject*) {
    // 0x908e0c
    // TODO: Implement
}

void ChallengeNode::updateTimeLabel(std::string) {
    // 0x908870
    // TODO: Implement
}

void ChallengeNode::init(GJChallengeItem*, ChallengesPage*, bool) {
    // 0x906e80
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void ChallengeNode::create(GJChallengeItem*, ChallengesPage*, bool) {
    // 0x907b78
    ChallengeNode* ret = new ChallengeNode();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

