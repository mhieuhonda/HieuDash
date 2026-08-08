// ============================================================
// CCParallaxNode.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCParallaxNode.h"

namespace cocos2d {

CCParallaxNode::CCParallaxNode() {
    // 0xb380f8
}

CCParallaxNode::CCParallaxNode() {
    // 0xb380f8
}

CCParallaxNode::~CCParallaxNode() {
    // 0xb37ee4
    this->cleanup();
}

CCParallaxNode::~CCParallaxNode() {
    // 0xb37ea0
    this->cleanup();
}

CCParallaxNode::~CCParallaxNode() {
    // 0xb37ea0
    this->cleanup();
}

void CCParallaxNode::removeChild(cocos2d::CCNode*, bool) {
    // 0xb38280
    // TODO: Implement
}

void CCParallaxNode::absolutePosition() {
    // 0xb381c8
    // TODO: Implement
}

void CCParallaxNode::removeAllChildrenWithCleanup(bool) {
    // 0xb38318
    // TODO: Implement
}

void CCParallaxNode::visit() {
    // 0xb38348
    // TODO: Implement
}

void CCParallaxNode::create() {
    // 0xb38194
    CCParallaxNode* ret = new CCParallaxNode();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCParallaxNode::addChild(cocos2d::CCNode*, unsigned int, cocos2d::CCPoint const&, cocos2d::CCPoint const&) {
    // 0xb37f08
    // TODO: Implement
}

void CCParallaxNode::addChild(cocos2d::CCNode*, unsigned int, int) {
    // 0xb37e9c
    // TODO: Implement
}

} // namespace cocos2d
