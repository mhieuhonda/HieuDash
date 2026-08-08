
#include "AudioLineGuideGameObject.h"

AudioLineGuideGameObject::~AudioLineGuideGameObject() {
    this->cleanup();
}

AudioLineGuideGameObject::~AudioLineGuideGameObject() {
    this->cleanup();
}

AudioLineGuideGameObject::~AudioLineGuideGameObject() {
    this->cleanup();
}

void AudioLineGuideGameObject::getSaveString(GJBaseGameLayer*) {
    // Save to file/storage
    // TODO: Implement saving
}

void AudioLineGuideGameObject::customObjectSetup(std::vector<std::string>&, std::vector<void*>&) {
    // TODO: Implement
}

void AudioLineGuideGameObject::init() {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void AudioLineGuideGameObject::create() {
    AudioLineGuideGameObject* ret = new AudioLineGuideGameObject();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

