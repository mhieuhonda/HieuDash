
#ifndef COMMUNITYCREDITSPAGE_H_
#define COMMUNITYCREDITSPAGE_H_

#include "cocos2d.h"

class CommunityCreditsPage : public cocos2d::CCLayer {
public:
    virtual ~CommunityCreditsPage();

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

#endif // COMMUNITYCREDITSPAGE_H_
