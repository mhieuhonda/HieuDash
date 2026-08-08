
#include "GJFriendRequest.h"

GJFriendRequest::~GJFriendRequest() {
    this->cleanup();
}

bool GJFriendRequest::init() {
    bool ret = cocos2d::CCNode::init();
    if (!ret) return false;
    // Initialize members and UI - stub
    return true;
}

void GJFriendRequest::create(cocos2d::CCDictionary*) {
    GJFriendRequest* ret = new GJFriendRequest();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void GJFriendRequest::create() {
    GJFriendRequest* ret = new GJFriendRequest();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

