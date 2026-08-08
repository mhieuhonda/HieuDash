// ============================================================
// GJLevelScoreCell.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef GJLEVELSCORECELL_H_
#define GJLEVELSCORECELL_H_

#include "cocos2d.h"

class GJLevelScoreCell {
public:
    GJLevelScoreCell(char const*, float, float);
    GJLevelScoreCell(char const*, float, float);

    virtual ~GJLevelScoreCell();
    virtual ~GJLevelScoreCell();
    virtual ~GJLevelScoreCell();

    void loadFromScore(GJUserScore*);
    void onViewProfile(cocos2d::CCObject*);
    void updateBGColor(int);
    void draw();
    void init();

};

#endif // GJLEVELSCORECELL_H_
