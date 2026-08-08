
#ifndef GJUSERSCORE_H_
#define GJUSERSCORE_H_

#include "cocos2d.h"

class GJUserScore : public cocos2d::CCObject {
public:
    virtual ~GJUserScore();

    void isCurrentUser();
    void mergeWithScore(GJUserScore*);
    void init() override;
    void create(cocos2d::CCDictionary*);
    void create();

};

#endif // GJUSERSCORE_H_
