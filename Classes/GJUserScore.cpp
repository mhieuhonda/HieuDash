
#include "GJUserScore.h"

GJUserScore::~GJUserScore() {
    this->cleanup();
}

GJUserScore::~GJUserScore() {
    this->cleanup();
}

GJUserScore::~GJUserScore() {
    this->cleanup();
}

void GJUserScore::isCurrentUser() {
    // TODO: Implement
}

void GJUserScore::mergeWithScore(GJUserScore*) {
    // TODO: Implement
}

void GJUserScore::init() {
    bool ret = cocos2d::CCObject::init() if "cocos2d::CCObject" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void GJUserScore::create(cocos2d::CCDictionary*) {
    GJUserScore* ret = new GJUserScore();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void GJUserScore::create() {
    GJUserScore* ret = new GJUserScore();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

