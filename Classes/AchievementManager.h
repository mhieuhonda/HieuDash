// ============================================================
// AchievementManager.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef ACHIEVEMENTMANAGER_H_
#define ACHIEVEMENTMANAGER_H_

#include "cocos2d.h"
#include <string>

class AchievementManager {
public:
    virtual ~AchievementManager();
    virtual ~AchievementManager();
    virtual ~AchievementManager();

    void dataLoaded(DS_Dictionary*);
    void firstSetup();
    void sharedState();
    void encodeDataTo(DS_Dictionary*);
    void addAchievement(std::string, std::string, std::string, std::string, std::string, int);
    void resetAchievement(char const*);
    void notifyAchievement(char const*, char const*, char const*);
    void resetAchievements();
    void checkAchFromUnlock(char const*);
    void getAllAchievements();
    void percentageForCount(int, int);
    void isAchievementEarned(char const*);
    void limitForAchievement(std::string);
    void achievementForUnlock(int, UnlockType);
    void addManualAchievements();
    void areAchievementsEarned(cocos2d::CCArray*);
    void getAchievementsWithID(char const*);
    void percentForAchievement(char const*);
    void isAchievementAvailable(std::string);
    void notifyAchievementWithID(char const*);
    void reportAchievementWithID(char const*, int, bool);
    void storeAchievementUnlocks();
    void getAchievementRewardDict();
    void getAllAchievementsSorted(bool);
    void reportPlatformAchievementWithID(char const*, int);
    void init();
    void setup();

protected:
    int m_achievementsWithID;

};

#endif // ACHIEVEMENTMANAGER_H_
