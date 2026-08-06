#ifndef HIEUDASH_RINGOBJECT_H_
#define HIEUDASH_RINGOBJECT_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class RingObject : public cocos2d::CCSprite {
public:
    RingObject();
    static RingObject* create(char const*);
    bool init(char const*);
    void powerOffObject();
    void powerOnObject();
    void resetObject();
    void setPosition(cocos2d::CCPoint const&);
    void setScale(float);
    void setVisible(bool);
    void spawnCircle();
    void triggerActivated();
    void updateColors(cocos2d::_ccColor3B);
    ~RingObject();
};

#endif // HIEUDASH_RINGOBJECT_H_
