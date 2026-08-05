#ifndef HIEUDASH_ENDPORTALOBJECT_H_
#define HIEUDASH_ENDPORTALOBJECT_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class EndPortalObject : public cocos2d::CCSprite {
public:
    EndPortalObject();
    void calculateSpawnXPos();
    EndPortalObject* create();
    bool init();
    void setPosition(cocos2d::CCPoint const&);
    void setVisible(bool);
    void triggerObject();
    void updateColors(cocos2d::_ccColor3B);
    ~EndPortalObject();
};

#endif // HIEUDASH_ENDPORTALOBJECT_H_
