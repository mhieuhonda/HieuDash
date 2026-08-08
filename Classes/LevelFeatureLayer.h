// ============================================================
// LevelFeatureLayer.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef LEVELFEATURELAYER_H_
#define LEVELFEATURELAYER_H_

#include "cocos2d.h"

class LevelFeatureLayer {
public:
    virtual ~LevelFeatureLayer();
    virtual ~LevelFeatureLayer();
    virtual ~LevelFeatureLayer();

    void updateStars();
    void onToggleEpic(cocos2d::CCObject*);
    void onSetEpicOnly(cocos2d::CCObject*);
    void onSetFeatured(cocos2d::CCObject*);
    void keyBackClicked();
    void onRemoveValues(cocos2d::CCObject*);
    void init(int);
    void onUp(cocos2d::CCObject*);
    void onUp2(cocos2d::CCObject*);
    void create(int);
    void onDown(cocos2d::CCObject*);
    void onClose(cocos2d::CCObject*);
    void onDown2(cocos2d::CCObject*);

};

#endif // LEVELFEATURELAYER_H_
