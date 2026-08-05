#ifndef HIEUDASH_ACHIEVEMENTMANAGER_H_
#define HIEUDASH_ACHIEVEMENTMANAGER_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class AchievementManager : public cocos2d::CCObject {
public:
    AchievementManager();
    void areAchievementsEarned(cocos2d::CCArray*);
    void checkAchFromUnlock(char const*);
    int getAchievementsWithID(char const*);
    int getAllAchievements();
    int getReportedAchievements();
    bool init();
    bool isAchievementEarned(char const*);
    void notifyAchievementWithID(char const*);
    void percentForAchievement(char const*);
    void percentageForCount(int, int);
    void reportAchievementWithID(char const*, int);
    void resetAchievements();
    void setReportedAchievements(cocos2d::CCDictionary*);
    void setup();
    AchievementManager* sharedState();
    ~AchievementManager();
};

#endif // HIEUDASH_ACHIEVEMENTMANAGER_H_
