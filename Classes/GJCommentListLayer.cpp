// ============================================================
// GJCommentListLayer.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "GJCommentListLayer.h"

GJCommentListLayer::~GJCommentListLayer() {
    // 0x8c2a8c
    this->cleanup();
}

GJCommentListLayer::~GJCommentListLayer() {
    // 0x8c2a04
    this->cleanup();
}

GJCommentListLayer::~GJCommentListLayer() {
    // 0x8c2a04
    this->cleanup();
}

void GJCommentListLayer::init(BoomListView*, char const*, cocos2d::_ccColor4B, float, float, bool) {
    // 0x8c99bc
    bool ret = ListLayer::init() if "ListLayer" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void GJCommentListLayer::create(BoomListView*, char const*, cocos2d::_ccColor4B, float, float, bool) {
    // 0x8c9ddc
    GJCommentListLayer* ret = new GJCommentListLayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

