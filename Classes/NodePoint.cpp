
#include "NodePoint.h"

NodePoint::~NodePoint() {
    this->cleanup();
}

void NodePoint::init(cocos2d::CCPoint) {
    bool ret = true;
    if (!ret) return false;
    // Initialize members and UI - stub
    return true;
}

void NodePoint::create(cocos2d::CCPoint) {
    NodePoint* ret = new NodePoint();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

