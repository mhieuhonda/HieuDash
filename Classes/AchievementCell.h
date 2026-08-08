
#ifndef ACHIEVEMENTCELL_H_
#define ACHIEVEMENTCELL_H_

#include "cocos2d.h"

class AchievementCell {
public:
    AchievementCell(char const*, float, float);
    AchievementCell(char const*, float, float);

    virtual ~AchievementCell();

    void loadFromDict(cocos2d::CCDictionary*);
    void updateBGColor(int);
    void draw();
    void init();

};

#endif // ACHIEVEMENTCELL_H_
