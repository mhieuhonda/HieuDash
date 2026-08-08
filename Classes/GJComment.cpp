// ============================================================
// GJComment.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "GJComment.h"

GJComment::~GJComment() {
    // 0x6eee04
    this->cleanup();
}

GJComment::~GJComment() {
    // 0x6eec88
    this->cleanup();
}

GJComment::~GJComment() {
    // 0x6eec88
    this->cleanup();
}

void GJComment::init() {
    // 0x6ede14
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void GJComment::create(cocos2d::CCDictionary*) {
    // 0x716d9c
    GJComment* ret = new GJComment();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void GJComment::create() {
    // 0x716cb4
    GJComment* ret = new GJComment();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

