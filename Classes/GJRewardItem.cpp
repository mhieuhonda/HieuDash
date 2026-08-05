#include "GJRewardItem.h"

GJRewardItem::GJRewardItem()
    : m_nRewardType(0)
    , m_nItemID(0)
    , m_nStars(0)
    , m_nDiamonds(0)
    , m_nSecretCoins(0)
    , m_nUserCoins(0)
    , m_nOrbs(0)
    , m_nSpecialRewardItem(0)
    , m_bClaimed(false) {}

GJRewardItem* GJRewardItem::create() {
    GJRewardItem* ret = new GJRewardItem();
    if (ret && ret->init()) { ret->autorelease(); return ret; }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

bool GJRewardItem::init() { return true; }
int GJRewardItem::getRewardType() { return m_nRewardType; }
int GJRewardItem::getItemID() { return m_nItemID; }
bool GJRewardItem::isClaimed() { return m_bClaimed; }

GJRewardItem::~GJRewardItem() {}
