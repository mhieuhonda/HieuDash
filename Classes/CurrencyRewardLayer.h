
#ifndef CURRENCYREWARDLAYER_H_
#define CURRENCYREWARDLAYER_H_

#include "cocos2d.h"

class CurrencyRewardLayer {
public:
    virtual ~CurrencyRewardLayer();

    void pulseSprite(cocos2d::CCSprite*);
    CurrencyRewardLayer* createObjects(CurrencySpriteType, int, cocos2d::CCPoint, float);
    void incrementCount(int);
    CurrencyRewardLayer* createObjectsFull(CurrencySpriteType, int, cocos2d::CCSprite*, cocos2d::CCPoint, float);
    CurrencyRewardLayer* createUnlockObject(cocos2d::CCSprite*, cocos2d::CCPoint, float);
    void incrementMoonsCount(int);
    void incrementStarsCount(int);
    void incrementDiamondsCount(int);
    void incrementSpecialCount1(int);
    void incrementSpecialCount2(int);
    void init(int, int, int, int, CurrencySpriteType, int, CurrencySpriteType, int, cocos2d::CCPoint, CurrencyRewardType, float, float);
    void create(int, int, int, int, CurrencySpriteType, int, CurrencySpriteType, int, cocos2d::CCPoint, CurrencyRewardType, float, float);
    void update(float);

};

#endif // CURRENCYREWARDLAYER_H_
