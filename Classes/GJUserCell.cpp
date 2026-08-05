#include "GJUserCell.h"
#include "GJUserScore.h"

GJUserCell::GJUserCell()
    : m_pScore(nullptr)
    , m_pPlayerIcon(nullptr)
    , m_pUserNameLabel(nullptr)
    , m_pStarsLabel(nullptr)
    , m_pCreatorPointsLabel(nullptr) {}

GJUserCell* GJUserCell::create(char const* key, float w, float h) {
    GJUserCell* ret = new GJUserCell();
    if (ret && ret->init(key, w, h)) { ret->autorelease(); return ret; }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

bool GJUserCell::init(char const* key, float w, float h) { return TableViewCell::init(key, w, h); }
void GJUserCell::loadFromScore(GJUserScore* score) { m_pScore = score; }
void GJUserCell::updateBGColor(int idx) { TableViewCell::updateBGColor(idx); }

GJUserCell::~GJUserCell() {}
