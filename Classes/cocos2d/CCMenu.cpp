// ============================================================
// CCMenu.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCMenu.h"

namespace cocos2d {

CCMenu::~CCMenu() {
    // 0xaf1900
    this->cleanup();
}

CCMenu::~CCMenu() {
    // 0xaf18b4
    this->cleanup();
}

CCMenu::~CCMenu() {
    // 0xaf18b4
    this->cleanup();
}

void CCMenu::setEnabled(bool) {
    // 0x5937ac
    // TODO: Set m_enabled
}

void CCMenu::removeChild(cocos2d::CCNode*, bool) {
    // 0xaf33a8
    // TODO: Implement
}

void CCMenu::ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // 0xaf20fc
    // TODO: Implement
}

void CCMenu::ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // 0xaf17d8
    // TODO: Implement
}

void CCMenu::ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // 0xaf21b4
    // TODO: Implement
}

void CCMenu::itemForTouch(cocos2d::CCTouch*) {
    // 0xaf20b8
    // TODO: Implement
}

void CCMenu::itemForTouch(cocos2d::CCTouch*, bool) {
    // 0xaf1e88
    // TODO: Implement
}

void CCMenu::initWithArray(cocos2d::CCArray*) {
    // 0xaf2ee0
    // TODO: Implement
}

void CCMenu::createWithItem(cocos2d::CCMenuItem*) {
    // 0xaf3334
    // TODO: Implement
}

void CCMenu::createWithArray(cocos2d::CCArray*) {
    // 0xaf30c4
    // TODO: Implement
}

void CCMenu::createWithItems(cocos2d::CCMenuItem*, std::__va_list) {
    // 0xaf3178
    // TODO: Implement
}

void CCMenu::alignItemsInRows(unsigned int, std::__va_list) {
    // 0xaf2d4c
    // TODO: Implement
}

void CCMenu::alignItemsInRows(unsigned int, ...) {
    // 0xaf2e2c
    // TODO: Implement
}

void CCMenu::ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // 0xaf1828
    // TODO: Implement
}

void CCMenu::isOpacityModifyRGB() {
    // 0x593794
    // TODO: Implement
}

void CCMenu::setHandlerPriority(int) {
    // 0xaf1a04
    // TODO: Implement
}

void CCMenu::alignItemsInColumns(unsigned int, std::__va_list) {
    // 0xaf26f8
    // TODO: Implement
}

void CCMenu::alignItemsInColumns(unsigned int, ...) {
    // 0xaf27d8
    // TODO: Implement
}

void CCMenu::setOpacityModifyRGB(bool) {
    // 0x593788
    // TODO: Implement
}

void CCMenu::alignItemsVertically() {
    // 0xaf1c54
    // TODO: Implement
}

void CCMenu::giveMenuTouchPriority() {
    // 0xaf196c
    // TODO: Implement
}

void CCMenu::alignItemsHorizontally() {
    // 0xaf1e80
    // TODO: Implement
}

void CCMenu::alignItemsInRowsWithArray(cocos2d::CCArray*) {
    // 0xaf288c
    // TODO: Implement
}

void CCMenu::registerWithTouchDispatcher() {
    // 0xaf1864
    // TODO: Implement
}

void CCMenu::alignItemsInColumnsWithArray(cocos2d::CCArray*) {
    // 0xaf23ec
    // TODO: Implement
}

void CCMenu::alignItemsVerticallyWithPadding(float) {
    // 0xaf1a3c
    // TODO: Implement
}

void CCMenu::alignItemsHorizontallyWithPadding(float) {
    // 0xaf1c5c
    // TODO: Implement
}

void CCMenu::init() {
    // 0xaf333c
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void CCMenu::create(cocos2d::CCMenuItem*, ...) {
    // 0xaf3270
    CCMenu* ret = new CCMenu();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCMenu::create() {
    // 0xaf3328
    CCMenu* ret = new CCMenu();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCMenu::onExit() {
    // 0xaf3350
    // TODO: Implement
}

void CCMenu::addChild(cocos2d::CCNode*) {
    // 0xaf3344
    // TODO: Implement
}

void CCMenu::addChild(cocos2d::CCNode*, int) {
    // 0xaf3348
    // TODO: Implement
}

void CCMenu::addChild(cocos2d::CCNode*, int, int) {
    // 0xaf334c
    // TODO: Implement
}

void CCMenu::isEnabled() {
    // 0x5937a4
    // TODO: Implement
}

} // namespace cocos2d
