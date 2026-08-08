// ============================================================
// CurrencySprite.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef CURRENCYSPRITE_H_
#define CURRENCYSPRITE_H_

#include "cocos2d.h"

class CurrencySprite {
public:
    virtual ~CurrencySprite();
    virtual ~CurrencySprite();
    virtual ~CurrencySprite();

    void initWithSprite(cocos2d::CCSprite*);
    void createWithSprite(cocos2d::CCSprite*);
    void spriteTypeToStat(CurrencySpriteType);
    void rewardToSpriteType(int);
    void init(CurrencySpriteType, bool);
    void create(CurrencySpriteType, bool);

};

#endif // CURRENCYSPRITE_H_
