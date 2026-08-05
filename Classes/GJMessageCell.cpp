#include "GJMessageCell.h"
#include "GJUserMessage.h"

GJMessageCell::GJMessageCell()
    : m_pMessage(nullptr)
    , m_pPlayerIcon(nullptr)
    , m_pSenderNameLabel(nullptr)
    , m_pSubjectLabel(nullptr)
    , m_pDateLabel(nullptr)
    , m_pReadIcon(nullptr) {}

GJMessageCell* GJMessageCell::create(char const* key, float w, float h) {
    GJMessageCell* ret = new GJMessageCell();
    if (ret && ret->init(key, w, h)) { ret->autorelease(); return ret; }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

bool GJMessageCell::init(char const* key, float w, float h) { return TableViewCell::init(key, w, h); }
void GJMessageCell::loadFromMessage(GJUserMessage* msg) { m_pMessage = msg; }
void GJMessageCell::onRead(cocos2d::CCObject* sender) {}
void GJMessageCell::onDelete(cocos2d::CCObject* sender) {}
void GJMessageCell::updateBGColor(int idx) { TableViewCell::updateBGColor(idx); }

GJMessageCell::~GJMessageCell() {}
