
#ifndef GJBIGSPRITE_H_
#define GJBIGSPRITE_H_

#include "cocos2d.h"
#include <string>

class GJBigSprite {
public:
    virtual ~GJBigSprite();

    void unloadSprite(std::string, int);
    void loadSpriteAsync(std::string, int);
    void updateSpriteVisibility();
    void finishedLoadingSpriteAsync(cocos2d::CCObject*);
    void init();
    void create();
    void unloadAll();

};

#endif // GJBIGSPRITE_H_
