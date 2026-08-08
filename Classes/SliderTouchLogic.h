
#ifndef SLIDERTOUCHLOGIC_H_
#define SLIDERTOUCHLOGIC_H_

#include "cocos2d.h"

class SliderTouchLogic : public cocos2d::CCNode {
public:
    virtual ~SliderTouchLogic();

    void setRotated(bool);
    void ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) override;
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) override;
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) override;
    void setMaxOffset(float);
    void registerWithTouchDispatcher() override;
    void init(cocos2d::CCNode*, void (cocos2d::CCObject::*)(cocos2d::CCObject*), char const*, char const*, float) override;
    void create(cocos2d::CCNode*, void (cocos2d::CCObject::*)(cocos2d::CCObject*), char const*, char const*, float);

};

#endif // SLIDERTOUCHLOGIC_H_
