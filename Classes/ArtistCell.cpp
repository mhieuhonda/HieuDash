#include "ArtistCell.h"
#include "SongInfoObject.h"

ArtistCell::ArtistCell()
    : m_pSongInfo(nullptr)
    , m_pArtistNameLabel(nullptr)
    , m_pSongNameLabel(nullptr) {}

ArtistCell* ArtistCell::create(char const* key, float w, float h) {
    ArtistCell* ret = new ArtistCell();
    if (ret && ret->init(key, w, h)) { ret->autorelease(); return ret; }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

bool ArtistCell::init(char const* key, float w, float h) { return TableViewCell::init(key, w, h); }
void ArtistCell::loadFromSongInfo(SongInfoObject* info) { m_pSongInfo = info; }
void ArtistCell::updateBGColor(int idx) { TableViewCell::updateBGColor(idx); }

ArtistCell::~ArtistCell() {}
