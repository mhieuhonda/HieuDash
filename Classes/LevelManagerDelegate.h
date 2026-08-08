// ============================================================
// LevelManagerDelegate.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef LEVELMANAGERDELEGATE_H_
#define LEVELMANAGERDELEGATE_H_

#include "cocos2d.h"
#include <string>

class LevelManagerDelegate {
public:
    void setupPageInfo(std::string, char const*);
    void loadLevelsFailed(char const*);
    void loadLevelsFailed(char const*, int);
    void loadLevelsFinished(cocos2d::CCArray*, char const*);
    void loadLevelsFinished(cocos2d::CCArray*, char const*, int);

};

#endif // LEVELMANAGERDELEGATE_H_
