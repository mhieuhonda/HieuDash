// ============================================================
// InheritanceNode.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "InheritanceNode.h"

InheritanceNode::~InheritanceNode() {
    // 0x8a24f4
    this->cleanup();
}

InheritanceNode::~InheritanceNode() {
    // 0x8a24e0
    this->cleanup();
}

InheritanceNode::~InheritanceNode() {
    // 0x8a24e0
    this->cleanup();
}

void InheritanceNode::init(int, InheritanceNode*) {
    // 0x8a372c
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void InheritanceNode::create(int, InheritanceNode*) {
    // 0x8a3740
    InheritanceNode* ret = new InheritanceNode();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

