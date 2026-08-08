// ============================================================
// GJGroundLayer.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "GJGroundLayer.h"

GJGroundLayer::~GJGroundLayer() {
    // 0x7eb608
    this->cleanup();
}

GJGroundLayer::~GJGroundLayer() {
    // 0x7eb53c
    this->cleanup();
}

GJGroundLayer::~GJGroundLayer() {
    // 0x7eb53c
    this->cleanup();
}

void GJGroundLayer::createLine(int) {
    // 0x7ebb4c
    // TODO: Implement
}

void GJGroundLayer::getGroundY() {
    // 0x7ec8c4
    // TODO: Implement
}

void GJGroundLayer::showGround() {
    // 0x7eb508
    // TODO: Implement
}

void GJGroundLayer::hideShadows() {
    // 0x7ec564
    // TODO: Implement
}

void GJGroundLayer::scaleGround(float) {
    // 0x7ec6a0
    // TODO: Implement
}

void GJGroundLayer::fadeInGround(float) {
    // 0x7eb728
    // TODO: Implement
}

void GJGroundLayer::fadeOutGround(float) {
    // 0x7eb514
    // TODO: Implement
}

void GJGroundLayer::updateShadows() {
    // 0x7ec5dc
    // TODO: Implement
}

void GJGroundLayer::fadeInFinished() {
    // 0x7eb51c
    // TODO: Implement
}

void GJGroundLayer::positionGround(float) {
    // 0x7ec850
    // TODO: Implement
}

void GJGroundLayer::toggleVisible01(bool) {
    // 0x7eb79c
    // TODO: Implement
}

void GJGroundLayer::toggleVisible02(bool) {
    // 0x7eb7dc
    // TODO: Implement
}

void GJGroundLayer::updateGroundPos(cocos2d::CCPoint) {
    // 0x7eba08
    // TODO: Implement
}

void GJGroundLayer::updateLineBlend(bool) {
    // 0x7ec4e8
    // TODO: Implement
}

void GJGroundLayer::deactivateGround() {
    // 0x7ec82c
    // TODO: Implement
}

void GJGroundLayer::updateShadowXPos(float, float) {
    // 0x7ec72c
    // TODO: Implement
}

void GJGroundLayer::loadGroundSprites(int, bool) {
    // 0x7eb814
    // Load from file/storage
    // TODO: Implement loading
}

void GJGroundLayer::updateGroundWidth(bool) {
    // 0x7ec344
    // TODO: Implement
}

void GJGroundLayer::updateGround01Color(cocos2d::_ccColor3B) {
    // 0x7eba54
    // TODO: Implement
}

void GJGroundLayer::updateGround02Color(cocos2d::_ccColor3B) {
    // 0x7ebad0
    // TODO: Implement
}

void GJGroundLayer::draw() {
    // 0x7eb528
    // Render/draw logic
    // TODO: Implement rendering
}

void GJGroundLayer::init(int, int) {
    // 0x7ebd54
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void GJGroundLayer::create(int, int) {
    // 0x7ec23c
    GJGroundLayer* ret = new GJGroundLayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

