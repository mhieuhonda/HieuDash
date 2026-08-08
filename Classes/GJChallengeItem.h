
#ifndef GJCHALLENGEITEM_H_
#define GJCHALLENGEITEM_H_

#include "cocos2d.h"
#include <string>

class GJChallengeItem : public cocos2d::CCObject {
public:
    virtual ~GJChallengeItem();

    void dataLoaded(DS_Dictionary*);
    void incrementCount(int);
    GJChallengeItem* createWithCoder(DS_Dictionary*);
    void encodeWithCoder(DS_Dictionary*);
    GJChallengeItem* createFromString(std::string);
    void init(GJChallengeType, int, int, int, std::string) override;
    void create(GJChallengeType, int, int, int, std::string);
    void create();
    bool canEncode();

};

#endif // GJCHALLENGEITEM_H_
