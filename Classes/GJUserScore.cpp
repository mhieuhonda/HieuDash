// ============================================================
// GJUserScore.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "GJUserScore.h"

GJUserScore::~GJUserScore() {
    // 0x6ef558
    this->cleanup();
}

GJUserScore::~GJUserScore() {
    // 0x6ef078
    this->cleanup();
}

GJUserScore::~GJUserScore() {
    // 0x6ef078
    this->cleanup();
}

void GJUserScore::isCurrentUser() {
    // 0x712708
    // TODO: Implement
}

void GJUserScore::mergeWithScore(GJUserScore*) {
    // 0x71268c
    // TODO: Implement
}

void GJUserScore::init() {
    // 0x6eddc4
    bool ret = cocos2d::CCObject::init() if "cocos2d::CCObject" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void GJUserScore::create(cocos2d::CCDictionary*) {
    // 0x70e7fc
    GJUserScore* ret = new GJUserScore();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void GJUserScore::create() {
    // 0x70e684
    GJUserScore* ret = new GJUserScore();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

