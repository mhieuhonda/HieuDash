// ============================================================
// TeleportPortalObject.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef TELEPORTPORTALOBJECT_H_
#define TELEPORTPORTALOBJECT_H_

#include "cocos2d.h"
#include <string>
#include <vector>

class TeleportPortalObject {
public:
    virtual ~TeleportPortalObject();
    virtual ~TeleportPortalObject();
    virtual ~TeleportPortalObject();

    void addToGroup(int);
    void addToGroup2(int);
    void setPosition(cocos2d::CCPoint const&);
    void setRotation(float);
    void setStartPos(cocos2d::CCPoint);
    void setRotation2(float);
    void getSaveString(GJBaseGameLayer*);
    void getTeleportXOff(cocos2d::CCNode*);
    void removeFromGroup(int);
    void removeFromGroup2(int);
    void customObjectSetup(std::vector<std::string>&, std::vector<void*>&);
    void setPositionOverride(cocos2d::CCPoint);
    void setStartPosOverride(cocos2d::CCPoint);
    void init(char const*, bool);
    void create(char const*, bool);

protected:
    cocos2d::CCPoint m_position;
    cocos2d::CCPoint m_positionOverride;
    std::string m_saveString;

};

#endif // TELEPORTPORTALOBJECT_H_
