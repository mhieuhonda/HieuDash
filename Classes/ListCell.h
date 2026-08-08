// ============================================================
// ListCell.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef LISTCELL_H_
#define LISTCELL_H_

#include "cocos2d.h"

class ListCell {
public:
    ListCell(char const*, float, float);
    ListCell(char const*, float, float);

    virtual ~ListCell();
    virtual ~ListCell();
    virtual ~ListCell();

    void updateBGColor(int);
    void loadFromObject(cocos2d::CCObject*, int, int, int);
    void draw();
    void init();

};

#endif // LISTCELL_H_
