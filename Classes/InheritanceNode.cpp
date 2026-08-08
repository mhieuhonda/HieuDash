
#include "InheritanceNode.h"

InheritanceNode::~InheritanceNode() {
    this->cleanup();
}

InheritanceNode::~InheritanceNode() {
    this->cleanup();
}

InheritanceNode::~InheritanceNode() {
    this->cleanup();
}

void InheritanceNode::init(int, InheritanceNode*) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
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

