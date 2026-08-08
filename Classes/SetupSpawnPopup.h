// ============================================================
// SetupSpawnPopup.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef SETUPSPAWNPOPUP_H_
#define SETUPSPAWNPOPUP_H_

#include "cocos2d.h"

class SetupSpawnPopup {
public:
    virtual ~SetupSpawnPopup();
    virtual ~SetupSpawnPopup();
    virtual ~SetupSpawnPopup();

    void onAddRemap(cocos2d::CCObject*);
    void onPasteRemap(cocos2d::CCObject*);
    void onDeleteRemap(cocos2d::CCObject*);
    void onSelectRemap(cocos2d::CCObject*);
    void queueUpdateButtons();
    void updateRemapButtons(float);
    void init(EffectGameObject*, cocos2d::CCArray*);
    void create(EffectGameObject*, cocos2d::CCArray*);
    void onClose(cocos2d::CCObject*);
    void addRemap(int, int);

};

#endif // SETUPSPAWNPOPUP_H_
