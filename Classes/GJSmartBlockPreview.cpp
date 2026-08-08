
#include "GJSmartBlockPreview.h"

GJSmartBlockPreview::~GJSmartBlockPreview() {
    this->cleanup();
}

GJSmartBlockPreview::~GJSmartBlockPreview() {
    this->cleanup();
}

GJSmartBlockPreview::~GJSmartBlockPreview() {
    this->cleanup();
}

void GJSmartBlockPreview::addPreview(std::string, std::string, LevelEditorLayer*) {
    // TODO: Implement
}

void GJSmartBlockPreview::createInfoLabel() {
    // TODO: Implement
}

void GJSmartBlockPreview::addTemplateGuide(SmartPrefabResult, float) {
    // TODO: Implement
}

void GJSmartBlockPreview::addTemplateGuide(std::string, int) {
    // TODO: Implement
}

void GJSmartBlockPreview::toggleSelectItem(bool) {
    // TODO: Implement
}

void GJSmartBlockPreview::init(std::string) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void GJSmartBlockPreview::create(std::string) {
    GJSmartBlockPreview* ret = new GJSmartBlockPreview();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void GJSmartBlockPreview::addCount(int) {
    // TODO: Implement
}

void GJSmartBlockPreview::addChance(int, int) {
    // TODO: Implement
}

