#ifndef HIEUDASH_GJSTOREITEM_H_
#define HIEUDASH_GJSTOREITEM_H_

// Reverse-engineered from GD-Decompiled (Geometry Dash)
// Shop item data

#include "cocos2d.h"
#include "HieuDashEnums.h"

class GJStoreItem : public cocos2d::CCObject {
public:
    GJStoreItem();

    int m_nItemID;
    int m_nItemType;
    int m_nCost;
    int m_nCurrencyType;
    std::string m_sName;
    std::string m_sDescription;
    bool m_bPurchased;
    int m_nUnlockType;

    static GJStoreItem* create();
    bool init();
    int getItemID();
    int getCost();
    bool isPurchased();

    ~GJStoreItem();
};

#endif // HIEUDASH_GJSTOREITEM_H_
