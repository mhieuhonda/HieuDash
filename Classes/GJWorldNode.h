// ============================================================
// GJWorldNode.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef GJWORLDNODE_H_
#define GJWORLDNODE_H_

#include "cocos2d.h"

class GJWorldNode {
public:
    virtual ~GJWorldNode();
    virtual ~GJWorldNode();
    virtual ~GJWorldNode();

    void addDotsToLevel(int, bool);
    void unlockActiveItem();
    void dotPositionForLevel(int, int);
    void positionForLevelButton(int);
    void init(int, WorldSelectLayer*);
    void create(int, WorldSelectLayer*);
    void onLevel(cocos2d::CCObject*);
    void playStep1();
    void playStep2();
    void playStep3();

};

#endif // GJWORLDNODE_H_
