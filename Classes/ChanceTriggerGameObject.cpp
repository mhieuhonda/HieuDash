
#include "ChanceTriggerGameObject.h"

ChanceTriggerGameObject::~ChanceTriggerGameObject() {
    this->cleanup();
}

ChanceTriggerGameObject::~ChanceTriggerGameObject() {
    this->cleanup();
}

ChanceTriggerGameObject::~ChanceTriggerGameObject() {
    this->cleanup();
}

void ChanceTriggerGameObject::getTargetIDs(std::vector<int>&) {
    // TODO: Implement
}

void ChanceTriggerGameObject::containsTargetID(int) {
    // TODO: Implement
}

void ChanceTriggerGameObject::editChanceObject(int, int) {
    // TODO: Implement
}

void ChanceTriggerGameObject::revertChanceRemap() {
    // TODO: Implement
}

void ChanceTriggerGameObject::remapChanceObjects(std::unordered_map<int, int>, std::equal_to<int>, std::allocator<std::pair<const int, int> > > const*) {
    // TODO: Implement
}

void ChanceTriggerGameObject::init(char const*) {
    bool ret = EffectGameObject::init() if "EffectGameObject" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

