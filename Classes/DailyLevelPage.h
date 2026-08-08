
#ifndef DAILYLEVELPAGE_H_
#define DAILYLEVELPAGE_H_

#include "LevelPage.h"
#include "cocos2d.h"
#include <string>

class DailyLevelPage : public LevelPage {
public:
    virtual ~DailyLevelPage();

    void getDailyTime();
    void updateTimers(float);
    void exitDailyNode(DailyLevelNode*, float);
    void keyBackClicked() override;
    void skipDailyLevel(DailyLevelNode*, GJGameLevel*);
    void FLAlert_Clicked(FLAlertLayer*, bool);
    DailyLevelPage* createDailyNode(GJGameLevel*, bool, float, bool);
    void claimLevelReward(DailyLevelNode*, GJGameLevel*, cocos2d::CCPoint);
    void refreshDailyPage();
    void dailyStatusFailed(GJTimedLevelType, GJErrorCode);
    void tryGetDailyStatus();
    DailyLevelPage* createNodeIfLoaded();
    std::string getDailyTimeString(int);
    void dailyStatusFinished(GJTimedLevelType);
    void levelDownloadFailed(int);
    void downloadAndCreateNode();
    void levelDownloadFinished(GJGameLevel*);
    void registerWithTouchDispatcher() override;
    void init(GJTimedLevelType) override;
    void show();
    void create(GJTimedLevelType);
    void onClose(cocos2d::CCObject*);
    void onTheSafe(cocos2d::CCObject*);

protected:
    std::string m_dailyTimeString;

};

#endif // DAILYLEVELPAGE_H_
