#include "GJChallengeItem.h"

GJChallengeItem::GJChallengeItem()
    : m_nChallengeID(0)
    , m_nChallengeType(0)
    , m_nStars(0)
    , m_nDiamonds(0)
    , m_nSecretCoins(0)
    , m_nUserCoins(0)
    , m_nTarget(0)
    , m_nProgress(0)
    , m_bCompleted(false)
    , m_nTimeLeft(0) {}

GJChallengeItem* GJChallengeItem::create() {
    GJChallengeItem* ret = new GJChallengeItem();
    if (ret && ret->init()) { ret->autorelease(); return ret; }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

bool GJChallengeItem::init() { return true; }
int GJChallengeItem::getChallengeID() { return m_nChallengeID; }
int GJChallengeItem::getChallengeType() { return m_nChallengeType; }
bool GJChallengeItem::isCompleted() { return m_bCompleted; }

GJChallengeItem::~GJChallengeItem() {}
