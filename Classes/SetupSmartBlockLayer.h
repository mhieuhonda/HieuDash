// ============================================================
// SetupSmartBlockLayer.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef SETUPSMARTBLOCKLAYER_H_
#define SETUPSMARTBLOCKLAYER_H_

#include "cocos2d.h"

class SetupSmartBlockLayer {
public:
    virtual ~SetupSmartBlockLayer();
    virtual ~SetupSmartBlockLayer();
    virtual ~SetupSmartBlockLayer();

    void onCreateAll(cocos2d::CCObject*);
    void onDontDelete(cocos2d::CCObject*);
    void keyBackClicked();
    void onAllowFlipping(cocos2d::CCObject*);
    void onAllowRotation(cocos2d::CCObject*);
    void onIgnoreCorners(cocos2d::CCObject*);
    void onPasteTemplate(cocos2d::CCObject*);
    void onReferenceOnly(cocos2d::CCObject*);
    void onSelectPremade(cocos2d::CCObject*);
    void selectArtClosed(SelectArtLayer*);
    void onCreateTemplate(cocos2d::CCObject*);
    void onSelectTemplate(cocos2d::CCObject*);
    void onNearbyReference(cocos2d::CCObject*);
    void determineStartValues();
    void init(SmartGameObject*, cocos2d::CCArray*);
    void show();
    void create(SmartGameObject*, cocos2d::CCArray*);
    void onClose(cocos2d::CCObject*);
    void onCreate(cocos2d::CCObject*);

};

#endif // SETUPSMARTBLOCKLAYER_H_
