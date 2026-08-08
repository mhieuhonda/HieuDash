// ============================================================
// MenuLayer.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef MENULAYER_H_
#define MENULAYER_H_

#include "cocos2d.h"

class MenuLayer : public cocos2d::CCLayer {
public:
    static MenuLayer* create();
    virtual ~MenuLayer();
    virtual ~MenuLayer();
    virtual ~MenuLayer();

    void onFacebook(cocos2d::CCObject*);
    void onEveryplay(cocos2d::CCObject*);
    void onMoreGames(cocos2d::CCObject*);
    void onMyProfile(cocos2d::CCObject*);
    void openOptions(bool);
    void onFreeLevels(cocos2d::CCObject*);
    void onGameCenter(cocos2d::CCObject*);
    void onNewgrounds(cocos2d::CCObject*);
    void onFullVersion(cocos2d::CCObject*);
    void keyBackClicked() override;
    void onAchievements(cocos2d::CCObject*);
    void showGCQuestion();
    void FLAlert_Clicked(FLAlertLayer*, bool);
    void firstNetworkTest();
    void onOptionsInstant();
    void onGooglePlayGames(cocos2d::CCObject*);
    void showMeltdownPromo();
    void googlePlaySignedIn();
    void videoOptionsClosed();
    void videoOptionsOpened();
    void updateUserProfileButton();
    void syncPlatformAchievements(float);
    void init() override;
    void scene(bool);
    void onPlay(cocos2d::CCObject*);
    void onQuit(cocos2d::CCObject*);
    void endGame();
    void keyDown(cocos2d::enumKeyCodes, double);
    void onDaily(cocos2d::CCObject*);
    void onStats(cocos2d::CCObject*);
    void showTOS();
    void onGarage(cocos2d::CCObject*);
    void onRobTop(cocos2d::CCObject*);
    void onTwitch(cocos2d::CCObject*);
    void onCreator(cocos2d::CCObject*);
    void onDiscord(cocos2d::CCObject*);
    void onOptions(cocos2d::CCObject*);
    void onTrailer(cocos2d::CCObject*);
    void onTwitter(cocos2d::CCObject*);
    void onYouTube(cocos2d::CCObject*);
    void tryShowAd(float);
    void willClose();

};

#endif // MENULAYER_H_
