#ifndef _RINGOBJECT_H_
#define _RINGOBJECT_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"

class RingObject {
public:
    RingObject();
    create(char const*);
    init(char const*);
    powerOffObject();
    powerOnObject();
    resetObject();
    setPosition(cocos2d::CCPoint const&);
    setScale(float);
    setVisible(bool);
    spawnCircle();
    triggerActivated();
    updateColors(cocos2d::_ccColor3B);
    ~RingObject();
};

#endif // _RINGOBJECT_H_
