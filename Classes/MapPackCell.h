// ============================================================
// MapPackCell.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef MAPPACKCELL_H_
#define MAPPACKCELL_H_

#include "cocos2d.h"

class MapPackCell {
public:
    MapPackCell(char const*, float, float);
    MapPackCell(char const*, float, float);

    virtual ~MapPackCell();
    virtual ~MapPackCell();
    virtual ~MapPackCell();

    void reloadCell();
    void onClaimReward(cocos2d::CCObject*);
    void updateBGColor(int);
    void loadFromMapPack(GJMapPack*);
    void playCompleteEffect();
    void draw();
    void init();
    void onClick(cocos2d::CCObject*);

};

#endif // MAPPACKCELL_H_
