
#include "MusicDelegateHandler.h"

MusicDelegateHandler::~MusicDelegateHandler() {
    this->cleanup();
}

void MusicDelegateHandler::init(MusicDownloadDelegate*) {
    bool ret = true;
    if (!ret) return false;
    // Initialize members and UI - stub
    return true;
}

void MusicDelegateHandler::create(MusicDownloadDelegate*) {
    MusicDelegateHandler* ret = new MusicDelegateHandler();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

