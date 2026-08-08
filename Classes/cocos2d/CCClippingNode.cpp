// ============================================================
// CCClippingNode.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCClippingNode.h"

namespace cocos2d {

CCClippingNode::CCClippingNode() {
    // 0xaf6b38
}

CCClippingNode::CCClippingNode() {
    // 0xaf6b38
}

CCClippingNode::~CCClippingNode() {
    // 0xaf6aa4
    this->cleanup();
}

CCClippingNode::~CCClippingNode() {
    // 0xaf6a68
    this->cleanup();
}

CCClippingNode::~CCClippingNode() {
    // 0xaf6a68
    this->cleanup();
}

void CCClippingNode::setStencil(cocos2d::CCNode*) {
    // 0xaf6c68
    // TODO: Implement
}

void CCClippingNode::setInverted(bool) {
    // 0xaf6cc8
    // TODO: Implement
}

void CCClippingNode::setAlphaThreshold(float) {
    // 0xaf6cb8
    // TODO: Implement
}

void CCClippingNode::onExitTransitionDidStart() {
    // 0xaf6d38
    // TODO: Implement
}

void CCClippingNode::onEnterTransitionDidFinish() {
    // 0xaf6d04
    // TODO: Implement
}

void CCClippingNode::init(cocos2d::CCNode*) {
    // 0xaf6ac8
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void CCClippingNode::init() {
    // 0xaf6a48
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void CCClippingNode::visit() {
    // 0xaf6da0
    // TODO: Implement
}

void CCClippingNode::create(cocos2d::CCNode*) {
    // 0xaf6be8
    CCClippingNode* ret = new CCClippingNode();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCClippingNode::create() {
    // 0xaf6b78
    CCClippingNode* ret = new CCClippingNode();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCClippingNode::onExit() {
    // 0xaf6d6c
    // TODO: Implement
}

void CCClippingNode::onEnter() {
    // 0xaf6cd0
    // TODO: Implement
}

void CCClippingNode::getStencil()) const {
    // 0xaf6c60
}

void CCClippingNode::isInverted()) const {
    // 0xaf6cc0
    // TODO: Implement
}

void CCClippingNode::getAlphaThreshold()) const {
    // 0xaf6cb0
}

} // namespace cocos2d
