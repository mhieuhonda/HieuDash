// ============================================================
// GJTransformControl.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "GJTransformControl.h"

GJTransformControl::~GJTransformControl() {
    // 0x685aa8
    this->cleanup();
}

GJTransformControl::~GJTransformControl() {
    // 0x6859a8
    this->cleanup();
}

GJTransformControl::~GJTransformControl() {
    // 0x6859a8
    this->cleanup();
}

void GJTransformControl::loadValues(GameObject*, cocos2d::CCArray*, std::unordered_map<int, GameObjectEditorState>, std::equal_to<int>, std::allocator<std::pair<const int, GameObjectEditorState> > >&) {
    // 0x6ba638
    // Load from file/storage
    // TODO: Implement loading
}

void GJTransformControl::finishTouch() {
    // 0x696954
    // TODO: Implement
}

void GJTransformControl::saveToState(GJTransformState&) {
    // 0x6b5a64
    // Save to file/storage
    // TODO: Implement saving
}

void GJTransformControl::spriteByTag(int) {
    // 0x6b5994
    // TODO: Implement
}

void GJTransformControl::ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // 0x6b61b0
    // TODO: Implement
}

void GJTransformControl::ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // 0x6b9af4
    // TODO: Implement
}

void GJTransformControl::ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // 0x6b9584
    // TODO: Implement
}

void GJTransformControl::scaleButtons(float) {
    // 0x695f0c
    // TODO: Implement
}

void GJTransformControl::applyRotation(float) {
    // 0x6b9d3c
    // TODO: Implement
}

void GJTransformControl::loadFromState(GJTransformState&) {
    // 0x6b59a0
    // Load from file/storage
    // TODO: Implement loading
}

void GJTransformControl::updateButtons(bool, bool) {
    // 0x6b8538
    // TODO: Implement
}

void GJTransformControl::refreshControl() {
    // 0x6b91b4
    // TODO: Implement
}

void GJTransformControl::ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // 0x685984
    // TODO: Implement
}

void GJTransformControl::logCurrentZeroPos() {
    // 0x6b5990
    // TODO: Implement
}

void GJTransformControl::onToggleLockScale(cocos2d::CCObject*) {
    // 0x685ce4
    // TODO: Implement
}

void GJTransformControl::updateAnchorSprite(cocos2d::CCPoint) {
    // 0x6b64c8
    // TODO: Implement
}

void GJTransformControl::updateMinMaxPositions() {
    // 0x6b6398
    // TODO: Implement
}

void GJTransformControl::calculateRotationOffset() {
    // 0x6b5948
    // TODO: Implement
}

void GJTransformControl::init() {
    // 0x696620
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void GJTransformControl::create() {
    // 0x695dc0
    GJTransformControl* ret = new GJTransformControl();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

