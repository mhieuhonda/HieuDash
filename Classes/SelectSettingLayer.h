// ============================================================
// SelectSettingLayer.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef SELECTSETTINGLAYER_H_
#define SELECTSETTINGLAYER_H_

#include "cocos2d.h"

class SelectSettingLayer {
public:
    virtual ~SelectSettingLayer();
    virtual ~SelectSettingLayer();
    virtual ~SelectSettingLayer();

    void idxToValue(SelectSettingType, int);
    void valueToIdx(SelectSettingType, int);
    void frameForItem(SelectSettingType, int);
    void frameForValue(SelectSettingType, int);
    void keyBackClicked();
    void getSelectedFrame();
    void getSelectedValue();
    void init(SelectSettingType, int);
    void create(SelectSettingType, int);
    void onClose(cocos2d::CCObject*);
    void onSelect(cocos2d::CCObject*);

};

#endif // SELECTSETTINGLAYER_H_
