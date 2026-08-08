// ============================================================
// GJUINode.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "GJUINode.h"

GJUINode::~GJUINode() {
    // 0x5c5c04
    this->cleanup();
}

GJUINode::~GJUINode() {
    // 0x5c5bf0
    this->cleanup();
}

GJUINode::~GJUINode() {
    // 0x5c5bf0
    this->cleanup();
}

void GJUINode::getOpacity() {
    // 0x5c7938
    // TODO: Implement
}

void GJUINode::resetState() {
    // 0x5c6b08
    // TODO: Implement
}

void GJUINode::setOpacity(unsigned char) {
    // 0x5c79f0
    // TODO: Implement
}

void GJUINode::touchEnded() {
    // 0x5c71a8
    // TODO: Implement
}

void GJUINode::updateSize(float, float) {
    // 0x5c63d0
    // TODO: Implement
}

void GJUINode::toggleModeB(bool) {
    // 0x5c78c8
    // TODO: Implement
}

void GJUINode::updateWidth(float) {
    // 0x5c6480
    // TODO: Implement
}

void GJUINode::saveToConfig(UIButtonConfig&) {
    // 0x5c795c
    // Save to file/storage
    // TODO: Implement saving
}

void GJUINode::updateHeight(float) {
    // 0x5c6488
    // TODO: Implement
}

void GJUINode::getButtonScale() {
    // 0x5c64a0
    // TODO: Implement
}

void GJUINode::loadFromConfig(UIButtonConfig&) {
    // 0x5c7cc8
    // Load from file/storage
    // TODO: Implement loading
}

void GJUINode::updateDeadzone(int) {
    // 0x5c6494
    // TODO: Implement
}

void GJUINode::updateRangePos(cocos2d::CCPoint) {
    // 0x5c68dc
    // TODO: Implement
}

void GJUINode::activeTouchTest(cocos2d::CCPoint) {
    // 0x5c6840
    // TODO: Implement
}

void GJUINode::highlightButton(int) {
    // 0x5c7234
    // TODO: Implement
}

void GJUINode::toggleHighlight(int, bool) {
    // 0x5c6a60
    // TODO: Implement
}

void GJUINode::updateDragRadius(float) {
    // 0x5c65d0
    // TODO: Implement
}

void GJUINode::updateButtonScale(float) {
    // 0x5c65f8
    // TODO: Implement
}

void GJUINode::updateButtonFrames() {
    // 0x5c62f0
    // TODO: Implement
}

void GJUINode::activeRangeTouchTest(cocos2d::CCPoint) {
    // 0x5c6678
    // TODO: Implement
}

void GJUINode::updateButtonPositions() {
    // 0x5c64c4
    // TODO: Implement
}

void GJUINode::draw() {
    // 0x5c5c38
    // Render/draw logic
    // TODO: Implement rendering
}

void GJUINode::init(UIButtonConfig&) {
    // 0x5c7a40
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void GJUINode::create(UIButtonConfig&) {
    // 0x5c7bcc
    GJUINode* ret = new GJUINode();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void GJUINode::touchTest(cocos2d::CCPoint) {
    // 0x5c6998
    // TODO: Implement
}

