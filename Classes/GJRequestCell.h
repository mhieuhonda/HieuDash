#ifndef HIEUDASH_GJREQUESTCELL_H_
#define HIEUDASH_GJREQUESTCELL_H_

// Reverse-engineered from GD-Decompiled (Geometry Dash)
// Friend request cell

#include "cocos2d.h"
#include "HieuDashEnums.h"
#include "TableViewCell.h"

class GJRequestCell : public TableViewCell {
public:
    GJRequestCell();

    cocos2d::CCObject* m_pRequest;
    SimplePlayer* m_pPlayerIcon;
    cocos2d::CCLabelBMFont* m_pUserNameLabel;
    cocos2d::CCLabelBMFont* m_pMessageLabel;
    cocos2d::CCLabelBMFont* m_pDateLabel;

    static GJRequestCell* create(char const*, float, float);
    bool init(char const*, float, float);
    void onAccept(cocos2d::CCObject*);
    void onDelete(cocos2d::CCObject*);
    void updateBGColor(int);

    ~GJRequestCell();
};

#endif // HIEUDASH_GJREQUESTCELL_H_
