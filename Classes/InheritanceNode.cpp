
#include "InheritanceNode.h"

InheritanceNode::~InheritanceNode() {
    this->cleanup();
}

void InheritanceNode::init(int, InheritanceNode*) {
    bool ret = true;
    if (!ret) return false;
    // Initialize members and UI - stub
    return true;
}

void InheritanceNode::create(int, InheritanceNode*) {
    InheritanceNode* ret = new InheritanceNode();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

