// ============================================================
// WorldLevelPage.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef WORLDLEVELPAGE_H_
#define WORLDLEVELPAGE_H_

#include "cocos2d.h"

class WorldLevelPage {
public:
    virtual ~WorldLevelPage();
    virtual ~WorldLevelPage();
    virtual ~WorldLevelPage();

    void keyBackClicked();
    void init(GJGameLevel*, GJWorldNode*);
    void show();
    void create(GJGameLevel*, GJWorldNode*);
    void onInfo(cocos2d::CCObject*);
    void onPlay(cocos2d::CCObject*);
    void onSong(cocos2d::CCObject*);
    void onClose(cocos2d::CCObject*);

};

#endif // WORLDLEVELPAGE_H_
