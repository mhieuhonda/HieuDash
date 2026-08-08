
#include "CCMoveCNode.h"

CCMoveCNode::~CCMoveCNode() {
    this->cleanup();
}

CCMoveCNode::~CCMoveCNode() {
    this->cleanup();
}

CCMoveCNode::~CCMoveCNode() {
    this->cleanup();
}

void CCMoveCNode::init() {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void CCMoveCNode::reset() {
    // TODO: Implement
}

void CCMoveCNode::create() {
    CCMoveCNode* ret = new CCMoveCNode();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

