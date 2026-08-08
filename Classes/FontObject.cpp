
#include "FontObject.h"

FontObject::~FontObject() {
    this->cleanup();
}

void FontObject::getFontWidth(int) {
    // Stub - not yet implemented
}

void FontObject::parseConfigFile(char const*, float) {
    // Stub - not yet implemented
}

void FontObject::initWithConfigFile(char const*, float) {
    // Setup operation - stub
}

FontObject* FontObject::createWithConfigFile(char const*, float) {
    return nullptr;
}

