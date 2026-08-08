// ============================================================
// URLCell.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef URLCELL_H_
#define URLCELL_H_

#include "cocos2d.h"

class URLCell {
public:
    URLCell(char const*, float, float);
    URLCell(char const*, float, float);

    virtual ~URLCell();
    virtual ~URLCell();
    virtual ~URLCell();

    void updateBGColor(int);
    void loadFromObject(CCURLObject*);
    void draw();
    void init();
    void onURL(cocos2d::CCObject*);

};

#endif // URLCELL_H_
