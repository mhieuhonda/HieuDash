#include "GJRewardObject.h"

GJRewardObject::GJRewardObject()
    : m_nRewardID(0)
    , m_nRewardType(0)
    , m_nItemID(0)
    , m_nQuantity(0)
    , m_bClaimed(false) {}

GJRewardObject* GJRewardObject::create() {
    GJRewardObject* ret = new GJRewardObject();
    if (ret && ret->init()) { ret->autorelease(); return ret; }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

bool GJRewardObject::init() { return true; }

GJRewardObject::~GJRewardObject() {}
