#include "GJStoreItem.h"

GJStoreItem::GJStoreItem()
    : m_nItemID(0)
    , m_nItemType(0)
    , m_nCost(0)
    , m_nCurrencyType(0)
    , m_bPurchased(false)
    , m_nUnlockType(0) {}

GJStoreItem* GJStoreItem::create() {
    GJStoreItem* ret = new GJStoreItem();
    if (ret && ret->init()) { ret->autorelease(); return ret; }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

bool GJStoreItem::init() { return true; }
int GJStoreItem::getItemID() { return m_nItemID; }
int GJStoreItem::getCost() { return m_nCost; }
bool GJStoreItem::isPurchased() { return m_bPurchased; }

GJStoreItem::~GJStoreItem() {}
