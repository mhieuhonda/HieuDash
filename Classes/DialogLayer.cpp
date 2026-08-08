// ============================================================
// DialogLayer.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "DialogLayer.h"

DialogLayer::~DialogLayer() {
    // 0x915f80
    this->cleanup();
}

DialogLayer::~DialogLayer() {
    // 0x915ee4
    this->cleanup();
}

DialogLayer::~DialogLayer() {
    // 0x915ee4
    this->cleanup();
}

void DialogLayer::ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // 0x9174a8
    // TODO: Implement
}

void DialogLayer::ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // 0x915eb0
    // TODO: Implement
}

void DialogLayer::ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // 0x915ed8
    // TODO: Implement
}

void DialogLayer::addToMainScene() {
    // 0x9172c4
    // TODO: Implement
}

void DialogLayer::keyBackClicked() {
    // 0x9173a4
    // TODO: Implement
}

void DialogLayer::animateInDialog() {
    // 0x91783c
    // TODO: Implement
}

void DialogLayer::handleDialogTap() {
    // 0x9173b0
    // TODO: Implement
}

void DialogLayer::ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // 0x9160b8
    // TODO: Implement
}

void DialogLayer::createDialogLayer(DialogObject*, cocos2d::CCArray*, int) {
    // 0x917118
    // TODO: Implement
}

void DialogLayer::createWithObjects(cocos2d::CCArray*, int) {
    // 0x917250
    // TODO: Implement
}

void DialogLayer::displayNextObject() {
    // 0x916bf0
    // TODO: Implement
}

void DialogLayer::fadeInTextFinished(TextArea*) {
    // 0x915fe4
    // TODO: Implement
}

void DialogLayer::animateInRandomSide() {
    // 0x9177c0
    // TODO: Implement
}

void DialogLayer::displayDialogObject(DialogObject*) {
    // 0x916724
    // TODO: Implement
}

void DialogLayer::updateChatPlacement(DialogChatPlacement) {
    // 0x9165dc
    // TODO: Implement
}

void DialogLayer::updateNavButtonFrame() {
    // 0x916b68
    // TODO: Implement
}

void DialogLayer::finishCurrentAnimation() {
    // 0x917264
    // TODO: Implement
}

void DialogLayer::registerWithTouchDispatcher() {
    // 0x915fac
    // TODO: Implement
}

void DialogLayer::init(DialogObject*, cocos2d::CCArray*, int) {
    // 0x916c50
    bool ret = cocos2d::CCLayer::init() if "cocos2d::CCLayer" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void DialogLayer::create(DialogObject*, int) {
    // 0x917244
    DialogLayer* ret = new DialogLayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void DialogLayer::keyDown(cocos2d::enumKeyCodes, double) {
    // 0x9174e8
    // TODO: Implement
}

void DialogLayer::onClose() {
    // 0x91731c
    // TODO: Implement
}

void DialogLayer::onEnter() {
    // 0x917844
    // TODO: Implement
}

void DialogLayer::animateIn(DialogAnimationType) {
    // 0x917530
    // TODO: Implement
}

