// ============================================================
// CCSchedulerScriptHandlerEntry.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCSchedulerScriptHandlerEntry.h"

namespace cocos2d {

CCSchedulerScriptHandlerEntry::~CCSchedulerScriptHandlerEntry() {
    // 0xb107d0
    this->cleanup();
}

CCSchedulerScriptHandlerEntry::~CCSchedulerScriptHandlerEntry() {
    // 0xb10798
    this->cleanup();
}

CCSchedulerScriptHandlerEntry::~CCSchedulerScriptHandlerEntry() {
    // 0xb10798
    this->cleanup();
}

void CCSchedulerScriptHandlerEntry::init(float, bool) {
    // 0xb10478
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void CCSchedulerScriptHandlerEntry::create(int, float, bool) {
    // 0xb104e0
    CCSchedulerScriptHandlerEntry* ret = new CCSchedulerScriptHandlerEntry();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

} // namespace cocos2d
