// ============================================================
// SongCell.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef SONGCELL_H_
#define SONGCELL_H_

#include "cocos2d.h"

class SongCell {
public:
    SongCell(char const*, float, float);
    SongCell(char const*, float, float);

    virtual ~SongCell();
    virtual ~SongCell();
    virtual ~SongCell();

    void updateBGColor(int);
    void loadFromObject(SongObject*);
    void draw();
    void init();
    void onClick(cocos2d::CCObject*);

};

#endif // SONGCELL_H_
