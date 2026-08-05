#ifndef _GAMESTATSMANAGER_H_
#define _GAMESTATSMANAGER_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"

class GameStatsManager {
public:
    GameStatsManager();
    checkAchievement(char const*);
    completedLevel(int, bool);
    dataLoaded(DS_Dictionary*);
    encodeDataTo(DS_Dictionary*);
    firstSetup();
    getLevelKey(int, bool);
    getStat(char const*);
    hasCompletedLevel(int, bool);
    incrementStat(char const*);
    init();
    sharedState();
    ~GameStatsManager();
};

#endif // _GAMESTATSMANAGER_H_
