
#ifndef CCSPRITEPART_H_
#define CCSPRITEPART_H_

#include "cocos2d.h"
#include <string>

class CCSpritePart {
public:
    virtual ~CCSpritePart();

    void setVisible(bool);
    void frameChanged(std::string);
    void getBeingUsed();
    void hideInactive();
    void setBeingUsed(bool);
    void resetTextureRect();
    void markAsNotBeingUsed();
    void updateDisplayFrame(std::string);
    CCSpritePart* createWithSpriteFrameName(char const*);
    void create(cocos2d::CCTexture2D*);

protected:
    bool m_visible;

};

#endif // CCSPRITEPART_H_
