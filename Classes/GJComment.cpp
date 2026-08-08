
#include "GJComment.h"

GJComment::~GJComment() {
    this->cleanup();
}

bool GJComment::init() {
    bool ret = cocos2d::CCNode::init();
    if (!ret) return false;
    // Initialize members and UI - stub
    return true;
}

void GJComment::create(cocos2d::CCDictionary*) {
    GJComment* ret = new GJComment();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void GJComment::create() {
    GJComment* ret = new GJComment();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

