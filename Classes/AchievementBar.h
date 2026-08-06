#ifndef HIEUDASH_ACHIEVEMENTBAR_H_
#define HIEUDASH_ACHIEVEMENTBAR_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class AchievementBar : public cocos2d::CCNode {
public:
    AchievementBar();
    static AchievementBar* create(char const*, char const*, char const*);
    int getTargetScene();
    bool init(char const*, char const*, char const*);
    void setTargetScene(cocos2d::CCNode*);
    void show();
    ~AchievementBar();
};

#endif // HIEUDASH_ACHIEVEMENTBAR_H_
