// ============================================================
// GJScoreCell.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef GJSCORECELL_H_
#define GJSCORECELL_H_

#include "cocos2d.h"

class GJScoreCell {
public:
    GJScoreCell(char const*, float, float);
    GJScoreCell(char const*, float, float);

    virtual ~GJScoreCell();
    virtual ~GJScoreCell();
    virtual ~GJScoreCell();

    void onMoreLevels(cocos2d::CCObject*);
    void loadFromScore(GJUserScore*);
    void onViewProfile(cocos2d::CCObject*);
    void updateBGColor(int);
    void FLAlert_Clicked(FLAlertLayer*, bool);
    void draw();
    void init();
    void onBan(cocos2d::CCObject*);
    void onCheck(cocos2d::CCObject*);

};

#endif // GJSCORECELL_H_
