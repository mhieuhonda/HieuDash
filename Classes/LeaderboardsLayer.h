
#ifndef LEADERBOARDSLAYER_H_
#define LEADERBOARDSLAYER_H_

#include "cocos2d.h"
#include <string>

class LeaderboardsLayer {
public:
    virtual ~LeaderboardsLayer();

    void onCreators(cocos2d::CCObject*);
    void refreshTabs();
    void keyBackClicked();
    void FLAlert_Clicked(FLAlertLayer*, bool);
    void toggleTabButtons();
    void selectLeaderboard(LeaderboardType, LeaderboardStat);
    void setupLevelBrowser(cocos2d::CCArray*);
    void loadLeaderboardFailed(char const*);
    void updateUserScoreFailed();
    void loadLeaderboardFinished(cocos2d::CCArray*, char const*);
    void updateUserScoreFinished();
    void init(LeaderboardType, LeaderboardStat);
    void onTop(cocos2d::CCObject*);
    void scene(LeaderboardType, LeaderboardStat);
    void create(LeaderboardType, LeaderboardStat);
    void onBack(cocos2d::CCObject*);
    void onInfo(cocos2d::CCObject*);
    void onStat(cocos2d::CCObject*);
    void onWeek(cocos2d::CCObject*);
    void onGlobal(cocos2d::CCObject*);
    bool isCorrect(std::string);
    void setupTabs();

};

#endif // LEADERBOARDSLAYER_H_
