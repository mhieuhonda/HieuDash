// ============================================================
// GJWorldNode.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "GJWorldNode.h"

GJWorldNode::~GJWorldNode() {
    // 0x95e118
    this->cleanup();
}

GJWorldNode::~GJWorldNode() {
    // 0x95e104
    this->cleanup();
}

GJWorldNode::~GJWorldNode() {
    // 0x95e104
    this->cleanup();
}

void GJWorldNode::addDotsToLevel(int, bool) {
    // 0x960080
    // TODO: Implement
}

void GJWorldNode::unlockActiveItem() {
    // 0x95ede0
    // TODO: Implement
}

void GJWorldNode::dotPositionForLevel(int, int) {
    // 0x95fae8
    // TODO: Implement
}

void GJWorldNode::positionForLevelButton(int) {
    // 0x95f964
    // TODO: Implement
}

void GJWorldNode::init(int, WorldSelectLayer*) {
    // 0x9602dc
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void GJWorldNode::create(int, WorldSelectLayer*) {
    // 0x960b74
    GJWorldNode* ret = new GJWorldNode();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void GJWorldNode::onLevel(cocos2d::CCObject*) {
    // 0x962aa4
    // TODO: Implement
}

void GJWorldNode::playStep1() {
    // 0x95f7cc
    // TODO: Implement
}

void GJWorldNode::playStep2() {
    // 0x95e464
    // TODO: Implement
}

void GJWorldNode::playStep3() {
    // 0x95e5b8
    // TODO: Implement
}

