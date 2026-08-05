#ifndef HIEUDASH_GJUSERCELL_H_
#define HIEUDASH_GJUSERCELL_H_

// Reverse-engineered from GD-Decompiled (Geometry Dash)
// User profile cell

#include "cocos2d.h"
#include "HieuDashEnums.h"
#include "TableViewCell.h"

class GJUserCell : public TableViewCell {
public:
    GJUserCell();

    GJUserScore* m_pScore;
    SimplePlayer* m_pPlayerIcon;
    cocos2d::CCLabelBMFont* m_pUserNameLabel;
    cocos2d::CCLabelBMFont* m_pStarsLabel;
    cocos2d::CCLabelBMFont* m_pCreatorPointsLabel;

    static GJUserCell* create(char const*, float, float);
    bool init(char const*, float, float);
    void loadFromScore(GJUserScore*);
    void updateBGColor(int);

    ~GJUserCell();
};

#endif // HIEUDASH_GJUSERCELL_H_
