
#include "CustomSFXCell.h"

CustomSFXCell::CustomSFXCell(char const*, float, float) {
    : m_activeSFXID(0)
}

CustomSFXCell::CustomSFXCell(char const*, float, float) {
    : m_activeSFXID(0)
}

CustomSFXCell::~CustomSFXCell() {
    this->cleanup();
}

CustomSFXCell::~CustomSFXCell() {
    this->cleanup();
}

CustomSFXCell::~CustomSFXCell() {
    this->cleanup();
}

void CustomSFXCell::shouldReload() {
    // Load from file/storage
    // TODO: Implement loading
}

void CustomSFXCell::updateBGColor(int) {
    // TODO: Implement
}

void CustomSFXCell::getActiveSFXID() {
    // TODO: Implement
}

void CustomSFXCell::loadFromObject(SFXInfoObject*) {
    // Load from file/storage
    // TODO: Implement loading
}

void CustomSFXCell::sfxObjectSelected(SFXInfoObject*) {
    // TODO: Implement
}

void CustomSFXCell::draw() {
    // Render/draw logic
    // TODO: Implement rendering
}

void CustomSFXCell::init() {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

