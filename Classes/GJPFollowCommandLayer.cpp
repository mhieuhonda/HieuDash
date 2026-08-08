// ============================================================
// GJPFollowCommandLayer.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "GJPFollowCommandLayer.h"

GJPFollowCommandLayer::~GJPFollowCommandLayer() {
    // 0x9224ac
    this->cleanup();
}

GJPFollowCommandLayer::~GJPFollowCommandLayer() {
    // 0x922440
    this->cleanup();
}

GJPFollowCommandLayer::~GJPFollowCommandLayer() {
    // 0x922440
    this->cleanup();
}

void GJPFollowCommandLayer::updateXMod() {
    // 0x924a88
    // TODO: Implement
}

void GJPFollowCommandLayer::updateYMod() {
    // 0x924b24
    // TODO: Implement
}

void GJPFollowCommandLayer::textChanged(CCTextInputNode*) {
    // 0x924d38
    // TODO: Implement
}

void GJPFollowCommandLayer::sliderChanged(cocos2d::CCObject*) {
    // 0x924c28
    // TODO: Implement
}

void GJPFollowCommandLayer::updateDurLabel(bool) {
    // 0x9228a0
    // TODO: Implement
}

void GJPFollowCommandLayer::updateDuration() {
    // 0x924bc0
    // TODO: Implement
}

void GJPFollowCommandLayer::updateMaxSpeed() {
    // 0x924cd0
    // TODO: Implement
}

void GJPFollowCommandLayer::onUpdateGroupID(cocos2d::CCObject*) {
    // 0x924a18
    // TODO: Implement
}

void GJPFollowCommandLayer::updateXModLabel() {
    // 0x922a0c
    // TODO: Implement
}

void GJPFollowCommandLayer::updateYModLabel() {
    // 0x922b44
    // TODO: Implement
}

void GJPFollowCommandLayer::sliderXModChanged(cocos2d::CCObject*) {
    // 0x924af0
    // TODO: Implement
}

void GJPFollowCommandLayer::sliderYModChanged(cocos2d::CCObject*) {
    // 0x924b8c
    // TODO: Implement
}

void GJPFollowCommandLayer::updateOffsetLabel() {
    // 0x922c7c
    // TODO: Implement
}

void GJPFollowCommandLayer::updatePlayerOffset() {
    // 0x924c68
    // TODO: Implement
}

void GJPFollowCommandLayer::updateMaxSpeedLabel() {
    // 0x922dc0
    // TODO: Implement
}

void GJPFollowCommandLayer::updateTargetGroupID() {
    // 0x924998
    // TODO: Implement
}

void GJPFollowCommandLayer::determineStartValues() {
    // 0x9225c0
    // TODO: Implement
}

void GJPFollowCommandLayer::updateTextInputLabel() {
    // 0x922ef8
    // TODO: Implement
}

void GJPFollowCommandLayer::init(EffectGameObject*, cocos2d::CCArray*) {
    // 0x92302c
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void GJPFollowCommandLayer::create(EffectGameObject*, cocos2d::CCArray*) {
    // 0x92478c
    GJPFollowCommandLayer* ret = new GJPFollowCommandLayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void GJPFollowCommandLayer::onClose(cocos2d::CCObject*) {
    // 0x9224d8
    // TODO: Implement
}

