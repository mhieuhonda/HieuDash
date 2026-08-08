// ============================================================
// LevelCell.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef LEVELCELL_H_
#define LEVELCELL_H_

#include "cocos2d.h"

class LevelCell {
public:
    LevelCell(char const*, float, float);
    LevelCell(char const*, float, float);

    virtual ~LevelCell();
    virtual ~LevelCell();
    virtual ~LevelCell();

    void updateToggle();
    void loadFromLevel(GJGameLevel*);
    void onViewProfile(cocos2d::CCObject*);
    void updateBGColor(int);
    void updateCellMode(int);
    void loadLocalLevelCell();
    void loadCustomLevelCell();
    void draw();
    void init();
    void create(float, float);
    void onClick(cocos2d::CCObject*);
    void onToggle(cocos2d::CCObject*);

};

#endif // LEVELCELL_H_
