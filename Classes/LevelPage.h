
#ifndef LEVELPAGE_H_
#define LEVELPAGE_H_

#include "cocos2d.h"

class LevelPage : public cocos2d::CCLayer {
public:
    virtual ~LevelPage();

    void onTheTower(cocos2d::CCObject*);
    void onMoreGames(cocos2d::CCObject*);
    void ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) override;
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) override;
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) override;
    void dialogClosed(DialogLayer*);
    void onSecretDoor(cocos2d::CCObject*);
    void addSecretCoin();
    void addSecretDoor();
    void playCoinEffect();
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*) override;
    void updateDynamicPage(GJGameLevel*);
    void registerWithTouchDispatcher() override;
    void init(GJGameLevel*) override;
    void create(GJGameLevel*);
    void onInfo(cocos2d::CCObject*);
    void onPlay(cocos2d::CCObject*);
    void playStep2();
    void playStep3();

};

#endif // LEVELPAGE_H_
