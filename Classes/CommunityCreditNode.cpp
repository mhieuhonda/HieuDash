
#include "CommunityCreditNode.h"

CommunityCreditNode::~CommunityCreditNode() {
    this->cleanup();
}

void CommunityCreditNode::init(int, int, int, std::string) {
    bool ret = true;
    if (!ret) return false;
    // Initialize members and UI - stub
    return true;
}

void CommunityCreditNode::create(int, int, int, std::string) {
    CommunityCreditNode* ret = new CommunityCreditNode();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

