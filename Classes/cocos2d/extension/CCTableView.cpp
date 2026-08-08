// ============================================================
// CCTableView.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCTableView.h"

namespace cocos2d {
namespace extension {

CCTableView::CCTableView() {
    // 0xaa74f8
}

CCTableView::CCTableView() {
    // 0xaa74f8
}

CCTableView::~CCTableView() {
    // 0xaa7d28
    this->cleanup();
}

CCTableView::~CCTableView() {
    // 0xaa7c48
    this->cleanup();
}

CCTableView::~CCTableView() {
    // 0xaa7c48
    this->cleanup();
}

void CCTableView::reloadData() {
    // 0xaa8260
    // Load from file/storage
    // TODO: Implement loading
}

void CCTableView::cellAtIndex(unsigned int) {
    // 0xaa758c
    // TODO: Implement
}

void CCTableView::dequeueCell() {
    // 0xaa7604
    // TODO: Implement
}

void CCTableView::ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // 0xaa8ce0
    // TODO: Implement
}

void CCTableView::ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // 0xaa8bbc
    // TODO: Implement
}

void CCTableView::ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // 0xaa8e3c
    // TODO: Implement
}

void CCTableView::_indexFromOffset(cocos2d::CCPoint) {
    // 0xaa79fc
    // TODO: Implement
}

void CCTableView::_offsetFromIndex(unsigned int) {
    // 0xaa7868
    // TODO: Implement
}

void CCTableView::_setIndexForCell(unsigned int, cocos2d::extension::CCTableViewCell*) {
    // 0xaa7ad4
    // TODO: Implement
}

void CCTableView::ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // 0xaa8e90
    // TODO: Implement
}

void CCTableView::initWithViewSize(cocos2d::CCSize, cocos2d::CCNode*) {
    // 0xaa73c8
    // TODO: Implement
}

void CCTableView::__indexFromOffset(cocos2d::CCPoint) {
    // 0xaa791c
    // TODO: Implement
}

void CCTableView::__offsetFromIndex(unsigned int) {
    // 0xaa77a8
    // TODO: Implement
}

void CCTableView::insertCellAtIndex(unsigned int) {
    // 0xaa8450
    // TODO: Implement
}

void CCTableView::removeCellAtIndex(unsigned int) {
    // 0xaa8ab4
    // TODO: Implement
}

void CCTableView::scrollViewDidZoom(cocos2d::extension::CCScrollView*) {
    // 0xaa7374
    // TODO: Implement
}

void CCTableView::updateCellAtIndex(unsigned int) {
    // 0xaa8738
    // TODO: Implement
}

void CCTableView::_updateContentSize() {
    // 0xaa7670
    // TODO: Implement
}

void CCTableView::_addCellIfNecessary(cocos2d::extension::CCTableViewCell*) {
    // 0xaa7e90
    // TODO: Implement
}

void CCTableView::_moveCellOutOfSight(cocos2d::extension::CCTableViewCell*) {
    // 0xaa8630
    // TODO: Implement
}

void CCTableView::scrollViewDidScroll(cocos2d::extension::CCScrollView*) {
    // 0xaa87f4
    // TODO: Implement
}

void CCTableView::_updateCellPositions() {
    // 0xaa7fd8
    // TODO: Implement
}

void CCTableView::getVerticalFillOrder() {
    // 0xaa7584
    // TODO: Implement
}

void CCTableView::setVerticalFillOrder(cocos2d::extension::CCTableViewVerticalFillOrder) {
    // 0xaa8408
    // TODO: Implement
}

void CCTableView::unregisterAllScriptHandler() {
    // 0xaa7b84
    // TODO: Implement
}

void CCTableView::create(cocos2d::extension::CCTableViewDataSource*, cocos2d::CCSize) {
    // 0xaa81fc
    CCTableView* ret = new CCTableView();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCTableView::create(cocos2d::extension::CCTableViewDataSource*, cocos2d::CCSize, cocos2d::CCNode*) {
    // 0xaa813c
    CCTableView* ret = new CCTableView();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

} // namespace extension
} // namespace cocos2d
