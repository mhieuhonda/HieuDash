// ============================================================
// CustomSongCell.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef CUSTOMSONGCELL_H_
#define CUSTOMSONGCELL_H_

#include "cocos2d.h"
#include <string>

class CustomSongCell {
public:
    CustomSongCell(char const*, float, float);
    CustomSongCell(char const*, float, float);

    virtual ~CustomSongCell();
    virtual ~CustomSongCell();
    virtual ~CustomSongCell();

    void shouldReload();
    void songIDChanged(int);
    void updateBGColor(int);
    void loadFromObject(SongInfoObject*);
    void getActiveSongID();
    void getSongFileName();
    void getLevelSettings();
    void draw();
    void init();
    void onDelete(cocos2d::CCObject*);

protected:
    int m_activeSongID;
    std::string m_songFileName;

};

#endif // CUSTOMSONGCELL_H_
