// ============================================================
// ScrollingLayer.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "ScrollingLayer.h"

ScrollingLayer::~ScrollingLayer() {
    // 0x5a92c8
    this->cleanup();
}

ScrollingLayer::~ScrollingLayer() {
    // 0x5a9274
    this->cleanup();
}

ScrollingLayer::~ScrollingLayer() {
    // 0x5a9274
    this->cleanup();
}

void ScrollingLayer::getViewRect() {
    // 0x5a9808
    // TODO: Implement
}

void ScrollingLayer::ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // 0x5a98f8
    // TODO: Implement
}

void ScrollingLayer::ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // 0x5a9228
    // TODO: Implement
}

void ScrollingLayer::ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // 0x5a9418
    // TODO: Implement
}

void ScrollingLayer::setStartOffset(cocos2d::CCPoint) {
    // 0x5a9a00
    // TODO: Implement
}

void ScrollingLayer::ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // 0x5a9250
    // TODO: Implement
}

void ScrollingLayer::draw() {
    // 0x5a933c
    // Render/draw logic
    // TODO: Implement rendering
}

void ScrollingLayer::init(cocos2d::CCSize, cocos2d::CCPoint, float) {
    // 0x5a9578
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void ScrollingLayer::visit() {
    // 0x5a9a40
    // TODO: Implement
}

void ScrollingLayer::create(cocos2d::CCSize, cocos2d::CCPoint, float) {
    // 0x5a967c
    ScrollingLayer* ret = new ScrollingLayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

