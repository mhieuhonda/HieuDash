#include "GJUserScore.h"

GJUserScore::GJUserScore()
    : m_nUserID(0)
    , m_nAccountID(0)
    , m_nStars(0)
    , m_nMoons(0)
    , m_nSecretCoins(0)
    , m_nUserCoins(0)
    , m_nDiamonds(0)
    , m_nCreatorPoints(0)
    , m_nPlayerIcon(0)
    , m_nPlayerShip(0)
    , m_nPlayerBall(0)
    , m_nPlayerUfo(0)
    , m_nPlayerWave(0)
    , m_nPlayerRobot(0)
    , m_nPlayerSpider(0)
    , m_nPlayerDeathEffect(0)
    , m_nPlayerTrail(0)
    , m_nColor1(0)
    , m_nColor2(0)
    , m_nColor3(0)
    , m_nMessageState(0)
    , m_nFriendState(0)
    , m_nRank(0)
    , m_nGlobalRank(0)
    , m_nNewGJ(0)
    , m_nModBadge(0) {}

GJUserScore* GJUserScore::create() {
    GJUserScore* ret = new GJUserScore();
    if (ret && ret->init()) { ret->autorelease(); return ret; }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

GJUserScore* GJUserScore::createWithScoreData(std::string data) {
    GJUserScore* ret = create();
    return ret;
}

bool GJUserScore::init() { return true; }
int GJUserScore::getUserID() { return m_nUserID; }
int GJUserScore::getAccountID() { return m_nAccountID; }
std::string GJUserScore::getUserName() { return m_sUserName; }
int GJUserScore::getStars() { return m_nStars; }

GJUserScore::~GJUserScore() {}
