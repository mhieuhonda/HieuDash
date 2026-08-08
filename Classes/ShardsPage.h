
#ifndef SHARDSPAGE_H_
#define SHARDSPAGE_H_

#include "cocos2d.h"

class ShardsPage : public cocos2d::CCLayer {
public:
    virtual ~ShardsPage();

    void onIconInfo(cocos2d::CCObject*);
    void onSwitchPage(cocos2d::CCObject*);
    void keyBackClicked();
    void FLAlert_Clicked(FLAlertLayer*, bool);
    void registerWithTouchDispatcher();
    bool init();
    void show();
    void create();
    void onClose(cocos2d::CCObject*);
    void goToPage(int);

};

#endif // SHARDSPAGE_H_
