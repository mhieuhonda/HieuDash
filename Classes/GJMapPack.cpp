#include "GJMapPack.h"

GJMapPack::GJMapPack()
    : m_nPackID(0)
    , m_nStars(0)
    , m_nCoins(0)
    , m_nDifficulty(0)
    , m_nColor1(0)
    , m_nColor2(0)
    , m_nColor3(0)
    , m_bCompleted(false)
    , m_bHasProgress(false) {}

GJMapPack* GJMapPack::create() {
    GJMapPack* ret = new GJMapPack();
    if (ret && ret->init()) { ret->autorelease(); return ret; }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

bool GJMapPack::init() { return true; }
int GJMapPack::getPackID() { return m_nPackID; }
std::string GJMapPack::getPackName() { return m_sPackName; }
int GJMapPack::getStars() { return m_nStars; }

GJMapPack::~GJMapPack() {}
