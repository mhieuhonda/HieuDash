// ============================================================
// AchievementCell.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef ACHIEVEMENTCELL_H_
#define ACHIEVEMENTCELL_H_

#include "cocos2d.h"

class AchievementCell {
public:
    AchievementCell(char const*, float, float);
    AchievementCell(char const*, float, float);

    virtual ~AchievementCell();
    virtual ~AchievementCell();
    virtual ~AchievementCell();

    void loadFromDict(cocos2d::CCDictionary*);
    void updateBGColor(int);
    void draw();
    void init();

};

#endif // ACHIEVEMENTCELL_H_
