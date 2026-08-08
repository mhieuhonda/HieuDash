// ============================================================
// CCControlColourPicker.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCControlColourPicker.h"

namespace cocos2d {
namespace extension {

CCControlColourPicker::~CCControlColourPicker() {
    // 0xa9c8ac
    this->cleanup();
}

CCControlColourPicker::~CCControlColourPicker() {
    // 0xa9c860
    this->cleanup();
}

CCControlColourPicker::~CCControlColourPicker() {
    // 0xa9c860
    this->cleanup();
}

void CCControlColourPicker::ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // 0xa9c784
    // TODO: Implement
}

void CCControlColourPicker::colourPicker() {
    // 0xa9cf2c
    // TODO: Implement
}

void CCControlColourPicker::setColorValue(cocos2d::_ccColor3B const&) {
    // 0xa9cab0
    // TODO: Set m_colorValue
}

void CCControlColourPicker::updateControlPicker() {
    // 0xa9c918
    // TODO: Implement
}

void CCControlColourPicker::hueSliderValueChanged(cocos2d::CCObject*, unsigned int) {
    // 0xa9c970
    // TODO: Implement
}

void CCControlColourPicker::colourSliderValueChanged(cocos2d::CCObject*, unsigned int) {
    // 0xa9c798
    // TODO: Implement
}

void CCControlColourPicker::updateHueAndControlPicker() {
    // 0xa9ca38
    // TODO: Implement
}

void CCControlColourPicker::init() {
    // 0xa9cb8c
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void CCControlColourPicker::create() {
    // 0xa9ce88
    CCControlColourPicker* ret = new CCControlColourPicker();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

} // namespace extension
} // namespace cocos2d
