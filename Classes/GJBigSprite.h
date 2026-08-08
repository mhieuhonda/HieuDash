// ============================================================
// GJBigSprite.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef GJBIGSPRITE_H_
#define GJBIGSPRITE_H_

#include "cocos2d.h"
#include <string>

class GJBigSprite {
public:
    virtual ~GJBigSprite();
    virtual ~GJBigSprite();
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
