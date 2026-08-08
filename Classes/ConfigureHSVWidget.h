// ============================================================
// ConfigureHSVWidget.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef CONFIGUREHSVWIDGET_H_
#define CONFIGUREHSVWIDGET_H_

#include "cocos2d.h"

class ConfigureHSVWidget {
public:
    virtual ~ConfigureHSVWidget();
    virtual ~ConfigureHSVWidget();
    virtual ~ConfigureHSVWidget();

    void onResetHSV(cocos2d::CCObject*);
    void textChanged(CCTextInputNode*);
    void updateLabels();
    void sliderChanged(cocos2d::CCObject*);
    void updateSliders();
    void onToggleSConst(cocos2d::CCObject*);
    void onToggleVConst(cocos2d::CCObject*);
    void textInputClosed(CCTextInputNode*);
    void textInputOpened(CCTextInputNode*);
    void createTextInputNode(cocos2d::CCPoint, int);
    void init(cocos2d::_ccHSVValue, bool, bool);
    void create(cocos2d::_ccHSVValue, bool, bool);
    void getHSV(GameObject*, cocos2d::CCArray*, int);
    void onClose();

};

#endif // CONFIGUREHSVWIDGET_H_
