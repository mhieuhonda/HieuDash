// ============================================================
// PointNode.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "PointNode.h"

PointNode::~PointNode() {
    // 0x825420
    this->cleanup();
}

PointNode::~PointNode() {
    // 0x82540c
    this->cleanup();
}

PointNode::~PointNode() {
    // 0x82540c
    this->cleanup();
}

void PointNode::init(cocos2d::CCPoint) {
    // 0x826028
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void PointNode::create(cocos2d::CCPoint) {
    // 0x826044
    PointNode* ret = new PointNode();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

