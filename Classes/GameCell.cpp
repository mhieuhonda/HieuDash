
#include "GameCell.h"

GameCell::GameCell(char const*, float, float) {
    // Stub - not yet implemented
}

GameCell::GameCell(char const*, float, float) {
    // Stub - not yet implemented
}

GameCell::~GameCell() {
    this->cleanup();
}

void GameCell::updateBGColor(int) {
    // Update/refresh operation - stub
}

void GameCell::loadFromString(std::string) {
    // Load/decode operation - stub
}

void GameCell::draw() {
    // Stub - not yet implemented
}

bool GameCell::init() {
    bool ret = cocos2d::CCNode::init();
    if (!ret) return false;
    // Initialize members and UI - stub
    return true;
}

void GameCell::onTouch(cocos2d::CCObject*) {
    // Stub - not yet implemented
}

