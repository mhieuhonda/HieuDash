// ============================================================
// GJChestSprite.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef GJCHESTSPRITE_H_
#define GJCHESTSPRITE_H_

#include "cocos2d.h"

class GJChestSprite {
public:
    virtual ~GJChestSprite();
    virtual ~GJChestSprite();
    virtual ~GJChestSprite();

    void setOpacity(unsigned char);
    void switchToState(ChestSpriteState, bool);
    void init(int);
    void create(int);
    void setColor(cocos2d::_ccColor3B const&);

protected:
    cocos2d::_ccColor3B m_color;

};

#endif // GJCHESTSPRITE_H_
