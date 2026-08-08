// ============================================================
// TableView.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "TableView.h"

TableView::TableView(cocos2d::CCRect) {
    // 0x57a5f8
}

TableView::TableView(cocos2d::CCRect) {
    // 0x57a5f8
}

TableView::~TableView() {
    // 0x57a534
    this->cleanup();
}

TableView::~TableView() {
    // 0x57a464
    this->cleanup();
}

TableView::~TableView() {
    // 0x57a464
    this->cleanup();
}

void TableView::claimTouch(cocos2d::CCTouch*) {
    // 0x57b848
    // TODO: Implement
}

void TableView::reloadData() {
    // 0x57b2a8
    // Load from file/storage
    // TODO: Implement loading
}

void TableView::scrollWheel(float, float) {
    // 0x57a5e0
    // TODO: Implement
}

void TableView::touchFinish(cocos2d::CCTouch*) {
    // 0x57b94c
    // TODO: Implement
}

void TableView::ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // 0x57ccc4
    // TODO: Implement
}

void TableView::ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // 0x57cda8
    // TODO: Implement
}

void TableView::ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // 0x57ce6c
    // TODO: Implement
}

void TableView::cellForTouch(cocos2d::CCTouch*) {
    // 0x57ad70
    // TODO: Implement
}

void TableView::checkLastCell(TableViewCell*) {
    // 0x57c04c
    // TODO: Implement
}

void TableView::checkFirstCell(TableViewCell*) {
    // 0x57bcd0
    // TODO: Implement
}

void TableView::ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // 0x57ce00
    // TODO: Implement
}

void TableView::scrollToIndexPath(CCIndexPath&) {
    // 0x57b2a4
    // TODO: Implement
}

void TableView::initTableViewCells() {
    // 0x57a9ac
    // TODO: Implement
}

void TableView::cancelAndStoleTouch(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // 0x57b8b0
    // TODO: Implement
}

void TableView::checkBoundaryOfCell(TableViewCell*) {
    // 0x57ba3c
    // TODO: Implement
}

void TableView::checkBoundaryOfCell(cocos2d::CCPoint&, float) {
    // 0x57bb9c
    // TODO: Implement
}

void TableView::deleteTableViewCell(TableViewCell*) {
    // 0x57af5c
    // TODO: Implement
}

void TableView::isDuplicateIndexPath(CCIndexPath&) {
    // 0x57a88c
    // TODO: Implement
}

void TableView::cellForRowAtIndexPath(CCIndexPath&) {
    // 0x57b230
    // TODO: Implement
}

void TableView::scrollViewTouchMoving(CCScrollLayerExt*) {
    // 0x57a44c
    // TODO: Implement
}

void TableView::checkBoundaryOfContent(float) {
    // 0x57c584
    // TODO: Implement
}

void TableView::scrollViewDidEndMoving(CCScrollLayerExt*) {
    // 0x57a458
    // TODO: Implement
}

void TableView::registerWithTouchDispatcher() {
    // 0x57a5a8
    // TODO: Implement
}

void TableView::scrollViewDidEndDecelerating(CCScrollLayerExt*) {
    // 0x57a440
    // TODO: Implement
}

void TableView::isDuplicateInVisibleCellArray(CCIndexPath*) {
    // 0x57a818
    // TODO: Implement
}

void TableView::scrllViewWillBeginDecelerating(CCScrollLayerExt*) {
    // 0x57a434
    // TODO: Implement
}

void TableView::dequeueReusableCellWithIdentifier(char const*) {
    // 0x57b228
    // TODO: Implement
}

void TableView::removeIndexPathFromPathAddedArray(CCIndexPath&) {
    // 0x57a914
    // TODO: Implement
}

void TableView::create(TableViewDelegate*, TableViewDataSource*, TableViewCellDelegate*, cocos2d::CCRect) {
    // 0x57a748
    TableView* ret = new TableView();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void TableView::onExit() {
    // 0x57ccc0
    // TODO: Implement
}

void TableView::onEnter() {
    // 0x57ccbc
    // TODO: Implement
}

