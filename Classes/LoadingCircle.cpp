// ============================================================
// LoadingCircle.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "LoadingCircle.h"

LoadingCircle::~LoadingCircle() {
    // 0x588cd0
    this->cleanup();
}

LoadingCircle::~LoadingCircle() {
    // 0x588c7c
    this->cleanup();
}

LoadingCircle::~LoadingCircle() {
    // 0x588c7c
    this->cleanup();
}

void LoadingCircle::ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // 0x588c48
    // TODO: Implement
}

void LoadingCircle::ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // 0x588c58
    // TODO: Implement
}

void LoadingCircle::ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // 0x588c64
    // TODO: Implement
}

void LoadingCircle::fadeAndRemove() {
    // 0x58905c
    // TODO: Implement
}

void LoadingCircle::ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // 0x588c70
    // TODO: Implement
}

void LoadingCircle::registerWithTouchDispatcher() {
    // 0x588cfc
    // TODO: Implement
}

void LoadingCircle::draw() {
    // 0x589328
    // Render/draw logic
    // TODO: Implement rendering
}

void LoadingCircle::init() {
    // 0x588d7c
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void LoadingCircle::show() {
    // 0x588f54
    // TODO: Implement
}

void LoadingCircle::create() {
    // 0x588e84
    LoadingCircle* ret = new LoadingCircle();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

