#ifndef HIEUDASH_GJLEVELSCORECELL_H_
#define HIEUDASH_GJLEVELSCORECELL_H_

// Reverse-engineered from GD-Decompiled (Geometry Dash)
// Level leaderboard cell

#include "cocos2d.h"
#include "HieuDashEnums.h"
#include "TableViewCell.h"

class GJLevelScoreCell : public TableViewCell {
public:
    GJLevelScoreCell();

    GJUserScore* m_pScore;
    SimplePlayer* m_pPlayerIcon;
    cocos2d::CCLabelBMFont* m_pUserNameLabel;
    cocos2d::CCLabelBMFont* m_pPercentLabel;
    cocos2d::CCLabelBMFont* m_pScoreLabel;
    cocos2d::CCLabelBMFont* m_pDateLabel;

    static GJLevelScoreCell* create(char const*, float, float);
    bool init(char const*, float, float);
    void loadFromScore(GJUserScore*);
    void updateBGColor(int);

    ~GJLevelScoreCell();
};

#endif // HIEUDASH_GJLEVELSCORECELL_H_
