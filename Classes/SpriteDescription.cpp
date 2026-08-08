
#include "SpriteDescription.h"

SpriteDescription::~SpriteDescription() {
    this->cleanup();
}

void SpriteDescription::initDescription(DS_Dictionary*) {
    // Setup operation - stub
}

void SpriteDescription::initDescription(cocos2d::CCDictionary*) {
    // Setup operation - stub
}

SpriteDescription* SpriteDescription::createDescription(DS_Dictionary*) {
    return nullptr;
}

SpriteDescription* SpriteDescription::createDescription(cocos2d::CCDictionary*) {
    return nullptr;
}

