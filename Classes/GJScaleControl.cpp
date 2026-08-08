// ============================================================
// GJScaleControl.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "GJScaleControl.h"

GJScaleControl::~GJScaleControl() {
    // 0x685ad4
    this->cleanup();
}

GJScaleControl::~GJScaleControl() {
    // 0x685a20
    this->cleanup();
}

GJScaleControl::~GJScaleControl() {
    // 0x685a20
    this->cleanup();
}

void GJScaleControl::loadValues(GameObject*, cocos2d::CCArray*, std::unordered_map<int, GameObjectEditorState>, std::equal_to<int>, std::allocator<std::pair<const int, GameObjectEditorState> > >&) {
    // 0x6ba114
    // Load from file/storage
    // TODO: Implement loading
}

void GJScaleControl::finishTouch() {
    // 0x69553c
    // TODO: Implement
}

void GJScaleControl::ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // 0x69563c
    // TODO: Implement
}

void GJScaleControl::ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // 0x6957ec
    // TODO: Implement
}

void GJScaleControl::ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // 0x695a7c
    // TODO: Implement
}

void GJScaleControl::updateLabelX(float) {
    // 0x695950
    // TODO: Implement
}

void GJScaleControl::updateLabelY(float) {
    // 0x6959b4
    // TODO: Implement
}

void GJScaleControl::skewFromValue(float) {
    // 0x6958fc
    // TODO: Implement
}

void GJScaleControl::sliderChanged(cocos2d::CCObject*) {
    // 0x685d80
    // TODO: Implement
}

void GJScaleControl::updateLabelXY(float) {
    // 0x695a18
    // TODO: Implement
}

void GJScaleControl::valueFromSkew(float) {
    // 0x695914
    // TODO: Implement
}

void GJScaleControl::scaleFromValue(float) {
    // 0x695608
    // TODO: Implement
}

void GJScaleControl::valueFromScale(float) {
    // 0x6958c0
    // TODO: Implement
}

void GJScaleControl::ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // 0x685960
    // TODO: Implement
}

void GJScaleControl::onToggleLockScale(cocos2d::CCObject*) {
    // 0x685c48
    // TODO: Implement
}

void GJScaleControl::init() {
    // 0x6861b0
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void GJScaleControl::create() {
    // 0x695438
    GJScaleControl* ret = new GJScaleControl();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

