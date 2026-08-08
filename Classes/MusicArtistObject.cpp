
#include "MusicArtistObject.h"

MusicArtistObject::~MusicArtistObject() {
    this->cleanup();
}

void MusicArtistObject::init(int, std::string, std::string, std::string) {
    bool ret = true;
    if (!ret) return false;
    // Initialize members and UI - stub
    return true;
}

void MusicArtistObject::create(int, std::string, std::string, std::string) {
    MusicArtistObject* ret = new MusicArtistObject();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

