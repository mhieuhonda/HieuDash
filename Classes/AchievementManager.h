#ifndef _ACHIEVEMENTMANAGER_H_
#define _ACHIEVEMENTMANAGER_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"

class AchievementManager {
public:
    AchievementManager();
    areAchievementsEarned(cocos2d::CCArray*);
    checkAchFromUnlock(char const*);
    getAchievementsWithID(char const*);
    getAllAchievements();
    getReportedAchievements();
    init();
    isAchievementEarned(char const*);
    notifyAchievementWithID(char const*);
    percentForAchievement(char const*);
    percentageForCount(int, int);
    reportAchievementWithID(char const*, int);
    resetAchievements();
    setReportedAchievements(cocos2d::CCDictionary*);
    setup();
    sharedState();
    ~AchievementManager();
};

#endif // _ACHIEVEMENTMANAGER_H_
