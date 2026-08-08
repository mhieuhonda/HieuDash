
#include "BoomListLayer.h"

BoomListLayer::~BoomListLayer() {
    this->cleanup();
}

void BoomListLayer::init(BoomListView*, char const*) {
    bool ret = true;
    if (!ret) return false;
    // Initialize members and UI - stub
    return true;
}

void BoomListLayer::create(BoomListView*, char const*) {
    BoomListLayer* ret = new BoomListLayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

