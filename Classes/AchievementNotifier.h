#ifndef HIEUDASH_ACHIEVEMENTNOTIFIER_H_
#define HIEUDASH_ACHIEVEMENTNOTIFIER_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class AchievementNotifier : public cocos2d::CCObject {
public:
    AchievementNotifier();
    void achievementDisplayFinished();
    bool init();
    void notifyAchievement(char const*, char const*, char const*);
    AchievementNotifier* sharedState();
    void showNextAchievement();
    void willSwitchToScene(cocos2d::CCScene*);
    ~AchievementNotifier();
};

#endif // HIEUDASH_ACHIEVEMENTNOTIFIER_H_
