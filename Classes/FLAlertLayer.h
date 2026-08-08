
#ifndef FLALERTLAYER_H_
#define FLALERTLAYER_H_

#include "cocos2d.h"
#include <string>

class FLAlertLayer {
public:
    virtual ~FLAlertLayer();

    void ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void keyBackClicked();
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void incrementForcePrio();
    void registerWithTouchDispatcher();
    void init(FLAlertLayerProtocol*, char const*, std::string, char const*, char const*, float, bool, float, float);
    void init(int);
    void show();
    void create(FLAlertLayerProtocol*, char const*, std::string, char const*, char const*);
    void create(FLAlertLayerProtocol*, char const*, std::string, char const*, char const*, float);
    void create(FLAlertLayerProtocol*, char const*, std::string, char const*, char const*, float, bool, float, float);
    void onBtn1(cocos2d::CCObject*);
    void onBtn2(cocos2d::CCObject*);
    void keyDown(cocos2d::enumKeyCodes, double);
    void onEnter();

};

#endif // FLALERTLAYER_H_
