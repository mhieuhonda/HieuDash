// ============================================================
// CCLabelTTF.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCLabelTTF.h"

namespace cocos2d {

CCLabelTTF::CCLabelTTF() {
    : m_fontName(""), m_string("")
    // 0xae8cf4
}

CCLabelTTF::CCLabelTTF() {
    : m_fontName(""), m_string("")
    // 0xae8cf4
}

CCLabelTTF::~CCLabelTTF() {
    // 0xae8cd0
    this->cleanup();
}

CCLabelTTF::~CCLabelTTF() {
    // 0xae8b8c
    this->cleanup();
}

CCLabelTTF::~CCLabelTTF() {
    // 0xae8b8c
    this->cleanup();
}

void CCLabelTTF::description() {
    // 0xae8e24
    // TODO: Implement
}

void CCLabelTTF::getFontName() {
    // 0xae8e94
    // TODO: Implement
}

void CCLabelTTF::getFontSize() {
    // 0xae8e8c
    // TODO: Implement
}

void CCLabelTTF::setFontName(char const*) {
    // 0xae93c0
    // TODO: Set m_fontName
}

void CCLabelTTF::setFontSize(float) {
    // 0xae939c
    // TODO: Implement
}

void CCLabelTTF::enableShadow(cocos2d::CCSize const&, float, float, bool) {
    // 0xae94d0
    // TODO: Implement
}

void CCLabelTTF::enableStroke(cocos2d::_ccColor3B const&, float, bool) {
    // 0xae956c
    // TODO: Implement
}

void CCLabelTTF::disableShadow(bool) {
    // 0xae9550
    // TODO: Implement
}

void CCLabelTTF::disableStroke(bool) {
    // 0xae95f4
    // TODO: Implement
}

void CCLabelTTF::getDimensions() {
    // 0xae8e64
    // TODO: Implement
}

void CCLabelTTF::setDimensions(cocos2d::CCSize const&) {
    // 0xae933c
    // TODO: Implement
}

void CCLabelTTF::updateTexture() {
    // 0xae9130
    // TODO: Implement
}

void CCLabelTTF::initWithString(char const*, char const*, float) {
    // 0xae9b20
    // TODO: Implement
}

void CCLabelTTF::initWithString(char const*, char const*, float, cocos2d::CCSize const&, cocos2d::CCTextAlignment) {
    // 0xae9b18
    // TODO: Implement
}

void CCLabelTTF::initWithString(char const*, char const*, float, cocos2d::CCSize const&, cocos2d::CCTextAlignment, cocos2d::CCVerticalTextAlignment) {
    // 0xae9930
    // TODO: Implement
}

void CCLabelTTF::setFontFillColor(cocos2d::_ccColor3B const&, bool) {
    // 0xae9610
    // TODO: Set m_fontFillColor
}

void CCLabelTTF::getTextDefinition() {
    // 0xae9788
    // TODO: Implement
}

void CCLabelTTF::setTextDefinition(cocos2d::_ccFontDefinition*) {
    // 0xae9778
    // TODO: Implement
}

void CCLabelTTF::getVerticalAlignment() {
    // 0xae8e5c
    // TODO: Implement
}

void CCLabelTTF::setVerticalAlignment(cocos2d::CCVerticalTextAlignment) {
    // 0xae9318
    // TODO: Implement
}

void CCLabelTTF::_prepareTextDefinition(bool) {
    // 0xae8ea0
    // TODO: Implement
}

void CCLabelTTF::getHorizontalAlignment() {
    // 0xae8e54
    // TODO: Implement
}

void CCLabelTTF::setHorizontalAlignment(cocos2d::CCTextAlignment) {
    // 0xae92f4
    // TODO: Implement
}

void CCLabelTTF::createWithFontDefinition(char const*, cocos2d::_ccFontDefinition&) {
    // 0xae9be0
    // TODO: Implement
}

void CCLabelTTF::_updateWithTextDefinition(cocos2d::_ccFontDefinition&, bool) {
    // 0xae9664
    // TODO: Implement
}

void CCLabelTTF::initWithStringAndTextDefinition(char const*, cocos2d::_ccFontDefinition&) {
    // 0xae9b50
    // TODO: Implement
}

void CCLabelTTF::init() {
    // 0xae9b38
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void CCLabelTTF::create(char const*, char const*, float) {
    // 0xae9af8
    CCLabelTTF* ret = new CCLabelTTF();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCLabelTTF::create(char const*, char const*, float, cocos2d::CCSize const&, cocos2d::CCTextAlignment) {
    // 0xae9b10
    CCLabelTTF* ret = new CCLabelTTF();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCLabelTTF::create(char const*, char const*, float, cocos2d::CCSize const&, cocos2d::CCTextAlignment, cocos2d::CCVerticalTextAlignment) {
    // 0xae9a48
    CCLabelTTF* ret = new CCLabelTTF();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCLabelTTF::create() {
    // 0xae8db4
    CCLabelTTF* ret = new CCLabelTTF();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCLabelTTF::getString() {
    // 0xae8b7c
    // TODO: Implement
}

void CCLabelTTF::setString(char const*) {
    // 0xae9288
    // TODO: Set m_string
}

} // namespace cocos2d
