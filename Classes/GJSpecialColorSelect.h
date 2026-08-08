// ============================================================
// GJSpecialColorSelect.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef GJSPECIALCOLORSELECT_H_
#define GJSPECIALCOLORSELECT_H_

#include "cocos2d.h"

class GJSpecialColorSelect {
public:
    virtual ~GJSpecialColorSelect();
    virtual ~GJSpecialColorSelect();
    virtual ~GJSpecialColorSelect();

    void onSelectColor(cocos2d::CCObject*);
    void getButtonByTag(int);
    void keyBackClicked();
    void textForColorIdx(int);
    void highlightSelected(ButtonSprite*);
    void init(int, GJSpecialColorSelectDelegate*, ColorSelectType);
    void create(int, GJSpecialColorSelectDelegate*, ColorSelectType);
    void onClose(cocos2d::CCObject*);

};

#endif // GJSPECIALCOLORSELECT_H_
