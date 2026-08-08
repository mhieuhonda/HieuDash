// ============================================================
// SetupSmartTemplateLayer.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef SETUPSMARTTEMPLATELAYER_H_
#define SETUPSMARTTEMPLATELAYER_H_

#include "cocos2d.h"

class SetupSmartTemplateLayer {
public:
    virtual ~SetupSmartTemplateLayer();
    virtual ~SetupSmartTemplateLayer();
    virtual ~SetupSmartTemplateLayer();

    void textChanged(CCTextInputNode*);
    void keyBackClicked();
    void FLAlert_Clicked(FLAlertLayer*, bool);
    void textInputClosed(CCTextInputNode*);
    void textInputOpened(CCTextInputNode*);
    void init(GJSmartTemplate*);
    void create(GJSmartTemplate*);
    void onBack(cocos2d::CCObject*);
    void onClick(cocos2d::CCObject*);
    void onClose(cocos2d::CCObject*);

};

#endif // SETUPSMARTTEMPLATELAYER_H_
