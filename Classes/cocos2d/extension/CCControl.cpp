// ============================================================
// CCControl.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCControl.h"

namespace cocos2d {
namespace extension {

CCControl::CCControl() {
    : m_enabled(false)
    // 0xa997cc
}

CCControl::CCControl() {
    : m_enabled(false)
    // 0xa997cc
}

CCControl::~CCControl() {
    // 0xa9a238
    this->cleanup();
}

CCControl::~CCControl() {
    // 0xa9a190
    this->cleanup();
}

CCControl::~CCControl() {
    // 0xa9a190
    this->cleanup();
}

void CCControl::isSelected() {
    // 0xa99580
    // TODO: Implement
}

void CCControl::setEnabled(bool) {
    // 0xa99524
    // TODO: Set m_enabled
}

void CCControl::needsLayout() {
    // 0xa99520
    // TODO: Implement
}

void CCControl::setSelected(bool) {
    // 0xa99560
    // TODO: Implement
}

void CCControl::isHighlighted() {
    // 0xa995a8
    // TODO: Implement
}

void CCControl::isTouchInside(cocos2d::CCTouch*) {
    // 0xa99730
    // TODO: Implement
}

void CCControl::setHighlighted(bool) {
    // 0xa99588
    // TODO: Implement
}

void CCControl::getTouchLocation(cocos2d::CCTouch*) {
    // 0xa996b8
    // TODO: Implement
}

void CCControl::hasVisibleParents() {
    // 0xa99da8
    // TODO: Implement
}

void CCControl::isOpacityModifyRGB() {
    // 0xa99510
    // TODO: Implement
}

void CCControl::setOpacityModifyRGB(bool) {
    // 0xa99600
    // TODO: Implement
}

void CCControl::addHandleOfControlEvent(int, unsigned int) {
    // 0xa9a264
    // TODO: Implement
}

void CCControl::getHandleOfControlEvent(unsigned int) {
    // 0xa99ea0
    // TODO: Implement
}

void CCControl::removeHandleOfControlEvent(unsigned int) {
    // 0xa99e20
    // TODO: Implement
}

void CCControl::dispatchListforControlEvent(unsigned int) {
    // 0xa998e4
    // TODO: Implement
}

void CCControl::registerWithTouchDispatcher() {
    // 0xa995b0
    // TODO: Implement
}

void CCControl::sendActionsForControlEvents(unsigned int) {
    // 0xa99efc
    // TODO: Implement
}

void CCControl::addTargetWithActionForControlEvent(cocos2d::CCObject*, void (cocos2d::CCObject::*)(cocos2d::CCObject*, unsigned int), unsigned int) {
    // 0xa99954
    // TODO: Implement
}

void CCControl::addTargetWithActionForControlEvents(cocos2d::CCObject*, void (cocos2d::CCObject::*)(cocos2d::CCObject*, unsigned int), unsigned int) {
    // 0xa999a0
    // TODO: Implement
}

void CCControl::removeTargetWithActionForControlEvent(cocos2d::CCObject*, void (cocos2d::CCObject::*)(cocos2d::CCObject*, unsigned int), unsigned int) {
    // 0xa99b14
    // TODO: Implement
}

void CCControl::removeTargetWithActionForControlEvents(cocos2d::CCObject*, void (cocos2d::CCObject::*)(cocos2d::CCObject*, unsigned int), unsigned int) {
    // 0xa99c34
    // TODO: Implement
}

void CCControl::init() {
    // 0xa9a474
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void CCControl::create() {
    // 0xa99864
    CCControl* ret = new CCControl();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCControl::onExit() {
    // 0xa9a590
    // TODO: Implement
}

void CCControl::onEnter() {
    // 0xa9a58c
    // TODO: Implement
}

void CCControl::isEnabled() {
    // 0xa99558
    // TODO: Implement
}

} // namespace extension
} // namespace cocos2d
