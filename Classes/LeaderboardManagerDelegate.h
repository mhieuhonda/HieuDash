
#ifndef LEADERBOARDMANAGERDELEGATE_H_
#define LEADERBOARDMANAGERDELEGATE_H_

#include "cocos2d.h"

class LeaderboardManagerDelegate {
public:
    void loadLeaderboardFailed(char const*);
    void updateUserScoreFailed();
    void loadLeaderboardFinished(cocos2d::CCArray*, char const*);
    void updateUserScoreFinished();

};

#endif // LEADERBOARDMANAGERDELEGATE_H_
