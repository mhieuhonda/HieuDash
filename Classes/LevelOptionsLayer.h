// ============================================================
// LevelOptionsLayer.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef LEVELOPTIONSLAYER_H_
#define LEVELOPTIONSLAYER_H_

#include "cocos2d.h"

class LevelOptionsLayer {
public:
    virtual ~LevelOptionsLayer();
    virtual ~LevelOptionsLayer();
    virtual ~LevelOptionsLayer();

    void onSettings(cocos2d::CCObject*);
    void setupOptions();
    void valueDidChange(int, float);
    void init(LevelSettingsObject*);
    void create(LevelSettingsObject*);
    void getValue(int);
    void didToggle(int);

};

#endif // LEVELOPTIONSLAYER_H_
