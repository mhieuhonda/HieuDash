
#include "SetupRandAdvTriggerPopup.h"

SetupRandAdvTriggerPopup::~SetupRandAdvTriggerPopup() {
    this->cleanup();
}

SetupRandAdvTriggerPopup::~SetupRandAdvTriggerPopup() {
    this->cleanup();
}

SetupRandAdvTriggerPopup::~SetupRandAdvTriggerPopup() {
    this->cleanup();
}

void SetupRandAdvTriggerPopup::onAddChance(cocos2d::CCObject*) {
    // TODO: Implement
}

void SetupRandAdvTriggerPopup::textChanged(CCTextInputNode*) {
    // TODO: Implement
}

void SetupRandAdvTriggerPopup::removeGroupID(int) {
    // TODO: Implement
}

void SetupRandAdvTriggerPopup::addChanceToObject(RandTriggerGameObject*, int, int) {
    // TODO: Implement
}

void SetupRandAdvTriggerPopup::onRemoveFromGroup(cocos2d::CCObject*) {
    // TODO: Implement
}

void SetupRandAdvTriggerPopup::callRemoveFromGroup(float) {
    // TODO: Implement
}

void SetupRandAdvTriggerPopup::updateGroupIDButtons() {
    // TODO: Implement
}

void SetupRandAdvTriggerPopup::removeGroupIDFromObject(RandTriggerGameObject*, int) {
    // TODO: Implement
}

void SetupRandAdvTriggerPopup::init(RandTriggerGameObject*, cocos2d::CCArray*) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupRandAdvTriggerPopup::create(RandTriggerGameObject*, cocos2d::CCArray*) {
    SetupRandAdvTriggerPopup* ret = new SetupRandAdvTriggerPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void SetupRandAdvTriggerPopup::onClose(cocos2d::CCObject*) {
    // TODO: Implement
}

void SetupRandAdvTriggerPopup::addChance(int, int) {
    // TODO: Implement
}

