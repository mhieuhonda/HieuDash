// ============================================================
// BoomScrollLayer.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "BoomScrollLayer.h"

BoomScrollLayer::~BoomScrollLayer() {
    // 0x56d060
    this->cleanup();
}

BoomScrollLayer::~BoomScrollLayer() {
    // 0x56cfd8
    this->cleanup();
}

BoomScrollLayer::~BoomScrollLayer() {
    // 0x56cfd8
    this->cleanup();
}

void BoomScrollLayer::claimTouch(cocos2d::CCTouch*) {
    // 0x56e5b4
    // TODO: Implement
}

void BoomScrollLayer::moveToPage(int) {
    // 0x56df9c
    // TODO: Implement
}

void BoomScrollLayer::removePage(cocos2d::CCLayer*) {
    // 0x56e4cc
    // TODO: Implement
}

void BoomScrollLayer::selectPage(int) {
    // 0x56e300
    // TODO: Implement
}

void BoomScrollLayer::updateDots(float) {
    // 0x56d6e0
    // TODO: Implement
}

void BoomScrollLayer::quickUpdate() {
    // 0x56e3d0
    // TODO: Implement
}

void BoomScrollLayer::setDotScale(float) {
    // 0x56d2d8
    // TODO: Set m_dotScale
}

void BoomScrollLayer::updatePages() {
    // 0x56d3c8
    // TODO: Implement
}

void BoomScrollLayer::ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // 0x56d1d0
    // TODO: Implement
}

void BoomScrollLayer::ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // 0x56e128
    // TODO: Implement
}

void BoomScrollLayer::ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // 0x56e6b8
    // TODO: Implement
}

void BoomScrollLayer::getTotalPages() {
    // 0x56d338
    // TODO: Implement
}

void BoomScrollLayer::moveToPageEnded() {
    // 0x56d8cc
    // TODO: Implement
}

void BoomScrollLayer::ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // 0x56e3a4
    // TODO: Implement
}

void BoomScrollLayer::instantMoveToPage(int) {
    // 0x56decc
    // TODO: Implement
}

void BoomScrollLayer::cancelAndStoleTouch(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // 0x56e61c
    // TODO: Implement
}

void BoomScrollLayer::removePageWithNumber(int) {
    // 0x56e560
    // TODO: Implement
}

void BoomScrollLayer::togglePageIndicators(bool) {
    // 0x56d514
    // TODO: Implement
}

void BoomScrollLayer::getRelativePageForNum(int) {
    // 0x56d69c
    // TODO: Implement
}

void BoomScrollLayer::getRelativePosForPage(int) {
    // 0x56d990
    // TODO: Implement
}

void BoomScrollLayer::pageNumberForPosition(cocos2d::CCPoint) {
    // 0x56d57c
    // TODO: Implement
}

void BoomScrollLayer::repositionPagesLooped() {
    // 0x56dc00
    // TODO: Implement
}

void BoomScrollLayer::setupDynamicScrolling(cocos2d::CCArray*, DynamicScrollDelegate*) {
    // 0x56d9e8
    // TODO: Implement
}

void BoomScrollLayer::positionForPageWithNumber(int) {
    // 0x56d640
    // TODO: Implement
}

void BoomScrollLayer::setPagesIndicatorPosition(cocos2d::CCPoint) {
    // 0x56d8a0
    // TODO: Set m_pagesIndicatorPosition
}

void BoomScrollLayer::registerWithTouchDispatcher() {
    // 0x56d114
    // TODO: Implement
}

void BoomScrollLayer::init(cocos2d::CCArray*, int, bool, cocos2d::CCArray*, DynamicScrollDelegate*) {
    // 0x56e99c
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void BoomScrollLayer::visit() {
    // 0x56d08c
    // TODO: Implement
}

void BoomScrollLayer::create(cocos2d::CCArray*, int, bool) {
    // 0x56ee1c
    BoomScrollLayer* ret = new BoomScrollLayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void BoomScrollLayer::create(cocos2d::CCArray*, int, bool, cocos2d::CCArray*, DynamicScrollDelegate*) {
    // 0x56ec64
    BoomScrollLayer* ret = new BoomScrollLayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void BoomScrollLayer::addPage(cocos2d::CCLayer*) {
    // 0x56e498
    // TODO: Implement
}

void BoomScrollLayer::addPage(cocos2d::CCLayer*, int) {
    // 0x56e42c
    // TODO: Implement
}

void BoomScrollLayer::getPage(int) {
    // 0x56d350
    // TODO: Implement
}

