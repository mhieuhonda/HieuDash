// ============================================================
// GJAccountSettingsLayer.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef GJACCOUNTSETTINGSLAYER_H_
#define GJACCOUNTSETTINGSLAYER_H_

#include "cocos2d.h"
#include <string>

class GJAccountSettingsLayer {
public:
    virtual ~GJAccountSettingsLayer();
    virtual ~GJAccountSettingsLayer();
    virtual ~GJAccountSettingsLayer();

    void keyBackClicked();
    void textInputReturn(CCTextInputNode*);
    void onCommentSetting(cocos2d::CCObject*);
    void onFriendRequests(cocos2d::CCObject*);
    void onMessageSetting(cocos2d::CCObject*);
    void updateScoreValues();
    void closeAccInputNodes(cocos2d::CCArray*);
    void createToggleButton(std::string, void (cocos2d::CCObject::*)(cocos2d::CCObject*), bool, cocos2d::CCMenu*, cocos2d::CCPoint, float, float);
    void textInputShouldOffset(CCTextInputNode*, float);
    void init(int);
    void create(int);
    void onClose(cocos2d::CCObject*);
    void onUpdate(cocos2d::CCObject*);

};

#endif // GJACCOUNTSETTINGSLAYER_H_
