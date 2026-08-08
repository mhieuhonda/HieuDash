// ============================================================
// CCLabelBMFont.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCLabelBMFont.h"

namespace cocos2d {

CCLabelBMFont::CCLabelBMFont() {
    : m_cString(""), m_cascadeColorEnabled(false), m_cascadeOpacityEnabled(false), m_scale(0.0f), m_scaleX(0.0f)
    , m_scaleY(0.0f), m_string("")
    // 0xae45ec
}

CCLabelBMFont::CCLabelBMFont() {
    : m_cString(""), m_cascadeColorEnabled(false), m_cascadeOpacityEnabled(false), m_scale(0.0f), m_scaleX(0.0f)
    , m_scaleY(0.0f), m_string("")
    // 0xae45ec
}

CCLabelBMFont::~CCLabelBMFont() {
    // 0xae2d40
    this->cleanup();
}

CCLabelBMFont::~CCLabelBMFont() {
    // 0xae2bcc
    this->cleanup();
}

CCLabelBMFont::~CCLabelBMFont() {
    // 0xae2bcc
    this->cleanup();
}

void CCLabelBMFont::getFntFile() {
    // 0xae49f4
    // TODO: Implement
}

void CCLabelBMFont::getOpacity() {
    // 0xae23dc
    // TODO: Implement
}

void CCLabelBMFont::setCString(char const*) {
    // 0xae23a0
    // TODO: Set m_cString
}

void CCLabelBMFont::setFntFile(char const*) {
    // 0xae7678
    // TODO: Implement
}

void CCLabelBMFont::setOpacity(unsigned char) {
    // 0xae2b2c
    // TODO: Implement
}

void CCLabelBMFont::updateLabel() {
    // 0xae7b50
    // TODO: Implement
}

void CCLabelBMFont::setAlignment(cocos2d::CCTextAlignment) {
    // 0xae2600
    // TODO: Implement
}

void CCLabelBMFont::createBatched(char const*, char const*, cocos2d::CCArray*, int) {
    // 0xae8938
    // TODO: Implement
}

void CCLabelBMFont::initWithString(char const*, char const*, float, cocos2d::CCTextAlignment, cocos2d::CCPoint) {
    // 0xae83bc
    // TODO: Implement
}

void CCLabelBMFont::setAnchorPoint(cocos2d::CCPoint const&) {
    // 0xae8a9c
    // TODO: Implement
}

void CCLabelBMFont::createFontChars() {
    // 0xae5cfc
    // TODO: Implement
}

void CCLabelBMFont::limitLabelWidth(float, float, float) {
    // 0xae4a04
    // TODO: Implement
}

void CCLabelBMFont::purgeCachedData() {
    // 0xae45e8
    // TODO: Implement
}

void CCLabelBMFont::getDisplayedColor() {
    // 0xae23cc
    // TODO: Implement
}

void CCLabelBMFont::getLetterPosXLeft(cocos2d::CCSprite*, float, bool) {
    // 0xae48a4
    // TODO: Implement
}

void CCLabelBMFont::getLetterPosXRight(cocos2d::CCSprite*, float, bool) {
    // 0xae4948
    // TODO: Implement
}

void CCLabelBMFont::isOpacityModifyRGB() {
    // 0xae23fc
    // TODO: Implement
}

void CCLabelBMFont::getDisplayedOpacity() {
    // 0xae23ec
    // TODO: Implement
}

void CCLabelBMFont::setOpacityModifyRGB(bool) {
    // 0xae296c
    // TODO: Implement
}

void CCLabelBMFont::updateDisplayedColor(cocos2d::_ccColor3B const&) {
    // 0xae24d8
    // TODO: Implement
}

void CCLabelBMFont::isCascadeColorEnabled() {
    // 0xae25c0
    // TODO: Implement
}

void CCLabelBMFont::kerningAmountForFirst(unsigned short, unsigned short) {
    // 0xae4728
    // TODO: Implement
}

void CCLabelBMFont::setCascadeColorEnabled(bool) {
    // 0xae25d0
    // TODO: Set m_cascadeColorEnabled
}

void CCLabelBMFont::updateDisplayedOpacity(unsigned char) {
    // 0xae2410
    // TODO: Implement
}

void CCLabelBMFont::isCascadeOpacityEnabled() {
    // 0xae25e0
    // TODO: Implement
}

void CCLabelBMFont::setCascadeOpacityEnabled(bool) {
    // 0xae25f0
    // TODO: Set m_cascadeOpacityEnabled
}

void CCLabelBMFont::setLineBreakWithoutSpace(bool) {
    // 0xae2640
    // TODO: Implement
}

void CCLabelBMFont::init() {
    // 0xae8a24
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void CCLabelBMFont::create(char const*, char const*) {
    // 0xae88b8
    CCLabelBMFont* ret = new CCLabelBMFont();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCLabelBMFont::create(char const*, char const*, float) {
    // 0xae8834
    CCLabelBMFont* ret = new CCLabelBMFont();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCLabelBMFont::create(char const*, char const*, float, cocos2d::CCTextAlignment) {
    // 0xae87ac
    CCLabelBMFont* ret = new CCLabelBMFont();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCLabelBMFont::create(char const*, char const*, float, cocos2d::CCTextAlignment, cocos2d::CCPoint) {
    // 0xae86d8
    CCLabelBMFont* ret = new CCLabelBMFont();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCLabelBMFont::create() {
    // 0xae46bc
    CCLabelBMFont* ret = new CCLabelBMFont();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCLabelBMFont::getColor() {
    // 0xae23bc
    // TODO: Implement
}

void CCLabelBMFont::setColor(cocos2d::_ccColor3B const&) {
    // 0xae2a30
    // TODO: Set m_color
}

void CCLabelBMFont::setScale(float) {
    // 0xae8aec
    // TODO: Set m_scale
}

void CCLabelBMFont::setWidth(float) {
    // 0xae2620
    // TODO: Implement
}

void CCLabelBMFont::getString() {
    // 0xae2390
    // TODO: Implement
}

void CCLabelBMFont::setScaleX(float) {
    // 0xae8b1c
    // TODO: Set m_scaleX
}

void CCLabelBMFont::setScaleY(float) {
    // 0xae8b4c
    // TODO: Set m_scaleY
}

void CCLabelBMFont::setString(char const*) {
    // 0xae2368
    // TODO: Set m_string
}

void CCLabelBMFont::setString(char const*, bool) {
    // 0xae2730
    // TODO: Set m_string
}

void CCLabelBMFont::setString(unsigned short*, bool) {
    // 0xae759c
    // TODO: Set m_string
}

void CCLabelBMFont::getConfiguration()) const {
    // 0xae49fc
}

} // namespace cocos2d
