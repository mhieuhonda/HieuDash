// ============================================================
// GJPathsLayer.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef GJPATHSLAYER_H_
#define GJPATHSLAYER_H_

#include "cocos2d.h"

class GJPathsLayer {
public:
    virtual ~GJPathsLayer();
    virtual ~GJPathsLayer();
    virtual ~GJPathsLayer();

    void nameForPath(int);
    void darkenButtons(bool);
    void keyBackClicked();
    void registerWithTouchDispatcher();
    void init();
    void show();
    void create();
    void onExit();
    void onPath(cocos2d::CCObject*);
    void onClose(cocos2d::CCObject*);

};

#endif // GJPATHSLAYER_H_
