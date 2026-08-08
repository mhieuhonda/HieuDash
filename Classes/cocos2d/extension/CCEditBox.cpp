// ============================================================
// CCEditBox.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCEditBox.h"

namespace cocos2d {
namespace extension {

CCEditBox::CCEditBox() {
    : m_fontName(""), m_placeholderFontName(""), m_visible(false)
    // 0xaa960c
}

CCEditBox::CCEditBox() {
    : m_fontName(""), m_placeholderFontName(""), m_visible(false)
    // 0xaa960c
}

CCEditBox::~CCEditBox() {
    // 0xaa9fb8
    this->cleanup();
}

CCEditBox::~CCEditBox() {
    // 0xaa9d80
    this->cleanup();
}

CCEditBox::~CCEditBox() {
    // 0xaa9d80
    this->cleanup();
}

void CCEditBox::setVisible(bool) {
    // 0xaaa028
    // TODO: Set m_visible
}

void CCEditBox::getDelegate() {
    // 0xaa98fc
    // TODO: Implement
}

void CCEditBox::setDelegate(cocos2d::extension::CCEditBoxDelegate*) {
    // 0xaa98e8
    // TODO: Implement
}

void CCEditBox::setFontName(char const*) {
    // 0xaa99f4
    // TODO: Set m_fontName
}

void CCEditBox::setFontSize(int) {
    // 0xaa9a50
    // TODO: Implement
}

void CCEditBox::setPosition(cocos2d::CCPoint const&) {
    // 0xaa9fec
    // TODO: Set m_position
}

void CCEditBox::getMaxLength() {
    // 0xaa9cb8
    // TODO: Implement
}

void CCEditBox::setFontColor(cocos2d::_ccColor3B const&) {
    // 0xaa9a90
    // TODO: Set m_fontColor
}

void CCEditBox::setInputFlag(cocos2d::extension::EditBoxInputFlag) {
    // 0xaa9cc0
    // TODO: Implement
}

void CCEditBox::setInputMode(cocos2d::extension::EditBoxInputMode) {
    // 0xaa9c60
    // TODO: Implement
}

void CCEditBox::setMaxLength(int) {
    // 0xaa9c8c
    // TODO: Implement
}

void CCEditBox::setReturnType(cocos2d::extension::KeyboardReturnType) {
    // 0xaa9cec
    // TODO: Implement
}

void CCEditBox::getPlaceHolder() {
    // 0xaa9c58
    // TODO: Implement
}

void CCEditBox::setAnchorPoint(cocos2d::CCPoint const&) {
    // 0xaaa0a4
    // TODO: Implement
}

void CCEditBox::setContentSize(cocos2d::CCSize const&) {
    // 0xaaa068
    // TODO: Implement
}

void CCEditBox::setPlaceHolder(char const*) {
    // 0xaa9c04
    // TODO: Implement
}

void CCEditBox::keyboardDidHide(cocos2d::CCIMEKeyboardNotificationInfo&) {
    // 0xaa94cc
    // TODO: Implement
}

void CCEditBox::keyboardDidShow(cocos2d::CCIMEKeyboardNotificationInfo&) {
    // 0xaa9480
    // TODO: Implement
}

void CCEditBox::touchDownAction(cocos2d::CCObject*, unsigned int) {
    // 0xaa945c
    // TODO: Implement
}

void CCEditBox::keyboardWillHide(cocos2d::CCIMEKeyboardNotificationInfo&) {
    // 0xaa948c
    // TODO: Implement
}

void CCEditBox::keyboardWillShow(cocos2d::CCIMEKeyboardNotificationInfo&) {
    // 0xaa94d8
    // TODO: Implement
}

void CCEditBox::setPlaceholderFont(char const*, int) {
    // 0xaa9ac8
    // TODO: Implement
}

void CCEditBox::setPlaceholderFontName(char const*) {
    // 0xaa9b2c
    // TODO: Set m_placeholderFontName
}

void CCEditBox::setPlaceholderFontSize(int) {
    // 0xaa9b8c
    // TODO: Implement
}

void CCEditBox::setPlaceholderFontColor(cocos2d::_ccColor3B const&) {
    // 0xaa9bcc
    // TODO: Set m_placeholderFontColor
}

void CCEditBox::registerScriptEditBoxHandler(int) {
    // 0xaa9d54
    // TODO: Implement
}

void CCEditBox::unregisterScriptEditBoxHandler() {
    // 0xaa9d10
    // TODO: Implement
}

void CCEditBox::initWithSizeAndBackgroundSprite(cocos2d::CCSize const&, cocos2d::extension::CCScale9Sprite*) {
    // 0xaa9700
    // TODO: Implement
}

void CCEditBox::visit() {
    // 0xaaa0e0
    // TODO: Implement
}

void CCEditBox::create(cocos2d::CCSize const&, cocos2d::extension::CCScale9Sprite*, cocos2d::extension::CCScale9Sprite*, cocos2d::extension::CCScale9Sprite*) {
    // 0xaa9804
    CCEditBox* ret = new CCEditBox();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCEditBox::onExit() {
    // 0xaaa148
    // TODO: Implement
}

void CCEditBox::getText() {
    // 0xaa9958
    // TODO: Implement
}

void CCEditBox::onEnter() {
    // 0xaaa114
    // TODO: Implement
}

void CCEditBox::setFont(char const*, int) {
    // 0xaa9990
    // TODO: Implement
}

void CCEditBox::setText(char const*) {
    // 0xaa9904
    // TODO: Implement
}

} // namespace extension
} // namespace cocos2d
