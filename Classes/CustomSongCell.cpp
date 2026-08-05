#include "CustomSongCell.h"
#include "SongInfoObject.h"

CustomSongCell::CustomSongCell()
    : m_pSongInfo(nullptr)
    , m_pSongNameLabel(nullptr)
    , m_pArtistNameLabel(nullptr)
    , m_pSizeLabel(nullptr)
    , m_pLoadingCircle(nullptr)
    , m_bIsDownloading(false) {}

CustomSongCell* CustomSongCell::create(char const* key, float w, float h) {
    CustomSongCell* ret = new CustomSongCell();
    if (ret && ret->init(key, w, h)) { ret->autorelease(); return ret; }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

bool CustomSongCell::init(char const* key, float w, float h) { return TableViewCell::init(key, w, h); }
void CustomSongCell::loadFromSongInfo(SongInfoObject* info) { m_pSongInfo = info; }
void CustomSongCell::onDownload(cocos2d::CCObject* sender) {}
void CustomSongCell::updateBGColor(int idx) { TableViewCell::updateBGColor(idx); }

CustomSongCell::~CustomSongCell() {}
