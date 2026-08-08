
#ifndef RATELEVELLAYER_H_
#define RATELEVELLAYER_H_

#include "cocos2d.h"

class RateLevelLayer : public cocos2d::CCLayer {
public:
    virtual ~RateLevelLayer();

    void selectRating(cocos2d::CCObject*);
    void keyBackClicked() override;
    void init(int) override;
    void create(int);
    void onRate(cocos2d::CCObject*);
    void onClose(cocos2d::CCObject*);

};

#endif // RATELEVELLAYER_H_
