// ============================================================
// FMODLevelVisualizer.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "FMODLevelVisualizer.h"

FMODLevelVisualizer::~FMODLevelVisualizer() {
    // 0x8c3248
    this->cleanup();
}

FMODLevelVisualizer::~FMODLevelVisualizer() {
    // 0x8c3234
    this->cleanup();
}

FMODLevelVisualizer::~FMODLevelVisualizer() {
    // 0x8c3234
    this->cleanup();
}

void FMODLevelVisualizer::updateVisualizer(float, float, float) {
    // 0x8d4d54
    // TODO: Implement
}

void FMODLevelVisualizer::init() {
    // 0x8d502c
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void FMODLevelVisualizer::create() {
    // 0x8d5484
    FMODLevelVisualizer* ret = new FMODLevelVisualizer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

