
#ifndef LEVELLEADERBOARD_H_
#define LEVELLEADERBOARD_H_

#include "cocos2d.h"
#include <string>

class LevelLeaderboard {
public:
    virtual ~LevelLeaderboard();

    void loadScores();
    void onChangeMode(cocos2d::CCObject*);
    void onChangeType(cocos2d::CCObject*);
    void getLocalScores();
    void keyBackClicked();
    void FLAlert_Clicked(FLAlertLayer*, bool);
    void getSpriteButton(std::string, void (cocos2d::CCObject::*)(cocos2d::CCObject*), cocos2d::CCMenu*, float, cocos2d::CCPoint, int);
    void setupLeaderboard(cocos2d::CCArray*);
    void deleteLocalScores();
    void reloadLeaderboard(LevelLeaderboardType, LevelLeaderboardMode);
    void onDeleteLocalScores(cocos2d::CCObject*);
    void loadLeaderboardFailed(char const*);
    void updateUserScoreFailed();
    void loadLeaderboardFinished(cocos2d::CCArray*, char const*);
    void updateUserScoreFinished();
    void registerWithTouchDispatcher();
    void init(GJGameLevel*, LevelLeaderboardType, LevelLeaderboardMode);
    void show();
    void create(GJGameLevel*, LevelLeaderboardType, LevelLeaderboardMode);
    void onClose(cocos2d::CCObject*);
    void onUpdate(cocos2d::CCObject*);
    void isCorrect(char const*);

};

#endif // LEVELLEADERBOARD_H_
