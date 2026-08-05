#ifndef HIEUDASH_GJSCORECELL_H_
#define HIEUDASH_GJSCORECELL_H_

// Reverse-engineered from GD-Decompiled (Geometry Dash)
// Leaderboard score cell

#include "cocos2d.h"
#include "HieuDashEnums.h"
#include "TableViewCell.h"

class GJScoreCell : public TableViewCell {
public:
    GJScoreCell();

    GJUserScore* m_pScore;
    SimplePlayer* m_pPlayerIcon;
    cocos2d::CCLabelBMFont* m_pUserNameLabel;
    cocos2d::CCLabelBMFont* m_pScoreLabel;
    cocos2d::CCLabelBMFont* m_pRankLabel;

    static GJScoreCell* create(char const*, float, float);
    bool init(char const*, float, float);
    void loadFromScore(GJUserScore*);
    void updateBGColor(int);

    ~GJScoreCell();
};

#endif // HIEUDASH_GJSCORECELL_H_
