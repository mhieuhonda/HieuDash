
#ifndef ACHIEVEMENTNOTIFIER_H_
#define ACHIEVEMENTNOTIFIER_H_

#include "cocos2d.h"

class AchievementNotifier : public cocos2d::CCNode {
public:
    static AchievementNotifier* create();
    virtual ~AchievementNotifier();

    void sharedState();
    void notifyAchievement(char const*, char const*, char const*, bool);
    void willSwitchToScene(cocos2d::CCScene*);
    void showNextAchievement();
    void achievementDisplayFinished();
    void init() override;

};

#endif // ACHIEVEMENTNOTIFIER_H_
