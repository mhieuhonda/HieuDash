#include "SongInfoObject.h"

SongInfoObject::SongInfoObject()
    : m_nSongID(0)
    , m_nArtistID(0)
    , m_fSongDuration(0.0f)
    , m_nSongPriority(0)
    , m_bIsNG(false) {}

SongInfoObject* SongInfoObject::create() {
    SongInfoObject* ret = new SongInfoObject();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

bool SongInfoObject::init() { return true; }
void SongInfoObject::setSongID(int id) { m_nSongID = id; }
void SongInfoObject::setSongName(std::string name) { m_sSongName = name; }
void SongInfoObject::setArtistName(std::string name) { m_sArtistName = name; }
void SongInfoObject::setArtistID(int id) { m_nArtistID = id; }
void SongInfoObject::setSongURL(std::string url) { m_sSongURL = url; }
int SongInfoObject::getSongID() { return m_nSongID; }
std::string SongInfoObject::getSongName() { return m_sSongName; }
std::string SongInfoObject::getArtistName() { return m_sArtistName; }
std::string SongInfoObject::getSongURL() { return m_sSongURL; }

SongInfoObject::~SongInfoObject() {}
