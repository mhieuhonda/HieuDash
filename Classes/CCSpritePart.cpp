
#include "CCSpritePart.h"

CCSpritePart::~CCSpritePart() {
    this->cleanup();
}

CCSpritePart::~CCSpritePart() {
    this->cleanup();
}

CCSpritePart::~CCSpritePart() {
    this->cleanup();
}

void CCSpritePart::setVisible(bool) {
    // TODO: Set m_visible
}

void CCSpritePart::frameChanged(std::string) {
    // TODO: Implement
}

void CCSpritePart::getBeingUsed() {
    // TODO: Implement
}

void CCSpritePart::hideInactive() {
    // TODO: Implement
}

void CCSpritePart::setBeingUsed(bool) {
    // TODO: Implement
}

void CCSpritePart::resetTextureRect() {
    // TODO: Implement
}

void CCSpritePart::markAsNotBeingUsed() {
    // TODO: Implement
}

void CCSpritePart::updateDisplayFrame(std::string) {
    // TODO: Implement
}

void CCSpritePart::createWithSpriteFrameName(char const*) {
    // TODO: Implement
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

