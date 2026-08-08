// ============================================================
// TopArtistsLayer.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef TOPARTISTSLAYER_H_
#define TOPARTISTSLAYER_H_

#include "cocos2d.h"
#include <string>

class TopArtistsLayer {
public:
    virtual ~TopArtistsLayer();
    virtual ~TopArtistsLayer();
    virtual ~TopArtistsLayer();

    void onNextPage(cocos2d::CCObject*);
    void onPrevPage(cocos2d::CCObject*);
    void setupPageInfo(std::string, char const*);
    void keyBackClicked();
    void loadListFailed(char const*);
    void loadListFinished(cocos2d::CCArray*, char const*);
    void setupLeaderboard(cocos2d::CCArray*);
    void updateLevelsLabel();
    void registerWithTouchDispatcher();
    void init();
    void show();
    void create();
    void onClose(cocos2d::CCObject*);
    void loadPage(int);
    void isCorrect(char const*);

};

#endif // TOPARTISTSLAYER_H_
