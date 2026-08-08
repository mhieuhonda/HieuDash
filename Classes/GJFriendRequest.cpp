
#include "GJFriendRequest.h"

GJFriendRequest::~GJFriendRequest() {
    this->cleanup();
}

GJFriendRequest::~GJFriendRequest() {
    this->cleanup();
}

GJFriendRequest::~GJFriendRequest() {
    this->cleanup();
}

void GJFriendRequest::init() {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
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

