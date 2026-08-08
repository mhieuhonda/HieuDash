
#ifndef CCSPRITECOPACITY_H_
#define CCSPRITECOPACITY_H_

#include "cocos2d.h"

class CCSpriteCOpacity {
public:
    virtual ~CCSpriteCOpacity();

    void setOpacity(unsigned char);
    void createWithSpriteFrame(cocos2d::CCSpriteFrame*);
    void createWithSpriteFrameName(char const*);

};

#endif // CCSPRITECOPACITY_H_
