
#include "GJComment.h"

GJComment::~GJComment() {
    this->cleanup();
}

GJComment::~GJComment() {
    this->cleanup();
}

GJComment::~GJComment() {
    this->cleanup();
}

void GJComment::init() {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
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

