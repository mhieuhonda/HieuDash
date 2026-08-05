#ifndef HIEUDASH_GAMESTATSMANAGER_H_
#define HIEUDASH_GAMESTATSMANAGER_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class GameStatsManager : public cocos2d::CCObject {
public:
    GameStatsManager();
    void checkAchievement(char const*);
    void completedLevel(int, bool);
    void dataLoaded(DS_Dictionary*);
    void encodeDataTo(DS_Dictionary*);
    void firstSetup();
    int getLevelKey(int, bool);
    int getStat(char const*);
    void hasCompletedLevel(int, bool);
    void incrementStat(char const*);
    bool init();
    GameStatsManager* sharedState();
    ~GameStatsManager();
};

#endif // HIEUDASH_GAMESTATSMANAGER_H_
