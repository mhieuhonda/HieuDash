
#include "ArtistCell.h"

ArtistCell::ArtistCell(char const*, float, float) {
    // Stub - not yet implemented
}

ArtistCell::ArtistCell(char const*, float, float) {
    // Stub - not yet implemented
}

ArtistCell::~ArtistCell() {
    this->cleanup();
}

void ArtistCell::onNewgrounds(cocos2d::CCObject*) {
    // Stub - not yet implemented
}

void ArtistCell::updateBGColor(int) {
    // Update/refresh operation - stub
}

void ArtistCell::loadFromObject(SongInfoObject*) {
    // Load/decode operation - stub
}

void ArtistCell::draw() {
    // Stub - not yet implemented
}

bool ArtistCell::init() {
    bool ret = cocos2d::CCNode::init();
    if (!ret) return false;
    // Initialize members and UI - stub
    return true;
}

void ArtistCell::onYouTube(cocos2d::CCObject*) {
    // Stub - not yet implemented
}

