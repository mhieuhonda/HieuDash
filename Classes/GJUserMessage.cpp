#include "GJUserMessage.h"

GJUserMessage::GJUserMessage()
    : m_nMessageID(0)
    , m_nSenderID(0)
    , m_nRecipientID(0)
    , m_nAge(0)
    , m_bIsRead(false)
    , m_bIsSender(false)
    , m_nSenderIcon(0)
    , m_nSenderIconType(0)
    , m_nSenderColor1(0)
    , m_nSenderColor2(0) {}

GJUserMessage* GJUserMessage::create() {
    GJUserMessage* ret = new GJUserMessage();
    if (ret && ret->init()) { ret->autorelease(); return ret; }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

bool GJUserMessage::init() { return true; }
int GJUserMessage::getMessageID() { return m_nMessageID; }
std::string GJUserMessage::getSubject() { return m_sSubject; }
bool GJUserMessage::isRead() { return m_bIsRead; }

GJUserMessage::~GJUserMessage() {}
