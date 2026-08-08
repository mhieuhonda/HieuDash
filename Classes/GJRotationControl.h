
#ifndef GJROTATIONCONTROL_H_
#define GJROTATIONCONTROL_H_

#include "cocos2d.h"

class GJRotationControl : public cocos2d::CCNode {
public:
    virtual ~GJRotationControl();

    void finishTouch();
    void ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void updateSliderPosition(cocos2d::CCPoint);
    void draw();
    bool init();
    void create();
    void setAngle(float);

};

#endif // GJROTATIONCONTROL_H_
