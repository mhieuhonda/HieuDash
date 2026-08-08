// ============================================================
// NodePoint.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "NodePoint.h"

NodePoint::~NodePoint() {
    // 0x65b460
    this->cleanup();
}

NodePoint::~NodePoint() {
    // 0x65b44c
    this->cleanup();
}

NodePoint::~NodePoint() {
    // 0x65b44c
    this->cleanup();
}

void NodePoint::init(cocos2d::CCPoint) {
    // 0x667404
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void NodePoint::create(cocos2d::CCPoint) {
    // 0x667420
    NodePoint* ret = new NodePoint();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

