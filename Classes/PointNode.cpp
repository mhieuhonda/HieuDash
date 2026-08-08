
#include "PointNode.h"

PointNode::~PointNode() {
    this->cleanup();
}

PointNode::~PointNode() {
    this->cleanup();
}

PointNode::~PointNode() {
    this->cleanup();
}

void PointNode::init(cocos2d::CCPoint) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
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

