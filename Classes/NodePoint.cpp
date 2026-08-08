
#include "NodePoint.h"

NodePoint::~NodePoint() {
    this->cleanup();
}

NodePoint::~NodePoint() {
    this->cleanup();
}

NodePoint::~NodePoint() {
    this->cleanup();
}

void NodePoint::init(cocos2d::CCPoint) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
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

