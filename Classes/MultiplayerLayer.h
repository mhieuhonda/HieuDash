
#ifndef MULTIPLAYERLAYER_H_
#define MULTIPLAYERLAYER_H_

#include "cocos2d.h"

class MultiplayerLayer : public cocos2d::CCLayer {
public:
    virtual ~MultiplayerLayer();

    void keyBackClicked();
    bool init();
    void scene();
    void create();
    void onBack(cocos2d::CCObject*);
    void onBtn1(cocos2d::CCObject*);
    void onBtn2(cocos2d::CCObject*);

};

#endif // MULTIPLAYERLAYER_H_
