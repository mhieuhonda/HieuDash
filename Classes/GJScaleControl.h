
#ifndef GJSCALECONTROL_H_
#define GJSCALECONTROL_H_

#include "cocos2d.h"
#include <unordered_map>

class GJScaleControl : public cocos2d::CCNode {
public:
    virtual ~GJScaleControl();

    void loadValues(GameObject*, cocos2d::CCArray*, std::unordered_map<int, GameObjectEditorState>, std::equal_to<int>, std::allocator<std::pair<const int, GameObjectEditorState> > >&);
    void finishTouch();
    void ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void updateLabelX(float);
    void updateLabelY(float);
    void skewFromValue(float);
    void sliderChanged(cocos2d::CCObject*);
    void updateLabelXY(float);
    void valueFromSkew(float);
    void scaleFromValue(float);
    void valueFromScale(float);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void onToggleLockScale(cocos2d::CCObject*);
    bool init();
    void create();

};

#endif // GJSCALECONTROL_H_
