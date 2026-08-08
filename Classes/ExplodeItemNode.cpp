
#include "ExplodeItemNode.h"

ExplodeItemNode::~ExplodeItemNode() {
    this->cleanup();
}

ExplodeItemNode* ExplodeItemNode::createSprites(int, int, float, float, float, float, float, float, cocos2d::_ccColor4F, cocos2d::_ccColor4F, bool) {
    return nullptr;
}

void ExplodeItemNode::init(cocos2d::CCRenderTexture*) {
    bool ret = true;
    if (!ret) return false;
    // Initialize members and UI - stub
    return true;
}

void ExplodeItemNode::create(cocos2d::CCRenderTexture*) {
    ExplodeItemNode* ret = new ExplodeItemNode();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void ExplodeItemNode::update(float) {
    // Update/refresh operation - stub
}

