
#include "CustomListView.h"

CustomListView::~CustomListView() {
    this->cleanup();
}

CustomListView::~CustomListView() {
    this->cleanup();
}

CustomListView::~CustomListView() {
    this->cleanup();
}

void CustomListView::getListCell(char const*) {
    // TODO: Implement
}

void CustomListView::getCellHeight(BoomListType) {
    // TODO: Implement
}

void CustomListView::create(cocos2d::CCArray*, TableViewCellDelegate*, float, float, int, BoomListType, float) {
    CustomListView* ret = new CustomListView();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CustomListView::loadCell(TableViewCell*, int) {
    // Load from file/storage
    // TODO: Implement loading
}

void CustomListView::reloadAll() {
    // Load from file/storage
    // TODO: Implement loading
}

void CustomListView::setupList(float) {
    // TODO: Implement
}

