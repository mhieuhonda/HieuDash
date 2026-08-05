#ifndef _ACHIEVEMENTNOTIFIER_H_
#define _ACHIEVEMENTNOTIFIER_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"

class AchievementNotifier {
public:
    AchievementNotifier();
    achievementDisplayFinished();
    init();
    notifyAchievement(char const*, char const*, char const*);
    sharedState();
    showNextAchievement();
    willSwitchToScene(cocos2d::CCScene*);
    ~AchievementNotifier();
};

#endif // _ACHIEVEMENTNOTIFIER_H_
