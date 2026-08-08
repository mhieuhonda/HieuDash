
#include "PointNode.h"

PointNode::~PointNode() {
    this->cleanup();
}

void PointNode::init(cocos2d::CCPoint) {
    bool ret = true;
    if (!ret) return false;
    // Initialize members and UI - stub
    return true;
}

void PointNode::create(cocos2d::CCPoint) {
    PointNode* ret = new PointNode();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

