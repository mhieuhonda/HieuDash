// ============================================================
// CCMoveCNode.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCMoveCNode.h"

CCMoveCNode::~CCMoveCNode() {
    // 0x8a25f4
    this->cleanup();
}

CCMoveCNode::~CCMoveCNode() {
    // 0x8a25b8
    this->cleanup();
}

CCMoveCNode::~CCMoveCNode() {
    // 0x8a25b8
    this->cleanup();
}

void CCMoveCNode::init() {
    // 0x8a5b48
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void CCMoveCNode::reset() {
    // 0x8a5c9c
    // TODO: Implement
}

void CCMoveCNode::create() {
    // 0x8a5b50
    CCMoveCNode* ret = new CCMoveCNode();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

