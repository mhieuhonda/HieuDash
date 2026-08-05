#ifndef HIEUDASH_GJUSERSCORE_H_
#define HIEUDASH_GJUSERSCORE_H_

// Reverse-engineered from GD-Decompiled (Geometry Dash)
// Full user profile data

#include "cocos2d.h"
#include "HieuDashEnums.h"

class GJUserScore : public cocos2d::CCObject {
public:
    GJUserScore();

    int m_nUserID;
    int m_nAccountID;
    std::string m_sUserName;
    int m_nStars;
    int m_nMoons;
    int m_nSecretCoins;
    int m_nUserCoins;
    int m_nDiamonds;
    int m_nCreatorPoints;
    int m_nPlayerIcon;
    int m_nPlayerShip;
    int m_nPlayerBall;
    int m_nPlayerUfo;
    int m_nPlayerWave;
    int m_nPlayerRobot;
    int m_nPlayerSpider;
    int m_nPlayerDeathEffect;
    int m_nPlayerTrail;
    int m_nColor1;
    int m_nColor2;
    int m_nColor3;
    int m_nMessageState;
    int m_nFriendState;
    int m_nRank;
    int m_nGlobalRank;
    int m_nNewGJ;
    int m_nModBadge;
    std::string m_sYoutubeURL;
    std::string m_sTwitterURL;
    std::string m_sTwitchURL;
    std::string m_sIconURL;

    static GJUserScore* create();
    static GJUserScore* createWithScoreData(std::string);
    bool init();
    int getUserID();
    int getAccountID();
    std::string getUserName();
    int getStars();

    ~GJUserScore();
};

#endif // HIEUDASH_GJUSERSCORE_H_
