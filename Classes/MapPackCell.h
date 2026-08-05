#ifndef HIEUDASH_MAPPACKCELL_H_
#define HIEUDASH_MAPPACKCELL_H_

// Reverse-engineered from GD-Decompiled (Geometry Dash)
// Map pack cell

#include "cocos2d.h"
#include "HieuDashEnums.h"
#include "TableViewCell.h"

class MapPackCell : public TableViewCell {
public:
    MapPackCell();

    GJMapPack* m_pMapPack;
    cocos2d::CCLabelBMFont* m_pPackNameLabel;
    cocos2d::CCLabelBMFont* m_pStarsLabel;
    cocos2d::CCLabelBMFont* m_pCoinsLabel;
    cocos2d::CCArray* m_pLevelCells;
    cocos2d::CCSprite* m_pBackground;

    static MapPackCell* create(char const*, float, float);
    bool init(char const*, float, float);
    void loadFromMapPack(GJMapPack*);
    void updateBGColor(int);

    ~MapPackCell();
};

#endif // HIEUDASH_MAPPACKCELL_H_
