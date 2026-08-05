#include "GJRequestCell.h"

GJRequestCell::GJRequestCell()
    : m_pRequest(nullptr)
    , m_pPlayerIcon(nullptr)
    , m_pUserNameLabel(nullptr)
    , m_pMessageLabel(nullptr)
    , m_pDateLabel(nullptr) {}

GJRequestCell* GJRequestCell::create(char const* key, float w, float h) {
    GJRequestCell* ret = new GJRequestCell();
    if (ret && ret->init(key, w, h)) { ret->autorelease(); return ret; }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

bool GJRequestCell::init(char const* key, float w, float h) { return TableViewCell::init(key, w, h); }
void GJRequestCell::onAccept(cocos2d::CCObject* sender) {}
void GJRequestCell::onDelete(cocos2d::CCObject* sender) {}
void GJRequestCell::updateBGColor(int idx) { TableViewCell::updateBGColor(idx); }

GJRequestCell::~GJRequestCell() {}
