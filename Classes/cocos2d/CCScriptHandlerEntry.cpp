// ============================================================
// CCScriptHandlerEntry.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCScriptHandlerEntry.h"

namespace cocos2d {

CCScriptHandlerEntry::~CCScriptHandlerEntry() {
    // 0xb10774
    this->cleanup();
}

CCScriptHandlerEntry::~CCScriptHandlerEntry() {
    // 0xb1071c
    this->cleanup();
}

CCScriptHandlerEntry::~CCScriptHandlerEntry() {
    // 0xb1071c
    this->cleanup();
}

void CCScriptHandlerEntry::create(int) {
    // 0xb10414
    CCScriptHandlerEntry* ret = new CCScriptHandlerEntry();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

} // namespace cocos2d
