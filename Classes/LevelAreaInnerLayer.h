
#ifndef LEVELAREAINNERLAYER_H_
#define LEVELAREAINNERLAYER_H_

#include "cocos2d.h"

class LevelAreaInnerLayer {
public:
    virtual ~LevelAreaInnerLayer();

    void onNextFloor(cocos2d::CCObject*);
    void dialogClosed(DialogLayer*);
    void onOnlineVault(cocos2d::CCObject*);
    void keyBackClicked();
    void tryResumeTowerMusic();
    void showFloor1CompleteDialog();
    void init(bool);
    void scene(bool);
    void create(bool);
    void onBack(cocos2d::CCObject*);
    void onDoor(cocos2d::CCObject*);
    void onExit();
    void onInfo(cocos2d::CCObject*);
    void playStep1();
    void tryShowAd();

};

#endif // LEVELAREAINNERLAYER_H_
