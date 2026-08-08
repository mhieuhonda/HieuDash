// ============================================================
// CCNodeRGBA.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCNodeRGBA.h"

namespace cocos2d {

CCNodeRGBA::CCNodeRGBA() {
    : m_cascadeColorEnabled(false), m_cascadeOpacityEnabled(false)
    // 0xacd804
}

CCNodeRGBA::CCNodeRGBA() {
    : m_cascadeColorEnabled(false), m_cascadeOpacityEnabled(false)
    // 0xacd804
}

CCNodeRGBA::~CCNodeRGBA() {
    // 0xacc05c
    this->cleanup();
}

CCNodeRGBA::~CCNodeRGBA() {
    // 0xacc040
    this->cleanup();
}

CCNodeRGBA::~CCNodeRGBA() {
    // 0xacc040
    this->cleanup();
}

void CCNodeRGBA::getOpacity() {
    // 0xacacec
    // TODO: Implement
}

void CCNodeRGBA::setOpacity(unsigned char) {
    // 0xacbb38
    // TODO: Implement
}

void CCNodeRGBA::getDisplayedColor() {
    // 0xacad3c
    // TODO: Implement
}

void CCNodeRGBA::isOpacityModifyRGB() {
    // 0x575bfc
    // TODO: Implement
}

void CCNodeRGBA::getDisplayedOpacity() {
    // 0xacacfc
    // TODO: Implement
}

void CCNodeRGBA::setOpacityModifyRGB(bool) {
    // 0x575bf0
    // TODO: Implement
}

void CCNodeRGBA::updateDisplayedColor(cocos2d::_ccColor3B const&) {
    // 0xacbcd8
    // TODO: Implement
}

void CCNodeRGBA::isCascadeColorEnabled() {
    // 0xacad4c
    // TODO: Implement
}

void CCNodeRGBA::setCascadeColorEnabled(bool) {
    // 0xacad5c
    // TODO: Set m_cascadeColorEnabled
}

void CCNodeRGBA::updateDisplayedOpacity(unsigned char) {
    // 0xacba00
    // TODO: Implement
}

void CCNodeRGBA::isCascadeOpacityEnabled() {
    // 0xacad0c
    // TODO: Implement
}

void CCNodeRGBA::setCascadeOpacityEnabled(bool) {
    // 0xacad1c
    // TODO: Set m_cascadeOpacityEnabled
}

void CCNodeRGBA::init() {
    // 0xacbae0
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void CCNodeRGBA::create() {
    // 0xacd868
    CCNodeRGBA* ret = new CCNodeRGBA();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCNodeRGBA::getColor() {
    // 0xacad2c
    // TODO: Implement
}

void CCNodeRGBA::setColor(cocos2d::_ccColor3B const&) {
    // 0xacbbd8
    // TODO: Set m_color
}

} // namespace cocos2d
