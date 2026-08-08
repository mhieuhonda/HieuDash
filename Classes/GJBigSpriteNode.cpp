
#include "GJBigSpriteNode.h"

GJBigSpriteNode::~GJBigSpriteNode() {
    this->cleanup();
}

GJBigSpriteNode::~GJBigSpriteNode() {
    this->cleanup();
}

GJBigSpriteNode::~GJBigSpriteNode() {
    this->cleanup();
}

void GJBigSpriteNode::init() {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void GJBigSpriteNode::create() {
    GJBigSpriteNode* ret = new GJBigSpriteNode();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

