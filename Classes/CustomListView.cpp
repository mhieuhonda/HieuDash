// ============================================================
// CustomListView.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CustomListView.h"

CustomListView::~CustomListView() {
    // 0x608b78
    this->cleanup();
}

CustomListView::~CustomListView() {
    // 0x608b24
    this->cleanup();
}

CustomListView::~CustomListView() {
    // 0x608b24
    this->cleanup();
}

void CustomListView::getListCell(char const*) {
    // 0x61fbf8
    // TODO: Implement
}

void CustomListView::getCellHeight(BoomListType) {
    // 0x60d0d0
    // TODO: Implement
}

void CustomListView::create(cocos2d::CCArray*, TableViewCellDelegate*, float, float, int, BoomListType, float) {
    // 0x60cf7c
    CustomListView* ret = new CustomListView();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CustomListView::loadCell(TableViewCell*, int) {
    // 0x6203ac
    // Load from file/storage
    // TODO: Implement loading
}

void CustomListView::reloadAll() {
    // 0x61e028
    // Load from file/storage
    // TODO: Implement loading
}

void CustomListView::setupList(float) {
    // 0x60d0fc
    // TODO: Implement
}

