
#ifndef GRAVITYEFFECTSPRITE_H_
#define GRAVITYEFFECTSPRITE_H_

#include "cocos2d.h"

class GravityEffectSprite {
public:
    virtual ~GravityEffectSprite();

    void updateSpritesColor(cocos2d::_ccColor3B);
    void draw();
    void init();
    void create();

};

#endif // GRAVITYEFFECTSPRITE_H_
