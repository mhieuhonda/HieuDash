#ifndef HIEUDASH_ACHIEVEMENTSLAYER_H_
#define HIEUDASH_ACHIEVEMENTSLAYER_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class AchievementsLayer : public cocos2d::CCLayer {
public:
    AchievementsLayer();
    AchievementsLayer* create();
    void customSetup();
    ~AchievementsLayer();
};

#endif // HIEUDASH_ACHIEVEMENTSLAYER_H_
