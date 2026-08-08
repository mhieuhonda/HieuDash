// ============================================================
// EndPortalObject.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
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

protected:
    cocos2d::CCPoint m_position;
    bool m_visible;

};

#endif // ENDPORTALOBJECT_H_
