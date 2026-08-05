#ifndef HIEUDASH_ACHIEVEMENTCELL_H_
#define HIEUDASH_ACHIEVEMENTCELL_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class AchievementCell : public cocos2d::CCNode {
public:
    AchievementCell(char const*, float, float);
    void draw();
    bool init();
    void loadFromDict(cocos2d::CCDictionary*);
    void updateBGColor(int);
    ~AchievementCell();
};

#endif // HIEUDASH_ACHIEVEMENTCELL_H_
