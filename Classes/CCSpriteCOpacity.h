
#ifndef CCSPRITECOPACITY_H_
#define CCSPRITECOPACITY_H_

#include "cocos2d.h"

class CCSpriteCOpacity {
public:
    virtual ~CCSpriteCOpacity();

    void setOpacity(unsigned char);
    CCSpriteCOpacity* createWithSpriteFrame(cocos2d::CCSpriteFrame*);
    CCSpriteCOpacity* createWithSpriteFrameName(char const*);

};

#endif // CCSPRITECOPACITY_H_
