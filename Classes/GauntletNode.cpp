
#include "GauntletNode.h"

GauntletNode::~GauntletNode() {
    this->cleanup();
}

GauntletNode::~GauntletNode() {
    this->cleanup();
}

GauntletNode::~GauntletNode() {
    this->cleanup();
}

void GauntletNode::nameForType(GauntletType) {
    // TODO: Implement
}

void GauntletNode::frameForType(GauntletType) {
    // TODO: Implement
}

void GauntletNode::generateNode() {
    // TODO: Implement
}

void GauntletNode::onClaimReward() {
    // TODO: Implement
}

void GauntletNode::showUnlockAnimation() {
    // TODO: Implement
}

void GauntletNode::init(GJMapPack*) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void GauntletNode::create(GJMapPack*) {
    GauntletNode* ret = new GauntletNode();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void GauntletNode::onUnlock() {
    // TODO: Implement
}

