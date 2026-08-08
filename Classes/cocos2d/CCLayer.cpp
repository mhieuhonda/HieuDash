// ============================================================
// CCLayer.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCLayer.h"

namespace cocos2d {

CCLayer::CCLayer() {
    : m_accelerometerEnabled(false), m_keyboardEnabled(false), m_keypadEnabled(false), m_mouseEnabled(false), m_touchEnabled(false)
    // 0xaeb090
}

CCLayer::CCLayer() {
    : m_accelerometerEnabled(false), m_keyboardEnabled(false), m_keypadEnabled(false), m_mouseEnabled(false), m_touchEnabled(false)
    // 0xaeb090
}

CCLayer::~CCLayer() {
    // 0xaeb48c
    this->cleanup();
}

CCLayer::~CCLayer() {
    // 0xaeb418
    this->cleanup();
}

CCLayer::~CCLayer() {
    // 0xaeb418
    this->cleanup();
}

void CCLayer::ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // 0xaeb220
    // TODO: Implement
}

void CCLayer::ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // 0xaeb27c
    // TODO: Implement
}

void CCLayer::ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // 0xaeb25c
    // TODO: Implement
}

void CCLayer::getTouchMode() {
    // 0xae9ca4
    // TODO: Implement
}

void CCLayer::setTouchMode(cocos2d::ccTouchesMode) {
    // 0xaea710
    // TODO: Implement
}

void CCLayer::didAccelerate(cocos2d::CCAcceleration*) {
    // 0xaeb048
    // TODO: Implement
}

void CCLayer::ccTouchesBegan(cocos2d::CCSet*, cocos2d::CCEvent*) {
    // 0xaeb304
    // TODO: Implement
}

void CCLayer::ccTouchesEnded(cocos2d::CCSet*, cocos2d::CCEvent*) {
    // 0xaeb344
    // TODO: Implement
}

void CCLayer::ccTouchesMoved(cocos2d::CCSet*, cocos2d::CCEvent*) {
    // 0xaeb324
    // TODO: Implement
}

void CCLayer::isMouseEnabled() {
    // 0xae9cc4
    // TODO: Implement
}

void CCLayer::isTouchEnabled() {
    // 0xae9c94
    // TODO: Implement
}

void CCLayer::keyBackClicked() {
    // 0xaea23c
    // TODO: Implement
}

void CCLayer::keyMenuClicked() {
    // 0xaea294
    // TODO: Implement
}

void CCLayer::isKeypadEnabled() {
    // 0xae9cb4
    // TODO: Implement
}

void CCLayer::setMouseEnabled(bool) {
    // 0xaeaa6c
    // TODO: Set m_mouseEnabled
}

void CCLayer::setTouchEnabled(bool) {
    // 0xaea858
    // TODO: Set m_touchEnabled
}

void CCLayer::ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // 0xaeb29c
    // TODO: Implement
}

void CCLayer::getTouchPriority() {
    // 0xae9c9c
    // TODO: Implement
}

void CCLayer::setKeypadEnabled(bool) {
    // 0xaea97c
    // TODO: Set m_keypadEnabled
}

void CCLayer::setTouchPriority(int) {
    // 0xaea774
    // TODO: Implement
}

void CCLayer::isKeyboardEnabled() {
    // 0xae9cbc
    // TODO: Implement
}

void CCLayer::ccTouchesCancelled(cocos2d::CCSet*, cocos2d::CCEvent*) {
    // 0xaeb364
    // TODO: Implement
}

void CCLayer::setKeyboardEnabled(bool) {
    // 0xaea9fc
    // TODO: Set m_keyboardEnabled
}

void CCLayer::getPreviousPriority() {
    // 0x56bac0
    // TODO: Implement
}

void CCLayer::setPreviousPriority(int) {
    // 0x56bab0
    // TODO: Implement
}

void CCLayer::isAccelerometerEnabled() {
    // 0xae9cac
    // TODO: Implement
}

void CCLayer::setAccelerometerEnabled(bool) {
    // 0xaea8c0
    // TODO: Set m_accelerometerEnabled
}

void CCLayer::excuteScriptTouchHandler(int, cocos2d::CCSet*) {
    // 0xaeb2bc
    // TODO: Implement
}

void CCLayer::excuteScriptTouchHandler(int, cocos2d::CCTouch*) {
    // 0xaeb1d8
    // TODO: Implement
}

void CCLayer::setAccelerometerInterval(double) {
    // 0xaea930
    // TODO: Implement
}

void CCLayer::onEnterTransitionDidFinish() {
    // 0xaec584
    // TODO: Implement
}

void CCLayer::registerScriptTouchHandler(int, bool, int, bool) {
    // 0xaea1ac
    // TODO: Implement
}

void CCLayer::registerScriptKeypadHandler(int) {
    // 0xaeb710
    // TODO: Implement
}

void CCLayer::registerWithTouchDispatcher() {
    // 0xaea130
    // TODO: Implement
}

void CCLayer::unregisterScriptTouchHandler() {
    // 0xaea20c
    // TODO: Implement
}

void CCLayer::unregisterScriptKeypadHandler() {
    // 0xaeb3e8
    // TODO: Implement
}

void CCLayer::registerScriptAccelerateHandler(int) {
    // 0xaeb3b4
    // TODO: Implement
}

void CCLayer::unregisterScriptAccelerateHandler() {
    // 0xaeb384
    // TODO: Implement
}

void CCLayer::init() {
    // 0xae9fbc
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void CCLayer::create() {
    // 0xaeb16c
    CCLayer* ret = new CCLayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCLayer::onExit() {
    // 0xaec4b0
    // TODO: Implement
}

void CCLayer::keyDown(cocos2d::enumKeyCodes, double) {
    // 0xaeaadc
    // TODO: Implement
}

void CCLayer::onEnter() {
    // 0xaec3d4
    // TODO: Implement
}

} // namespace cocos2d
