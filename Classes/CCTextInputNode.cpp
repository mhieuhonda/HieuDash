// ============================================================
// CCTextInputNode.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCTextInputNode.h"

CCTextInputNode::~CCTextInputNode() {
    // 0x595620
    this->cleanup();
}

CCTextInputNode::~CCTextInputNode() {
    // 0x595490
    this->cleanup();
}

CCTextInputNode::~CCTextInputNode() {
    // 0x595490
    this->cleanup();
}

void CCTextInputNode::addTextArea(TextArea*) {
    // 0x5a38bc
    // TODO: Implement
}

void CCTextInputNode::forceOffset() {
    // 0x5a502c
    // TODO: Implement
}

void CCTextInputNode::textChanged() {
    // 0x5a3bdc
    // TODO: Implement
}

void CCTextInputNode::updateLabel(std::string) {
    // 0x5a3400
    // TODO: Implement
}

void CCTextInputNode::ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // 0x5a55d0
    // TODO: Implement
}

void CCTextInputNode::ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // 0x5951b4
    // TODO: Implement
}

void CCTextInputNode::ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // 0x5951cc
    // TODO: Implement
}

void CCTextInputNode::refreshLabel() {
    // 0x5a2bb8
    // TODO: Implement
}

void CCTextInputNode::setAllowedChars(std::string) {
    // 0x5a2b48
    // TODO: Implement
}

void CCTextInputNode::ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // 0x5951c0
    // TODO: Implement
}

void CCTextInputNode::keyboardWillHide(cocos2d::CCIMEKeyboardNotificationInfo&) {
    // 0x5953b8
    // TODO: Implement
}

void CCTextInputNode::keyboardWillShow(cocos2d::CCIMEKeyboardNotificationInfo&) {
    // 0x595270
    // TODO: Implement
}

void CCTextInputNode::onClickTrackNode(bool) {
    // 0x595448
    // TODO: Implement
}

void CCTextInputNode::setMaxLabelScale(float) {
    // 0x5a2ee8
    // TODO: Set m_maxLabelScale
}

void CCTextInputNode::setMaxLabelWidth(float) {
    // 0x5a2ef0
    // TODO: Implement
}

void CCTextInputNode::updateBlinkLabel() {
    // 0x5a33f4
    // TODO: Implement
}

void CCTextInputNode::setLabelNormalColor(cocos2d::_ccColor3B) {
    // 0x5a2f18
    // TODO: Set m_labelNormalColor
}

void CCTextInputNode::updateCursorPosition(cocos2d::CCPoint, cocos2d::CCRect) {
    // 0x5a5038
    // TODO: Implement
}

void CCTextInputNode::onTextFieldInsertText(cocos2d::CCTextFieldTTF*, char const*, int, cocos2d::enumKeyCodes) {
    // 0x5a4498
    // TODO: Implement
}

void CCTextInputNode::updateBlinkLabelToChar(int) {
    // 0x5a2f34
    // TODO: Implement
}

void CCTextInputNode::updateDefaultFontValues(std::string) {
    // 0x5a25a4
    // TODO: Implement
}

void CCTextInputNode::onTextFieldAttachWithIME(cocos2d::CCTextFieldTTF*) {
    // 0x5a4bc0
    // TODO: Implement
}

void CCTextInputNode::onTextFieldDetachWithIME(cocos2d::CCTextFieldTTF*) {
    // 0x5a3d04
    // TODO: Implement
}

void CCTextInputNode::setLabelPlaceholderColor(cocos2d::_ccColor3B) {
    // 0x5a2f00
    // TODO: Set m_labelPlaceholderColor
}

void CCTextInputNode::setLabelPlaceholderScale(float) {
    // 0x5a2ef8
    // TODO: Set m_labelPlaceholderScale
}

void CCTextInputNode::registerWithTouchDispatcher() {
    // 0x595380
    // TODO: Implement
}

void CCTextInputNode::init(float, float, char const*, char const*, int, char const*) {
    // 0x5a26fc
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void CCTextInputNode::visit() {
    // 0x5a57c4
    // TODO: Implement
}

void CCTextInputNode::create(float, float, char const*, char const*, int, char const*) {
    // 0x5a29a4
    CCTextInputNode* ret = new CCTextInputNode();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCTextInputNode::getString() {
    // 0x5a2b50
    // TODO: Implement
}

void CCTextInputNode::setString(std::string) {
    // 0x5a3ab8
    // TODO: Set m_string
}

