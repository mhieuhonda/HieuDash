
#include "ExplodeItemSprite.h"

ExplodeItemSprite::~ExplodeItemSprite() {
    this->cleanup();
}

bool ExplodeItemSprite::init() {
    bool ret = cocos2d::CCSprite::init();
    if (!ret) return false;
    // Initialize members and UI - stub
    return true;
}

void ExplodeItemSprite::create() {
    ExplodeItemSprite* ret = new ExplodeItemSprite();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

