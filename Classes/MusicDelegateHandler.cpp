// ============================================================
// MusicDelegateHandler.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "MusicDelegateHandler.h"

MusicDelegateHandler::~MusicDelegateHandler() {
    // 0x826584
    this->cleanup();
}

MusicDelegateHandler::~MusicDelegateHandler() {
    // 0x826570
    this->cleanup();
}

MusicDelegateHandler::~MusicDelegateHandler() {
    // 0x826570
    this->cleanup();
}

void MusicDelegateHandler::init(MusicDownloadDelegate*) {
    // 0x8289cc
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void MusicDelegateHandler::create(MusicDownloadDelegate*) {
    // 0x828a00
    MusicDelegateHandler* ret = new MusicDelegateHandler();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

