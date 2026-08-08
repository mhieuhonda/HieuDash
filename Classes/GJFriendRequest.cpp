// ============================================================
// GJFriendRequest.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "GJFriendRequest.h"

GJFriendRequest::~GJFriendRequest() {
    // 0x6ee79c
    this->cleanup();
}

GJFriendRequest::~GJFriendRequest() {
    // 0x6ee684
    this->cleanup();
}

GJFriendRequest::~GJFriendRequest() {
    // 0x6ee684
    this->cleanup();
}

void GJFriendRequest::init() {
    // 0x6ee218
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void GJFriendRequest::create(cocos2d::CCDictionary*) {
    // 0x7128ec
    GJFriendRequest* ret = new GJFriendRequest();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void GJFriendRequest::create() {
    // 0x71283c
    GJFriendRequest* ret = new GJFriendRequest();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

