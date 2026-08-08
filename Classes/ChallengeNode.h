
#ifndef CHALLENGENODE_H_
#define CHALLENGENODE_H_

#include "cocos2d.h"
#include <string>

class ChallengeNode {
public:
    virtual ~ChallengeNode();

    void onClaimReward(cocos2d::CCObject*);
    void updateTimeLabel(std::string);
    void init(GJChallengeItem*, ChallengesPage*, bool);
    void create(GJChallengeItem*, ChallengesPage*, bool);

};

#endif // CHALLENGENODE_H_
