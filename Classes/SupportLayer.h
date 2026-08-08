// ============================================================
// SupportLayer.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef SUPPORTLAYER_H_
#define SUPPORTLAYER_H_

#include "cocos2d.h"
#include <string>

class SupportLayer {
public:
    virtual ~SupportLayer();
    virtual ~SupportLayer();
    virtual ~SupportLayer();

    void customSetup();
    void onGetReward(cocos2d::CCObject*);
    void onLowDetail(cocos2d::CCObject*);
    void onClosePopup(UploadActionPopup*);
    void FLAlert_Clicked(FLAlertLayer*, bool);
    void onRequestAccess(cocos2d::CCObject*);
    void sendSupportMail();
    void createToggleButton(std::string, void (cocos2d::CCObject::*)(cocos2d::CCObject*), bool, cocos2d::CCMenu*, cocos2d::CCPoint, cocos2d::CCArray*);
    void uploadActionFailed(int, int);
    void uploadActionFinished(int, int);
    void onSFX(cocos2d::CCObject*);
    void onTOS(cocos2d::CCObject*);
    void create();
    void onEmail(cocos2d::CCObject*);
    void onLinks(cocos2d::CCObject*);
    void onRobTop(cocos2d::CCObject*);
    void exitLayer();
    void onCocos2d(cocos2d::CCObject*);
    void onPrivacy(cocos2d::CCObject*);

};

#endif // SUPPORTLAYER_H_
