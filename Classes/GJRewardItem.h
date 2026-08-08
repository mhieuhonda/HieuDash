
#ifndef GJREWARDITEM_H_
#define GJREWARDITEM_H_

#include "cocos2d.h"
#include <string>

class GJRewardItem {
public:
    virtual ~GJRewardItem();

    void dataLoaded(DS_Dictionary*);
    bool isShardType(SpecialRewardItem);
    GJRewardItem* createSpecial(GJRewardType, int, int, SpecialRewardItem, int, SpecialRewardItem, int, int, int);
    void getRewardCount(SpecialRewardItem);
    GJRewardItem* createWithCoder(DS_Dictionary*);
    void encodeWithCoder(DS_Dictionary*);
    GJRewardItem* createWithObject(GJRewardType, GJRewardObject*);
    void getNextShardType(SpecialRewardItem);
    void rewardItemToStat(SpecialRewardItem);
    GJRewardItem* createWithObjects(GJRewardType, cocos2d::CCArray*);
    void getRandomShardType();
    void getRewardObjectForType(SpecialRewardItem);
    void getRandomNonMaxShardType();
    void init(int, int, std::string);
    void create(int, int, std::string);
    void create();
    bool canEncode();

protected:
    int m_rewardCount;

};

#endif // GJREWARDITEM_H_
