
#ifndef SHARELEVELSETTINGSLAYER_H_
#define SHARELEVELSETTINGSLAYER_H_

#include "cocos2d.h"

class ShareLevelSettingsLayer {
public:
    virtual ~ShareLevelSettingsLayer();

    void onUnlisted(cocos2d::CCObject*);
    void keyBackClicked();
    void updateSettingsState();
    void onUnlistedFriendsOnly(cocos2d::CCObject*);
    void init(GJGameLevel*);
    void create(GJGameLevel*);
    void onClose(cocos2d::CCObject*);

};

#endif // SHARELEVELSETTINGSLAYER_H_
