// ============================================================
// CCControlSwitch.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCControlSwitch.h"

namespace cocos2d {
namespace extension {

CCControlSwitch::CCControlSwitch() {
    : m_enabled(false)
    // 0xa9fa60
}

CCControlSwitch::CCControlSwitch() {
    : m_enabled(false)
    // 0xa9fa60
}

CCControlSwitch::~CCControlSwitch() {
    // 0xa9f218
    this->cleanup();
}

CCControlSwitch::~CCControlSwitch() {
    // 0xa9f1a4
    this->cleanup();
}

CCControlSwitch::~CCControlSwitch() {
    // 0xa9f1a4
    this->cleanup();
}

void CCControlSwitch::setEnabled(bool) {
    // 0xa9ef44
    // TODO: Set m_enabled
}

void CCControlSwitch::ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // 0xa9ff70
    // TODO: Implement
}

void CCControlSwitch::ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // 0xaa0100
    // TODO: Implement
}

void CCControlSwitch::ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // 0xaa0064
    // TODO: Implement
}

void CCControlSwitch::ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // 0xaa01d8
    // TODO: Implement
}

void CCControlSwitch::locationFromTouch(cocos2d::CCTouch*) {
    // 0xa9fef8
    // TODO: Implement
}

void CCControlSwitch::initWithMaskSprite(cocos2d::CCSprite*, cocos2d::CCSprite*, cocos2d::CCSprite*, cocos2d::CCSprite*) {
    // 0xa9fca8
    // TODO: Implement
}

void CCControlSwitch::initWithMaskSprite(cocos2d::CCSprite*, cocos2d::CCSprite*, cocos2d::CCSprite*, cocos2d::CCSprite*, cocos2d::CCLabelTTF*, cocos2d::CCLabelTTF*) {
    // 0xa9fad4
    // TODO: Implement
}

void CCControlSwitch::setOn(bool) {
    // 0xa9fef0
    // TODO: Implement
}

void CCControlSwitch::setOn(bool, bool) {
    // 0xa9fe40
    // TODO: Implement
}

void CCControlSwitch::create(cocos2d::CCSprite*, cocos2d::CCSprite*, cocos2d::CCSprite*, cocos2d::CCSprite*) {
    // 0xa9fcb4
    CCControlSwitch* ret = new CCControlSwitch();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCControlSwitch::create(cocos2d::CCSprite*, cocos2d::CCSprite*, cocos2d::CCSprite*, cocos2d::CCSprite*, cocos2d::CCLabelTTF*, cocos2d::CCLabelTTF*) {
    // 0xa9fd70
    CCControlSwitch* ret = new CCControlSwitch();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

} // namespace extension
} // namespace cocos2d
