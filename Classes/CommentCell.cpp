#include "CommentCell.h"
#include "GJComment.h"

CommentCell::CommentCell()
    : m_pComment(nullptr)
    , m_pPlayerIcon(nullptr)
    , m_pCommentLabel(nullptr)
    , m_pUserNameLabel(nullptr)
    , m_pLikesLabel(nullptr)
    , m_pDateLabel(nullptr) {}

CommentCell* CommentCell::create(char const* key, float w, float h) {
    CommentCell* ret = new CommentCell();
    if (ret && ret->init(key, w, h)) { ret->autorelease(); return ret; }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

bool CommentCell::init(char const* key, float w, float h) { return TableViewCell::init(key, w, h); }
void CommentCell::loadFromComment(GJComment* comment) { m_pComment = comment; }
void CommentCell::onLike(cocos2d::CCObject* sender) {}
void CommentCell::updateBGColor(int idx) { TableViewCell::updateBGColor(idx); }

CommentCell::~CommentCell() {}
