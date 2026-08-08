// ============================================================
// GJSongBrowser.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef GJSONGBROWSER_H_
#define GJSONGBROWSER_H_

#include "cocos2d.h"

class GJSongBrowser {
public:
    virtual ~GJSongBrowser();
    virtual ~GJSongBrowser();
    virtual ~GJSongBrowser();

    void onNextPage(cocos2d::CCObject*);
    void onPrevPage(cocos2d::CCObject*);
    void customSetup();
    void onDeleteAll(cocos2d::CCObject*);
    void setupPageInfo(int, int, int);
    void FLAlert_Clicked(FLAlertLayer*, bool);
    void setupSongBrowser(cocos2d::CCArray*);
    void getSelectedCellIdx();
    void cellPerformedAction(TableViewCell*, int, CellAction, cocos2d::CCNode*);
    void init();
    void create();
    void loadPage(int);
    void exitLayer(cocos2d::CCObject*);

};

#endif // GJSONGBROWSER_H_
