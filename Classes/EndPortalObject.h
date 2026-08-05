#ifndef _ENDPORTALOBJECT_H_
#define _ENDPORTALOBJECT_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"

class EndPortalObject {
public:
    EndPortalObject();
    calculateSpawnXPos();
    create();
    init();
    setPosition(cocos2d::CCPoint const&);
    setVisible(bool);
    triggerObject();
    updateColors(cocos2d::_ccColor3B);
    ~EndPortalObject();
};

#endif // _ENDPORTALOBJECT_H_
