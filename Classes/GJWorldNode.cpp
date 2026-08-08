
#include "GJWorldNode.h"

GJWorldNode::~GJWorldNode() {
    this->cleanup();
}

GJWorldNode::~GJWorldNode() {
    this->cleanup();
}

GJWorldNode::~GJWorldNode() {
    this->cleanup();
}

void GJWorldNode::addDotsToLevel(int, bool) {
    // TODO: Implement
}

void GJWorldNode::unlockActiveItem() {
    // TODO: Implement
}

void GJWorldNode::dotPositionForLevel(int, int) {
    // TODO: Implement
}

void GJWorldNode::positionForLevelButton(int) {
    // TODO: Implement
}

void GJWorldNode::init(int, WorldSelectLayer*) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void GJWorldNode::create(int, WorldSelectLayer*) {
    GJWorldNode* ret = new GJWorldNode();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void GJWorldNode::onLevel(cocos2d::CCObject*) {
    // TODO: Implement
}

void GJWorldNode::playStep1() {
    // TODO: Implement
}

void GJWorldNode::playStep2() {
    // TODO: Implement
}

void GJWorldNode::playStep3() {
    // TODO: Implement
}

