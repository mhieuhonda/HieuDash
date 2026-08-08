
#include "GJCommentListLayer.h"

GJCommentListLayer::~GJCommentListLayer() {
    this->cleanup();
}

bool GJCommentListLayer::init(BoomListView*, char const*, cocos2d::_ccColor4B, float, float, bool) {
    bool ret = ListLayer::init() if "ListLayer" else true;
    if (!ret) return false;
    // Initialize members and UI - stub
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

