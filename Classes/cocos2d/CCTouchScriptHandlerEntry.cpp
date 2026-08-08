// ============================================================
// CCTouchScriptHandlerEntry.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCTouchScriptHandlerEntry.h"

namespace cocos2d {

CCTouchScriptHandlerEntry::~CCTouchScriptHandlerEntry() {
    // 0xb1084c
    this->cleanup();
}

CCTouchScriptHandlerEntry::~CCTouchScriptHandlerEntry() {
    // 0xb107f4
    this->cleanup();
}

CCTouchScriptHandlerEntry::~CCTouchScriptHandlerEntry() {
    // 0xb107f4
    this->cleanup();
}

void CCTouchScriptHandlerEntry::init(bool, int, bool) {
    // 0xb10570
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void CCTouchScriptHandlerEntry::create(int, bool, int, bool) {
    // 0xb10588
    CCTouchScriptHandlerEntry* ret = new CCTouchScriptHandlerEntry();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

} // namespace cocos2d
