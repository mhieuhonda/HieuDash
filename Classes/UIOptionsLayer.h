
#ifndef UIOPTIONSLAYER_H_
#define UIOPTIONSLAYER_H_

#include "cocos2d.h"

class UIOptionsLayer {
public:
    virtual ~UIOptionsLayer();

    void onSaveLoad(cocos2d::CCObject*);
    void ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void toggleUIGroup(int);
    void valueDidChange(int, float);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void registerWithTouchDispatcher();
    void init(bool);
    void create(bool);
    void getNode(int);
    void onClose(cocos2d::CCObject*);
    void onReset(cocos2d::CCObject*);
    void getValue(int);

};

#endif // UIOPTIONSLAYER_H_
