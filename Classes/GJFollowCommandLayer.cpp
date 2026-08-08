
#include "GJFollowCommandLayer.h"

GJFollowCommandLayer::~GJFollowCommandLayer() {
    this->cleanup();
}

GJFollowCommandLayer::~GJFollowCommandLayer() {
    this->cleanup();
}

GJFollowCommandLayer::~GJFollowCommandLayer() {
    this->cleanup();
}

void GJFollowCommandLayer::updateXMod() {
    // TODO: Implement
}

void GJFollowCommandLayer::updateYMod() {
    // TODO: Implement
}

void GJFollowCommandLayer::textChanged(CCTextInputNode*) {
    // TODO: Implement
}

void GJFollowCommandLayer::sliderChanged(cocos2d::CCObject*) {
    // TODO: Implement
}

void GJFollowCommandLayer::updateDurLabel(bool) {
    // TODO: Implement
}

void GJFollowCommandLayer::updateDuration() {
    // TODO: Implement
}

void GJFollowCommandLayer::onUpdateGroupID(cocos2d::CCObject*) {
    // TODO: Implement
}

void GJFollowCommandLayer::updateXModLabel() {
    // TODO: Implement
}

void GJFollowCommandLayer::updateYModLabel() {
    // TODO: Implement
}

void GJFollowCommandLayer::onUpdateGroupID2(cocos2d::CCObject*) {
    // TODO: Implement
}

void GJFollowCommandLayer::sliderXModChanged(cocos2d::CCObject*) {
    // TODO: Implement
}

void GJFollowCommandLayer::sliderYModChanged(cocos2d::CCObject*) {
    // TODO: Implement
}

void GJFollowCommandLayer::updateTargetGroupID() {
    // TODO: Implement
}

void GJFollowCommandLayer::determineStartValues() {
    // TODO: Implement
}

void GJFollowCommandLayer::updateTargetGroupID2() {
    // TODO: Implement
}

void GJFollowCommandLayer::updateTextInputLabel() {
    // TODO: Implement
}

void GJFollowCommandLayer::updateTextInputLabel2() {
    // TODO: Implement
}

void GJFollowCommandLayer::init(EffectGameObject*, cocos2d::CCArray*) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void GJFollowCommandLayer::create(EffectGameObject*, cocos2d::CCArray*) {
    GJFollowCommandLayer* ret = new GJFollowCommandLayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void GJFollowCommandLayer::onClose(cocos2d::CCObject*) {
    // TODO: Implement
}

