// ============================================================
// ShareListLayer.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef SHARELISTLAYER_H_
#define SHARELISTLAYER_H_

#include "cocos2d.h"

class ShareListLayer {
public:
    virtual ~ShareListLayer();
    virtual ~ShareListLayer();
    virtual ~ShareListLayer();

    void onUnlisted(cocos2d::CCObject*);
    void keyBackClicked();
    void updateUnlistedF();
    void init(GJLevelList*);
    void create(GJLevelList*);
    void onInfo(cocos2d::CCObject*);
    void onClose(cocos2d::CCObject*);
    void onShare(cocos2d::CCObject*);

};

#endif // SHARELISTLAYER_H_
