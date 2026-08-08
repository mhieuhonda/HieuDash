// ============================================================
// ExplodeItemNode.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "ExplodeItemNode.h"

ExplodeItemNode::~ExplodeItemNode() {
    // 0xa266a4
    this->cleanup();
}

ExplodeItemNode::~ExplodeItemNode() {
    // 0xa2665c
    this->cleanup();
}

ExplodeItemNode::~ExplodeItemNode() {
    // 0xa2665c
    this->cleanup();
}

void ExplodeItemNode::createSprites(int, int, float, float, float, float, float, float, cocos2d::_ccColor4F, cocos2d::_ccColor4F, bool) {
    // 0xa270ec
    // TODO: Implement
}

void ExplodeItemNode::init(cocos2d::CCRenderTexture*) {
    // 0xa26f2c
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void ExplodeItemNode::create(cocos2d::CCRenderTexture*) {
    // 0xa26f88
    ExplodeItemNode* ret = new ExplodeItemNode();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void ExplodeItemNode::update(float) {
    // 0xa266c8
    // Game update loop — called every frame
    // TODO: Implement game logic update
}

