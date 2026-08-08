
#ifndef SPRITEDESCRIPTION_H_
#define SPRITEDESCRIPTION_H_

#include "cocos2d.h"

class SpriteDescription {
public:
    virtual ~SpriteDescription();

    void initDescription(DS_Dictionary*);
    void initDescription(cocos2d::CCDictionary*);
    SpriteDescription* createDescription(DS_Dictionary*);
    SpriteDescription* createDescription(cocos2d::CCDictionary*);

};

#endif // SPRITEDESCRIPTION_H_
