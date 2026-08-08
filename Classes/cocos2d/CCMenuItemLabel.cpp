// ============================================================
// CCMenuItemLabel.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCMenuItemLabel.h"

namespace cocos2d {

CCMenuItemLabel::~CCMenuItemLabel() {
    // 0xaf5078
    this->cleanup();
}

CCMenuItemLabel::~CCMenuItemLabel() {
    // 0xaf505c
    this->cleanup();
}

CCMenuItemLabel::~CCMenuItemLabel() {
    // 0xaf505c
    this->cleanup();
}

void CCMenuItemLabel::setEnabled(bool) {
    // 0xaf3a1c
    // TODO: Set m_enabled
}

void CCMenuItemLabel::unselected() {
    // 0xaf3d60
    // TODO: Implement
}

void CCMenuItemLabel::initWithLabel(cocos2d::CCNode*, cocos2d::CCObject*, void (cocos2d::CCObject::*)(cocos2d::CCObject*)) {
    // 0xaf566c
    // TODO: Implement
}

void CCMenuItemLabel::getDisabledColor() {
    // 0xaf3494
    // TODO: Implement
}

void CCMenuItemLabel::setDisabledColor(cocos2d::_ccColor3B const&) {
    // 0xaf349c
    // TODO: Set m_disabledColor
}

void CCMenuItemLabel::create(cocos2d::CCNode*) {
    // 0xaf57e8
    CCMenuItemLabel* ret = new CCMenuItemLabel();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCMenuItemLabel::create(cocos2d::CCNode*, cocos2d::CCObject*, void (cocos2d::CCObject::*)(cocos2d::CCObject*)) {
    // 0xaf5744
    CCMenuItemLabel* ret = new CCMenuItemLabel();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCMenuItemLabel::activate() {
    // 0xaf52ec
    // TODO: Implement
}

void CCMenuItemLabel::getLabel() {
    // 0xaf34b0
    // TODO: Implement
}

void CCMenuItemLabel::selected() {
    // 0xaf3cb4
    // TODO: Implement
}

void CCMenuItemLabel::setLabel(cocos2d::CCNode*) {
    // 0xaf36b4
    // TODO: Implement
}

void CCMenuItemLabel::setString(char const*) {
    // 0xaf5878
    // TODO: Set m_string
}

} // namespace cocos2d
