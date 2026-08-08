
#ifndef GJLEVELSCORECELL_H_
#define GJLEVELSCORECELL_H_

#include "cocos2d.h"

class GJLevelScoreCell : public cocos2d::CCNode {
public:
    GJLevelScoreCell(char const*, float, float);
    GJLevelScoreCell(char const*, float, float);

    virtual ~GJLevelScoreCell();

    void loadFromScore(GJUserScore*);
    void onViewProfile(cocos2d::CCObject*);
    void updateBGColor(int);
    void draw();
    bool init();

};

#endif // GJLEVELSCORECELL_H_
