
#include "ChallengeNode.h"

ChallengeNode::~ChallengeNode() {
    this->cleanup();
}

ChallengeNode::~ChallengeNode() {
    this->cleanup();
}

ChallengeNode::~ChallengeNode() {
    this->cleanup();
}

void ChallengeNode::onClaimReward(cocos2d::CCObject*) {
    // TODO: Implement
}

void ChallengeNode::updateTimeLabel(std::string) {
    // TODO: Implement
}

void ChallengeNode::init(GJChallengeItem*, ChallengesPage*, bool) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void ChallengeNode::create(GJChallengeItem*, ChallengesPage*, bool) {
    ChallengeNode* ret = new ChallengeNode();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

