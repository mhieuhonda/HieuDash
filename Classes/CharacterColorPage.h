
#ifndef CHARACTERCOLORPAGE_H_
#define CHARACTERCOLORPAGE_H_

#include "cocos2d.h"

class CharacterColorPage {
public:
    virtual ~CharacterColorPage();

    void checkColor(int, UnlockType);
    void toggleGlow(cocos2d::CCObject*);
    void toggleShip(cocos2d::CCObject*);
    void colorForIndex(int);
    void onPlayerColor(cocos2d::CCObject*);
    void keyBackClicked();
    void offsetForIndex(int);
    void FLAlert_Clicked(FLAlertLayer*, bool);
    void createColorMenu();
    void toggleGlowItems(bool);
    void updateColorMode(int);
    void updateIconColors();
    void activeColorForMode(int);
    void registerWithTouchDispatcher();
    void init();
    void show();
    void create();
    void onMode(cocos2d::CCObject*);
    void onClose(cocos2d::CCObject*);

};

#endif // CHARACTERCOLORPAGE_H_
