// ============================================================
// Slider.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef SLIDER_H_
#define SLIDER_H_

#include "cocos2d.h"

class Slider {
public:
    virtual ~Slider();
    virtual ~Slider();
    virtual ~Slider();

    void hideGroove(bool);
    void setRotated(bool);
    void sliderBegan();
    void sliderEnded();
    void ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void disableTouch();
    void enableSlider();
    void setMaxOffset(float);
    void disableSlider();
    void getLiveDragging();
    void setLiveDragging(bool);
    void setBarVisibility(bool);
    void init(cocos2d::CCNode*, void (cocos2d::CCObject::*)(cocos2d::CCObject*), char const*, char const*, char const*, char const*, float);
    void create(cocos2d::CCNode*, void (cocos2d::CCObject::*)(cocos2d::CCObject*));
    void create(cocos2d::CCNode*, void (cocos2d::CCObject::*)(cocos2d::CCObject*), char const*, char const*, char const*, char const*, float);
    void create(cocos2d::CCNode*, void (cocos2d::CCObject::*)(cocos2d::CCObject*), float);
    void getThumb();
    void getValue();
    void setValue(float);
    void updateBar();

};

#endif // SLIDER_H_
