#include "GJLevelScoreCell.h"
#include "GJUserScore.h"

GJLevelScoreCell::GJLevelScoreCell()
    : m_pScore(nullptr)
    , m_pPlayerIcon(nullptr)
    , m_pUserNameLabel(nullptr)
    , m_pPercentLabel(nullptr)
    , m_pScoreLabel(nullptr)
    , m_pDateLabel(nullptr) {}

GJLevelScoreCell* GJLevelScoreCell::create(char const* key, float w, float h) {
    GJLevelScoreCell* ret = new GJLevelScoreCell();
    if (ret && ret->init(key, w, h)) { ret->autorelease(); return ret; }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

bool GJLevelScoreCell::init(char const* key, float w, float h) { return TableViewCell::init(key, w, h); }
void GJLevelScoreCell::loadFromScore(GJUserScore* score) { m_pScore = score; }
void GJLevelScoreCell::updateBGColor(int idx) { TableViewCell::updateBGColor(idx); }

GJLevelScoreCell::~GJLevelScoreCell() {}
