// ============================================================
// GauntletNode.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "GauntletNode.h"

GauntletNode::~GauntletNode() {
    // 0x917a48
    this->cleanup();
}

GauntletNode::~GauntletNode() {
    // 0x917a0c
    this->cleanup();
}

GauntletNode::~GauntletNode() {
    // 0x917a0c
    this->cleanup();
}

void GauntletNode::nameForType(GauntletType) {
    // 0x9199dc
    // TODO: Implement
}

void GauntletNode::frameForType(GauntletType) {
    // 0x9191f8
    // TODO: Implement
}

void GauntletNode::generateNode() {
    // 0x91a1e0
    // TODO: Implement
}

void GauntletNode::onClaimReward() {
    // 0x917850
    // TODO: Implement
}

void GauntletNode::showUnlockAnimation() {
    // 0x918cb0
    // TODO: Implement
}

void GauntletNode::init(GJMapPack*) {
    // 0x91bec0
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void GauntletNode::create(GJMapPack*) {
    // 0x91bf14
    GauntletNode* ret = new GauntletNode();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void GauntletNode::onUnlock() {
    // 0x91d2b0
    // TODO: Implement
}

