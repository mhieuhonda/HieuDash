// ============================================================
// SetupInteractObjectPopup.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef SETUPINTERACTOBJECTPOPUP_H_
#define SETUPINTERACTOBJECTPOPUP_H_

#include "cocos2d.h"

class SetupInteractObjectPopup {
public:
    virtual ~SetupInteractObjectPopup();
    virtual ~SetupInteractObjectPopup();
    virtual ~SetupInteractObjectPopup();

    void updateItems();
    void onPlusButton(cocos2d::CCObject*);
    void valueDidChange(int, float);
    void init(EffectGameObject*, cocos2d::CCArray*);
    void create(EffectGameObject*, cocos2d::CCArray*);
    void onClose(cocos2d::CCObject*);

};

#endif // SETUPINTERACTOBJECTPOPUP_H_
