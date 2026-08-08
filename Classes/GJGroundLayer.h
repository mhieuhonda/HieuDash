// ============================================================
// GJGroundLayer.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef GJGROUNDLAYER_H_
#define GJGROUNDLAYER_H_

#include "cocos2d.h"

class GJGroundLayer {
public:
    virtual ~GJGroundLayer();
    virtual ~GJGroundLayer();
    virtual ~GJGroundLayer();

    void createLine(int);
    void getGroundY();
    void showGround();
    void hideShadows();
    void scaleGround(float);
    void fadeInGround(float);
    void fadeOutGround(float);
    void updateShadows();
    void fadeInFinished();
    void positionGround(float);
    void toggleVisible01(bool);
    void toggleVisible02(bool);
    void updateGroundPos(cocos2d::CCPoint);
    void updateLineBlend(bool);
    void deactivateGround();
    void updateShadowXPos(float, float);
    void loadGroundSprites(int, bool);
    void updateGroundWidth(bool);
    void updateGround01Color(cocos2d::_ccColor3B);
    void updateGround02Color(cocos2d::_ccColor3B);
    void draw();
    void init(int, int);
    void create(int, int);

};

#endif // GJGROUNDLAYER_H_
