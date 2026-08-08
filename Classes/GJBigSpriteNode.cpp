
#include "GJBigSpriteNode.h"

GJBigSpriteNode::~GJBigSpriteNode() {
    this->cleanup();
}

bool GJBigSpriteNode::init() {
    bool ret = cocos2d::CCNode::init();
    if (!ret) return false;
    // Initialize members and UI - stub
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

