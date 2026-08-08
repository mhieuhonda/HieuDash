
#ifndef CCCOUNTDOWN_H_
#define CCCOUNTDOWN_H_

#include "cocos2d.h"

class CCCountdown : public cocos2d::CCLabelTTF {
public:
    virtual ~CCCountdown();

    void setOpacity(unsigned char);
    void lapFinished();
    void startTimerWithSeconds(float, void (cocos2d::CCObject::*)(), cocos2d::CCNode*);
    bool init() override;
    void create();

};

#endif // CCCOUNTDOWN_H_
