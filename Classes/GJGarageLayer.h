
#ifndef GJGARAGELAYER_H_
#define GJGARAGELAYER_H_

#include "cocos2d.h"

class GJGarageLayer {
public:
    virtual ~GJGarageLayer();

    void onNavigate(cocos2d::CCObject*);
    void toggleGlow();
    void updateRate();
    void onSelectTab(cocos2d::CCObject*);
    void textChanged(CCTextInputNode*);
    void dialogClosed(DialogLayer*);
    void getLockFrame(int, UnlockType);
    void onToggleItem(cocos2d::CCObject*);
    void keyBackClicked();
    void titleForUnlock(int, UnlockType);
    void FLAlert_Clicked(FLAlertLayer*, bool);
    void onRewardedVideo(cocos2d::CCObject*);
    void setupIconSelect();
    void showUnlockPopup(int, UnlockType);
    void textInputClosed(CCTextInputNode*);
    void textInputOpened(CCTextInputNode*);
    void playShadowEffect();
    void setupSpecialPage();
    void updatePlayerName(char const*);
    void playRainbowEffect();
    void playerColorChanged();
    void showUnlockPopupNew(int, UnlockType);
    void updatePlayerColors();
    void achievementForUnlock(int, UnlockType);
    void descriptionForUnlock(int, UnlockType);
    void rewardedVideoFinished();
    void listButtonBarSwitchedPage(ListButtonBar*, int);
    void init();
    void scene();
    void onBack(cocos2d::CCObject*);
    void onInfo(cocos2d::CCObject*);
    void onShop(cocos2d::CCObject*);
    void onArrow(cocos2d::CCObject*);
    void onPaint(cocos2d::CCObject*);
    void getItems(IconType);
    void getItems(int, int, IconType, int);
    void onSelect(cocos2d::CCObject*);
    void onShards(cocos2d::CCObject*);
    void onSpecial(cocos2d::CCObject*);
    void selectTab(IconType);
    void setupPage(int, IconType);

};

#endif // GJGARAGELAYER_H_
