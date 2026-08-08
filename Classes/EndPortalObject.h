// ============================================================
// EndPortalObject.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef ENDPORTALOBJECT_H_
#define ENDPORTALOBJECT_H_

#include "cocos2d.h"

class EndPortalObject {
public:
    virtual ~EndPortalObject();
    virtual ~EndPortalObject();
    virtual ~EndPortalObject();

    void setVisible(bool);
    void getSpawnPos();
    void setPosition(cocos2d::CCPoint const&);
    void updateColors(cocos2d::_ccColor3B);
    void updateEndPos(bool);
    void triggerObject(GJBaseGameLayer*);
    void init();
    void create();

};

#endif // ENDPORTALOBJECT_H_
