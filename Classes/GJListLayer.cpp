
#include "GJListLayer.h"

GJListLayer::~GJListLayer() {
    this->cleanup();
}

bool GJListLayer::init(BoomListView*, char const*, cocos2d::_ccColor4B, float, float, int) {
    bool ret = ListLayer::init() if "ListLayer" else true;
    if (!ret) return false;
    // Initialize members and UI - stub
    return true;
}

void GJListLayer::create(BoomListView*, char const*, cocos2d::_ccColor4B, float, float, int) {
    GJListLayer* ret = new GJListLayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

