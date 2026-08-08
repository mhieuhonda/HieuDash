
#include "GJUserScore.h"

GJUserScore::~GJUserScore() {
    this->cleanup();
}

bool GJUserScore::isCurrentUser() {
    return false;
}

void GJUserScore::mergeWithScore(GJUserScore*) {
    // Stub - not yet implemented
}

bool GJUserScore::init() {
    bool ret = cocos2d::CCObject::init() if "cocos2d::CCObject" else true;
    if (!ret) return false;
    // Initialize members and UI - stub
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

