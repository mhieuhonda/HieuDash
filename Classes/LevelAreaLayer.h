
#ifndef LEVELAREALAYER_H_
#define LEVELAREALAYER_H_

#include "cocos2d.h"

class LevelAreaLayer {
public:
    virtual ~LevelAreaLayer();

    void showDialog();
    void onClickDoor(cocos2d::CCObject*);
    void dialogClosed(DialogLayer*);
    void onEnterTower();
    void keyBackClicked();
    void fadeInsideTower();
    void init();
    void scene();
    void create();
    void onBack(cocos2d::CCObject*);
    void onExit();
    void addTorch(cocos2d::CCNode*, cocos2d::CCPoint, int, float, int, bool, int, cocos2d::CCArray*);
    void addGodRay(float, float, float, float, float, cocos2d::CCPoint);

};

#endif // LEVELAREALAYER_H_
