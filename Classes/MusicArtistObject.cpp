// ============================================================
// MusicArtistObject.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "MusicArtistObject.h"

MusicArtistObject::~MusicArtistObject() {
    // 0x826e18
    this->cleanup();
}

MusicArtistObject::~MusicArtistObject() {
    // 0x826ca8
    this->cleanup();
}

MusicArtistObject::~MusicArtistObject() {
    // 0x826ca8
    this->cleanup();
}

void MusicArtistObject::init(int, std::string, std::string, std::string) {
    // 0x82e9d8
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void MusicArtistObject::create(int, std::string, std::string, std::string) {
    // 0x82ea30
    MusicArtistObject* ret = new MusicArtistObject();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

