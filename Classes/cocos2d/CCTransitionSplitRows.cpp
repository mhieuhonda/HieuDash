// ============================================================
// CCTransitionSplitRows.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCTransitionSplitRows.h"

namespace cocos2d {

CCTransitionSplitRows::CCTransitionSplitRows() {
    // 0xaeec14
}

CCTransitionSplitRows::CCTransitionSplitRows() {
    // 0xaeec14
}

CCTransitionSplitRows::~CCTransitionSplitRows() {
    // 0xaed118
    this->cleanup();
}

CCTransitionSplitRows::~CCTransitionSplitRows() {
    // 0xaecd50
    this->cleanup();
}

CCTransitionSplitRows::~CCTransitionSplitRows() {
    // 0xaecd50
    this->cleanup();
}

void CCTransitionSplitRows::action() {
    // 0xaedb4c
    // TODO: Implement
}

void CCTransitionSplitRows::create(float, cocos2d::CCScene*) {
    // 0xaeec4c
    CCTransitionSplitRows* ret = new CCTransitionSplitRows();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

} // namespace cocos2d
