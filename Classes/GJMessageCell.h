#ifndef HIEUDASH_GJMESSAGECELL_H_
#define HIEUDASH_GJMESSAGECELL_H_

// Reverse-engineered from GD-Decompiled (Geometry Dash)
// User message cell

#include "cocos2d.h"
#include "HieuDashEnums.h"
#include "TableViewCell.h"

class GJMessageCell : public TableViewCell {
public:
    GJMessageCell();

    GJUserMessage* m_pMessage;
    SimplePlayer* m_pPlayerIcon;
    cocos2d::CCLabelBMFont* m_pSenderNameLabel;
    cocos2d::CCLabelBMFont* m_pSubjectLabel;
    cocos2d::CCLabelBMFont* m_pDateLabel;
    cocos2d::CCSprite* m_pReadIcon;

    static GJMessageCell* create(char const*, float, float);
    bool init(char const*, float, float);
    void loadFromMessage(GJUserMessage*);
    void onRead(cocos2d::CCObject*);
    void onDelete(cocos2d::CCObject*);
    void updateBGColor(int);

    ~GJMessageCell();
};

#endif // HIEUDASH_GJMESSAGECELL_H_
