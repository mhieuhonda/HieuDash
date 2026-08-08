// ============================================================
// GauntletLayer.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef GAUNTLETLAYER_H_
#define GAUNTLETLAYER_H_

#include "cocos2d.h"

class GauntletLayer {
public:
    virtual ~GauntletLayer();
    virtual ~GauntletLayer();
    virtual ~GauntletLayer();

    void setupGauntlet(cocos2d::CCArray*);
    void keyBackClicked();
    void loadLevelsFailed(char const*, int);
    void unlockActiveItem();
    void loadLevelsFinished(cocos2d::CCArray*, char const*, int);
    void init(GauntletType);
    void scene(GauntletType);
    void create(GauntletType);
    void onBack(cocos2d::CCObject*);
    void onLevel(cocos2d::CCObject*);

};

#endif // GAUNTLETLAYER_H_
