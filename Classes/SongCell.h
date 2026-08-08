// ============================================================
// SongCell.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef SONGCELL_H_
#define SONGCELL_H_

#include "cocos2d.h"

class SongCell : public cocos2d::CCNode {
public:
    static SongCell* create();
    SongCell(char const*, float, float);
    SongCell(char const*, float, float);

    virtual ~SongCell();
    virtual ~SongCell();
    virtual ~SongCell();

    void updateBGColor(int);
    void loadFromObject(SongObject*);
    void draw() override;
    void init() override;
    void onClick(cocos2d::CCObject*);

};

#endif // SONGCELL_H_
