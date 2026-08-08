// ============================================================
// GJRewardItem.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef GJREWARDITEM_H_
#define GJREWARDITEM_H_

#include "cocos2d.h"
#include <string>

class GJRewardItem {
public:
    virtual ~GJRewardItem();
    virtual ~GJRewardItem();
    virtual ~GJRewardItem();

    void dataLoaded(DS_Dictionary*);
    void isShardType(SpecialRewardItem);
    void createSpecial(GJRewardType, int, int, SpecialRewardItem, int, SpecialRewardItem, int, int, int);
    void getRewardCount(SpecialRewardItem);
    void createWithCoder(DS_Dictionary*);
    void encodeWithCoder(DS_Dictionary*);
    void createWithObject(GJRewardType, GJRewardObject*);
    void getNextShardType(SpecialRewardItem);
    void rewardItemToStat(SpecialRewardItem);
    void createWithObjects(GJRewardType, cocos2d::CCArray*);
    void getRandomShardType();
    void getRewardObjectForType(SpecialRewardItem);
    void getRandomNonMaxShardType();
    void init(int, int, std::string);
    void create(int, int, std::string);
    void create();
    void canEncode();

};

#endif // GJREWARDITEM_H_
