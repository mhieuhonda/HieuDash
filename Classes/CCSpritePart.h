// ============================================================
// CCSpritePart.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef CCSPRITEPART_H_
#define CCSPRITEPART_H_

#include "cocos2d.h"
#include <string>

class CCSpritePart {
public:
    virtual ~CCSpritePart();
    virtual ~CCSpritePart();
    virtual ~CCSpritePart();

    void setVisible(bool);
    void frameChanged(std::string);
    void getBeingUsed();
    void hideInactive();
    void setBeingUsed(bool);
    void resetTextureRect();
    void markAsNotBeingUsed();
    void updateDisplayFrame(std::string);
    void createWithSpriteFrameName(char const*);
    void create(cocos2d::CCTexture2D*);

};

#endif // CCSPRITEPART_H_
