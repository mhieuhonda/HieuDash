
#include "GJCommentListLayer.h"

GJCommentListLayer::~GJCommentListLayer() {
    this->cleanup();
}

GJCommentListLayer::~GJCommentListLayer() {
    this->cleanup();
}

GJCommentListLayer::~GJCommentListLayer() {
    this->cleanup();
}

void GJCommentListLayer::init(BoomListView*, char const*, cocos2d::_ccColor4B, float, float, bool) {
    bool ret = ListLayer::init() if "ListLayer" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void GJCommentListLayer::create(BoomListView*, char const*, cocos2d::_ccColor4B, float, float, bool) {
    GJCommentListLayer* ret = new GJCommentListLayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

