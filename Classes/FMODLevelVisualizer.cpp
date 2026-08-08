
#include "FMODLevelVisualizer.h"

FMODLevelVisualizer::~FMODLevelVisualizer() {
    this->cleanup();
}

FMODLevelVisualizer::~FMODLevelVisualizer() {
    this->cleanup();
}

FMODLevelVisualizer::~FMODLevelVisualizer() {
    this->cleanup();
}

void FMODLevelVisualizer::updateVisualizer(float, float, float) {
    // TODO: Implement
}

void FMODLevelVisualizer::init() {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void FMODLevelVisualizer::create() {
    FMODLevelVisualizer* ret = new FMODLevelVisualizer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

