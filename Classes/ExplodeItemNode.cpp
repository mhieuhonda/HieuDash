
#include "ExplodeItemNode.h"

ExplodeItemNode::~ExplodeItemNode() {
    this->cleanup();
}

ExplodeItemNode::~ExplodeItemNode() {
    this->cleanup();
}

ExplodeItemNode::~ExplodeItemNode() {
    this->cleanup();
}

void ExplodeItemNode::createSprites(int, int, float, float, float, float, float, float, cocos2d::_ccColor4F, cocos2d::_ccColor4F, bool) {
    // TODO: Implement
}

void ExplodeItemNode::init(cocos2d::CCRenderTexture*) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
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
    // Game update loop — called every frame
    // TODO: Implement game logic update
}

