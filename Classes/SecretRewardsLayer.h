
#ifndef SECRETREWARDSLAYER_H_
#define SECRETREWARDSLAYER_H_

#include "cocos2d.h"

class SecretRewardsLayer {
public:
    virtual ~SecretRewardsLayer();

    void fadeInMusic();
    void onChestType(cocos2d::CCObject*);
    void onGoldChest(cocos2d::CCObject*);
    void dialogClosed(DialogLayer*);
    void getPageColor(int);
    void onSelectItem(cocos2d::CCObject*);
    void onSwitchPage(cocos2d::CCObject*);
    void showDialog01();
    void showDialog03();
    void onSpecialItem(cocos2d::CCObject*);
    void fadeInOutMusic();
    void keyBackClicked();
    void moveToMainLayer(cocos2d::CCObject*);
    void showLockedChest();
    void scrollLayerMoved(cocos2d::CCPoint);
    void updateBackButton();
    void showDialogDiamond();
    void generateChestItems(int);
    void showDialogMechanic();
    void switchToOpenedState(CCMenuItemSpriteExtra*);
    void updateUnlockedLabel();
    void createSecondaryLayer(int);
    void moveToSecondaryLayer(int);
    void updateUnlockedGoldLabel();
    void init(bool);
    void scene(bool);
    void create(bool);
    void onBack(cocos2d::CCObject*);
    void onExit();
    void onShop(cocos2d::CCObject*);
    void goToPage(int);
    void showShop(int);

protected:
    cocos2d::_ccColor3B m_pageColor;

};

#endif // SECRETREWARDSLAYER_H_
