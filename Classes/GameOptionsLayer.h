
#ifndef GAMEOPTIONSLAYER_H_
#define GAMEOPTIONSLAYER_H_

#include "cocos2d.h"

class GameOptionsLayer {
public:
    virtual ~GameOptionsLayer();

    void onUIOptions(cocos2d::CCObject*);
    void onUIPOptions(cocos2d::CCObject*);
    void setupOptions();
    void onPracticeMusicSync(cocos2d::CCObject*);
    void showPracticeMusicSyncUnlockInfo();
    void init(GJBaseGameLayer*);
    void create(GJBaseGameLayer*);
    void didToggle(int);

};

#endif // GAMEOPTIONSLAYER_H_
