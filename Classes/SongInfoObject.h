#ifndef HIEUDASH_SONGINFOOBJECT_H_
#define HIEUDASH_SONGINFOOBJECT_H_

// Reverse-engineered from GD-Decompiled (Geometry Dash)
// Custom song metadata

#include "cocos2d.h"
#include "HieuDashEnums.h"

class SongInfoObject : public cocos2d::CCObject {
public:
    SongInfoObject();

    int m_nSongID;
    std::string m_sSongName;
    std::string m_sArtistName;
    int m_nArtistID;
    std::string m_sSongURL;
    std::string m_sSongFileName;
    float m_fSongDuration;
    int m_nSongPriority;
    bool m_bIsNG;

    static SongInfoObject* create();
    bool init();
    void setSongID(int);
    void setSongName(std::string);
    void setArtistName(std::string);
    void setArtistID(int);
    void setSongURL(std::string);
    int getSongID();
    std::string getSongName();
    std::string getArtistName();
    std::string getSongURL();

    ~SongInfoObject();
};

#endif // HIEUDASH_SONGINFOOBJECT_H_
