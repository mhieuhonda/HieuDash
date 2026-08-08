// ============================================================
// GJBigSpriteNode.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "GJBigSpriteNode.h"

GJBigSpriteNode::~GJBigSpriteNode() {
    // 0x97da20
    this->cleanup();
}

GJBigSpriteNode::~GJBigSpriteNode() {
    // 0x97d968
    this->cleanup();
}

GJBigSpriteNode::~GJBigSpriteNode() {
    // 0x97d968
    this->cleanup();
}

void GJBigSpriteNode::init() {
    // 0x97d1b0
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void GJBigSpriteNode::create() {
    // 0x97f2a8
    GJBigSpriteNode* ret = new GJBigSpriteNode();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

