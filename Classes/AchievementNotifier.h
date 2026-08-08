// ============================================================
// AchievementNotifier.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef ACHIEVEMENTNOTIFIER_H_
#define ACHIEVEMENTNOTIFIER_H_

#include "cocos2d.h"

class AchievementNotifier {
public:
    virtual ~AchievementNotifier();
    virtual ~AchievementNotifier();
    virtual ~AchievementNotifier();

    void sharedState();
    void notifyAchievement(char const*, char const*, char const*, bool);
    void willSwitchToScene(cocos2d::CCScene*);
    void showNextAchievement();
    void achievementDisplayFinished();
    void init();

};

#endif // ACHIEVEMENTNOTIFIER_H_
