// ============================================================
// DailyLevelPage.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef DAILYLEVELPAGE_H_
#define DAILYLEVELPAGE_H_

#include "cocos2d.h"

class DailyLevelPage {
public:
    virtual ~DailyLevelPage();
    virtual ~DailyLevelPage();
    virtual ~DailyLevelPage();

    void getDailyTime();
    void updateTimers(float);
    void exitDailyNode(DailyLevelNode*, float);
    void keyBackClicked();
    void skipDailyLevel(DailyLevelNode*, GJGameLevel*);
    void FLAlert_Clicked(FLAlertLayer*, bool);
    void createDailyNode(GJGameLevel*, bool, float, bool);
    void claimLevelReward(DailyLevelNode*, GJGameLevel*, cocos2d::CCPoint);
    void refreshDailyPage();
    void dailyStatusFailed(GJTimedLevelType, GJErrorCode);
    void tryGetDailyStatus();
    void createNodeIfLoaded();
    void getDailyTimeString(int);
    void dailyStatusFinished(GJTimedLevelType);
    void levelDownloadFailed(int);
    void downloadAndCreateNode();
    void levelDownloadFinished(GJGameLevel*);
    void registerWithTouchDispatcher();
    void init(GJTimedLevelType);
    void show();
    void create(GJTimedLevelType);
    void onClose(cocos2d::CCObject*);
    void onTheSafe(cocos2d::CCObject*);

};

#endif // DAILYLEVELPAGE_H_
