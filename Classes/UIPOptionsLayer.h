
#ifndef UIPOPTIONSLAYER_H_
#define UIPOPTIONSLAYER_H_

#include "cocos2d.h"

class UIPOptionsLayer : public cocos2d::CCLayer {
public:
    virtual ~UIPOptionsLayer();

    void ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void getTouchRect();
    void valueDidChange(int, float);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void registerWithTouchDispatcher();
    bool init();
    void create();
    void onClose(cocos2d::CCObject*);
    void onReset(cocos2d::CCObject*);
    void getValue(int);

};

#endif // UIPOPTIONSLAYER_H_
