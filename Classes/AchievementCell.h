#ifndef _ACHIEVEMENTCELL_H_
#define _ACHIEVEMENTCELL_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"

class AchievementCell {
public:
    AchievementCell(char const*, float, float);
    draw();
    init();
    loadFromDict(cocos2d::CCDictionary*);
    updateBGColor(int);
    ~AchievementCell();
};

#endif // _ACHIEVEMENTCELL_H_
