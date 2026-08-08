// ============================================================
// MapPackCell.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef MAPPACKCELL_H_
#define MAPPACKCELL_H_

#include "cocos2d.h"

class MapPackCell : public cocos2d::CCNode {
public:
    static MapPackCell* create();
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
    void draw() override;
    void init() override;
    void onClick(cocos2d::CCObject*);

};

#endif // MAPPACKCELL_H_
