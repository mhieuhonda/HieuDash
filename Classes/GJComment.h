#ifndef HIEUDASH_GJCOMMENT_H_
#define HIEUDASH_GJCOMMENT_H_

// Reverse-engineered from GD-Decompiled (Geometry Dash)
// Level/account comment data

#include "cocos2d.h"
#include "HieuDashEnums.h"

class GJComment : public cocos2d::CCObject {
public:
    GJComment();

    int m_nCommentID;
    int m_nUserID;
    int m_nLevelID;
    std::string m_sCommentText;
    std::string m_sUserName;
    int m_nLikes;
    int m_nPercentage;
    int m_nAge;
    bool m_bIsSpam;
    bool m_bHasLevel;
    int m_nModBadge;
    std::string m_sModBadgeText;

    static GJComment* create();
    static GJComment* createWithCommentData(std::string);
    bool init();
    int getCommentID();
    int getUserID();
    std::string getCommentText();
    std::string getUserName();

    ~GJComment();
};

#endif // HIEUDASH_GJCOMMENT_H_
