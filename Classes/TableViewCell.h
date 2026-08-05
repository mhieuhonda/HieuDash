#ifndef HIEUDASH_TABLEVIEWCELL_H_
#define HIEUDASH_TABLEVIEWCELL_H_

// Reverse-engineered from GD-Decompiled (Geometry Dash)
// Base class for list cells (different from CCTableViewCell which is engine-level)

#include "cocos2d.h"
#include "HieuDashEnums.h"

class TableViewCell : public cocos2d::CCLayer {
public:
    TableViewCell();

    cocos2d::CCNode* m_pMainLayer;
    float m_fWidth;
    float m_fHeight;
    int m_nCellIndex;
    bool m_bSelected;

    static TableViewCell* create(char const*, float, float);
    bool init(char const*, float, float);
    void setCellIndex(int);
    int getCellIndex();
    void setSelected(bool);
    bool isSelected();
    void updateBGColor(int);
    void draw();

    ~TableViewCell();
};

#endif // HIEUDASH_TABLEVIEWCELL_H_
