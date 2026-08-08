// ============================================================
// ArtistCell.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef ARTISTCELL_H_
#define ARTISTCELL_H_

#include "cocos2d.h"

class ArtistCell {
public:
    ArtistCell(char const*, float, float);
    ArtistCell(char const*, float, float);

    virtual ~ArtistCell();
    virtual ~ArtistCell();
    virtual ~ArtistCell();

    void onNewgrounds(cocos2d::CCObject*);
    void updateBGColor(int);
    void loadFromObject(SongInfoObject*);
    void draw();
    void init();
    void onYouTube(cocos2d::CCObject*);

};

#endif // ARTISTCELL_H_
