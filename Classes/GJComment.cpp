#include "GJComment.h"

GJComment::GJComment()
    : m_nCommentID(0)
    , m_nUserID(0)
    , m_nLevelID(0)
    , m_nLikes(0)
    , m_nPercentage(0)
    , m_nAge(0)
    , m_bIsSpam(false)
    , m_bHasLevel(false)
    , m_nModBadge(0) {}

GJComment* GJComment::create() {
    GJComment* ret = new GJComment();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

GJComment* GJComment::createWithCommentData(std::string data) {
    GJComment* ret = create();
    if (ret) { /* parse data */ }
    return ret;
}

bool GJComment::init() { return true; }
int GJComment::getCommentID() { return m_nCommentID; }
int GJComment::getUserID() { return m_nUserID; }
std::string GJComment::getCommentText() { return m_sCommentText; }
std::string GJComment::getUserName() { return m_sUserName; }

GJComment::~GJComment() {}
