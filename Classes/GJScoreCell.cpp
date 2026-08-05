#include "GJScoreCell.h"
#include "GJUserScore.h"

GJScoreCell::GJScoreCell()
    : m_pScore(nullptr)
    , m_pPlayerIcon(nullptr)
    , m_pUserNameLabel(nullptr)
    , m_pScoreLabel(nullptr)
    , m_pRankLabel(nullptr) {}

GJScoreCell* GJScoreCell::create(char const* key, float w, float h) {
    GJScoreCell* ret = new GJScoreCell();
    if (ret && ret->init(key, w, h)) { ret->autorelease(); return ret; }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

bool GJScoreCell::init(char const* key, float w, float h) { return TableViewCell::init(key, w, h); }
void GJScoreCell::loadFromScore(GJUserScore* score) { m_pScore = score; }
void GJScoreCell::updateBGColor(int idx) { TableViewCell::updateBGColor(idx); }

GJScoreCell::~GJScoreCell() {}
