// ============================================================
// CommunityCreditNode.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CommunityCreditNode.h"

CommunityCreditNode::~CommunityCreditNode() {
    // 0x96ffdc
    this->cleanup();
}

CommunityCreditNode::~CommunityCreditNode() {
    // 0x96ff24
    this->cleanup();
}

CommunityCreditNode::~CommunityCreditNode() {
    // 0x96ff24
    this->cleanup();
}

void CommunityCreditNode::init(int, int, int, std::string) {
    // 0x970000
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void CommunityCreditNode::create(int, int, int, std::string) {
    // 0x970068
    CommunityCreditNode* ret = new CommunityCreditNode();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

