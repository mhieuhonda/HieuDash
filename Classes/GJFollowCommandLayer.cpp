// ============================================================
// GJFollowCommandLayer.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "GJFollowCommandLayer.h"

GJFollowCommandLayer::~GJFollowCommandLayer() {
    // 0x91fe70
    this->cleanup();
}

GJFollowCommandLayer::~GJFollowCommandLayer() {
    // 0x91fe04
    this->cleanup();
}

GJFollowCommandLayer::~GJFollowCommandLayer() {
    // 0x91fe04
    this->cleanup();
}

void GJFollowCommandLayer::updateXMod() {
    // 0x921e68
    // TODO: Implement
}

void GJFollowCommandLayer::updateYMod() {
    // 0x921f10
    // TODO: Implement
}

void GJFollowCommandLayer::textChanged(CCTextInputNode*) {
    // 0x922060
    // TODO: Implement
}

void GJFollowCommandLayer::sliderChanged(cocos2d::CCObject*) {
    // 0x922020
    // TODO: Implement
}

void GJFollowCommandLayer::updateDurLabel(bool) {
    // 0x9201fc
    // TODO: Implement
}

void GJFollowCommandLayer::updateDuration() {
    // 0x921fb8
    // TODO: Implement
}

void GJFollowCommandLayer::onUpdateGroupID(cocos2d::CCObject*) {
    // 0x921d10
    // TODO: Implement
}

void GJFollowCommandLayer::updateXModLabel() {
    // 0x920368
    // TODO: Implement
}

void GJFollowCommandLayer::updateYModLabel() {
    // 0x9204a0
    // TODO: Implement
}

void GJFollowCommandLayer::onUpdateGroupID2(cocos2d::CCObject*) {
    // 0x921e00
    // TODO: Implement
}

void GJFollowCommandLayer::sliderXModChanged(cocos2d::CCObject*) {
    // 0x921ed0
    // TODO: Implement
}

void GJFollowCommandLayer::sliderYModChanged(cocos2d::CCObject*) {
    // 0x921f78
    // TODO: Implement
}

void GJFollowCommandLayer::updateTargetGroupID() {
    // 0x921c90
    // TODO: Implement
}

void GJFollowCommandLayer::determineStartValues() {
    // 0x91ff64
    // TODO: Implement
}

void GJFollowCommandLayer::updateTargetGroupID2() {
    // 0x921d80
    // TODO: Implement
}

void GJFollowCommandLayer::updateTextInputLabel() {
    // 0x9205d8
    // TODO: Implement
}

void GJFollowCommandLayer::updateTextInputLabel2() {
    // 0x92070c
    // TODO: Implement
}

void GJFollowCommandLayer::init(EffectGameObject*, cocos2d::CCArray*) {
    // 0x920840
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void GJFollowCommandLayer::create(EffectGameObject*, cocos2d::CCArray*) {
    // 0x921a94
    GJFollowCommandLayer* ret = new GJFollowCommandLayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void GJFollowCommandLayer::onClose(cocos2d::CCObject*) {
    // 0x91fe9c
    // TODO: Implement
}

