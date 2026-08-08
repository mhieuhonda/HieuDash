
#include "CCSpritePart.h"

CCSpritePart::~CCSpritePart() {
    this->cleanup();
}

void CCSpritePart::setVisible(bool) {
    // Setter operation - stub
}

void CCSpritePart::frameChanged(std::string) {
    // Stub - not yet implemented
}

void CCSpritePart::getBeingUsed() {
    // Stub - not yet implemented
}

void CCSpritePart::hideInactive() {
    // Display operation - stub
}

void CCSpritePart::setBeingUsed(bool) {
    // Setter operation - stub
}

void CCSpritePart::resetTextureRect() {
    // Stub - not yet implemented
}

void CCSpritePart::markAsNotBeingUsed() {
    // Stub - not yet implemented
}

void CCSpritePart::updateDisplayFrame(std::string) {
    // Update/refresh operation - stub
}

CCSpritePart* CCSpritePart::createWithSpriteFrameName(char const*) {
    return nullptr;
}

void CCSpritePart::create(cocos2d::CCTexture2D*) {
    CCSpritePart* ret = new CCSpritePart();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

