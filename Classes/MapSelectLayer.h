
#ifndef MAPSELECTLAYER_H_
#define MAPSELECTLAYER_H_

#include "cocos2d.h"

class MapSelectLayer {
public:
    virtual ~MapSelectLayer();

    void scrollWheel(float, float);
    void ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void keyBackClicked();
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void checkTouchMonster(cocos2d::CCPoint);
    void createObjectAtPoint(cocos2d::CCPoint);
    void getConstrainedMapPos(cocos2d::CCPoint);
    void registerWithTouchDispatcher();
    void init();
    void scene();
    void create();
    void onBack(cocos2d::CCObject*);
    void onExit();
    void update(float);

};

#endif // MAPSELECTLAYER_H_
