// ============================================================
// EditButtonBar.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef EDITBUTTONBAR_H_
#define EDITBUTTONBAR_H_

#include "cocos2d.h"

class EditButtonBar {
public:
    virtual ~EditButtonBar();
    virtual ~EditButtonBar();
    virtual ~EditButtonBar();

    void reloadItems(int, int);
    void loadFromItems(cocos2d::CCArray*, int, int, bool);
    void init(cocos2d::CCArray*, cocos2d::CCPoint, int, bool, int, int);
    void create(cocos2d::CCArray*, cocos2d::CCPoint, int, bool, int, int);
    void onLeft(cocos2d::CCObject*);
    void getPage();
    void onRight(cocos2d::CCObject*);
    void goToPage(int);

};

#endif // EDITBUTTONBAR_H_
